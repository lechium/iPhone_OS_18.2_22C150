//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecordID, MISSING_TYPE;

@interface _TtC14bookdatastored21BDSSyncEnginePipeline : NSObject
{
    MISSING_TYPE *kChangedRecordsBatchSize;	// 8 = 0x8
    MISSING_TYPE *observer;	// 16 = 0x10
    MISSING_TYPE *delegate;	// 24 = 0x18
    MISSING_TYPE *dataMapper;	// 32 = 0x20
    MISSING_TYPE *subscribers;	// 40 = 0x28
    MISSING_TYPE *recordType;	// 48 = 0x30
    MISSING_TYPE *zoneID;	// 64 = 0x40
    MISSING_TYPE *logger;	// 0 = 0x0
    MISSING_TYPE *workQueue;	// 0 = 0x0
    MISSING_TYPE *stateQueue;	// 0 = 0x0
    MISSING_TYPE *_hasPendingModifications;	// 0 = 0x0
    MISSING_TYPE *currentModifyBatchResponse;	// 0 = 0x0
    MISSING_TYPE *scheduleSyncBlock;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00400000000fb460
- (id)init;	// IMP=0x00100000000fb400
- (id)privacyDelegate;	// IMP=0x00100000000f4c30
- (void)fetchRecordForRecordID:(CKRecordID *)arg1 completion:(void (^)(CKRecord *))arg2;	// IMP=0x00100000000f4980
- (void)startSyncToCKWithCompletion:(void (^)(void))arg1;	// IMP=0x00100000000f46d0
- (void)signalSyncToCK;	// IMP=0x00100000000f4110
- (void)saltUpdatedWithSaltVersionIdentifier:(id)arg1;	// IMP=0x00100000000f3e30
- (id)initWithRecordType:(id)arg1 zoneName:(id)arg2 delegate:(id)arg3 dataMapper:(id)arg4;	// IMP=0x00100000000f3da0
- (id)initWithRecordType:(id)arg1 zoneName:(id)arg2 delegate:(id)arg3;	// IMP=0x00100000000f1440

@end
