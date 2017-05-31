
#ifndef H_TASKDISPATCH_H_
#define H_TASKDISPATCH_H_

#include "Singleton.h"
#include "TaskLazy.h"
#include "TaskRunner.h"
#include "RWLock.h"

H_BNAMSP

class CTaskDispatch : public CTaskLazy<CTaskWorker>, public CSingleton<CTaskDispatch>
{
public:
    CTaskDispatch(void);
    ~CTaskDispatch(void);
    
    CChan *getChan(const char *pszTaskName);
    void taskRPCCall(unsigned int &uiId, const char *pszRPCName, const char *pszToTask, const char *pszSrcTask,
        const char *pMsg, const size_t &iLens);

    void setThreadNum(const unsigned short usNum);
    unsigned short getThreadNum(void)
    {
        return m_usThreadNum;
    };

    void regTask(CTaskWorker *pTask);
    void unregTask(const char *pszName);

    H_INLINE void runTask(CTaskWorker *pTask) 
    {
        if (H_INIT_NUMBER != pTask->getStatus())
        {
            addTask(pTask);
            return;
        }

        CTaskRunner *pWorker(getFreeWorker());
        pWorker->addWorker(pTask);
    };
    void onLoopBreak(void);
    void runSurplusTask(CTaskWorker *pTask);
    void destroyRun(void);

    H_INLINE void notifyRun(CTaskWorker *pTask)
    {
        addTask(pTask);
    };

    std::vector<std::string> getAllName(void);

private:
    CTaskRunner *getFreeWorker(void);
    void stopWorker(void);    
    H_INLINE void notifyInit(CTaskWorker *pTask)
    {
        Notify(pTask, MSG_TASK_INIT);
    };
    H_INLINE void notifyDestroy(CTaskWorker *pTask)
    {
        pTask->setDestroy();
        Notify(pTask, MSG_TASK_DEL);
    };
    H_INLINE void Notify(CTaskWorker *pTask, const unsigned short usEv)
    {
        H_MSG *pMsg = new(std::nothrow) H_MSG;
        H_ASSERT(NULL != pMsg, "malloc memory error.");
        pMsg->usEnevt = usEv;

        if (!pTask->getChan()->Send(pMsg))
        {
            H_SafeDelete(pMsg);
            return;
        }
    };

private:
    H_DISALLOWCOPY(CTaskDispatch);
#ifdef H_OS_WIN 
    #define taskit std::unordered_map<std::string , CTaskWorker*>::iterator
    #define task_map std::unordered_map<std::string , CTaskWorker*>
#else
    #define taskit std::tr1::unordered_map<std::string, CTaskWorker*>::iterator
    #define task_map std::tr1::unordered_map<std::string, CTaskWorker*>
#endif

private:
    unsigned short m_usThreadNum;
    CTaskRunner *m_pRunner;
    task_map m_mapTask;
    CRWLock m_objTaskLock;
    std::list<std::string> m_lstAllName;
    CRWLock m_objAllNamLock;
};


H_ENAMSP

#endif//H_TASKDISPATCH_H_

