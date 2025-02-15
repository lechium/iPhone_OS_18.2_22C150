//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface BDSSecureEngagementManagerService : NSObject
{
    MISSING_TYPE *secureDataSource;	// 8 = 0x8
    MISSING_TYPE *syncManager;	// 16 = 0x10
    MISSING_TYPE *dataManager;	// 24 = 0x18
    MISSING_TYPE *cloudKitController;	// 32 = 0x20
    MISSING_TYPE *changeTokenController;	// 40 = 0x28
    MISSING_TYPE *dataModelName;	// 48 = 0x30
    MISSING_TYPE *propertyIDKey;	// 64 = 0x40
    MISSING_TYPE *_enableCloudSync;	// 80 = 0x50
}

+ (void)deleteCloudDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00200000000c9ae0
- (void).cxx_destruct;	// IMP=0x00000000000c8320
- (id)init;	// IMP=0x00100000000c9970
- (void)getEngagementDataChangesSince:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c9730
- (void)fetchEngagementDatasIncludingDeleted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c94a0
- (void)engagementDataIncludingDeleted:(_Bool)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c9100
- (void)engagementDataForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c8e20
- (void)setEngagementDatas:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c8b90
- (void)setEngagementData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c8860
- (void)hasSaltChangedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c84e0
- (void)currentCloudSyncVersions:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c83f0
- (void)dealloc;	// IMP=0x00100000000c8280
- (id)initWithCloudDataSource:(id)arg1 cloudKitController:(id)arg2;	// IMP=0x00100000000c81b0
- (void)dissociateCloudDataFromSyncWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c99c0
- (void)syncManager:(id)arg1 failedRecordIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ca080
- (void)syncManager:(id)arg1 resolveConflictsForRecords:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c9fa0
- (void)syncManager:(id)arg1 updateSyncGenerationFromCloudData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c9ef0
- (void)syncManager:(id)arg1 removeCloudDataForIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c9c80
- (void)signalSyncToCKForSyncManager:(id)arg1;	// IMP=0x00100000000c9c30
- (void)syncManager:(id)arg1 startSyncToCKWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c9bb0
- (id)entityName;	// IMP=0x00100000000c9b40
- (void)deleteEngagementDataForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ca260

@end

