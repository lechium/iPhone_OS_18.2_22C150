//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC5TeaUI12Bootstrapper : NSObject
{
    MISSING_TYPE *mainViewControllerFactory;	// 8 = 0x8
    MISSING_TYPE *onboardingViewControllerFactory;	// 48 = 0x30
    MISSING_TYPE *onboardingViewDismissalAnimator;	// 88 = 0x58
    MISSING_TYPE *deferredPromise;	// 128 = 0x80
    MISSING_TYPE *deferringGroup;	// 136 = 0x88
    MISSING_TYPE *shouldCollapseSidebar;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x00000000001c2c0f
- (id)init;	// IMP=0x00000000001c2bc3
- (void)afterBootstrapOnQueue:(id)arg1 runBootstrapCallbackBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001c2af9
- (void)startBootstrappingWithWindow:(id)arg1 shouldOnboard:(_Bool)arg2 shouldCollapseSidebar:(_Bool)arg3;	// IMP=0x00000000001c20c3
- (void)startBootstrappingWithWindow:(id)arg1 shouldOnboard:(_Bool)arg2;	// IMP=0x00000000001c2054

@end

