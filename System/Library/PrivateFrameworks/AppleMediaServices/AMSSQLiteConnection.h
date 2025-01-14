//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSSQLiteConnectionOptions, NSError, NSMapTable, NSMutableArray;
@protocol AMSSQLiteConnectionDelegate;

__attribute__((visibility("hidden")))
@interface AMSSQLiteConnection : NSObject
{
    NSMutableArray *_afterTransactionBlocks;	// 8 = 0x8
    struct sqlite3 *_database;	// 16 = 0x10
    id <AMSSQLiteConnectionDelegate> _delegate;	// 24 = 0x18
    _Bool _didResetForCorruption;	// 32 = 0x20
    NSMapTable *_preparedStatements;	// 40 = 0x28
    long long _transactionDepth;	// 48 = 0x30
    _Bool _transactionWantsRollback;	// 56 = 0x38
    AMSSQLiteConnectionOptions *_options;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000004dbf98
@property(readonly, copy, nonatomic) AMSSQLiteConnectionOptions *options; // @synthesize options=_options;
@property(nonatomic) __weak id <AMSSQLiteConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_verifiedStatementForSQL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004dbde7
- (id)_verifiedStatementForPreparedStatement:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004dbc2b
- (id)_statementForPreparedStatement:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004dbb16
- (_Bool)_resetAfterIOError;	// IMP=0x00000000004db936
- (_Bool)_resetAfterCorruptionError;	// IMP=0x00000000004db8d6
- (id)_prepareStatement:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004db6f5
- (_Bool)_performResetAfterCorruptionError;	// IMP=0x00000000004db3de
- (_Bool)_openAndAllowRetry:(_Bool)arg1 error:(id *)arg2;	// IMP=0x00000000004dafa7
- (_Bool)_openWithError:(id *)arg1;	// IMP=0x00000000004daf8d
- (void)_flushAfterTransactionBlocks;	// IMP=0x00000000004dadbd
- (void)_finalizeAllStatements;	// IMP=0x00000000004dac38
- (_Bool)_executeWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000004da848
- (_Bool)_executeStatement:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004da782
- (_Bool)_close;	// IMP=0x00000000004da614
- (_Bool)executeWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000004da602
@property(readonly, copy, nonatomic) NSError *currentError;
- (_Bool)truncate;	// IMP=0x00000000004da549
- (id)prepareStatement:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004da413
- (void)performTransaction:(CDUnknownBlockType)arg1;	// IMP=0x00000000004da319
- (_Bool)openWithError:(id *)arg1;	// IMP=0x00000000004da307
@property(readonly, nonatomic) long long lastChangeCount;
- (_Bool)finalizePreparedStatement:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004da1d0
- (_Bool)executeStatement:(id)arg1 error:(id *)arg2 bindings:(CDUnknownBlockType)arg3;	// IMP=0x00000000004da035
- (_Bool)executeStatement:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004da020
- (void)executeQuery:(id)arg1 withResults:(CDUnknownBlockType)arg2;	// IMP=0x00000000004d9e86
- (_Bool)executePreparedStatement:(id)arg1 error:(id *)arg2 bindings:(CDUnknownBlockType)arg3;	// IMP=0x00000000004d9d59
- (_Bool)executePreparedStatement:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004d9d44
- (void)executePreparedQuery:(id)arg1 withResults:(CDUnknownBlockType)arg2;	// IMP=0x00000000004d9c18
- (void)dispatchAfterTransaction:(CDUnknownBlockType)arg1;	// IMP=0x00000000004d9b6b
- (_Bool)close;	// IMP=0x00000000004d9b59
- (void)dealloc;	// IMP=0x00000000004d9b1b
- (id)initWithOptions:(id)arg1;	// IMP=0x00000000004d9a74

@end

