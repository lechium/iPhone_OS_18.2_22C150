//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC7NewsUI230OfflineStatusBannerDataManager : NSObject
{
    MISSING_TYPE *observers;	// 8 = 0x8
    MISSING_TYPE *offlineManager;	// 16 = 0x10
    MISSING_TYPE *offlineFeatures;	// 24 = 0x18
    MISSING_TYPE *bundleSubscriptionManager;	// 64 = 0x40
    MISSING_TYPE *appConfigManager;	// 72 = 0x48
    MISSING_TYPE *debouncer;	// 80 = 0x50
    MISSING_TYPE *feedModeState;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000000f88530
- (id)init;	// IMP=0x0000000000f89730
- (void)triggerAction;	// IMP=0x0000000000f88600
- (void)dealloc;	// IMP=0x0000000000f884b0
- (void)bundleSubscriptionDidExpire:(id)arg1;	// IMP=0x0000000000f89810
- (void)bundleSubscriptionDidSubscribe:(id)arg1;	// IMP=0x0000000000f89800
- (void)configurationManager:(id)arg1 appConfigurationDidChange:(id)arg2;	// IMP=0x0000000000f89880

@end
