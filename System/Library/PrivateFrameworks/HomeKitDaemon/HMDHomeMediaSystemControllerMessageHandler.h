//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDHome, HMFMessageDispatcher, NSString, NSUUID;
@protocol HMDFeaturesDataSource, HMDHomeMediaSystemControllerMessageHandlerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDHomeMediaSystemControllerMessageHandler : NSObject
{
    id <HMDFeaturesDataSource> _featuresDataSource;	// 8 = 0x8
    HMDHome *_home;	// 16 = 0x10
    id <HMDHomeMediaSystemControllerMessageHandlerDelegate> _delegate;	// 24 = 0x18
    HMFMessageDispatcher *_messageDispatcher;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x00100000005758b1
- (void).cxx_destruct;	// IMP=0x0000000000574e72
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property __weak id <HMDHomeMediaSystemControllerMessageHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) __weak HMDHome *home; // @synthesize home=_home;
@property(readonly) id <HMDFeaturesDataSource> featuresDataSource; // @synthesize featuresDataSource=_featuresDataSource;
- (id)logIdentifier;	// IMP=0x0000000000574da9
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSObject<OS_dispatch_queue>",?,R,N

- (id)messageDestination;	// IMP=0x0000000000574d2e
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_routeMessage:(id)arg1 localHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000057471b
- (void)_legacyHandleUpdateMediaSystem:(id)arg1;	// IMP=0x00000000005740fd
- (void)locallyUpdateMediaSystemUsingRequestMessage:(id)arg1;	// IMP=0x0000000000573798
- (void)routeUpdateMediaSystem:(id)arg1;	// IMP=0x00000000005734ff
- (void)_legacyHandleRemoveMediaSystem:(id)arg1;	// IMP=0x000000000057340e
- (void)locallyRemoveMediaSystemUsingRemoveRequestMessage:(id)arg1;	// IMP=0x0000000000572d69
- (void)routeRemoveMediaSystem:(id)arg1;	// IMP=0x0000000000572bc8
- (void)_legacyHandleAddMediaSystemWithPreProcessedMessage:(id)arg1;	// IMP=0x00000000005725ee
- (void)_legacyHandleAddMediaSystem:(id)arg1;	// IMP=0x00000000005725a7
- (id)homeUUID;	// IMP=0x0000000000572454
- (id)mediaGroupsAggregator;	// IMP=0x0000000000572301
- (id)messageRouter;	// IMP=0x00000000005721ae
- (id)unconfiguredParticipantOnboardingManager;	// IMP=0x000000000057215e
- (void)queueOnboardingForUnconfiguredParticipantWithAccessoryUUID:(id)arg1 associatedGroupIdentifier:(id)arg2;	// IMP=0x0000000000571f4a
- (id)updateParticipantWithDestinationManager:(id)arg1 associatedGroupIdentifier:(id)arg2;	// IMP=0x0000000000571e77
- (id)updateParticipantWithAccessoryUUID:(id)arg1 associatedGroupIdentifier:(id)arg2;	// IMP=0x0000000000571d71
- (void)updateParticipantWithDestinationIdentifier:(id)arg1 associatedGroupIdentifier:(id)arg2;	// IMP=0x0000000000571bab
- (void)updateParticipantWithDestinationIdentifiers:(id)arg1 associatedGroupIdentifier:(id)arg2;	// IMP=0x0000000000571b14
- (id)mediaSystemNameFromRoomWithAccessoryUUIDs:(id)arg1;	// IMP=0x00000000005718b3
- (id)stagingMediaSystemDataFromData:(id)arg1 accessoryUUIDs:(id)arg2;	// IMP=0x00000000005717ab
- (CDUnknownBlockType)updateMediaSystemCompletionBlockWithMessage:(id)arg1 data:(id)arg2 accessoryUUIDs:(id)arg3;	// IMP=0x00000000005716c4
- (id)validateConfiguredName:(id)arg1;	// IMP=0x00000000005712a7
- (id)validatePayload:(id)arg1;	// IMP=0x0000000000571245
- (id)preferredAssociatedGroupIdentifierForMediaSystemBuilderPayload:(id)arg1;	// IMP=0x0000000000570db1
- (void)locallyAddMediaSystemUsingRequestMessage:(id)arg1;	// IMP=0x0000000000570556
- (void)_logRemoveMediaSystemMetricsUsingMessage:(id)arg1;	// IMP=0x0000000000570175
- (void)_logAddMediaSystemMetricsUsingMessage:(id)arg1;	// IMP=0x000000000056fd5c
- (void)routeAddMediaSystem:(id)arg1;	// IMP=0x000000000056faaa
- (id)preProcessMediaSystemMessage:(id)arg1;	// IMP=0x000000000056f69f
- (void)_registerForMessages;	// IMP=0x000000000056f50e
- (id)initWithQueue:(id)arg1 home:(id)arg2 messageDispatcher:(id)arg3 delegate:(id)arg4 featuresDataSource:(id)arg5;	// IMP=0x000000000056f3fb
- (id)initWithQueue:(id)arg1 home:(id)arg2 messageDispatcher:(id)arg3 delegate:(id)arg4;	// IMP=0x000000000056f338

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

