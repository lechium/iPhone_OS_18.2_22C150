//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC10ChronoCore20ChronoServicesServer : NSObject
{
    MISSING_TYPE *timelineService;	// 8 = 0x8
    MISSING_TYPE *taskService;	// 48 = 0x30
    MISSING_TYPE *descriptorService;	// 88 = 0x58
    MISSING_TYPE *deviceService;	// 128 = 0x80
    MISSING_TYPE *extensionService;	// 168 = 0xa8
    MISSING_TYPE *widgetHostService;	// 208 = 0xd0
    MISSING_TYPE *keybagStateProvider;	// 248 = 0xf8
    MISSING_TYPE *powerlogSuggestionService;	// 288 = 0x120
    MISSING_TYPE *keepAliveAssertionProvider;	// 328 = 0x148
    MISSING_TYPE *duetService;	// 368 = 0x170
    MISSING_TYPE *stuckPairedRelationshipRepairer;	// 408 = 0x198
    MISSING_TYPE *widgetRelevanceService;	// 448 = 0x1c0
    MISSING_TYPE *remoteActivityLaunchService;	// 488 = 0x1e8
    MISSING_TYPE *activityService;	// 528 = 0x210
    MISSING_TYPE *iconStore;	// 568 = 0x238
    MISSING_TYPE *connectionListener;	// 608 = 0x260
    MISSING_TYPE *subscriptions;	// 616 = 0x268
    MISSING_TYPE *queue;	// 624 = 0x270
    MISSING_TYPE *_clientsSetLock_clients;	// 632 = 0x278
    MISSING_TYPE *_clientsSetLock;	// 640 = 0x280
    MISSING_TYPE *initialExtensionDiscoveryCompleteSubscription;	// 648 = 0x288
}

- (void).cxx_destruct;	// IMP=0x0000000000121ce0
- (id)init;	// IMP=0x0000000000129990
- (void)dealloc;	// IMP=0x0000000000121c70
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;	// IMP=0x000000000012a610

@end

