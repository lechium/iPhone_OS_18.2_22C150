//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIPresentationController.h"

@class NSString, UIView, _UISearchPresentationAssistant;
@protocol _UISearchControllerPresenting;

__attribute__((visibility("hidden")))
@interface _UISearchFormSheetPresentationController : UIPresentationController
{
    _UISearchPresentationAssistant *_assistant;	// 8 = 0x8
    UIView *_wrapperView;	// 16 = 0x10
    struct CGRect finalFrameForContainerView;	// 24 = 0x18
}

@property(readonly, nonatomic) struct CGRect finalFrameForContainerView; // @synthesize finalFrameForContainerView;
@property(readonly, nonatomic) unsigned long long edgeForHidingNavigationBar;
@property(readonly, nonatomic) _Bool forceObeyNavigationBarInsets;
@property(readonly, nonatomic) _Bool animatorShouldLayoutPresentationViews;
@property(readonly, nonatomic) UIPresentationController<_UISearchControllerPresenting> *adaptivePresentationController;
@property(readonly, nonatomic) double resultsControllerContentOffset;
@property(readonly, nonatomic) _Bool searchBarToBecomeTopAttached;
- (void)setContentVisible:(_Bool)arg1;	// IMP=0x0000000001382f24
@property(readonly, nonatomic) double statusBarAdjustment;
@property(readonly, nonatomic) _Bool searchBarShouldClipToBounds;
@property(readonly, nonatomic) _Bool searchBarCanContainScopeBar;
@property(readonly, nonatomic) _Bool resultsUnderlapsSearchBar;
@property(readonly, nonatomic) _Bool shouldAccountForStatusBar;
@property(readonly, retain, nonatomic) UIView *searchBarContainerView;
- (id)_presentationControllerForTraitCollection:(id)arg1;	// IMP=0x0000000001382e19
- (id)_presentedViewControllerForPresentationController:(id)arg1 traitCollection:(id)arg2;	// IMP=0x0000000001382e07
- (long long)adaptivePresentationStyle;	// IMP=0x0000000001382dfc
- (void)_transitionToPresentationController:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000001382cb8
- (void)_transitionFromDidEnd;	// IMP=0x0000000001382ca1
- (void)_transitionFromWillBegin;	// IMP=0x0000000001382c8f
- (void)_transitionToDidEnd;	// IMP=0x0000000001382c78
- (void)_transitionToWillBegin;	// IMP=0x0000000001382c3d
- (void)_horizontalSizeClassChanged;	// IMP=0x0000000001382b8b
- (void)_presentedView:(id)arg1 enableFormSheetAccoutrements:(_Bool)arg2;	// IMP=0x0000000001382b25
- (_Bool)_shouldKeepCurrentFirstResponder;	// IMP=0x0000000001382b1d
- (_Bool)_shouldSubscribeToKeyboardNotifications;	// IMP=0x0000000001382b15
- (_Bool)_shouldRespectDefinesPresentationContext;	// IMP=0x0000000001382b0d
- (struct CGRect)_frameOfPresentedViewControllerViewInSuperview;	// IMP=0x0000000001382acf
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;	// IMP=0x0000000001382a1f
- (void)containerViewWillLayoutSubviews;	// IMP=0x0000000001382985
- (struct CGRect)frameOfPresentedViewInContainerView;	// IMP=0x00000000013823ae
- (id)presentedView;	// IMP=0x000000000138239d
- (void)dismissalTransitionDidEnd:(_Bool)arg1;	// IMP=0x0000000001382233
- (void)dismissalTransitionWillBegin;	// IMP=0x0000000001382054
- (void)presentationTransitionDidEnd:(_Bool)arg1;	// IMP=0x0000000001381fc2
- (void)presentationTransitionWillBegin;	// IMP=0x0000000001381b31
- (void)dealloc;	// IMP=0x0000000001381ae3
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;	// IMP=0x000000000138198d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

