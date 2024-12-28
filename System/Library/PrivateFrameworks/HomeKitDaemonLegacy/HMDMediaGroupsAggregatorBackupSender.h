//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSMutableDictionary, NSString, NSUUID;
@protocol HMDMediaGroupsAggregateBackupMessageTimerProvider, HMDMediaGroupsAggregatorBackupSenderDataSource;

__attribute__((visibility("hidden")))
@interface HMDMediaGroupsAggregatorBackupSender : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_backupTimers;	// 16 = 0x10
    id <HMDMediaGroupsAggregatorBackupSenderDataSource> _dataSource;	// 24 = 0x18
    id <HMDMediaGroupsAggregateBackupMessageTimerProvider> _backupTimerProvider;	// 32 = 0x20
    NSUUID *_identifier;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x00100000003c89ba
- (void).cxx_destruct;	// IMP=0x00000000003c87bb
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property __weak id <HMDMediaGroupsAggregateBackupMessageTimerProvider> backupTimerProvider; // @synthesize backupTimerProvider=_backupTimerProvider;
@property __weak id <HMDMediaGroupsAggregatorBackupSenderDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)logIdentifier;	// IMP=0x00000000003c86fb
- (id)mediaGroupsAggregateBackupMessageTimerWithParticipantAccessoryUUID:(id)arg1;	// IMP=0x00000000003c86ae
- (void)didFireTimerForMediaGroupsAggregateBackupMessageTimer:(id)arg1;	// IMP=0x00000000003c84e0
- (void)markAttemptForParticipantAccessoryUUID:(id)arg1 withMessageIdentifier:(id)arg2;	// IMP=0x00000000003c837c
- (void)startBackupTimerWithParticipantAccessoryUUID:(id)arg1 dueToFailedMessageIdentifier:(id)arg2;	// IMP=0x00000000003c82cd
- (void)removeBackupTimerWithParticipantAccessoryUUID:(id)arg1;	// IMP=0x00000000003c8257
- (id)backupTimerForParticipantAccessoryUUID:(id)arg1;	// IMP=0x00000000003c81ce
- (void)setBackUpTimer:(id)arg1;	// IMP=0x00000000003c812c
- (void)createNewBackupTimerForParticipantAccessoryUUID:(id)arg1;	// IMP=0x00000000003c7fb6
- (id)receiverForParticipantAccessoryUUID:(id)arg1;	// IMP=0x00000000003c7e55
- (id)routerParticipantAccessoryUUID:(id)arg1;	// IMP=0x00000000003c7cf4
- (id)backupGroupsForParticipantAccessoryUUID:(id)arg1;	// IMP=0x00000000003c7b93
- (void)locallyRouteGroupsBackupDataMessage:(id)arg1 toParticipantAccessoryUUID:(id)arg2;	// IMP=0x00000000003c79ee
- (void)routeBackedUpGroupsMessage:(id)arg1 toParticipantAccessoryUUID:(id)arg2;	// IMP=0x00000000003c76dd
- (void)clearCachedDataForParticipantAccessoryUUID:(id)arg1;	// IMP=0x00000000003c7667
- (void)clearCachedData;	// IMP=0x00000000003c75f9
- (void)_sendBackupToFirstPartyParticipantAccessoryUUID:(id)arg1 backupGroups:(id)arg2;	// IMP=0x00000000003c737b
- (void)_sendBackupToParticipantAccessoryUUID:(id)arg1;	// IMP=0x00000000003c717a
- (void)sendBackupToParticipantAccessoryUUID:(id)arg1;	// IMP=0x00000000003c7125
- (id)initWithIdentifier:(id)arg1 backupTimerProvider:(id)arg2;	// IMP=0x00000000003c7019
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000000003c7004

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
