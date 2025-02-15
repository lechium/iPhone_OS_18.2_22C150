//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BCCloudDataManager, BCCloudDataSource, BCCloudDataSyncManager, NSString;

@interface BCCloudSecureUserDataManager : NSObject
{
    _Bool _enableCloudSync;	// 8 = 0x8
    BCCloudDataSource *_secureDataSource;	// 16 = 0x10
    BCCloudDataSyncManager *_syncManager;	// 24 = 0x18
    BCCloudDataManager *_dataManager;	// 32 = 0x20
}

+ (void)deleteCloudDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x002000000006433e
- (void).cxx_destruct;	// IMP=0x0020000000065ef6
@property(retain, nonatomic) BCCloudDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(retain, nonatomic) BCCloudDataSyncManager *syncManager; // @synthesize syncManager=_syncManager;
@property(retain, nonatomic) BCCloudDataSource *secureDataSource; // @synthesize secureDataSource=_secureDataSource;
@property(nonatomic) _Bool enableCloudSync; // @synthesize enableCloudSync=_enableCloudSync;
- (void)setUserDataValue:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000065c6e
- (void)userDataValueForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000065b47
- (void)resolvedUserDataValueForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000065950
- (void)getUserDataChangesSince:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000658b6
- (void)fetchUserDataIncludingDeleted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000065841
- (void)userDatumIncludingDeleted:(_Bool)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000065659
- (void)userDatumForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000654af
- (void)deleteUserDatumForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000653f3
- (void)updateSyncGenerationFromCloudData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000065303
- (void)removeUserDataForSaltedHashedRecordIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000651cc
- (void)setUserData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000650dc
- (void)setUserDatum:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000064ff3
- (void)currentCloudSyncVersions:(CDUnknownBlockType)arg1;	// IMP=0x0010000000064f8a
- (void)setEnableSecureUserDataCloudSync:(_Bool)arg1;	// IMP=0x0010000000064d61
- (id)entityName;	// IMP=0x0010000000064d54
- (void)syncManager:(id)arg1 failedRecordIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000064be4
- (void)syncManager:(id)arg1 resolveConflictsForRecords:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000064a74
- (void)syncManager:(id)arg1 updateSyncGenerationFromCloudData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000064801
- (void)syncManager:(id)arg1 removeCloudDataForIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000006459d
- (void)signalSyncToCKForSyncManager:(id)arg1;	// IMP=0x00100000000644bb
- (void)syncManager:(id)arg1 startSyncToCKWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000006440f
- (void)dissociateCloudDataFromSyncWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000642d5
- (void)hasSaltChangedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000006426c
- (id)initWithCloudDataSource:(id)arg1 cloudKitController:(id)arg2;	// IMP=0x0010000000064091

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

