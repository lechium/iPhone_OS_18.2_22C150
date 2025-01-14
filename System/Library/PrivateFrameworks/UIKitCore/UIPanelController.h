//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, UIDimmingView, UILayoutContainerView, UINavigationBar, UIPanelBorderView, UISlidingBarConfiguration, UISlidingBarState, UISlidingBarStateRequest, UIView, UIViewController, _UIDuoShadowView, _UIFloatableBarButtonItem, _UIMTCaptureView, _UIPanelInternalState;
@protocol UIPanelControllerDelegate, UIViewControllerTransitionCoordinator;

__attribute__((visibility("hidden")))
@interface UIPanelController : NSObject
{
    struct {
        unsigned int isUpdatingState:1;
        unsigned int needsDeferredUpdateWhileUpdatingState:1;
        unsigned int isPerformingDeferredUpdate:1;
        unsigned int nextLayoutIsForInitializingAnimation:1;
        unsigned int isPresentationGestureActive:1;
        unsigned int areClippingViewsUnnecessary:1;
        unsigned int inWillTransitionToTraitCollection:1;
        unsigned int inViewWillTransitionToSize:1;
        unsigned int inViewWillTransitionToSizeRecursingToChildren:1;
        unsigned int viewsLocked:1;
        unsigned int takingDestinationSnapshot:1;
        unsigned int registeredForKeyboardNotifications:1;
        unsigned int borderViewsObservingViewBackgroundColor:1;
        unsigned int updateLayoutRequested:1;
        unsigned int leadingTrailingWrapsNavigationController:1;
        unsigned int shouldDelegateNavigationBarForViewController:1;
        unsigned int isRunExpandScheduled:1;
    } _panelControllerFlags;	// 8 = 0x8
    NSMutableArray *_wrapperBlocksForNextUpdate;	// 16 = 0x10
    _Bool _animationRequestShouldCoordinate;	// 24 = 0x18
    _Bool _showShadowViews;	// 25 = 0x19
    _Bool _wantsFloatingSidebar;	// 26 = 0x1a
    _Bool __hasUpdatedForTraitCollection;	// 27 = 0x1b
    _Bool __needsFirstTimeUpdateForTraitCollection;	// 28 = 0x1c
    _Bool __changingViewControllerParentage;	// 29 = 0x1d
    UIViewController *_owningViewController;	// 32 = 0x20
    long long _style;	// 40 = 0x28
    UIView *_dimmingView;	// 48 = 0x30
    UIView *_leadingBarContentClippingView;	// 56 = 0x38
    UIView *_trailingBarContentClippingView;	// 64 = 0x40
    UIView *_supplementaryBarContentClippingView;	// 72 = 0x48
    UINavigationBar *_navigationBarForContentLayoutGuideAnimation;	// 80 = 0x50
    _UIFloatableBarButtonItem *_floatingBarButtonItem;	// 88 = 0x58
    UILayoutContainerView *_view;	// 96 = 0x60
    _UIPanelInternalState *__internalState;	// 104 = 0x68
    _UIPanelInternalState *__previousInternalState;	// 112 = 0x70
    UISlidingBarConfiguration *__suspendedConfiguration;	// 120 = 0x78
    UISlidingBarState *__lastComputedPublicState;	// 128 = 0x80
    NSArray *__lastPossiblePublicStates;	// 136 = 0x88
    UIView *__contentView;	// 144 = 0x90
    UIPanelBorderView *__leadingBorderView;	// 152 = 0x98
    UIPanelBorderView *__trailingBorderView;	// 160 = 0xa0
    UIPanelBorderView *__supplementaryBorderView;	// 168 = 0xa8
    _UIDuoShadowView *__overlayEdgeShadowView;	// 176 = 0xb0
    _UIDuoShadowView *__primaryOrSupplementaryShadowView;	// 184 = 0xb8
    _UIDuoShadowView *__supplementaryParallaxShadowView;	// 192 = 0xc0
    _UIMTCaptureView *__captureView;	// 200 = 0xc8
    UIDimmingView *__primaryParallaxDimmingView;	// 208 = 0xd0
    UIView *__sourceTransitionView;	// 216 = 0xd8
    UIView *__destTransitionView;	// 224 = 0xe0
    struct CGSize __lastViewSize;	// 232 = 0xe8
}

