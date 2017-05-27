
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ABORT_SYM = 258,
     ACCESSIBLE_SYM = 259,
     ACTION = 260,
     ADD = 261,
     ADMIN_SYM = 262,
     ADDDATE_SYM = 263,
     AFTER_SYM = 264,
     AGAINST = 265,
     AGGREGATE_SYM = 266,
     ALGORITHM_SYM = 267,
     ALL = 268,
     ALTER = 269,
     ALWAYS_SYM = 270,
     ANALYZE_SYM = 271,
     AND_AND_SYM = 272,
     AND_SYM = 273,
     ANY_SYM = 274,
     AS = 275,
     ASC = 276,
     ASCII_SYM = 277,
     ASENSITIVE_SYM = 278,
     AT_SYM = 279,
     AUTHORS_SYM = 280,
     AUTOEXTEND_SIZE_SYM = 281,
     AUTO_INC = 282,
     AUTO_SYM = 283,
     AVG_ROW_LENGTH = 284,
     AVG_SYM = 285,
     BACKUP_SYM = 286,
     BEFORE_SYM = 287,
     BEGIN_SYM = 288,
     BETWEEN_SYM = 289,
     BIGINT = 290,
     BINARY = 291,
     BINLOG_SYM = 292,
     BIN_NUM = 293,
     BIT_AND = 294,
     BIT_OR = 295,
     BIT_SYM = 296,
     BIT_XOR = 297,
     BLOB_SYM = 298,
     BLOCK_SYM = 299,
     BOOLEAN_SYM = 300,
     BOOL_SYM = 301,
     BOTH = 302,
     BTREE_SYM = 303,
     BY = 304,
     BYTE_SYM = 305,
     CACHE_SYM = 306,
     CALL_SYM = 307,
     CASCADE = 308,
     CASCADED = 309,
     CASE_SYM = 310,
     CAST_SYM = 311,
     CATALOG_NAME_SYM = 312,
     CHAIN_SYM = 313,
     CHANGE = 314,
     CHANGED = 315,
     CHARSET = 316,
     CHAR_SYM = 317,
     CHECKPOINT_SYM = 318,
     CHECKSUM_SYM = 319,
     CHECK_SYM = 320,
     CIPHER_SYM = 321,
     CLASS_ORIGIN_SYM = 322,
     CLIENT_SYM = 323,
     CLIENT_STATS_SYM = 324,
     CLOSE_SYM = 325,
     COALESCE = 326,
     CODE_SYM = 327,
     COLLATE_SYM = 328,
     COLLATION_SYM = 329,
     COLUMNS = 330,
     COLUMN_ADD_SYM = 331,
     COLUMN_CHECK_SYM = 332,
     COLUMN_CREATE_SYM = 333,
     COLUMN_DELETE_SYM = 334,
     COLUMN_GET_SYM = 335,
     COLUMN_SYM = 336,
     COLUMN_NAME_SYM = 337,
     COMMENT_SYM = 338,
     COMMITTED_SYM = 339,
     COMMIT_SYM = 340,
     COMPACT_SYM = 341,
     COMPLETION_SYM = 342,
     COMPRESSED_SYM = 343,
     CONCURRENT = 344,
     CONDITION_SYM = 345,
     CONNECTION_SYM = 346,
     CONSISTENT_SYM = 347,
     CONSTRAINT = 348,
     CONSTRAINT_CATALOG_SYM = 349,
     CONSTRAINT_NAME_SYM = 350,
     CONSTRAINT_SCHEMA_SYM = 351,
     CONTAINS_SYM = 352,
     CONTEXT_SYM = 353,
     CONTINUE_SYM = 354,
     CONTRIBUTORS_SYM = 355,
     CONVERT_SYM = 356,
     COUNT_SYM = 357,
     CPU_SYM = 358,
     CREATE = 359,
     CROSS = 360,
     CUBE_SYM = 361,
     CURDATE = 362,
     CURRENT_SYM = 363,
     CURRENT_USER = 364,
     CURRENT_ROLE = 365,
     CURRENT_POS_SYM = 366,
     CURSOR_SYM = 367,
     CURSOR_NAME_SYM = 368,
     CURTIME = 369,
     DATABASE = 370,
     DATABASES = 371,
     DATAFILE_SYM = 372,
     DATA_SYM = 373,
     DATETIME = 374,
     DATE_ADD_INTERVAL = 375,
     DATE_SUB_INTERVAL = 376,
     DATE_SYM = 377,
     DAY_HOUR_SYM = 378,
     DAY_MICROSECOND_SYM = 379,
     DAY_MINUTE_SYM = 380,
     DAY_SECOND_SYM = 381,
     DAY_SYM = 382,
     DEALLOCATE_SYM = 383,
     DECIMAL_NUM = 384,
     DECIMAL_SYM = 385,
     DECLARE_SYM = 386,
     DEFAULT = 387,
     DEFINER_SYM = 388,
     DELAYED_SYM = 389,
     DELAY_KEY_WRITE_SYM = 390,
     DELETE_SYM = 391,
     DESC = 392,
     DESCRIBE = 393,
     DES_KEY_FILE = 394,
     DETERMINISTIC_SYM = 395,
     DIAGNOSTICS_SYM = 396,
     DIRECTORY_SYM = 397,
     DISABLE_SYM = 398,
     DISCARD = 399,
     DISK_SYM = 400,
     DISTINCT = 401,
     DIV_SYM = 402,
     DOUBLE_SYM = 403,
     DO_SYM = 404,
     DROP = 405,
     DUAL_SYM = 406,
     DUMPFILE = 407,
     DUPLICATE_SYM = 408,
     DYNAMIC_SYM = 409,
     EACH_SYM = 410,
     ELSE = 411,
     ELSEIF_SYM = 412,
     ENABLE_SYM = 413,
     ENCLOSED = 414,
     END = 415,
     ENDS_SYM = 416,
     END_OF_INPUT = 417,
     ENGINES_SYM = 418,
     ENGINE_SYM = 419,
     ENUM = 420,
     EQ = 421,
     EQUAL_SYM = 422,
     ERROR_SYM = 423,
     ERRORS = 424,
     ESCAPED = 425,
     ESCAPE_SYM = 426,
     EVENTS_SYM = 427,
     EVENT_SYM = 428,
     EVERY_SYM = 429,
     EXCHANGE_SYM = 430,
     EXAMINED_SYM = 431,
     EXECUTE_SYM = 432,
     EXISTS = 433,
     EXIT_SYM = 434,
     EXPANSION_SYM = 435,
     EXPORT_SYM = 436,
     EXTENDED_SYM = 437,
     EXTENT_SIZE_SYM = 438,
     EXTRACT_SYM = 439,
     FALSE_SYM = 440,
     FAST_SYM = 441,
     FAULTS_SYM = 442,
     FETCH_SYM = 443,
     FILE_SYM = 444,
     FIRST_SYM = 445,
     FIXED_SYM = 446,
     FLOAT_NUM = 447,
     FLOAT_SYM = 448,
     FLUSH_SYM = 449,
     FORCE_SYM = 450,
     FOREIGN = 451,
     FOR_SYM = 452,
     FOUND_SYM = 453,
     FROM = 454,
     FULL = 455,
     FULLTEXT_SYM = 456,
     FUNCTION_SYM = 457,
     GE = 458,
     GENERAL = 459,
     GENERATED_SYM = 460,
     GEOMETRYCOLLECTION = 461,
     GEOMETRY_SYM = 462,
     GET_FORMAT = 463,
     GET_SYM = 464,
     GLOBAL_SYM = 465,
     GRANT = 466,
     GRANTS = 467,
     GROUP_SYM = 468,
     GROUP_CONCAT_SYM = 469,
     GT_SYM = 470,
     HANDLER_SYM = 471,
     HARD_SYM = 472,
     HASH_SYM = 473,
     HAVING = 474,
     HELP_SYM = 475,
     HEX_NUM = 476,
     HEX_STRING = 477,
     HIGH_PRIORITY = 478,
     HOST_SYM = 479,
     HOSTS_SYM = 480,
     HOUR_MICROSECOND_SYM = 481,
     HOUR_MINUTE_SYM = 482,
     HOUR_SECOND_SYM = 483,
     HOUR_SYM = 484,
     ID_SYM = 485,
     IDENT = 486,
     IDENTIFIED_SYM = 487,
     IDENT_QUOTED = 488,
     IF = 489,
     IGNORE_SYM = 490,
     IGNORE_SERVER_IDS_SYM = 491,
     IMPORT = 492,
     INDEXES = 493,
     INDEX_SYM = 494,
     INDEX_STATS_SYM = 495,
     INFILE = 496,
     INITIAL_SIZE_SYM = 497,
     INNER_SYM = 498,
     INOUT_SYM = 499,
     INSENSITIVE_SYM = 500,
     INSERT = 501,
     INSERT_METHOD = 502,
     INSTALL_SYM = 503,
     INTERVAL_SYM = 504,
     INTO = 505,
     INT_SYM = 506,
     INVOKER_SYM = 507,
     IN_SYM = 508,
     IO_SYM = 509,
     IPC_SYM = 510,
     IS = 511,
     ISOLATION = 512,
     ISSUER_SYM = 513,
     ITERATE_SYM = 514,
     JOIN_SYM = 515,
     KEYS = 516,
     KEY_BLOCK_SIZE = 517,
     KEY_SYM = 518,
     KILL_SYM = 519,
     LANGUAGE_SYM = 520,
     LAST_SYM = 521,
     LAST_VALUE = 522,
     LE = 523,
     LEADING = 524,
     LEAVES = 525,
     LEAVE_SYM = 526,
     LEFT = 527,
     LESS_SYM = 528,
     LEVEL_SYM = 529,
     LEX_HOSTNAME = 530,
     LIKE = 531,
     LIMIT = 532,
     LINEAR_SYM = 533,
     LINES = 534,
     LINESTRING = 535,
     LIST_SYM = 536,
     LOAD = 537,
     LOCAL_SYM = 538,
     LOCATOR_SYM = 539,
     LOCKS_SYM = 540,
     LOCK_SYM = 541,
     LOGFILE_SYM = 542,
     LOGS_SYM = 543,
     LONGBLOB = 544,
     LONGTEXT = 545,
     LONG_NUM = 546,
     LONG_SYM = 547,
     LOOP_SYM = 548,
     LOW_PRIORITY = 549,
     LT = 550,
     MASTER_CONNECT_RETRY_SYM = 551,
     MASTER_GTID_POS_SYM = 552,
     MASTER_HOST_SYM = 553,
     MASTER_LOG_FILE_SYM = 554,
     MASTER_LOG_POS_SYM = 555,
     MASTER_PASSWORD_SYM = 556,
     MASTER_PORT_SYM = 557,
     MASTER_SERVER_ID_SYM = 558,
     MASTER_SSL_CAPATH_SYM = 559,
     MASTER_SSL_CA_SYM = 560,
     MASTER_SSL_CERT_SYM = 561,
     MASTER_SSL_CIPHER_SYM = 562,
     MASTER_SSL_CRL_SYM = 563,
     MASTER_SSL_CRLPATH_SYM = 564,
     MASTER_SSL_KEY_SYM = 565,
     MASTER_SSL_SYM = 566,
     MASTER_SSL_VERIFY_SERVER_CERT_SYM = 567,
     MASTER_SYM = 568,
     MASTER_USER_SYM = 569,
     MASTER_USE_GTID_SYM = 570,
     MASTER_HEARTBEAT_PERIOD_SYM = 571,
     MATCH = 572,
     MAX_CONNECTIONS_PER_HOUR = 573,
     MAX_QUERIES_PER_HOUR = 574,
     MAX_ROWS = 575,
     MAX_SIZE_SYM = 576,
     MAX_SYM = 577,
     MAX_UPDATES_PER_HOUR = 578,
     MAX_USER_CONNECTIONS_SYM = 579,
     MAX_VALUE_SYM = 580,
     MEDIUMBLOB = 581,
     MEDIUMINT = 582,
     MEDIUMTEXT = 583,
     MEDIUM_SYM = 584,
     MEMORY_SYM = 585,
     MERGE_SYM = 586,
     MESSAGE_TEXT_SYM = 587,
     MICROSECOND_SYM = 588,
     MIGRATE_SYM = 589,
     MINUTE_MICROSECOND_SYM = 590,
     MINUTE_SECOND_SYM = 591,
     MINUTE_SYM = 592,
     MIN_ROWS = 593,
     MIN_SYM = 594,
     MODE_SYM = 595,
     MODIFIES_SYM = 596,
     MODIFY_SYM = 597,
     MOD_SYM = 598,
     MONTH_SYM = 599,
     MULTILINESTRING = 600,
     MULTIPOINT = 601,
     MULTIPOLYGON = 602,
     MUTEX_SYM = 603,
     MYSQL_SYM = 604,
     MYSQL_ERRNO_SYM = 605,
     NAMES_SYM = 606,
     NAME_SYM = 607,
     NATIONAL_SYM = 608,
     NATURAL = 609,
     NCHAR_STRING = 610,
     NCHAR_SYM = 611,
     NDBCLUSTER_SYM = 612,
     NE = 613,
     NEG = 614,
     NEW_SYM = 615,
     NEXT_SYM = 616,
     NODEGROUP_SYM = 617,
     NONE_SYM = 618,
     NOT2_SYM = 619,
     NOT_SYM = 620,
     NOW_SYM = 621,
     NO_SYM = 622,
     NO_WAIT_SYM = 623,
     NO_WRITE_TO_BINLOG = 624,
     NULL_SYM = 625,
     NUM = 626,
     NUMBER_SYM = 627,
     NUMERIC_SYM = 628,
     NVARCHAR_SYM = 629,
     OFFSET_SYM = 630,
     OLD_PASSWORD = 631,
     ON = 632,
     ONE_SYM = 633,
     ONLY_SYM = 634,
     ONLINE_SYM = 635,
     OPEN_SYM = 636,
     OPTIMIZE = 637,
     OPTIONS_SYM = 638,
     OPTION = 639,
     OPTIONALLY = 640,
     OR2_SYM = 641,
     ORDER_SYM = 642,
     OR_OR_SYM = 643,
     OR_SYM = 644,
     OUTER = 645,
     OUTFILE = 646,
     OUT_SYM = 647,
     OWNER_SYM = 648,
     PACK_KEYS_SYM = 649,
     PAGE_SYM = 650,
     PAGE_CHECKSUM_SYM = 651,
     PARAM_MARKER = 652,
     PARSER_SYM = 653,
     PARSE_VCOL_EXPR_SYM = 654,
     PARTIAL = 655,
     PARTITION_SYM = 656,
     PARTITIONS_SYM = 657,
     PARTITIONING_SYM = 658,
     PASSWORD = 659,
     PERSISTENT_SYM = 660,
     PHASE_SYM = 661,
     PLUGINS_SYM = 662,
     PLUGIN_SYM = 663,
     POINT_SYM = 664,
     POLYGON = 665,
     PORT_SYM = 666,
     POSITION_SYM = 667,
     PRECISION = 668,
     PREPARE_SYM = 669,
     PRESERVE_SYM = 670,
     PREV_SYM = 671,
     PRIMARY_SYM = 672,
     PRIVILEGES = 673,
     PROCEDURE_SYM = 674,
     PROCESS = 675,
     PROCESSLIST_SYM = 676,
     PROFILE_SYM = 677,
     PROFILES_SYM = 678,
     PROXY_SYM = 679,
     PURGE = 680,
     QUARTER_SYM = 681,
     QUERY_SYM = 682,
     QUICK = 683,
     RANGE_SYM = 684,
     READS_SYM = 685,
     READ_ONLY_SYM = 686,
     READ_SYM = 687,
     READ_WRITE_SYM = 688,
     REAL = 689,
     REBUILD_SYM = 690,
     RECOVER_SYM = 691,
     REDOFILE_SYM = 692,
     REDO_BUFFER_SIZE_SYM = 693,
     REDUNDANT_SYM = 694,
     REFERENCES = 695,
     REGEXP = 696,
     RELAY = 697,
     RELAYLOG_SYM = 698,
     RELAY_LOG_FILE_SYM = 699,
     RELAY_LOG_POS_SYM = 700,
     RELAY_THREAD = 701,
     RELEASE_SYM = 702,
     RELOAD = 703,
     REMOVE_SYM = 704,
     RENAME = 705,
     REORGANIZE_SYM = 706,
     REPAIR = 707,
     REPEATABLE_SYM = 708,
     REPEAT_SYM = 709,
     REPLACE = 710,
     REPLICATION = 711,
     REQUIRE_SYM = 712,
     RESET_SYM = 713,
     RESIGNAL_SYM = 714,
     RESOURCES = 715,
     RESTORE_SYM = 716,
     RESTRICT = 717,
     RESUME_SYM = 718,
     RETURNED_SQLSTATE_SYM = 719,
     RETURNING_SYM = 720,
     RETURNS_SYM = 721,
     RETURN_SYM = 722,
     REVERSE_SYM = 723,
     REVOKE = 724,
     RIGHT = 725,
     ROLE_SYM = 726,
     ROLLBACK_SYM = 727,
     ROLLUP_SYM = 728,
     ROUTINE_SYM = 729,
     ROWS_SYM = 730,
     ROW_FORMAT_SYM = 731,
     ROW_SYM = 732,
     ROW_COUNT_SYM = 733,
     RTREE_SYM = 734,
     SAVEPOINT_SYM = 735,
     SCHEDULE_SYM = 736,
     SCHEMA_NAME_SYM = 737,
     SECOND_MICROSECOND_SYM = 738,
     SECOND_SYM = 739,
     SECURITY_SYM = 740,
     SELECT_SYM = 741,
     SENSITIVE_SYM = 742,
     SEPARATOR_SYM = 743,
     SERIALIZABLE_SYM = 744,
     SERIAL_SYM = 745,
     SESSION_SYM = 746,
     SERVER_SYM = 747,
     SERVER_OPTIONS = 748,
     SET = 749,
     SET_VAR = 750,
     SHARE_SYM = 751,
     SHIFT_LEFT = 752,
     SHIFT_RIGHT = 753,
     SHOW = 754,
     SHUTDOWN = 755,
     SIGNAL_SYM = 756,
     SIGNED_SYM = 757,
     SIMPLE_SYM = 758,
     SLAVE = 759,
     SLAVES = 760,
     SLAVE_POS_SYM = 761,
     SLOW = 762,
     SMALLINT = 763,
     SNAPSHOT_SYM = 764,
     SOCKET_SYM = 765,
     SOFT_SYM = 766,
     SONAME_SYM = 767,
     SOUNDS_SYM = 768,
     SOURCE_SYM = 769,
     SPATIAL_SYM = 770,
     SPECIFIC_SYM = 771,
     SQLEXCEPTION_SYM = 772,
     SQLSTATE_SYM = 773,
     SQLWARNING_SYM = 774,
     SQL_BIG_RESULT = 775,
     SQL_BUFFER_RESULT = 776,
     SQL_CACHE_SYM = 777,
     SQL_CALC_FOUND_ROWS = 778,
     SQL_NO_CACHE_SYM = 779,
     SQL_SMALL_RESULT = 780,
     SQL_SYM = 781,
     SQL_THREAD = 782,
     SSL_SYM = 783,
     STARTING = 784,
     STARTS_SYM = 785,
     START_SYM = 786,
     STATS_AUTO_RECALC_SYM = 787,
     STATS_PERSISTENT_SYM = 788,
     STATS_SAMPLE_PAGES_SYM = 789,
     STATUS_SYM = 790,
     STDDEV_SAMP_SYM = 791,
     STD_SYM = 792,
     STOP_SYM = 793,
     STORAGE_SYM = 794,
     STRAIGHT_JOIN = 795,
     STRING_SYM = 796,
     SUBCLASS_ORIGIN_SYM = 797,
     SUBDATE_SYM = 798,
     SUBJECT_SYM = 799,
     SUBPARTITIONS_SYM = 800,
     SUBPARTITION_SYM = 801,
     SUBSTRING = 802,
     SUM_SYM = 803,
     SUPER_SYM = 804,
     SUSPEND_SYM = 805,
     SWAPS_SYM = 806,
     SWITCHES_SYM = 807,
     SYSDATE = 808,
     TABLES = 809,
     TABLESPACE = 810,
     TABLE_REF_PRIORITY = 811,
     TABLE_STATS_SYM = 812,
     TABLE_SYM = 813,
     TABLE_CHECKSUM_SYM = 814,
     TABLE_NAME_SYM = 815,
     TEMPORARY = 816,
     TEMPTABLE_SYM = 817,
     TERMINATED = 818,
     TEXT_STRING = 819,
     TEXT_SYM = 820,
     THAN_SYM = 821,
     THEN_SYM = 822,
     TIMESTAMP = 823,
     TIMESTAMP_ADD = 824,
     TIMESTAMP_DIFF = 825,
     TIME_SYM = 826,
     TINYBLOB = 827,
     TINYINT = 828,
     TINYTEXT = 829,
     TO_SYM = 830,
     TRAILING = 831,
     TRANSACTION_SYM = 832,
     TRANSACTIONAL_SYM = 833,
     TRIGGERS_SYM = 834,
     TRIGGER_SYM = 835,
     TRIM = 836,
     TRUE_SYM = 837,
     TRUNCATE_SYM = 838,
     TYPES_SYM = 839,
     TYPE_SYM = 840,
     UDF_RETURNS_SYM = 841,
     ULONGLONG_NUM = 842,
     UNCOMMITTED_SYM = 843,
     UNDEFINED_SYM = 844,
     UNDERSCORE_CHARSET = 845,
     UNDOFILE_SYM = 846,
     UNDO_BUFFER_SIZE_SYM = 847,
     UNDO_SYM = 848,
     UNICODE_SYM = 849,
     UNINSTALL_SYM = 850,
     UNION_SYM = 851,
     UNIQUE_SYM = 852,
     UNKNOWN_SYM = 853,
     UNLOCK_SYM = 854,
     UNSIGNED = 855,
     UNTIL_SYM = 856,
     UPDATE_SYM = 857,
     UPGRADE_SYM = 858,
     USAGE = 859,
     USER = 860,
     USER_STATS_SYM = 861,
     USE_FRM = 862,
     USE_SYM = 863,
     USING = 864,
     UTC_DATE_SYM = 865,
     UTC_TIMESTAMP_SYM = 866,
     UTC_TIME_SYM = 867,
     VALUES = 868,
     VALUE_SYM = 869,
     VARBINARY = 870,
     VARCHAR = 871,
     VARIABLES = 872,
     VARIANCE_SYM = 873,
     VARYING = 874,
     VAR_SAMP_SYM = 875,
     VIA_SYM = 876,
     VIEW_SYM = 877,
     VIRTUAL_SYM = 878,
     WAIT_SYM = 879,
     WARNINGS = 880,
     WEEK_SYM = 881,
     WEIGHT_STRING_SYM = 882,
     WHEN_SYM = 883,
     WHERE = 884,
     WHILE_SYM = 885,
     WITH = 886,
     WITH_CUBE_SYM = 887,
     WITH_ROLLUP_SYM = 888,
     WORK_SYM = 889,
     WRAPPER_SYM = 890,
     WRITE_SYM = 891,
     X509_SYM = 892,
     XA_SYM = 893,
     XML_SYM = 894,
     XOR = 895,
     YEAR_MONTH_SYM = 896,
     YEAR_SYM = 897,
     ZEROFILL = 898,
     IMPOSSIBLE_ACTION = 899
   };
