//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE, UITabBarItem;

@interface _TtC5TeaUI31StatusBannerContainerController : UIViewController
{
    MISSING_TYPE *rootViewController;	// 8 = 0x8
    MISSING_TYPE *statusBannerViewController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000d3378
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000d332a
- (void)onStatusBannerTap;	// IMP=0x00000000000d2b91
@property(nonatomic, readonly) UIViewController *childViewControllerForHomeIndicatorAutoHidden;
@property(nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;
@property(nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
- (id)_hostingNavigationBar;	// IMP=0x00000000000d29dc
- (_Bool)_shouldOverlayTabBar;	// IMP=0x00000000000d298c
- (void)viewWillLayoutSubviews;	// IMP=0x00000000000d2949
- (void)viewDidLoad;	// IMP=0x00000000000d248f
- (void)loadView;	// IMP=0x00000000000d2007
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d1e7b
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000d3409
@property(nonatomic, retain) UITabBarItem *tabBarItem;
@property(nonatomic) _Bool hidesBottomBarWhenPushed;

@end
