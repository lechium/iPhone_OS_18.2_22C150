//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIPresentationController.h"

@class NSString, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView, _UIAnimationCoordinator, _UIDimmingKnockoutBackdropView;
@protocol UIActionSheetPresentationControllerDismissActionView, UIActionSheetPresentationControllerVisualStyle, _UIActionSheetCompactPresentationControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UIActionSheetCompactPresentationController : UIPresentationController
{
    _Bool _avoidsKeyboardDisabled;	// 8 = 0x8
    _Bool _shouldAdoptPresentedAppearance;	// 9 = 0x9
    _Bool _hasPendingAnimatedLayout;	// 10 = 0xa
    id <_UIActionSheetCompactPresentationControllerDelegate> _actionSheetDelegate;	// 16 = 0x10
    UIView<UIActionSheetPresentationControllerDismissActionView> *_dismissActionView;	// 24 = 0x18
    UILongPressGestureRecognizer *_dismissActionViewGestureRecognizer;	// 32 = 0x20
    UITapGestureRecognizer *_dimmingViewDismissTapGestureRecognizer;	// 40 = 0x28
    UIView *_dimmingView;	// 48 = 0x30
    _UIDimmingKnockoutBackdropView *_backdropView;	// 56 = 0x38
    _UIAnimationCoordinator *_animationCoordinator;	// 64 = 0x40
    id <UIActionSheetPresentationControllerVisualStyle> _visualStyle;	// 72 = 0x48
    double _pseudoAlertPreferredTop;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000076c48b
@property(nonatomic) _Bool hasPendingAnimatedLayout; // @synthesize hasPendingAnimatedLayout=_hasPendingAnimatedLayout;
@property(nonatomic) double pseudoAlertPreferredTop; // @synthesize pseudoAlertPreferredTop=_pseudoAlertPreferredTop;
@property(retain, nonatomic) id <UIActionSheetPresentationControllerVisualStyle> visualStyle; // @synthesize visualStyle=_visualStyle;
@property(retain, nonatomic) _UIAnimationCoordinator *animationCoordinator; // @synthesize animationCoordinator=_animationCoordinator;
@property(retain, nonatomic) _UIDimmingKnockoutBackdropView *backdropView; // @synthesize backdropView=_backdropView;
@property(retain, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(retain, nonatomic) UITapGestureRecognizer *dimmingViewDismissTapGestureRecognizer; // @synthesize dimmingViewDismissTapGestureRecognizer=_dimmingViewDismissTapGestureRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *dismissActionViewGestureRecognizer; // @synthesize dismissActionViewGestureRecognizer=_dismissActionViewGestureRecognizer;
@property(retain, nonatomic) UIView<UIActionSheetPresentationControllerDismissActionView> *dismissActionView; // @synthesize dismissActionView=_dismissActionView;
@property(nonatomic) _Bool shouldAdoptPresentedAppearance; // @synthesize shouldAdoptPresentedAppearance=_shouldAdoptPresentedAppearance;
@property(nonatomic) __weak id <_UIActionSheetCompactPresentationControllerDelegate> actionSheetDelegate; // @synthesize actionSheetDelegate=_actionSheetDelegate;
@property(nonatomic) _Bool avoidsKeyboardDisabled; // @synthesize avoidsKeyboardDisabled=_avoidsKeyboardDisabled;
- (double)_resizeAnimationDuration;	// IMP=0x000000000076c2c9
- (struct CGSize)_minimumSizeForDismissButton;	// IMP=0x000000000076c239
- (_Bool)_shouldDisableAvoidsKeyboard;	// IMP=0x000000000076c13e
- (CDStruct_758ece87)_currentLayoutGeometry;	// IMP=0x000000000076bf48
- (void)_handleDismiss:(id)arg1;	// IMP=0x000000000076be2d
- (void)_dismiss;	// IMP=0x000000000076bd46
@property(nonatomic) _Bool dismissActionUsesShorterHeightWhenCompactVertically;
- (void)endPseudoAlertPresentationMode;	// IMP=0x000000000076bbb0
- (void)beginPseudoAlertPresentationMode;	// IMP=0x000000000076ba8f
@property(copy, nonatomic) NSString *dismissActionTitle;
- (void)_updateForKeyboardStartFrame:(struct CGRect)arg1 endFrame:(struct CGRect)arg2 duration:(double)arg3 curve:(long long)arg4;	// IMP=0x000000000076b773
- (void)_keyboardChanged:(id)arg1;	// IMP=0x000000000076b552
- (void)_unsubscribeFromKeyboardNotifications;	// IMP=0x000000000076b486
- (void)_subscribeToKeyboardNotifications;	// IMP=0x000000000076b3b3
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;	// IMP=0x000000000076af54
- (void)dismissalTransitionWillBegin;	// IMP=0x000000000076ae61
- (void)_willRunTransitionForCurrentStateDeferred:(_Bool)arg1;	// IMP=0x000000000076ae0c
- (void)presentationTransitionWillBegin;	// IMP=0x000000000076aafd
- (struct CGSize)preferredContentSize;	// IMP=0x000000000076aac4
- (void)_applyVisualAffordancesToViews;	// IMP=0x000000000076aa14
- (void)_layoutViews;	// IMP=0x000000000076a808
- (struct CGRect)_frameOfPresentedViewControllerViewInSuperview;	// IMP=0x000000000076a7e9
- (struct CGRect)frameOfPresentedViewInContainerView;	// IMP=0x000000000076a667
- (void)_transitionToPresentationController:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000076a623
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000076a505
- (struct UIEdgeInsets)_baseContentInsetsWithLeftMargin:(double *)arg1 rightMargin:(double *)arg2;	// IMP=0x000000000076a30d
- (_Bool)_shouldOccludeDuringPresentation;	// IMP=0x000000000076a305
- (_Bool)_shouldPresentedViewControllerControlStatusBarAppearance;	// IMP=0x000000000076a2fd
- (_Bool)shouldPresentInFullscreen;	// IMP=0x000000000076a2a9
- (void)dealloc;	// IMP=0x000000000076a227
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 visualStyle:(id)arg3;	// IMP=0x0000000000769fa0

@end
