//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDCloudSyncShardPredicate, HDProfile, HDSharingPredicate, HDSyncIdentity, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HDCloudSyncStore : NSObject
{
    long long _syncProvenance;	// 8 = 0x8
    long long _syncEpoch;	// 16 = 0x10
    int _syncProtocolVersion;	// 24 = 0x18
    _Bool _canPush;	// 28 = 0x1c
    _Bool _syncTombstonesOnly;	// 29 = 0x1d
    NSUUID *_storeIdentifier;	// 32 = 0x20
    NSString *_ownerIdentifier;	// 40 = 0x28
    NSString *_containerIdentifier;	// 48 = 0x30
    HDSyncIdentity *_syncIdentity;	// 56 = 0x38
    HDProfile *_profile;	// 64 = 0x40
    HDCloudSyncShardPredicate *_shardPredicate;	// 72 = 0x48
    NSString *_sharingIdentifier;	// 80 = 0x50
    HDSharingPredicate *_sharingPredicate;	// 88 = 0x58
}

+ (id)createOrUpdateShardStoresForProfile:(id)arg1 throughDate:(id)arg2 syncCircleName:(id)arg3 ownerIdentifier:(id)arg4 containerIdentifier:(id)arg5 syncIdentity:(id)arg6 error:(id *)arg7;	// IMP=0x00100000004d2cb2
+ (id)shardPredicatesForProfile:(id)arg1 syncCircleName:(id)arg2 currentDate:(id)arg3 error:(id *)arg4;	// IMP=0x00100000004d29b7
+ (id)syncStoreForProfile:(id)arg1 storeIdentifier:(id)arg2 syncCircleName:(id)arg3 ownerIdentifier:(id)arg4 syncIdentity:(id)arg5 containerIdentifier:(id)arg6 error:(id *)arg7;	// IMP=0x00100000004d2074
+ (void)samplesDeletedInProfile:(id)arg1 byUser:(_Bool)arg2 intervals:(id)arg3;	// IMP=0x00100000004d1de4
- (void).cxx_destruct;	// IMP=0x00000000004d5253
@property(readonly, nonatomic) _Bool syncTombstonesOnly; // @synthesize syncTombstonesOnly=_syncTombstonesOnly;
@property(readonly, nonatomic) HDSharingPredicate *sharingPredicate; // @synthesize sharingPredicate=_sharingPredicate;
@property(readonly, copy, nonatomic) NSString *sharingIdentifier; // @synthesize sharingIdentifier=_sharingIdentifier;
@property(readonly, copy, nonatomic) HDCloudSyncShardPredicate *shardPredicate; // @synthesize shardPredicate=_shardPredicate;
@property(readonly, nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) _Bool canPush; // @synthesize canPush=_canPush;
@property(readonly, copy, nonatomic) HDSyncIdentity *syncIdentity; // @synthesize syncIdentity=_syncIdentity;
@property(readonly, copy, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property(readonly, copy, nonatomic) NSString *ownerIdentifier; // @synthesize ownerIdentifier=_ownerIdentifier;
@property(readonly, copy, nonatomic) NSUUID *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property(readonly, copy) NSString *description;
- (void)setExpectedSequenceNumber:(long long)arg1 forSyncEntityClass:(Class)arg2;	// IMP=0x00000000004d5112
- (long long)expectedSequenceNumberForSyncEntityClass:(Class)arg1;	// IMP=0x00000000004d510a
- (_Bool)shouldEnforceSequenceOrdering;	// IMP=0x00000000004d5102
- (_Bool)shouldContinueAfterAnchorValidationError:(id)arg1;	// IMP=0x00000000004d4ed9
- (_Bool)supportsSpeculativeChangesForSyncEntityClass:(Class)arg1;	// IMP=0x00000000004d4ed1
- (_Bool)enforceSyncEntityOrdering;	// IMP=0x00000000004d4ec9
- (id)orderedSyncEntities;	// IMP=0x00000000004d4bb6
- (id)primaryOrderedSyncEntities;	// IMP=0x00000000004d4b71
- (_Bool)canRecieveSyncObjectsForEntityClass:(Class)arg1;	// IMP=0x00000000004d4596
- (id)syncEntityDependenciesForSyncEntity:(Class)arg1;	// IMP=0x00000000004d44ce
- (id)syncStoreDefaultSourceBundleIdentifier;	// IMP=0x00000000004d44c1
- (id)databaseIdentifier;	// IMP=0x00000000004d4388
- (id)syncStoreIdentifier;	// IMP=0x00000000004d437a
- (long long)syncEpoch;	// IMP=0x00000000004d4370
- (long long)syncProvenance;	// IMP=0x00000000004d4366
- (_Bool)replaceFrozenAnchorMap:(id)arg1 updateDate:(id)arg2 error:(id *)arg3;	// IMP=0x00000000004d4184
- (id)persistedStateWithError:(id *)arg1;	// IMP=0x00000000004d4122
- (_Bool)persistState:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004d4070
- (id)_syncAnchorMapByStrippingBlockedEntities:(id)arg1;	// IMP=0x00000000004d3d8d
- (id)getPersistedAnchorMapWithError:(id *)arg1;	// IMP=0x00000000004d3cfb
- (_Bool)clearAllSyncAnchorsWithError:(id *)arg1;	// IMP=0x00000000004d3ca8
- (_Bool)replacePersistedAnchorMap:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004d3c24
- (_Bool)resetReceivedSyncAnchorMapWithError:(id *)arg1;	// IMP=0x00000000004d3bcc
- (id)receivedSyncAnchorMapWithError:(id *)arg1;	// IMP=0x00000000004d3b3b
@property(readonly, nonatomic) _Bool supportsRebase;
@property(readonly) long long syncStoreType;
@property(readonly) int protocolVersion;
- (id)syncStoreForTombstoneSyncOnly:(_Bool)arg1;	// IMP=0x00000000004d3ae4
- (id)syncStoreForProtocolVersion:(int)arg1;	// IMP=0x00000000004d3a37
- (id)syncStoreForEpoch:(long long)arg1;	// IMP=0x00000000004d3a0f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004d3909

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
