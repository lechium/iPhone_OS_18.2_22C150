//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC7NewsUI226MagazineFeedViewController : UIViewController
{
    MISSING_TYPE *styler;	// 8 = 0x8
    MISSING_TYPE *eventHandler;	// 48 = 0x30
    MISSING_TYPE *blueprintViewController;	// 64 = 0x40
    MISSING_TYPE *blueprintSelectionProvider;	// 72 = 0x48
    MISSING_TYPE *blueprintLayoutProvider;	// 88 = 0x58
    MISSING_TYPE *offlineAlertControllerFactory;	// 96 = 0x60
    MISSING_TYPE *feedPaywallConfigFactory;	// 136 = 0x88
    MISSING_TYPE *sharingActivityProviderFactory;	// 176 = 0xb0
    MISSING_TYPE *bundlePurchasePrewarmer;	// 184 = 0xb8
    MISSING_TYPE *commandContainer;	// 200 = 0xc8
    MISSING_TYPE *newsActivityManager;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x00000000002f9900
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000002f98a0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002f9850
- (void)offlineStatusBannerRequestedForceReload;	// IMP=0x00000000002faa60
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000002fa9c0
- (void)viewWillLayoutSubviews;	// IMP=0x00000000002fa8b0
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000002fa7f0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000002fa780
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000002fa750
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000002fa5c0
- (void)viewDidLoad;	// IMP=0x00000000002fa1c0
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;	// IMP=0x00000000002fbca0
- (void)startTraversingWithDirection:(long long)arg1;	// IMP=0x00000000002fbe90
- (void)deselect;	// IMP=0x00000000002fbed0
- (void)scrollToTopAnimated:(_Bool)arg1;	// IMP=0x00000000002fc460

@end
