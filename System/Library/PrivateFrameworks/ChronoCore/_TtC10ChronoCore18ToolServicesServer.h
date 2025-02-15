//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC10ChronoCore18ToolServicesServer : NSObject
{
    MISSING_TYPE *timelineService;	// 8 = 0x8
    MISSING_TYPE *taskService;	// 48 = 0x30
    MISSING_TYPE *extensionService;	// 88 = 0x58
    MISSING_TYPE *descriptorService;	// 128 = 0x80
    MISSING_TYPE *stateCaptureService;	// 168 = 0xa8
    MISSING_TYPE *widgetHostService;	// 208 = 0xd0
    MISSING_TYPE *controlHostService;	// 248 = 0xf8
    MISSING_TYPE *liveControlService;	// 288 = 0x120
    MISSING_TYPE *liveControlCacheManager;	// 328 = 0x148
    MISSING_TYPE *livePlaceholderControlCacheManager;	// 336 = 0x150
    MISSING_TYPE *previewControlService;	// 344 = 0x158
    MISSING_TYPE *previewControlCacheManager;	// 384 = 0x180
    MISSING_TYPE *timelineCacheManager;	// 392 = 0x188
    MISSING_TYPE *placeholderCacheManager;	// 400 = 0x190
    MISSING_TYPE *snapshotCacheManager;	// 408 = 0x198
    MISSING_TYPE *keybagStateProvider;	// 416 = 0x1a0
    MISSING_TYPE *rendererSessionProvider;	// 456 = 0x1c8
    MISSING_TYPE *subscriptions;	// 496 = 0x1f0
    MISSING_TYPE *connectionListener;	// 504 = 0x1f8
    MISSING_TYPE *clientConnections;	// 512 = 0x200
    MISSING_TYPE *queue;	// 520 = 0x208
    MISSING_TYPE *activityService;	// 528 = 0x210
}

- (void).cxx_destruct;	// IMP=0x00000000000a7310
- (id)init;	// IMP=0x00000000000a72b0
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;	// IMP=0x00000000000a7ed0
- (void)runMigrationReaper;	// IMP=0x00000000000adb70
- (void)fetchWidgetSceneInfoWithCompletion:(void (^)(NSData *, NSError *))arg1;	// IMP=0x00000000000ad8b0
- (void)runReaper;	// IMP=0x00000000000ad890
- (void)contentURLForActivityID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ad6a0
- (void)reloadTimelinesOfKind:(id)arg1 containedIn:(id)arg2 reason:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000acc10
- (void)reloadControlsOfKind:(id)arg1 containedIn:(id)arg2 reason:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000ac600
- (void)timelineForWidgetKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000abe90
- (void)widgetsWithTimelines:(CDUnknownBlockType)arg1;	// IMP=0x00000000000abc00
- (void)extensionInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000abaf0
- (void)extensionInfoForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ab7b0
- (void)fetchStateForItemWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000aa0b0
- (void)fetchStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a9b20
- (void)listStateCaptureIdentifiersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a9490
- (void)allCachedSnapshotURLsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a9320
- (void)expireLocationGracePeriods;	// IMP=0x00000000000a9020
- (void)resetCaches:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a8d20
- (void)refreshDescriptorsForExtensionBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a8940

@end