+ (id)_withDisabledAppearanceTransitions:(_Bool)arg1 forVisibleDescendantsOf:(id)arg2 perform:(CDUnknownBlockType)arg3;	// IMP=0x0010000000859bf8
- (void).cxx_destruct;	// IMP=0x000000000086a217
@property(nonatomic, setter=_setChangingViewControllerParentage:) _Bool _changingViewControllerParentage; // @synthesize _changingViewControllerParentage=__changingViewControllerParentage;
@property(nonatomic, setter=_setNeedsFirstTimeUpdateForTraitCollection:) _Bool _needsFirstTimeUpdateForTraitCollection; // @synthesize _needsFirstTimeUpdateForTraitCollection=__needsFirstTimeUpdateForTraitCollection;
@property(nonatomic, setter=_setHasUpdatedForTraitCollection:) _Bool _hasUpdatedForTraitCollection; // @synthesize _hasUpdatedForTraitCollection=__hasUpdatedForTraitCollection;
@property(retain, nonatomic, setter=_setDestinationTransitionView:) UIView *_destTransitionView; // @synthesize _destTransitionView=__destTransitionView;
@property(retain, nonatomic, setter=_setSourceTransitionView:) UIView *_sourceTransitionView; // @synthesize _sourceTransitionView=__sourceTransitionView;
@property(retain, nonatomic, setter=_setPrimaryParallaxDimmingView:) UIDimmingView *_primaryParallaxDimmingView; // @synthesize _primaryParallaxDimmingView=__primaryParallaxDimmingView;
@property(retain, nonatomic, setter=_setMaterialThemesCaptureView:) _UIMTCaptureView *_captureView; // @synthesize _captureView=__captureView;
@property(retain, nonatomic, setter=_setSupplementaryParallaxShadowView:) _UIDuoShadowView *_supplementaryParallaxShadowView; // @synthesize _supplementaryParallaxShadowView=__supplementaryParallaxShadowView;
@property(retain, nonatomic, setter=_setLeadingPanelShadowView:) _UIDuoShadowView *_primaryOrSupplementaryShadowView; // @synthesize _primaryOrSupplementaryShadowView=__primaryOrSupplementaryShadowView;
@property(retain, nonatomic, setter=_setOverlayEdgeShadowView:) _UIDuoShadowView *_overlayEdgeShadowView; // @synthesize _overlayEdgeShadowView=__overlayEdgeShadowView;
@property(retain, nonatomic, setter=_setSupplementaryBorderView:) UIPanelBorderView *_supplementaryBorderView; // @synthesize _supplementaryBorderView=__supplementaryBorderView;
@property(retain, nonatomic, setter=_setTrailingBorderView:) UIPanelBorderView *_trailingBorderView; // @synthesize _trailingBorderView=__trailingBorderView;
@property(retain, nonatomic, setter=_setLeadingBorderView:) UIPanelBorderView *_leadingBorderView; // @synthesize _leadingBorderView=__leadingBorderView;
@property(retain, nonatomic, setter=_setContentView:) UIView *_contentView; // @synthesize _contentView=__contentView;
@property(nonatomic, setter=_setLastViewSize:) struct CGSize _lastViewSize; // @synthesize _lastViewSize=__lastViewSize;
@property(copy, nonatomic, setter=_setLastPossiblePublicStates:) NSArray *_lastPossiblePublicStates; // @synthesize _lastPossiblePublicStates=__lastPossiblePublicStates;
@property(copy, nonatomic, setter=_setLastComputedPublicState:) UISlidingBarState *_lastComputedPublicState; // @synthesize _lastComputedPublicState=__lastComputedPublicState;
@property(retain, nonatomic, setter=_setSuspendedConfiguration:) UISlidingBarConfiguration *_suspendedConfiguration; // @synthesize _suspendedConfiguration=__suspendedConfiguration;
@property(retain, nonatomic, setter=_setPreviousInternalState:) _UIPanelInternalState *_previousInternalState; // @synthesize _previousInternalState=__previousInternalState;
@property(retain, nonatomic, setter=_setInternalState:) _UIPanelInternalState *_internalState; // @synthesize _internalState=__internalState;
@property(retain, nonatomic) UILayoutContainerView *view; // @synthesize view=_view;
@property(nonatomic) _Bool wantsFloatingSidebar; // @synthesize wantsFloatingSidebar=_wantsFloatingSidebar;
@property(retain, nonatomic) _UIFloatableBarButtonItem *floatingBarButtonItem; // @synthesize floatingBarButtonItem=_floatingBarButtonItem;
@property(retain, nonatomic) UINavigationBar *navigationBarForContentLayoutGuideAnimation; // @synthesize navigationBarForContentLayoutGuideAnimation=_navigationBarForContentLayoutGuideAnimation;
@property(retain, nonatomic) UIView *supplementaryBarContentClippingView; // @synthesize supplementaryBarContentClippingView=_supplementaryBarContentClippingView;
@property(retain, nonatomic) UIView *trailingBarContentClippingView; // @synthesize trailingBarContentClippingView=_trailingBarContentClippingView;
@property(retain, nonatomic) UIView *leadingBarContentClippingView; // @synthesize leadingBarContentClippingView=_leadingBarContentClippingView;
@property(nonatomic) _Bool showShadowViews; // @synthesize showShadowViews=_showShadowViews;
@property(retain, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(nonatomic) _Bool animationRequestShouldCoordinate; // @synthesize animationRequestShouldCoordinate=_animationRequestShouldCoordinate;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) __weak UIViewController *owningViewController; // @synthesize owningViewController=_owningViewController;
@property(readonly, copy) NSString *description;
- (void)_adjustNonOverlayLeadingScrollViewsForKeyboardInfo:(id)arg1;	// IMP=0x0000000000869c4e
- (void)_adjustForKeyboardInfo:(id)arg1;	// IMP=0x0000000000869622
- (void)_stopObservingKeyboardNotifications;	// IMP=0x000000000086957b
- (void)_observeKeyboardNotificationsOnScreen:(id)arg1;	// IMP=0x0000000000869493
- (id)uncachedPossibleStatesForSize:(struct CGSize)arg1;	// IMP=0x00000000008693f7
@property(readonly, nonatomic) NSArray *uncachedPossibleStates;
@property(copy, nonatomic) UISlidingBarStateRequest *interactiveStateRequest;
- (void)animateToRequest:(id)arg1 forceOverlay:(_Bool)arg2 withVelocity:(double)arg3;	// IMP=0x0000000000868fe0
- (void)animateToRequest:(id)arg1 forceOverlay:(_Bool)arg2;	// IMP=0x0000000000868fcb
- (void)animateToRequest:(id)arg1;	// IMP=0x0000000000868fb7
- (_Bool)isSupplementaryViewControllerVisibleAfterAnimation;	// IMP=0x0000000000868f19
- (_Bool)isTrailingViewControllerVisibleAfterAnimation;	// IMP=0x0000000000868e7b
- (_Bool)isLeadingViewControllerVisibleAfterAnimation;	// IMP=0x0000000000868ddd
@property(readonly, nonatomic) id <UIViewControllerTransitionCoordinator> transitionCoordinator;
- (_Bool)_animateCustomTransitionIfNeededWithAnimationState:(id)arg1 possiblePublicStates:(id)arg2 newPublicState:(id)arg3 estimatedDuration:(double)arg4 needsInitialLayout:(_Bool)arg5;	// IMP=0x000000000086802f
- (void)_animateFromRequest:(id)arg1 toRequest:(id)arg2 withAffectedSides:(long long)arg3 forceOverlay:(_Bool)arg4 velocity:(double)arg5;	// IMP=0x0000000000866efb
- (struct CGSize)_expectedSecondaryColumnSizeAfterAnimatingToState:(id)arg1 getLeadingColumnSize:(struct CGSize *)arg2 trailingColumnSize:(struct CGSize *)arg3 supplementaryColumnSize:(struct CGSize *)arg4;	// IMP=0x000000000086682a
- (void)stopAnimations;	// IMP=0x0000000000866813
- (void)_stopAnimationsBeginningInteraction:(_Bool)arg1;	// IMP=0x00000000008661dd
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000086615e
- (void)_updateBorderViewsBackgroundColor:(id)arg1;	// IMP=0x0000000000866013
- (void)_setBorderViewsObserveViewBackgroundColor:(_Bool)arg1;	// IMP=0x0000000000865fa3
- (id)_createOverlayShadowView;	// IMP=0x0000000000865ed0
- (id)_createOverlayEdgeShadowViewForEdge:(unsigned long long)arg1;	// IMP=0x0000000000865e92
- (id)_createBorderView;	// IMP=0x0000000000865e4a
- (double)interpolatedMarginForPrimaryNavigationBar:(id)arg1 supplementaryOrSecondaryNavbar:(id)arg2 getInterpolatedAlpha:(double *)arg3;	// IMP=0x0000000000865b1e
- (void)_updateToNewPublicState:(id)arg1 withSize:(struct CGSize)arg2;	// IMP=0x000000000085de5e
- (void)_unspecifiedUpdateToNewPublicState:(id)arg1 withSize:(struct CGSize)arg2;	// IMP=0x000000000085bbc2
- (void)_performWrappedUpdate:(CDUnknownBlockType)arg1;	// IMP=0x000000000085b933
- (void)_performSingleDeferredUpdatePass;	// IMP=0x000000000085a916
- (void)_performDeferredUpdate;	// IMP=0x000000000085a8c0
- (void)_setNeedsDeferredUpdate;	// IMP=0x000000000085a727
- (void)_setNeedsLayoutAndPerformImmediately:(_Bool)arg1;	// IMP=0x000000000085a6e6
- (void)__viewWillLayoutSubviews;	// IMP=0x000000000085a4f9
- (void)_layoutContainerViewDidMoveToWindow:(id)arg1;	// IMP=0x000000000085a3f6
- (void)_layoutContainerViewWillMoveToWindow:(id)arg1;	// IMP=0x000000000085a274
- (void)_withDisabledAppearanceTransitionsPerform:(CDUnknownBlockType)arg1;	// IMP=0x00000000008594ef
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2 superBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000008575bc
- (void)_clearSuspendedConfiguration;	// IMP=0x00000000008575a8
- (void)_storeSuspendedConfiguration;	// IMP=0x000000000085753a
- (void)traitCollectionDidChange:(id)arg1 toNewTraits:(id)arg2;	// IMP=0x000000000085747c
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 superBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000857259
- (void)_expandWithTransitionCoordinator:(id)arg1;	// IMP=0x0000000000856745
- (void)_collapseWithTransitionCoordinator:(id)arg1;	// IMP=0x000000000085562e
- (void)_updateForTraitCollection:(id)arg1 oldTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3;	// IMP=0x00000000008552c7
- (_Bool)_willExpandWithNewTraitCollection:(id)arg1 oldTraitCollection:(id)arg2;	// IMP=0x00000000008551e8
- (_Bool)_willCollapseWithNewTraitCollection:(id)arg1 oldTraitCollection:(id)arg2;	// IMP=0x00000000008550fe
- (id)gatherMultitaskingDragExclusionRectsFromVisibleColumns;	// IMP=0x0000000000854afe
- (void)addWrapperBlockForNextUpdate:(CDUnknownBlockType)arg1;	// IMP=0x0000000000854a71
@property(readonly, nonatomic, getter=isCollapsed) _Bool collapsed;
@property(readonly, nonatomic) long long collapsedState;
- (_Bool)isAnimating;	// IMP=0x0000000000854865
- (void)setNeedsUpdate;	// IMP=0x0000000000854853
- (id)allViewControllers;	// IMP=0x000000000085468e
- (void)navigationControllerDidChangeNavigationBarHidden:(id)arg1;	// IMP=0x0000000000854688
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;	// IMP=0x0000000000854676
- (void)removeChildViewController:(id)arg1;	// IMP=0x000000000085438f
- (void)_removeIdentifiedChildViewController:(id)arg1;	// IMP=0x000000000085427d
- (void)_addIdentifiedChildViewController:(id)arg1;	// IMP=0x0000000000853f46
- (void)loadView;	// IMP=0x0000000000853c57
@property(copy, nonatomic) UISlidingBarStateRequest *stateRequest;
@property(readonly, nonatomic) NSArray *possibleStates;
@property(readonly, nonatomic) UISlidingBarState *currentState;
@property(copy, nonatomic) UISlidingBarConfiguration *configuration;
@property(nonatomic) __weak id <UIPanelControllerDelegate> delegate;
@property(retain, nonatomic) UIViewController *collapsedViewController;
@property(retain, nonatomic) UIViewController *preservedDetailController;
- (void)setSupplementaryViewController:(id)arg1 changingParentage:(_Bool)arg2;	// IMP=0x00000000008535b7
@property(retain, nonatomic) UIViewController *supplementaryViewController;
- (void)setTrailingViewController:(id)arg1 changingParentage:(_Bool)arg2;	// IMP=0x0000000000853458
@property(retain, nonatomic) UIViewController *trailingViewController;
- (void)setLeadingViewController:(id)arg1 changingParentage:(_Bool)arg2;	// IMP=0x00000000008532f9
@property(retain, nonatomic) UIViewController *leadingViewController;
- (void)setMainViewController:(id)arg1 changingParentage:(_Bool)arg2 animateTransition:(_Bool)arg3;	// IMP=0x000000000085319a
- (void)setMainViewController:(id)arg1 changingParentage:(_Bool)arg2;	// IMP=0x0000000000853185
@property(retain, nonatomic) UIViewController *mainViewController;
@property(nonatomic) _Bool leadingTrailingWrapsNavigationController;
- (void)dealloc;	// IMP=0x00000000008530a5
@property(readonly, nonatomic) _Bool supportsColumnStyle;
- (id)initWithOwningViewController:(id)arg1;	// IMP=0x0000000000852f97
@property(nonatomic, getter=isRunExpandScheduled, setter=setRunExpandScheduled:) _Bool runExpandScheduled;
@property(nonatomic, getter=areClippingViewsUnnecessary) _Bool clippingViewsUnnecessary;
@property(nonatomic, getter=isPresentationGestureActive) _Bool presentationGestureActive;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

