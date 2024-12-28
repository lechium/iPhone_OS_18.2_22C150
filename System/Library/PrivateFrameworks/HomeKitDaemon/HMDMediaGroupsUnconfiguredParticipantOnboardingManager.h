//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, NSUUID;
@protocol HMDMediaGroupsUnconfiguredParticipantOnboardingManagerDataSource;

__attribute__((visibility("hidden")))
@interface HMDMediaGroupsUnconfiguredParticipantOnboardingManager : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_queuedAssociatedGroupIdentifiers;	// 16 = 0x10
    id <HMDMediaGroupsUnconfiguredParticipantOnboardingManagerDataSource> _dataSource;	// 24 = 0x18
    NSUUID *_identifier;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x0010000000caaeb1
- (void).cxx_destruct;	// IMP=0x0000000000caacec
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property __weak id <HMDMediaGroupsUnconfiguredParticipantOnboardingManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)logIdentifier;	// IMP=0x0000000000caac61
- (id)mediaDestinationManagerWithParticipantAccessoryUUID:(id)arg1;	// IMP=0x0000000000caab00
- (id)dequeuedAssociatedGroupIdentifierForParticipantAccessoryUUID:(id)arg1;	// IMP=0x0000000000caaa6c
- (id)queuedParticipantAccessoryUUIDs;	// IMP=0x0000000000caaa11
- (void)setQueuedAssociatedGroupIdentifier:(id)arg1 forParticipantAccessoryUUID:(id)arg2;	// IMP=0x0000000000caa988
- (void)handleMediaGroupsAggregateConsumerUpdatedAggregateDataNotification:(id)arg1;	// IMP=0x0000000000caa976
- (void)attemptOnboardingForParticipantAccessoryUUID:(id)arg1;	// IMP=0x0000000000caa75c
- (void)dequeueAvailableOnboadedParticipants;	// IMP=0x0000000000caa5f0
- (void)queueOnboardingParticipantWithAccessoryUUID:(id)arg1 withAssociatedGroupIdentifier:(id)arg2;	// IMP=0x0000000000caa4a7
- (void)configureWithNotificationCenter:(id)arg1;	// IMP=0x0000000000caa47b
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000caa3c9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
