--rpc����
require("init")
require("proto")
local humble = require("humble")
local ErrCode = ErrCode
local SockType = SockType
local Proto = Proto

function initTask()
	humble.linkTo("tcp2", SockType.RPC, "127.0.0.1", 16001)
end

function destroyTask()
	
end

local function rpcAccept(sock, sockType)
	
end
regAcceptEv(SockType.RPC, rpcAccept)

local function rpcrtn(strMsg)
	print("xxxxxxxxxx:")
	print(strMsg)
end

local function rpcLinked(sock, sockType)
	callTaskRPC("rpclink", "add", nil, rpcrtn)
	
	callNetRPC(sock, "rpclink", "add", nil, rpcrtn)
end
regLinkedEv(SockType.RPC, rpcLinked)

local function rpcClosed(sock, sockType)
	print("rpcClosed")
end
regClosedEv(SockType.RPC, rpcClosed)

local function rpcadd()
	return "rpcadd return"
end
regRPC("add", rpcadd)