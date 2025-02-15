//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSMutableDictionary, NSMutableSet, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _bmFMDatabase : NSObject
{
    void *_db;	// 8 = 0x8
    _Bool _isExecutingStatement;	// 16 = 0x10
    double _startBusyRetryTime;	// 24 = 0x18
    NSMutableSet *_openResultSets;	// 32 = 0x20
    NSMutableSet *_openFunctions;	// 40 = 0x28
    NSDateFormatter *_dateFormat;	// 48 = 0x30
    _Bool _shouldCacheStatements;	// 56 = 0x38
    _Bool _traceExecution;	// 57 = 0x39
    _Bool _checkedOut;	// 58 = 0x3a
    _Bool _crashOnErrors;	// 59 = 0x3b
    _Bool _logsErrors;	// 60 = 0x3c
    _Bool _isOpen;	// 61 = 0x3d
    _Bool _isInTransaction;	// 62 = 0x3e
    double _maxBusyRetryTimeInterval;	// 64 = 0x40
    NSMutableDictionary *_cachedStatements;	// 72 = 0x48
    NSString *_databasePath;	// 80 = 0x50
}

+ (id)storeableDateFormat:(id)arg1;	// IMP=0x006000000000c724
+ (_Bool)isSQLiteThreadSafe;	// IMP=0x006000000000baae
+ (id)sqliteLibVersion;	// IMP=0x006000000000ba6a
+ (int)FMDBVersion;	// IMP=0x006000000000b86b
+ (id)FMDBUserVersion;	// IMP=0x006000000000b85e
+ (id)databaseWithURL:(id)arg1;	// IMP=0x006000000000b66d
+ (id)databaseWithPath:(id)arg1;	// IMP=0x006000000000b624
- (void).cxx_destruct;	// IMP=0x000000000000f87e
@property(readonly, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
@property(readonly, nonatomic) _Bool isInTransaction; // @synthesize isInTransaction=_isInTransaction;
@property(nonatomic) _Bool isOpen; // @synthesize isOpen=_isOpen;
@property(retain) NSMutableDictionary *cachedStatements; // @synthesize cachedStatements=_cachedStatements;
@property _Bool logsErrors; // @synthesize logsErrors=_logsErrors;
@property _Bool crashOnErrors; // @synthesize crashOnErrors=_crashOnErrors;
@property _Bool checkedOut; // @synthesize checkedOut=_checkedOut;
@property _Bool traceExecution; // @synthesize traceExecution=_traceExecution;
- (void)resultErrorTooBigInContext:(void *)arg1;	// IMP=0x000000000000f7d9
- (void)resultErrorNoMemoryInContext:(void *)arg1;	// IMP=0x000000000000f7cc
- (void)resultErrorCode:(int)arg1 context:(void *)arg2;	// IMP=0x000000000000f7bd
- (void)resultError:(id)arg1 context:(void *)arg2;	// IMP=0x000000000000f786
- (void)resultString:(id)arg1 context:(void *)arg2;	// IMP=0x000000000000f748
- (void)resultData:(id)arg1 context:(void *)arg2;	// IMP=0x000000000000f6de
- (void)resultDouble:(double)arg1 context:(void *)arg2;	// IMP=0x000000000000f6d1
- (void)resultLong:(long long)arg1 context:(void *)arg2;	// IMP=0x000000000000f6c1
- (void)resultInt:(int)arg1 context:(void *)arg2;	// IMP=0x000000000000f6b2
- (void)resultNullInContext:(void *)arg1;	// IMP=0x000000000000f6a5
- (id)valueString:(void *)arg1;	// IMP=0x000000000000f668
- (id)valueData:(void *)arg1;	// IMP=0x000000000000f614
- (double)valueDouble:(void *)arg1;	// IMP=0x000000000000f607
- (long long)valueLong:(void *)arg1;	// IMP=0x000000000000f5fa
- (int)valueInt:(void *)arg1;	// IMP=0x000000000000f5ed
- (int)valueType:(void *)arg1;	// IMP=0x000000000000f5e0
- (void)makeFunctionNamed:(id)arg1 arguments:(int)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000000000f4f3
- (void)makeFunctionNamed:(id)arg1 maximumArguments:(int)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000000f4e1
@property(nonatomic) _Bool shouldCacheStatements; // @synthesize shouldCacheStatements=_shouldCacheStatements;
- (_Bool)checkpoint:(int)arg1 name:(id)arg2 logFrameCount:(int *)arg3 checkpointCount:(int *)arg4 error:(id *)arg5;	// IMP=0x000000000000f2d6
- (_Bool)checkpoint:(int)arg1 name:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000f2b1
- (_Bool)checkpoint:(int)arg1 error:(id *)arg2;	// IMP=0x000000000000f28a
- (id)inSavePoint:(CDUnknownBlockType)arg1;	// IMP=0x000000000000f12c
- (_Bool)rollbackToSavePointWithName:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000efe6
- (_Bool)releaseSavePointWithName:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000eea0
- (_Bool)startSavePointWithName:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000ed5a
- (_Bool)interrupt;	// IMP=0x000000000000ed29
- (_Bool)inTransaction;	// IMP=0x000000000000ed20
- (_Bool)beginExclusiveTransaction;	// IMP=0x000000000000ecf2
- (_Bool)beginImmediateTransaction;	// IMP=0x000000000000ecc4
- (_Bool)beginDeferredTransaction;	// IMP=0x000000000000ec96
- (_Bool)beginTransaction;	// IMP=0x000000000000ec68
- (_Bool)commit;	// IMP=0x000000000000ec3a
- (_Bool)rollback;	// IMP=0x000000000000ec0c
- (id)prepare:(id)arg1;	// IMP=0x000000000000ebe2
- (_Bool)update:(id)arg1 withErrorAndBindings:(id *)arg2;	// IMP=0x000000000000eb38
- (_Bool)executeUpdate:(id)arg1 withErrorAndBindings:(id *)arg2;	// IMP=0x000000000000ea8e
- (_Bool)executeStatements:(id)arg1 withResultBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000000e993
- (_Bool)executeStatements:(id)arg1;	// IMP=0x000000000000e97f
- (_Bool)executeUpdateWithFormat:(id)arg1;	// IMP=0x000000000000e69c
- (_Bool)executeUpdate:(id)arg1 withVAList:(struct __va_list_tag [1])arg2;	// IMP=0x000000000000e675
- (_Bool)executeUpdate:(id)arg1 withParameterDictionary:(id)arg2;	// IMP=0x000000000000e64a
- (_Bool)executeUpdate:(id)arg1 values:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000e61b
- (_Bool)executeUpdate:(id)arg1 withArgumentsInArray:(id)arg2;	// IMP=0x000000000000e5f0
- (_Bool)executeUpdate:(id)arg1;	// IMP=0x000000000000e540
- (_Bool)executeUpdate:(id)arg1 error:(id *)arg2 withArgumentsInArray:(id)arg3 orDictionary:(id)arg4 orVAList:(struct __va_list_tag [1])arg5;	// IMP=0x000000000000e4a1
- (id)executeQuery:(id)arg1 withVAList:(struct __va_list_tag [1])arg2;	// IMP=0x000000000000e477
- (id)executeQuery:(id)arg1 values:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000e403
- (id)executeQuery:(id)arg1 withArgumentsInArray:(id)arg2;	// IMP=0x000000000000e3db
- (id)executeQueryWithFormat:(id)arg1;	// IMP=0x000000000000e25f
- (id)executeQuery:(id)arg1;	// IMP=0x000000000000e19f
- (_Bool)bindStatement:(struct sqlite3_stmt *)arg1 WithArgumentsInArray:(id)arg2 orDictionary:(id)arg3 orVAList:(struct __va_list_tag [1])arg4;	// IMP=0x000000000000dc06
- (id)executeQuery:(id)arg1 withArgumentsInArray:(id)arg2 orDictionary:(id)arg3 orVAList:(struct __va_list_tag [1])arg4 shouldBind:(_Bool)arg5;	// IMP=0x000000000000d87e
- (id)executeQuery:(id)arg1 withParameterDictionary:(id)arg2;	// IMP=0x000000000000d854
- (void)extractSQL:(id)arg1 argumentsList:(struct __va_list_tag [1])arg2 intoString:(id)arg3 arguments:(id)arg4;	// IMP=0x000000000000d06b
- (int)bindObject:(id)arg1 toColumn:(int)arg2 inStatement:(struct sqlite3_stmt *)arg3;	// IMP=0x000000000000cada
@property(readonly, nonatomic) int changes;
@property(readonly, nonatomic) long long lastInsertRowId;
- (id)lastError;	// IMP=0x000000000000ca05
- (id)errorWithMessage:(id)arg1;	// IMP=0x000000000000c97c
- (int)lastExtendedErrorCode;	// IMP=0x000000000000c96e
- (int)lastErrorCode;	// IMP=0x000000000000c960
- (_Bool)hadError;	// IMP=0x000000000000c945
- (id)lastErrorMessage;	// IMP=0x000000000000c916
- (_Bool)databaseExists;	// IMP=0x000000000000c8c9
- (void)warnInUse;	// IMP=0x000000000000c893
@property(readonly, nonatomic) _Bool goodConnection;
- (id)stringFromDate:(id)arg1;	// IMP=0x000000000000c823
- (id)dateFromString:(id)arg1;	// IMP=0x000000000000c80d
- (void)setDateFormat:(id)arg1;	// IMP=0x000000000000c7fc
- (_Bool)hasDateFormatter;	// IMP=0x000000000000c7ee
- (_Bool)setKeyWithData:(id)arg1;	// IMP=0x000000000000c71c
- (_Bool)setKey:(id)arg1;	// IMP=0x000000000000c65a
- (_Bool)rekeyWithData:(id)arg1;	// IMP=0x000000000000c652
- (_Bool)rekey:(id)arg1;	// IMP=0x000000000000c590
- (void)setCachedStatement:(id)arg1 forQuery:(id)arg2;	// IMP=0x000000000000c422
- (id)cachedStatementForQuery:(id)arg1;	// IMP=0x000000000000c379
- (void)clearCachedStatements;	// IMP=0x000000000000c119
- (void)resultSetDidClose:(id)arg1;	// IMP=0x000000000000c0c5
- (void)closeOpenResultSets;	// IMP=0x000000000000bee9
@property(readonly, nonatomic) _Bool hasOpenResultSets;
- (void)setBusyRetryTimeout:(int)arg1;	// IMP=0x000000000000be9e
- (int)busyRetryTimeout;	// IMP=0x000000000000be6b
@property(nonatomic) double maxBusyRetryTimeInterval; // @synthesize maxBusyRetryTimeInterval=_maxBusyRetryTimeInterval;
- (_Bool)close;	// IMP=0x000000000000bcb8
- (_Bool)openWithFlags:(int)arg1 vfs:(id)arg2;	// IMP=0x000000000000bbd5
- (_Bool)openWithFlags:(int)arg1;	// IMP=0x000000000000bbc1
- (_Bool)open;	// IMP=0x000000000000bb2c
- (int)limitFor:(int)arg1 value:(int)arg2;	// IMP=0x000000000000bb1a
- (const char *)sqlitePath;	// IMP=0x000000000000bac8
@property(readonly, nonatomic) void *sqliteHandle;
@property(readonly, nonatomic) NSURL *databaseURL;
- (void)dealloc;	// IMP=0x000000000000b7ea
- (id)initWithPath:(id)arg1;	// IMP=0x000000000000b720
- (id)initWithURL:(id)arg1;	// IMP=0x000000000000b6ca
- (id)init;	// IMP=0x000000000000b6b6
- (_Bool)validateSQL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000010944
- (_Bool)columnExists:(id)arg1 columnName:(id)arg2;	// IMP=0x0000000000010929
@property(nonatomic) unsigned int userVersion;
@property(nonatomic) unsigned int applicationID;
- (_Bool)columnExists:(id)arg1 inTableWithName:(id)arg2;	// IMP=0x00000000000105bd
- (id)getTableSchema:(id)arg1;	// IMP=0x0000000000010528
- (id)getSchema;	// IMP=0x000000000001050d
- (_Bool)tableExists:(id)arg1;	// IMP=0x0000000000010480
- (id)dateForQuery:(id)arg1;	// IMP=0x0000000000010357
- (id)dataForQuery:(id)arg1;	// IMP=0x000000000001022e
- (double)doubleForQuery:(id)arg1;	// IMP=0x000000000001010b
- (_Bool)boolForQuery:(id)arg1;	// IMP=0x000000000000fff0
- (long long)longForQuery:(id)arg1;	// IMP=0x000000000000fed3
- (int)intForQuery:(id)arg1;	// IMP=0x000000000000fdb8
- (id)stringForQuery:(id)arg1;	// IMP=0x000000000000fc8f

@end

