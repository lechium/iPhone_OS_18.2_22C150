//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI23StackTemplateController
{
    MISSING_TYPE *supportsTabBarChildControllerBehaviours;	// 8949648 = 0x888f90
    MISSING_TYPE *supportsTabBarChildContentInsets;	// 1238892353 = 0x49d7ff41
    MISSING_TYPE *autohighlightDetails;	// 1207965062 = 0x48001586
    MISSING_TYPE *showcasePercentageObserver;	// 1224785868 = 0x4900bfcc
    MISSING_TYPE *lastShowcasePercentage;	// 114375 = 0x1bec7
    MISSING_TYPE *notificationCenter;	// 2214641612 = 0x8400bfcc
    MISSING_TYPE *hasEnabledShowcasing;	// 1207959552 = 0x48000000
    MISSING_TYPE *statusBarStyle;	// 2337014013 = 0x8b4c00fd
    MISSING_TYPE *navBarGradientView;	// 4018752512 = 0xef894c00
    MISSING_TYPE *statusBarGradientView;	// 1609090953 = 0x5fe8c789
    MISSING_TYPE *accountMessageViewModel;	// 1285578121 = 0x4ca05d89
    MISSING_TYPE *accountMessageViewController;	// 898320581 = 0x358b48c5
    MISSING_TYPE *viewIsVisibleForAccountMessage;	// 1105168712 = 0x41df8948
    MISSING_TYPE *pastFirstViewDidAppear;	// 1166756039 = 0x458b48c7
    MISSING_TYPE *accountMessageAdditionTargetOffset;	// 898320416 = 0x358b4820
    MISSING_TYPE *accountMessageNeedsDeferredAnimationIn;	// 1222049601 = 0x48d6ff41
    MISSING_TYPE *accountMessageDismissalTargetOffset;	// 1224785868 = 0x4900bfcc
    MISSING_TYPE *targetParentController;	// 3342970949 = 0xc741b045
    MISSING_TYPE *didEnqueueImpressionMetrics;	// 1753828616 = 0x68894d08
    MISSING_TYPE *waitingForPresentationDismissal;	// 134220864 = 0x8000c40
    MISSING_TYPE *pagePerformanceProvider;	// 1 = 0x1
}

- (void).cxx_destruct;	// IMP=0x0000000000972cc2
- (void)dealloc;	// IMP=0x0000000000972ca5
- (void)vuiScrollViewDidScroll:(id)arg1;	// IMP=0x000000000097286f
- (void)vuiScrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(struct CGPoint *)arg3;	// IMP=0x0000000000971567
- (_Bool)shouldRubberbandElementWithCategory:(unsigned long long)arg1 in:(id)arg2 at:(id)arg3;	// IMP=0x00000000009711b6
- (_Bool)vuiScrollViewShouldScrollToTop:(id)arg1;	// IMP=0x00000000009710d0
- (void)vuiScrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x000000000097102f
- (void)willEnterForeground:(id)arg1;	// IMP=0x000000000096f670
@property(nonatomic, readonly) long long preferredStatusBarUpdateAnimation;
@property(nonatomic, readonly) long long preferredStatusBarStyle;
- (void)vui_didMoveToParentViewController:(id)arg1;	// IMP=0x000000000096f484
- (void)vui_willMoveToParentViewController:(id)arg1;	// IMP=0x000000000096f3f2
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000096f34f
- (void)vui_viewDidLayoutSubviews;	// IMP=0x000000000096f1ea
- (void)vui_viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000096d95c
- (void)vui_viewDidAppear:(_Bool)arg1;	// IMP=0x000000000096d793
- (void)vui_viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000096d50c
- (void)vui_viewWillAppear:(_Bool)arg1;	// IMP=0x000000000096d4a4
- (void)vui_viewDidLoad;	// IMP=0x000000000096bb75
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000096b0bf

@end
