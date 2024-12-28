//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDMediaDestinationMessageHandler, HMMediaDestination, NSString, NSUUID;
@protocol HMDMediaDestinationsManagerDataSource, HMDMediaDestinationsManagerDelegate;

__attribute__((visibility("hidden")))
@interface HMDMediaDestinationsManager : HMFObject
{
    HMMediaDestination *_destination;	// 8 = 0x8
    HMDMediaDestinationMessageHandler *_messageHandler;	// 16 = 0x10
    id <HMDMediaDestinationsManagerDataSource> _dataSource;	// 24 = 0x18
    id <HMDMediaDestinationsManagerDelegate> _delegate;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x0010000000081d6f
+ (id)deriveAudioGroupIdentifierFromDestinations:(id)arg1;	// IMP=0x0010000000081c85
+ (unsigned long long)deriveSupportedOptionsFromDestinations:(id)arg1;	// IMP=0x0010000000081aa1
- (void).cxx_destruct;	// IMP=0x0000000000081351
@property __weak id <HMDMediaDestinationsManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak id <HMDMediaDestinationsManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) HMDMediaDestinationMessageHandler *messageHandler; // @synthesize messageHandler=_messageHandler;
@property(retain) HMMediaDestination *destination; // @synthesize destination=_destination;
- (id)logIdentifier;	// IMP=0x000000000008126a
- (id)attributeDescriptions;	// IMP=0x000000000008119e
- (id)privateDescription;	// IMP=0x000000000008118c
- (void)mediaDestinationsMessageHandler:(id)arg1 didReceiveDestinationUpdatedNotification:(id)arg2 destination:(id)arg3;	// IMP=0x000000000008101d
- (void)mediaDestinationMessageHandler:(id)arg1 didReceiveUpdateSupportedOptionsRequestMessage:(id)arg2 supportOptions:(unsigned long long)arg3;	// IMP=0x0000000000080ee0
- (void)mediaDestinationMessageHandler:(id)arg1 didReceiveUpdateAudioGroupIdentifierRequestMessage:(id)arg2 audioGroupIdentifier:(id)arg3;	// IMP=0x0000000000080da3
- (_Bool)messageHandler:(id)arg1 isReadyForIncomingMessage:(id)arg2;	// IMP=0x0000000000080d5b
- (id)messageHandler:(id)arg1 shouldRelayIncomingMessage:(id)arg2;	// IMP=0x0000000000080bd7
- (id)messageHandler:(id)arg1 deviceForOutgoingMessage:(id)arg2;	// IMP=0x0000000000080a6e
- (id)dataSourceDestinationControllerWithIdentifier:(id)arg1;	// IMP=0x0000000000080918
- (id)dataSourceTargetAccessory;	// IMP=0x00000000000807e0
- (id)dataSourceAssociatedDestinationManagers;	// IMP=0x00000000000806a8
- (id)dataSourceAssociatedDestinations;	// IMP=0x0000000000080651
- (id)mediaGroupsAggregatorMessenger;	// IMP=0x0000000000080519
- (id)defaultDestination;	// IMP=0x0000000000080468
- (id)deriveAudioDestination;	// IMP=0x0000000000080250
- (id)sendRequestsToUpdateAudioGroupIdentifier:(id)arg1;	// IMP=0x000000000007fde2
- (id)sendRequestsToUpdateSupportOptions:(unsigned long long)arg1;	// IMP=0x000000000007f962
@property(readonly) HMMediaDestination *committedDestination;
@property(readonly) NSUUID *identifier;
- (void)refreshDestination;	// IMP=0x000000000007f5bb
- (void)mergeDestination:(id)arg1;	// IMP=0x000000000007f45f
- (void)legacyRequestToUpdateAudioGroupIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000007f3d4
- (void)requestToUpdateAudioGroupIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000007f100
- (void)stageAudioGroupIdentifier:(id)arg1;	// IMP=0x000000000007ee9d
- (void)configureWithHome:(id)arg1;	// IMP=0x000000000007ed1d
- (id)initWithDestination:(id)arg1 messageHandler:(id)arg2 dataSource:(id)arg3 delegate:(id)arg4;	// IMP=0x000000000007ebf8
- (id)initWithDestination:(id)arg1 messageDispatcher:(id)arg2 notificationCenter:(id)arg3 dataSource:(id)arg4 delegate:(id)arg5;	// IMP=0x000000000007eb01

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
