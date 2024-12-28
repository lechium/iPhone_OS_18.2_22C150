//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC10ChronoCoreP33_2559684BF6D015C60DA4DF344EC1B12920ChronoServicesClient : NSObject
{
    MISSING_TYPE *_server;	// 8 = 0x8
    MISSING_TYPE *timelineService;	// 16 = 0x10
    MISSING_TYPE *taskService;	// 56 = 0x38
    MISSING_TYPE *descriptorService;	// 96 = 0x60
    MISSING_TYPE *enablementProvider;	// 136 = 0x88
    MISSING_TYPE *deviceService;	// 176 = 0xb0
    MISSING_TYPE *extensionService;	// 216 = 0xd8
    MISSING_TYPE *widgetHostService;	// 256 = 0x100
    MISSING_TYPE *keybagStateProvider;	// 296 = 0x128
    MISSING_TYPE *powerlogSuggestionService;	// 336 = 0x150
    MISSING_TYPE *stuckPairedRelationshipRepairer;	// 376 = 0x178
    MISSING_TYPE *keepAliveAssertionProvider;	// 416 = 0x1a0
    MISSING_TYPE *widgetRelevanceService;	// 456 = 0x1c8
    MISSING_TYPE *remoteActivityLaunchService;	// 496 = 0x1f0
    MISSING_TYPE *activityService;	// 536 = 0x218
    MISSING_TYPE *_duetServiceQueue_duetService;	// 576 = 0x240
    MISSING_TYPE *_queue;	// 616 = 0x268
    MISSING_TYPE *_queue_connection;	// 624 = 0x270
    MISSING_TYPE *_queue_widgetHostIdentities;	// 632 = 0x278
    MISSING_TYPE *_queue_widgetFetchSubscriptions;	// 640 = 0x280
    MISSING_TYPE *_queue_widgetTimelineLoadSubscriptions;	// 648 = 0x288
    MISSING_TYPE *_queue_widgetTimelineLoadActionResponders;	// 656 = 0x290
    MISSING_TYPE *_queue_widgetLifetimeAssertionResponders;	// 664 = 0x298
    MISSING_TYPE *_queue_serviceAssertionIDs;	// 672 = 0x2a0
    MISSING_TYPE *_queue_serviceAssertions;	// 680 = 0x2a8
    MISSING_TYPE *_queue_providerOptions;	// 688 = 0x2b0
    MISSING_TYPE *_queue_invalidated;	// 696 = 0x2b8
    MISSING_TYPE *subscriptions;	// 704 = 0x2c0
}

- (void).cxx_destruct;	// IMP=0x000000000012bbc0
- (id)init;	// IMP=0x000000000012bb60
- (void)invalidateRelevancesOfKind:(id)arg1 inBundle:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000135e10
- (void)reloadWidgetRelevanceForExtensionIdentifier:(id)arg1 kind:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000135d60
- (id)acquireKeepAliveAssertionForExtensionBundleIdentifier:(id)arg1 reason:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000135c90
- (void)subscribeToActivityPayloadUpdates:(CDUnknownBlockType)arg1;	// IMP=0x0000000000135380
- (void)subscribeToWidgetRelevance:(CDUnknownBlockType)arg1;	// IMP=0x0000000000135360
- (void)subscribeToTimelineEntryRelevance:(CDUnknownBlockType)arg1;	// IMP=0x0000000000135340
- (void)subscribeToRemoteDevices:(CDUnknownBlockType)arg1;	// IMP=0x0000000000135320
- (_Bool)remoteWidgetsEnabled;	// IMP=0x00000000001352f0
- (_Bool)reloadRemoteWidgetsWithError:(id *)arg1;	// IMP=0x0000000000135180
- (_Bool)toggleRemoteWidgetsEnabled:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000134ee0
- (_Bool)unpairDeviceWith:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000134e40
- (void)pairDeviceWith:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000134c40
- (id)allPairedDevices;	// IMP=0x0000000000134c10
- (id)_URLSessionDidCompleteForExtensionWithBundleIdentifier:(id)arg1 info:(id)arg2;	// IMP=0x0000000000134a60
- (void)subscribeToExtensionsWithProviderOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001332d0
- (void)acquireLifetimeAssertionForWidget:(id)arg1 metrics:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000133230
- (void)loadSuggestedWidget:(id)arg1 metrics:(id)arg2 stackIdentifier:(id)arg3 reason:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000132dd0
- (void)suggestionBudgetsForStackIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000130d50
- (void)launchLiveActivityWithID:(id)arg1 deviceID:(id)arg2 url:(id)arg3;	// IMP=0x0000000000130b70
- (void)getAppIntentsXPCListenerEndpointForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000130800
- (void)allWidgetConfigurationsByHostWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000012fdd0
- (void)setActivationState:(id)arg1 forWidgetHostWithIdentifier:(id)arg2;	// IMP=0x000000000012ea10
- (void)setWidgetConfiguration:(id)arg1 activationState:(id)arg2 forWidgetHostWithIdentifier:(id)arg3;	// IMP=0x000000000012e460
- (void)removeWidgetHostWithIdentifier:(id)arg1;	// IMP=0x000000000012de00
- (id)widgetEnvironmentDataForBundleIdentifier:(id)arg1;	// IMP=0x000000000012d860
- (void)reloadTimeline:(id)arg1 error:(id *)arg2;	// IMP=0x000000000012d0d0
- (void)fetchDescriptorsForContainerBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000012c9f0
- (void)reloadDescriptorsForContainerBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000012c750
- (void)performDescriptorDiscoveryForHost:(id)arg1;	// IMP=0x000000000012c5e0
- (void)modifyDescriptorEnablement:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000012c200
- (void)retryStuckRemotePairings;	// IMP=0x000000000012bf70
- (void)flushPowerlog;	// IMP=0x000000000012be30

@end
