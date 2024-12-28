//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSArray, UIViewController;
@protocol UIActivityItemsConfigurationReading;

@interface _TtC8VideosUI22DocumentViewController
{
    MISSING_TYPE *viewWillAppearAfterTabSwitch;	// 18 = 0x12
    MISSING_TYPE *reportImpressionsInViewWillDisappear;	// 19 = 0x13
    MISSING_TYPE *templateViewController;	// 24 = 0x18
    MISSING_TYPE *hasViewAppeared;	// 32 = 0x20
    MISSING_TYPE *deferLoadingTemplateController;	// 33 = 0x21
    MISSING_TYPE *alwaysShowTemplateWithAnimation;	// 34 = 0x22
    MISSING_TYPE *pendingDeeplinkURL;	// 2303219168 = 0x894855e0
    MISSING_TYPE *bubbletipOverlayController;	// 24 = 0x18
    MISSING_TYPE *documentDelegate;	// 65536 = 0x10000
    MISSING_TYPE *ignoreDidMoveToNilParent;	// 1937330991 = 0x7379532f
    MISSING_TYPE *rebaseIdentifier;	// 1919052108 = 0x7262694c
    MISSING_TYPE *isInTabBarMode;	// 1986622032 = 0x76697250
    MISSING_TYPE *isTabBarChild;	// 1701667186 = 0x656d6172
    MISSING_TYPE *loadingViewManager;	// 1581342017 = 0x5e415d41
    MISSING_TYPE *documentDidSetHandler;	// 1633103731 = 0x61572f73
    MISSING_TYPE *document;	// 1265922921 = 0x4b747369
    MISSING_TYPE *isTransitioning;	// 1096106326 = 0x41554156
    MISSING_TYPE *navBarOpacity;	// 2303261577 = 0x8948fb89
    MISSING_TYPE *navBarTintColor;	// 1224797545 = 0x4900ed69
    MISSING_TYPE *navBarPrefersLargeTitles;	// 4275849989 = 0xfedc4b05
    MISSING_TYPE *navBarTitleView;	// 1209038080 = 0x48107500
    MISSING_TYPE *navBarTitle;	// 2303197437 = 0x894800fd
    MISSING_TYPE *navBarCachedWidth;	// 1275129192 = 0x4c00ed68
    MISSING_TYPE *needsConfigurationWhenMovesToParent;	// 2336882942 = 0x8b4a00fe
    MISSING_TYPE *viewWillAppearButNotDidAppear;	// 4248247101 = 0xfd371b3d
}

- (void).cxx_destruct;	// IMP=0x0000000000a74cc2
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000a7b00e
- (void)scrollToTopWithAnimated:(_Bool)arg1 needsFocusUpdate:(_Bool)arg2;	// IMP=0x0000000000a7aed2
- (_Bool)handleDeeplink:(id)arg1;	// IMP=0x0000000000a7ade5
- (id)customAnimatorForNavigationControllerOperation:(long long)arg1 fromViewController:(id)arg2;	// IMP=0x0000000000a77969
- (id)customAnimatorForNavigationControllerOperation:(long long)arg1 toViewController:(id)arg2;	// IMP=0x0000000000a77898
@property(nonatomic, readonly) _Bool vuiShouldAutomaticallyForwardAppearanceMethods;
@property(nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
@property(nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;
@property(nonatomic, readonly) long long preferredStatusBarStyle;
- (void)vui_didMoveToParentViewController:(id)arg1;	// IMP=0x0000000000a77345
- (void)vui_viewDidLayoutSubviews;	// IMP=0x0000000000a766ff
- (void)vui_viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000a75fc9
- (void)vui_viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000a75e37
- (void)vui_viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000a75c33
- (void)didEnterBackground:(id)arg1;	// IMP=0x0000000000a756a6
- (void)willTerminate:(id)arg1;	// IMP=0x0000000000a755b1
- (void)willEnterForeground:(id)arg1;	// IMP=0x0000000000a75532
- (void)vui_viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000a75463
- (void)dealloc;	// IMP=0x0000000000a74ca5
- (void)vui_viewDidLoad;	// IMP=0x0000000000a74b47
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000a748cb
@property(nonatomic, retain) id <UIActivityItemsConfigurationReading> activityItemsConfiguration;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000a7b3a4
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000a7b335
- (void)playbackUIChanged:(id)arg1;	// IMP=0x0000000000a7d66e
- (void)messageViewController:(id)arg1 enqueueEventWithFields:(id)arg2 inTopic:(id)arg3;	// IMP=0x0000000000a7e3c3
- (void)messageViewController:(id)arg1 didSelectActionWithDialogResult:(id)arg2;	// IMP=0x0000000000a7e2dd
- (void)messageViewController:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000000a7db31
- (void)messageViewController:(id)arg1 didUpdateSize:(struct CGSize)arg2;	// IMP=0x0000000000a7da00
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;	// IMP=0x0000000000a7e486
- (_Bool)deeplinkURLWasHandled:(id)arg1;	// IMP=0x0000000000a7e637

@end