#endif
/* Tokens.  */
#define ABORT_SYM 258
#define ACCESSIBLE_SYM 259
#define ACTION 260
#define ADD 261
#define ADMIN_SYM 262
#define ADDDATE_SYM 263
#define AFTER_SYM 264
#define AGAINST 265
#define AGGREGATE_SYM 266
#define ALGORITHM_SYM 267
#define ALL 268
#define ALTER 269
#define ALWAYS_SYM 270
#define ANALYZE_SYM 271
#define AND_AND_SYM 272
#define AND_SYM 273
#define ANY_SYM 274
#define AS 275
#define ASC 276
#define ASCII_SYM 277
#define ASENSITIVE_SYM 278
#define AT_SYM 279
#define AUTHORS_SYM 280
#define AUTOEXTEND_SIZE_SYM 281
#define AUTO_INC 282
#define AUTO_SYM 283
#define AVG_ROW_LENGTH 284
#define AVG_SYM 285
#define BACKUP_SYM 286
#define BEFORE_SYM 287
#define BEGIN_SYM 288
#define BETWEEN_SYM 289
#define BIGINT 290
#define BINARY 291
#define BINLOG_SYM 292
#define BIN_NUM 293
#define BIT_AND 294
#define BIT_OR 295
#define BIT_SYM 296
#define BIT_XOR 297
#define BLOB_SYM 298
#define BLOCK_SYM 299
#define BOOLEAN_SYM 300
#define BOOL_SYM 301
#define BOTH 302
#define BTREE_SYM 303
#define BY 304
#define BYTE_SYM 305
#define CACHE_SYM 306
#define CALL_SYM 307
#define CASCADE 308
#define CASCADED 309
#define CASE_SYM 310
#define CAST_SYM 311
#define CATALOG_NAME_SYM 312
#define CHAIN_SYM 313
#define CHANGE 314
#define CHANGED 315
#define CHARSET 316
#define CHAR_SYM 317
#define CHECKPOINT_SYM 318
#define CHECKSUM_SYM 319
#define CHECK_SYM 320
#define CIPHER_SYM 321
#define CLASS_ORIGIN_SYM 322
#define CLIENT_SYM 323
#define CLIENT_STATS_SYM 324
#define CLOSE_SYM 325
#define COALESCE 326
#define CODE_SYM 327
#define COLLATE_SYM 328
#define COLLATION_SYM 329
#define COLUMNS 330
#define COLUMN_ADD_SYM 331
#define COLUMN_CHECK_SYM 332
#define COLUMN_CREATE_SYM 333
#define COLUMN_DELETE_SYM 334
#define COLUMN_GET_SYM 335
#define COLUMN_SYM 336
#define COLUMN_NAME_SYM 337
#define COMMENT_SYM 338
#define COMMITTED_SYM 339
#define COMMIT_SYM 340
#define COMPACT_SYM 341
#define COMPLETION_SYM 342
#define COMPRESSED_SYM 343
#define CONCURRENT 344
#define CONDITION_SYM 345
#define CONNECTION_SYM 346
#define CONSISTENT_SYM 347
#define CONSTRAINT 348
#define CONSTRAINT_CATALOG_SYM 349
#define CONSTRAINT_NAME_SYM 350
#define CONSTRAINT_SCHEMA_SYM 351
#define CONTAINS_SYM 352
#define CONTEXT_SYM 353
#define CONTINUE_SYM 354
#define CONTRIBUTORS_SYM 355
#define CONVERT_SYM 356
#define COUNT_SYM 357
#define CPU_SYM 358
#define CREATE 359
#define CROSS 360
#define CUBE_SYM 361
#define CURDATE 362
#define CURRENT_SYM 363
#define CURRENT_USER 364
#define CURRENT_ROLE 365
#define CURRENT_POS_SYM 366
#define CURSOR_SYM 367
#define CURSOR_NAME_SYM 368
#define CURTIME 369
#define DATABASE 370
#define DATABASES 371
#define DATAFILE_SYM 372
#define DATA_SYM 373
#define DATETIME 374
#define DATE_ADD_INTERVAL 375
#define DATE_SUB_INTERVAL 376
#define DATE_SYM 377
#define DAY_HOUR_SYM 378
#define DAY_MICROSECOND_SYM 379
#define DAY_MINUTE_SYM 380
#define DAY_SECOND_SYM 381
#define DAY_SYM 382
#define DEALLOCATE_SYM 383
#define DECIMAL_NUM 384
#define DECIMAL_SYM 385
#define DECLARE_SYM 386
#define DEFAULT 387
#define DEFINER_SYM 388
#define DELAYED_SYM 389
#define DELAY_KEY_WRITE_SYM 390
#define DELETE_SYM 391
#define DESC 392
#define DESCRIBE 393
#define DES_KEY_FILE 394
#define DETERMINISTIC_SYM 395
#define DIAGNOSTICS_SYM 396
#define DIRECTORY_SYM 397
#define DISABLE_SYM 398
#define DISCARD 399
#define DISK_SYM 400
#define DISTINCT 401
#define DIV_SYM 402
#define DOUBLE_SYM 403
#define DO_SYM 404
#define DROP 405
#define DUAL_SYM 406
#define DUMPFILE 407
#define DUPLICATE_SYM 408
#define DYNAMIC_SYM 409
#define EACH_SYM 410
#define ELSE 411
#define ELSEIF_SYM 412
#define ENABLE_SYM 413
#define ENCLOSED 414
#define END 415
#define ENDS_SYM 416
#define END_OF_INPUT 417
#define ENGINES_SYM 418
#define ENGINE_SYM 419
#define ENUM 420
#define EQ 421
#define EQUAL_SYM 422
#define ERROR_SYM 423
#define ERRORS 424
#define ESCAPED 425
#define ESCAPE_SYM 426
#define EVENTS_SYM 427
#define EVENT_SYM 428
#define EVERY_SYM 429
#define EXCHANGE_SYM 430
#define EXAMINED_SYM 431
#define EXECUTE_SYM 432
#define EXISTS 433
#define EXIT_SYM 434
#define EXPANSION_SYM 435
#define EXPORT_SYM 436
#define EXTENDED_SYM 437
#define EXTENT_SIZE_SYM 438
#define EXTRACT_SYM 439
#define FALSE_SYM 440
#define FAST_SYM 441
#define FAULTS_SYM 442
#define FETCH_SYM 443
#define FILE_SYM 444
#define FIRST_SYM 445
#define FIXED_SYM 446
#define FLOAT_NUM 447
#define FLOAT_SYM 448
#define FLUSH_SYM 449
#define FORCE_SYM 450
#define FOREIGN 451
#define FOR_SYM 452
#define FOUND_SYM 453
#define FROM 454
#define FULL 455
#define FULLTEXT_SYM 456
#define FUNCTION_SYM 457
#define GE 458
#define GENERAL 459
#define GENERATED_SYM 460
#define GEOMETRYCOLLECTION 461
#define GEOMETRY_SYM 462
#define GET_FORMAT 463
#define GET_SYM 464
#define GLOBAL_SYM 465
#define GRANT 466
#define GRANTS 467
#define GROUP_SYM 468
#define GROUP_CONCAT_SYM 469
#define GT_SYM 470
#define HANDLER_SYM 471
#define HARD_SYM 472
#define HASH_SYM 473
#define HAVING 474
#define HELP_SYM 475
#define HEX_NUM 476
#define HEX_STRING 477
#define HIGH_PRIORITY 478
#define HOST_SYM 479
#define HOSTS_SYM 480
#define HOUR_MICROSECOND_SYM 481
#define HOUR_MINUTE_SYM 482
#define HOUR_SECOND_SYM 483
#define HOUR_SYM 484
#define ID_SYM 485
#define IDENT 486
#define IDENTIFIED_SYM 487
#define IDENT_QUOTED 488
#define IF 489
#define IGNORE_SYM 490
#define IGNORE_SERVER_IDS_SYM 491
#define IMPORT 492
#define INDEXES 493
#define INDEX_SYM 494
#define INDEX_STATS_SYM 495
#define INFILE 496
#define INITIAL_SIZE_SYM 497
#define INNER_SYM 498
#define INOUT_SYM 499
#define INSENSITIVE_SYM 500
#define INSERT 501
#define INSERT_METHOD 502
#define INSTALL_SYM 503
#define INTERVAL_SYM 504
#define INTO 505
#define INT_SYM 506
#define INVOKER_SYM 507
#define IN_SYM 508
#define IO_SYM 509
#define IPC_SYM 510
#define IS 511
#define ISOLATION 512
#define ISSUER_SYM 513
#define ITERATE_SYM 514
#define JOIN_SYM 515
#define KEYS 516
#define KEY_BLOCK_SIZE 517
#define KEY_SYM 518
#define KILL_SYM 519
#define LANGUAGE_SYM 520
#define LAST_SYM 521
#define LAST_VALUE 522
#define LE 523
#define LEADING 524
#define LEAVES 525
#define LEAVE_SYM 526
#define LEFT 527
#define LESS_SYM 528
#define LEVEL_SYM 529
#define LEX_HOSTNAME 530
#define LIKE 531
#define LIMIT 532
#define LINEAR_SYM 533
#define LINES 534
#define LINESTRING 535
#define LIST_SYM 536
#define LOAD 537
#define LOCAL_SYM 538
#define LOCATOR_SYM 539
#define LOCKS_SYM 540
#define LOCK_SYM 541
#define LOGFILE_SYM 542
#define LOGS_SYM 543
#define LONGBLOB 544
#define LONGTEXT 545
#define LONG_NUM 546
#define LONG_SYM 547
#define LOOP_SYM 548
#define LOW_PRIORITY 549
#define LT 550
#define MASTER_CONNECT_RETRY_SYM 551
#define MASTER_GTID_POS_SYM 552
#define MASTER_HOST_SYM 553
#define MASTER_LOG_FILE_SYM 554
#define MASTER_LOG_POS_SYM 555
#define MASTER_PASSWORD_SYM 556
#define MASTER_PORT_SYM 557
#define MASTER_SERVER_ID_SYM 558
#define MASTER_SSL_CAPATH_SYM 559
#define MASTER_SSL_CA_SYM 560
#define MASTER_SSL_CERT_SYM 561
#define MASTER_SSL_CIPHER_SYM 562
#define MASTER_SSL_CRL_SYM 563
#define MASTER_SSL_CRLPATH_SYM 564
#define MASTER_SSL_KEY_SYM 565
#define MASTER_SSL_SYM 566
#define MASTER_SSL_VERIFY_SERVER_CERT_SYM 567
#define MASTER_SYM 568
#define MASTER_USER_SYM 569
#define MASTER_USE_GTID_SYM 570
#define MASTER_HEARTBEAT_PERIOD_SYM 571
#define MATCH 572
#define MAX_CONNECTIONS_PER_HOUR 573
#define MAX_QUERIES_PER_HOUR 574
#define MAX_ROWS 575
#define MAX_SIZE_SYM 576
#define MAX_SYM 577
#define MAX_UPDATES_PER_HOUR 578
#define MAX_USER_CONNECTIONS_SYM 579
#define MAX_VALUE_SYM 580
#define MEDIUMBLOB 581
#define MEDIUMINT 582
#define MEDIUMTEXT 583
#define MEDIUM_SYM 584
#define MEMORY_SYM 585
#define MERGE_SYM 586
#define MESSAGE_TEXT_SYM 587
#define MICROSECOND_SYM 588
#define MIGRATE_SYM 589
#define MINUTE_MICROSECOND_SYM 590
#define MINUTE_SECOND_SYM 591
#define MINUTE_SYM 592
#define MIN_ROWS 593
#define MIN_SYM 594
#define MODE_SYM 595
#define MODIFIES_SYM 596
#define MODIFY_SYM 597
#define MOD_SYM 598
#define MONTH_SYM 599
#define MULTILINESTRING 600
#define MULTIPOINT 601
#define MULTIPOLYGON 602
#define MUTEX_SYM 603
#define MYSQL_SYM 604
#define MYSQL_ERRNO_SYM 605
#define NAMES_SYM 606
#define NAME_SYM 607
#define NATIONAL_SYM 608
#define NATURAL 609
#define NCHAR_STRING 610
#define NCHAR_SYM 611
#define NDBCLUSTER_SYM 612
#define NE 613
#define NEG 614
#define NEW_SYM 615
#define NEXT_SYM 616
#define NODEGROUP_SYM 617
#define NONE_SYM 618
#define NOT2_SYM 619
#define NOT_SYM 620
#define NOW_SYM 621
#define NO_SYM 622
#define NO_WAIT_SYM 623
#define NO_WRITE_TO_BINLOG 624
#define NULL_SYM 625
#define NUM 626
#define NUMBER_SYM 627
#define NUMERIC_SYM 628
#define NVARCHAR_SYM 629
#define OFFSET_SYM 630
#define OLD_PASSWORD 631
#define ON 632
#define ONE_SYM 633
#define ONLY_SYM 634
#define ONLINE_SYM 635
#define OPEN_SYM 636
#define OPTIMIZE 637
#define OPTIONS_SYM 638
#define OPTION 639
#define OPTIONALLY 640
#define OR2_SYM 641
#define ORDER_SYM 642
#define OR_OR_SYM 643
#define OR_SYM 644
#define OUTER 645
#define OUTFILE 646
#define OUT_SYM 647
#define OWNER_SYM 648
#define PACK_KEYS_SYM 649
#define PAGE_SYM 650
#define PAGE_CHECKSUM_SYM 651
#define PARAM_MARKER 652
#define PARSER_SYM 653
#define PARSE_VCOL_EXPR_SYM 654
#define PARTIAL 655
#define PARTITION_SYM 656
#define PARTITIONS_SYM 657
#define PARTITIONING_SYM 658
#define PASSWORD 659
#define PERSISTENT_SYM 660
#define PHASE_SYM 661
#define PLUGINS_SYM 662
#define PLUGIN_SYM 663
#define POINT_SYM 664
#define POLYGON 665
#define PORT_SYM 666
#define POSITION_SYM 667
#define PRECISION 668
#define PREPARE_SYM 669
#define PRESERVE_SYM 670
#define PREV_SYM 671
#define PRIMARY_SYM 672
#define PRIVILEGES 673
#define PROCEDURE_SYM 674
#define PROCESS 675
#define PROCESSLIST_SYM 676
#define PROFILE_SYM 677
#define PROFILES_SYM 678
#define PROXY_SYM 679
#define PURGE 680
#define QUARTER_SYM 681
#define QUERY_SYM 682
#define QUICK 683
#define RANGE_SYM 684
#define READS_SYM 685
#define READ_ONLY_SYM 686
#define READ_SYM 687
#define READ_WRITE_SYM 688
#define REAL 689
#define REBUILD_SYM 690
#define RECOVER_SYM 691
#define REDOFILE_SYM 692
#define REDO_BUFFER_SIZE_SYM 693
#define REDUNDANT_SYM 694
#define REFERENCES 695
#define REGEXP 696
#define RELAY 697
#define RELAYLOG_SYM 698
#define RELAY_LOG_FILE_SYM 699
#define RELAY_LOG_POS_SYM 700
#define RELAY_THREAD 701
#define RELEASE_SYM 702
#define RELOAD 703
#define REMOVE_SYM 704
#define RENAME 705
#define REORGANIZE_SYM 706
#define REPAIR 707
#define REPEATABLE_SYM 708
#define REPEAT_SYM 709
#define REPLACE 710
#define REPLICATION 711
#define REQUIRE_SYM 712
#define RESET_SYM 713
#define RESIGNAL_SYM 714
#define RESOURCES 715
#define RESTORE_SYM 716
#define RESTRICT 717
#define RESUME_SYM 718
#define RETURNED_SQLSTATE_SYM 719
#define RETURNING_SYM 720
#define RETURNS_SYM 721
#define RETURN_SYM 722
#define REVERSE_SYM 723
#define REVOKE 724
#define RIGHT 725
#define ROLE_SYM 726
#define ROLLBACK_SYM 727
#define ROLLUP_SYM 728
#define ROUTINE_SYM 729
#define ROWS_SYM 730
#define ROW_FORMAT_SYM 731
#define ROW_SYM 732
#define ROW_COUNT_SYM 733
#define RTREE_SYM 734
#define SAVEPOINT_SYM 735
#define SCHEDULE_SYM 736
#define SCHEMA_NAME_SYM 737
#define SECOND_MICROSECOND_SYM 738
#define SECOND_SYM 739
#define SECURITY_SYM 740
#define SELECT_SYM 741
#define SENSITIVE_SYM 742
#define SEPARATOR_SYM 743
#define SERIALIZABLE_SYM 744
#define SERIAL_SYM 745
#define SESSION_SYM 746
#define SERVER_SYM 747
#define SERVER_OPTIONS 748
#define SET 749
#define SET_VAR 750
#define SHARE_SYM 751
#define SHIFT_LEFT 752
#define SHIFT_RIGHT 753
#define SHOW 754
#define SHUTDOWN 755
#define SIGNAL_SYM 756
#define SIGNED_SYM 757
#define SIMPLE_SYM 758
#define SLAVE 759
#define SLAVES 760
#define SLAVE_POS_SYM 761
#define SLOW 762
#define SMALLINT 763
#define SNAPSHOT_SYM 764
#define SOCKET_SYM 765
#define SOFT_SYM 766
#define SONAME_SYM 767
#define SOUNDS_SYM 768
#define SOURCE_SYM 769
#define SPATIAL_SYM 770
#define SPECIFIC_SYM 771
#define SQLEXCEPTION_SYM 772
#define SQLSTATE_SYM 773
#define SQLWARNING_SYM 774
#define SQL_BIG_RESULT 775
#define SQL_BUFFER_RESULT 776
#define SQL_CACHE_SYM 777
#define SQL_CALC_FOUND_ROWS 778
#define SQL_NO_CACHE_SYM 779
#define SQL_SMALL_RESULT 780
#define SQL_SYM 781
#define SQL_THREAD 782
#define SSL_SYM 783
#define STARTING 784
#define STARTS_SYM 785
#define START_SYM 786
#define STATS_AUTO_RECALC_SYM 787
#define STATS_PERSISTENT_SYM 788
#define STATS_SAMPLE_PAGES_SYM 789
#define STATUS_SYM 790
#define STDDEV_SAMP_SYM 791
#define STD_SYM 792
#define STOP_SYM 793
#define STORAGE_SYM 794
#define STRAIGHT_JOIN 795
#define STRING_SYM 796
#define SUBCLASS_ORIGIN_SYM 797
#define SUBDATE_SYM 798
#define SUBJECT_SYM 799
#define SUBPARTITIONS_SYM 800
#define SUBPARTITION_SYM 801
#define SUBSTRING 802
#define SUM_SYM 803
#define SUPER_SYM 804
#define SUSPEND_SYM 805
#define SWAPS_SYM 806
#define SWITCHES_SYM 807
#define SYSDATE 808
#define TABLES 809
#define TABLESPACE 810
#define TABLE_REF_PRIORITY 811
#define TABLE_STATS_SYM 812
#define TABLE_SYM 813
#define TABLE_CHECKSUM_SYM 814
#define TABLE_NAME_SYM 815
#define TEMPORARY 816
#define TEMPTABLE_SYM 817
#define TERMINATED 818
#define TEXT_STRING 819
#define TEXT_SYM 820
#define THAN_SYM 821
#define THEN_SYM 822
#define TIMESTAMP 823
#define TIMESTAMP_ADD 824
#define TIMESTAMP_DIFF 825
#define TIME_SYM 826
#define TINYBLOB 827
#define TINYINT 828
#define TINYTEXT 829
#define TO_SYM 830
#define TRAILING 831
#define TRANSACTION_SYM 832
#define TRANSACTIONAL_SYM 833
#define TRIGGERS_SYM 834
#define TRIGGER_SYM 835
#define TRIM 836
#define TRUE_SYM 837
#define TRUNCATE_SYM 838
#define TYPES_SYM 839
#define TYPE_SYM 840
#define UDF_RETURNS_SYM 841
#define ULONGLONG_NUM 842
#define UNCOMMITTED_SYM 843
#define UNDEFINED_SYM 844
#define UNDERSCORE_CHARSET 845
#define UNDOFILE_SYM 846
#define UNDO_BUFFER_SIZE_SYM 847
#define UNDO_SYM 848
#define UNICODE_SYM 849
#define UNINSTALL_SYM 850
#define UNION_SYM 851
#define UNIQUE_SYM 852
#define UNKNOWN_SYM 853
#define UNLOCK_SYM 854
#define UNSIGNED 855
#define UNTIL_SYM 856
#define UPDATE_SYM 857
#define UPGRADE_SYM 858
#define USAGE 859
#define USER 860
#define USER_STATS_SYM 861
#define USE_FRM 862
#define USE_SYM 863
#define USING 864
#define UTC_DATE_SYM 865
#define UTC_TIMESTAMP_SYM 866
#define UTC_TIME_SYM 867
#define VALUES 868
#define VALUE_SYM 869
#define VARBINARY 870
#define VARCHAR 871
#define VARIABLES 872
#define VARIANCE_SYM 873
#define VARYING 874
#define VAR_SAMP_SYM 875
#define VIA_SYM 876
#define VIEW_SYM 877
#define VIRTUAL_SYM 878
#define WAIT_SYM 879
#define WARNINGS 880
#define WEEK_SYM 881
#define WEIGHT_STRING_SYM 882
#define WHEN_SYM 883
#define WHERE 884
#define WHILE_SYM 885
#define WITH 886
#define WITH_CUBE_SYM 887
#define WITH_ROLLUP_SYM 888
#define WORK_SYM 889
#define WRAPPER_SYM 890
#define WRITE_SYM 891
#define X509_SYM 892
#define XA_SYM 893
#define XML_SYM 894
#define XOR 895
#define YEAR_MONTH_SYM 896
#define YEAR_SYM 897
#define ZEROFILL 898
#define IMPOSSIBLE_ACTION 899




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 898 "C:/buildbot/winx64-packages/build/mariadb-10.0.19/sql/sql_yacc.yy"

  int  num;
  ulong ulong_num;
  ulonglong ulonglong_number;
  longlong longlong_number;
  LEX_STRING lex_str;
  LEX_STRING *lex_str_ptr;
  LEX_SYMBOL symbol;
  LEX_TYPE lex_type;
  Table_ident *table;
  char *simple_string;
  Item *item;
  Item_num *item_num;
  List<Item> *item_list;
  List<String> *string_list;
  String *string;
  Key_part_spec *key_part;
  TABLE_LIST *table_list;
  udf_func *udf;
  LEX_USER *lex_user;
  struct sys_var_with_base variable;
  enum enum_var_type var_type;
  Key::Keytype key_type;
  enum ha_key_alg key_alg;
  handlerton *db_type;
  enum row_type row_type;
  enum ha_rkey_function ha_rkey_mode;
  enum enum_tx_isolation tx_isolation;
  enum Cast_target cast_type;
  enum Item_udftype udf_type;
  enum ha_choice choice;
  CHARSET_INFO *charset;
  thr_lock_type lock_type;
  interval_type interval, interval_time_st;
  timestamp_type date_time_type;
  st_select_lex *select_lex;
  chooser_compare_func_creator boolfunc2creator;
  class sp_condition_value *spcondvalue;
  struct { int vars, conds, hndlrs, curs; } spblock;
  sp_name *spname;
  LEX *lex;
  sp_head *sphead;
  struct p_elem_val *p_elem_value;
  enum index_hint_type index_hint;
  enum enum_filetype filetype;
  enum Foreign_key::fk_option m_fk_option;
  enum enum_yes_no_unknown m_yes_no_unk;
  Diag_condition_item_name diag_condition_item_name;
  Diagnostics_information::Which_area diag_area;
  Diagnostics_information *diag_info;
  Statement_information_item *stmt_info_item;
  Statement_information_item::Name stmt_info_item_name;
  List<Statement_information_item> *stmt_info_list;
  Condition_information_item *cond_info_item;
  Condition_information_item::Name cond_info_item_name;
  List<Condition_information_item> *cond_info_list;
  DYNCALL_CREATE_DEF *dyncol_def;
  List<DYNCALL_CREATE_DEF> *dyncol_def_list;
  bool is_not_empty;



/* Line 1676 of yacc.c  */
#line 1403 "C:/buildbot/winx64-packages/build/mariadb-10.0.19/sql/sql_yacc.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif



