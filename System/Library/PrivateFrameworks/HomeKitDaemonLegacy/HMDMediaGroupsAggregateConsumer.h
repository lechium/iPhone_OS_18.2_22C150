//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDMediaGroupSetupMetricDispatcher, HMDMediaGroupsAggregateData, HMDMediaGroupsStageManager, NSArray, NSNotificationCenter, NSObject, NSString, NSUUID;
@protocol HMDMediaGroupsAggregateConsumerDelegate, HMESubscriptionProviding, OS_os_log;

__attribute__((visibility("hidden")))
@interface HMDMediaGroupsAggregateConsumer : HMFObject
{
    NSObject<OS_os_log> *_logger;	// 8 = 0x8
    id <HMDMediaGroupsAggregateConsumerDelegate> _delegate;	// 16 = 0x10
    NSUUID *_identifier;	// 24 = 0x18
    id <HMESubscriptionProviding> _subscriptionProvider;	// 32 = 0x20
    NSNotificationCenter *_notificationCenter;	// 40 = 0x28
    HMDMediaGroupsStageManager *_stageManager;	// 48 = 0x30
    HMDMediaGroupSetupMetricDispatcher *_mediaSystemSetupMetricDispatcher;	// 56 = 0x38
    HMDMediaGroupSetupMetricDispatcher *_homeTheaterSetupMetricDispatcher;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x00100000005179de
- (void).cxx_destruct;	// IMP=0x0000000000517353
@property __weak HMDMediaGroupSetupMetricDispatcher *homeTheaterSetupMetricDispatcher; // @synthesize homeTheaterSetupMetricDispatcher=_homeTheaterSetupMetricDispatcher;
@property __weak HMDMediaGroupSetupMetricDispatcher *mediaSystemSetupMetricDispatcher; // @synthesize mediaSystemSetupMetricDispatcher=_mediaSystemSetupMetricDispatcher;
@property(readonly) HMDMediaGroupsStageManager *stageManager; // @synthesize stageManager=_stageManager;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) id <HMESubscriptionProviding> subscriptionProvider; // @synthesize subscriptionProvider=_subscriptionProvider;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property __weak id <HMDMediaGroupsAggregateConsumerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)logIdentifier;	// IMP=0x0000000000517224
- (void)didUpdateAggregateDataForMediaGroupsStageManager:(id)arg1;	// IMP=0x0000000000517212
- (id)mediaSystemDataWithIdentifier:(id)arg1;	// IMP=0x00000000005171bb
- (id)allMediaSystemData;	// IMP=0x000000000051713a
- (id)groupWithIdentifier:(id)arg1;	// IMP=0x000000000051704f
@property(readonly, copy) NSArray *groups;
- (id)destinationWithParentIdentifier:(id)arg1;	// IMP=0x0000000000516f14
- (id)destinationWithIdentifier:(id)arg1;	// IMP=0x0000000000516e29
- (id)destinationControllerDataWithParentIdentifier:(id)arg1;	// IMP=0x0000000000516d3e
- (_Bool)isAggregateTopic:(id)arg1;	// IMP=0x00000000005169fd
- (void)didReceiveCachedEvent:(id)arg1 topic:(id)arg2 source:(id)arg3;	// IMP=0x00000000005169eb
- (void)didReceiveEvent:(id)arg1 topic:(id)arg2;	// IMP=0x0000000000516790
- (void)notifyOfUpdatedAggregateData;	// IMP=0x000000000051658e
- (void)unstageNullDestinationForCurrentDestinationController;	// IMP=0x0000000000516551
- (void)stageNullDestinationForCurrentDestinationControllerIdentifier:(id)arg1;	// IMP=0x00000000005164e8
- (void)startSubscriptionForHome:(id)arg1;	// IMP=0x0000000000516322
- (void)stopSubscription;	// IMP=0x00000000005162a1
- (void)unconfigure;	// IMP=0x00000000005161b0
- (void)configureWithHome:(id)arg1;	// IMP=0x000000000051601a
@property(readonly) HMDMediaGroupsAggregateData *aggregationData;
- (void)_trackHomeTheaterMetricsInAggregateData:(id)arg1;	// IMP=0x0000000000515ae6
- (void)_trackMediaSystemMetricsInAggregateData:(id)arg1;	// IMP=0x00000000005157f7
- (void)commitAggregationData:(id)arg1;	// IMP=0x000000000051569f
- (id)initWithIdentifier:(id)arg1 subscriptionProvider:(id)arg2 notificationCenter:(id)arg3 stageManager:(id)arg4;	// IMP=0x0000000000515522

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

