//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BMSyncDatabase;

@interface BMSyncDatabaseTransactionBatcher : NSObject
{
    BMSyncDatabase *_database;	// 8 = 0x8
    unsigned long long _batchSize;	// 16 = 0x10
    unsigned long long _currentBatchCount;	// 24 = 0x18
    _Bool _transactionError;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000457c5
- (_Bool)markAllOperationsComplete;	// IMP=0x001000000004577c
- (_Bool)markOperationComplete;	// IMP=0x001000000004572d
- (_Bool)markOperationStarted;	// IMP=0x00100000000456eb
- (_Bool)_commitTransaction;	// IMP=0x001000000004566b
- (_Bool)executeOperationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000454d7
- (id)initWithDatabase:(id)arg1 transcationBatchSize:(unsigned long long)arg2;	// IMP=0x0010000000045460

@end

