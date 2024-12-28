//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLayoutConstraint, NSMutableDictionary, NSString, TUIInputAssistantHostView, UIFlickingAssistantViewSupport, UIInputSetHostView, UIInputViewSet, UIInputViewSetPlacement, UIInputWindowController, UIInputWindowControllerHosting, UIKBInputBackdropView, UIScrollToDismissSupport, UISplitKeyboardSupport, UISystemKeyboardDockController, UIView, UIViewController, _UIKBLightEffectsBackground;
@protocol UIInputViewSetPlacementApplicator, _UIRemoteKeyboardControllerDelegate;

__attribute__((visibility("hidden")))
@interface UIInputWindowControllerHostingItem : NSObject
{
    UISplitKeyboardSupport *_cachedSplitKeyboardController;	// 8 = 0x8
    UIScrollToDismissSupport *_cachedScrollDismissController;	// 16 = 0x10
    UIFlickingAssistantViewSupport *_cachedFlickingAssistantViewController;	// 24 = 0x18
    CDUnknownBlockType _interactiveTransitionCleanupBlock;	// 32 = 0x20
    double _backdropHeightDelta;	// 40 = 0x28
    NSLayoutConstraint *_inputViewHeightConstraint;	// 48 = 0x30
    NSLayoutConstraint *_assistantViewHeightConstraint;	// 56 = 0x38
    NSLayoutConstraint *_accessoryViewHeightConstraint;	// 64 = 0x40
    NSLayoutConstraint *_emptyHeightConstraint;	// 72 = 0x48
    NSMutableDictionary *_inputViewEdgeConstraints;	// 80 = 0x50
    NSMutableDictionary *_assistantViewEdgeConstraints;	// 88 = 0x58
    NSMutableDictionary *_accessoryViewEdgeConstraints;	// 96 = 0x60
    NSMutableDictionary *_inputCombinedBackdropViewEdgeConstraints;	// 104 = 0x68
    NSMutableDictionary *_backdropInnerGuideConstraints;	// 112 = 0x70
    NSMutableDictionary *_inputBackdropViewEdgeConstraints;	// 120 = 0x78
    NSMutableDictionary *_inputBackdropBackgroundViewEdgeConstraints;	// 128 = 0x80
    NSMutableDictionary *_inputDockViewEdgeConstraints;	// 136 = 0x88
    NSMutableDictionary *_assistantBackdropViewEdgeConstraints;	// 144 = 0x90
    NSMutableDictionary *_accessoryBackdropViewEdgeConstraints;	// 152 = 0x98
    UIView *_inputBackdropBackgroundView;	// 160 = 0xa0
    UISystemKeyboardDockController *_dockViewController;	// 168 = 0xa8
    double _verticalTranslationForSplitKeyboard;	// 176 = 0xb0
    _Bool _scrolling;	// 184 = 0xb8
    UIInputViewSetPlacement *_cachedPlacement;	// 192 = 0xc0
    _Bool _supportsDockViewController;	// 200 = 0xc8
    TUIInputAssistantHostView *_inputAssistantHostView;	// 208 = 0xd0
    _Bool _animatingBackdrops;	// 216 = 0xd8
    UIInputWindowControllerHosting *_container;	// 224 = 0xe0
    _UIKBLightEffectsBackground *_inputCombinedBackdropView;	// 232 = 0xe8
    UIKBInputBackdropView *_inputBackdropView;	// 240 = 0xf0
    UIKBInputBackdropView *_inputAssistantBackdropView;	// 248 = 0xf8
    UIKBInputBackdropView *_inputAccessoryBackdropView;	// 256 = 0x100
    id <_UIRemoteKeyboardControllerDelegate> _controllerDelegate;	// 264 = 0x108
    UIInputSetHostView *_hostView;	// 272 = 0x110
    id <UIInputViewSetPlacementApplicator> _applicator;	// 280 = 0x118
    UIView *_floatingKeyboardMaskView;	// 288 = 0x120
}

- (void).cxx_destruct;	// IMP=0x00000000010167ac
@property(nonatomic) _Bool animatingBackdrops; // @synthesize animatingBackdrops=_animatingBackdrops;
@property(retain, nonatomic) UIView *floatingKeyboardMaskView; // @synthesize floatingKeyboardMaskView=_floatingKeyboardMaskView;
@property(retain, nonatomic) id <UIInputViewSetPlacementApplicator> applicator; // @synthesize applicator=_applicator;
@property(retain, nonatomic) UIInputSetHostView *hostView; // @synthesize hostView=_hostView;
@property(retain, nonatomic) id <_UIRemoteKeyboardControllerDelegate> controllerDelegate; // @synthesize controllerDelegate=_controllerDelegate;
@property(retain, nonatomic, setter=setInputAccessoryBackdropView:) UIKBInputBackdropView *_inputAccessoryBackdropView; // @synthesize _inputAccessoryBackdropView;
@property(retain, nonatomic, setter=setInputAssistantBackdropView:) UIKBInputBackdropView *_inputAssistantBackdropView; // @synthesize _inputAssistantBackdropView;
@property(retain, nonatomic, setter=setInputBackdropView:) UIKBInputBackdropView *_inputBackdropView; // @synthesize _inputBackdropView;
@property(retain, nonatomic, setter=setCombinedBackdropView:) _UIKBLightEffectsBackground *_inputCombinedBackdropView; // @synthesize _inputCombinedBackdropView;
@property(readonly, nonatomic) __weak UIInputWindowControllerHosting *container; // @synthesize container=_container;
@property(readonly, nonatomic) _Bool scrollKeyboardActive; // @synthesize scrollKeyboardActive=_scrolling;
@property(readonly, retain, nonatomic) UIFlickingAssistantViewSupport *flickingAssistantViewSupport; // @synthesize flickingAssistantViewSupport=_cachedFlickingAssistantViewController;
@property(readonly, retain, nonatomic) UISplitKeyboardSupport *splitKeyboardController; // @synthesize splitKeyboardController=_cachedSplitKeyboardController;
- (void)configureFlickingAssistantViewController:(_Bool)arg1;	// IMP=0x0000000001016569
- (void)enumerateBoundingRects:(CDUnknownBlockType)arg1;	// IMP=0x0000000001016404
- (void)removeMatchMoveAnimationIfNeeded;	// IMP=0x00000000010162ea
- (void)clearInteractiveTransitionStateIfNecessary;	// IMP=0x00000000010162b6
- (void)finishScrollViewTransition;	// IMP=0x000000000101629d
- (void)configureScrollDismissController:(_Bool)arg1;	// IMP=0x0000000001016156
- (void)initializeTranslateGestureRecognizerIfNecessary;	// IMP=0x0000000001015e1f
- (_Bool)_isForDragToDismiss;	// IMP=0x0000000001015d96
- (_Bool)_isForSplitKeyboard;	// IMP=0x0000000001015ceb
- (void)setAccessoryViewVisible:(_Bool)arg1 delay:(double)arg2;	// IMP=0x0000000001015c02
- (void)configureSplitKeyboardController:(_Bool)arg1;	// IMP=0x0000000001015abb
- (void)resetVerticalConstraint;	// IMP=0x0000000001015a21
- (double)offsetForSplitTransition;	// IMP=0x0000000001015a13
- (void)didFinishTranslationFromPlacement:(id)arg1 to:(id)arg2;	// IMP=0x0000000001015985
- (void)willBeginTranslationFromPlacement:(id)arg1 to:(id)arg2;	// IMP=0x0000000001015947
- (void)prepareTranslationFromPlacement:(id)arg1 to:(id)arg2;	// IMP=0x000000000101592e
- (void)createAnimationMatchWithInfo:(id)arg1;	// IMP=0x000000000101535b
- (void)transitionDidFinish:(_Bool)arg1;	// IMP=0x00000000010151aa
- (void)setPlacement:(id)arg1 quietly:(_Bool)arg2 animated:(_Bool)arg3 generateSplitNotification:(_Bool)arg4;	// IMP=0x0000000001014f84
- (void)completeTransition:(id)arg1 withInfo:(id)arg2;	// IMP=0x000000000101435b
- (void)updateTransition:(id)arg1 withInfo:(id)arg2;	// IMP=0x0000000001013cf2
- (_Bool)_isForSelf:(id)arg1;	// IMP=0x0000000001013c51
- (void)startTransition:(id)arg1 withInfo:(id)arg2;	// IMP=0x0000000001013a9b
- (void)placementNeedsUpdate:(id)arg1;	// IMP=0x00000000010138d1
- (void)finishSplitTransition;	// IMP=0x0000000001013894
- (void)prepareForSplitTransition;	// IMP=0x0000000001013857
- (void)_fillInNotificationInfo:(id)arg1 forDismissMode:(unsigned long long)arg2;	// IMP=0x00000000010135ce
- (id)constructNotificationInfoForScrollWithMode:(unsigned long long)arg1;	// IMP=0x000000000101341c
- (void)setInterfaceAutorotationDisabled:(_Bool)arg1;	// IMP=0x0000000001013403
@property(readonly, nonatomic) UIViewController *_inputViewController;
@property(readonly, nonatomic) struct CGPoint positionConstraintConstant;
@property(readonly, nonatomic) _Bool isChangingPlacement;
@property(readonly, nonatomic) UIView *view;
- (void)updateForKeyplaneChangeWithContext:(id)arg1;	// IMP=0x00000000010132b8
- (void)checkPlaceholdersForRemoteKeyboards;	// IMP=0x0000000001013277
@property(nonatomic) _Bool dontDismissReachability;
@property(readonly, nonatomic) _Bool isOnScreenRotating;
@property _Bool hideInputAssistantBackdrop;
@property(readonly) long long inputViewBackdropStyle;
@property _Bool hideInputView;
@property _Bool hideInputViewBackdrops;
@property(readonly) struct UIEdgeInsets inputViewPadding;
@property(readonly) UIView *containerView;
@property(readonly) _Bool keyboardController;
- (void)updateProgress:(double)arg1 startHeight:(double)arg2 endHeight:(double)arg3;	// IMP=0x0000000001011ecc
- (void)didFinishTranslation;	// IMP=0x0000000001011db6
- (void)finishSplitTransition:(_Bool)arg1;	// IMP=0x0000000001011d16
- (void)willBeginTranslation;	// IMP=0x0000000001011c7c
- (void)cleanUpLightEffectsTransition;	// IMP=0x0000000001011c31
- (void)finalizeTransitionToRenderConfig:(id)arg1;	// IMP=0x0000000001011bec
- (void)transitionInAnimatedForRenderConfig:(id)arg1;	// IMP=0x0000000001011a7e
- (void)performAnimatedTransitionToRenderConfig:(id)arg1;	// IMP=0x0000000001011863
- (void)updateCombinedBackdropViewAnimated:(_Bool)arg1 forKeyboardUp:(_Bool)arg2;	// IMP=0x0000000001011469
- (void)someViewDidLayoutSubviews;	// IMP=0x000000000101138a
- (void)refreshApplicator;	// IMP=0x0000000001011264
- (void)updateVisibilityConstraintsForPlacement:(id)arg1;	// IMP=0x0000000001010cb9
- (void)clearVisibilityConstraints;	// IMP=0x0000000001010c28
- (void)updateKeyboardDockViewVisibility;	// IMP=0x0000000001010925
- (void)configureDockViewController:(_Bool)arg1;	// IMP=0x00000000010108ba
- (void)updateSupportsDockViewController;	// IMP=0x0000000001010824
- (_Bool)_shouldShowInputDockView;	// IMP=0x000000000101076e
@property(readonly, nonatomic) UIView *scrollTrackingView;
@property(readonly, nonatomic) UIView *dockView;
- (void)updateInputAssistantBackdropView;	// IMP=0x0000000001010478
- (void)updateInputAccessoryBackdropView;	// IMP=0x0000000001010139
- (void)updateInputBackdropView;	// IMP=0x000000000100fe2b
- (void)updateCombinedBackdropView;	// IMP=0x000000000100fb8b
- (_Bool)useCombinedBackdrop;	// IMP=0x000000000100fa1a
- (void)updateRenderConfigForCombinedBackdrop:(id)arg1;	// IMP=0x000000000100f9b5
- (void)updateInputBackdropViewVisibility;	// IMP=0x000000000100f8ab
- (void)_updateBackdropViews;	// IMP=0x000000000100ef23
- (void)updateViewSizingConstraints;	// IMP=0x000000000100e42a
- (void)updateEmptyHeightConstraint;	// IMP=0x000000000100e367
- (struct CGRect)fullInputViewAndAssistantFrame;	// IMP=0x000000000100ddf5
- (struct CGRect)fullScreenFrame;	// IMP=0x000000000100d633
- (struct CGRect)notificationsFrame;	// IMP=0x000000000100d389
- (struct CGRect)visibleFrame;	// IMP=0x000000000100d219
- (void)extendKeyboardBackdropHeight:(double)arg1 withDuration:(double)arg2;	// IMP=0x000000000100ce89
- (void)resetBackdropHeight;	// IMP=0x000000000100ce60
- (void)updateViewConstraints;	// IMP=0x0000000001008d80
- (void)rebuildConstraints:(id)arg1 forView:(id)arg2 toMatchView:(id)arg3 tracker:(id)arg4;	// IMP=0x000000000100891b
- (id)viewMatchingConstraintForAttribute:(long long)arg1 primaryView:(id)arg2 secondaryView:(id)arg3;	// IMP=0x0000000001008899
- (id)_updateOrCreateConstraintInDict:(id)arg1 key:(id)arg2 fromItem:(id)arg3 toItem:(id)arg4 tracker:(id)arg5 creator:(CDUnknownBlockType)arg6;	// IMP=0x00000000010086ae
- (id)_updateOrCreateConstraintInDict:(id)arg1 key:(id)arg2 fromView:(id)arg3 toView:(id)arg4 tracker:(id)arg5 creator:(CDUnknownBlockType)arg6;	// IMP=0x000000000100869c
- (void)clearInputAccessoryViewEdgeConstraints;	// IMP=0x00000000010085b9
- (void)clearInputAssistantViewEdgeConstraints;	// IMP=0x00000000010084d6
- (void)resetInputViewVisibility;	// IMP=0x0000000001008464
- (void)clearInputViewEdgeConstraints;	// IMP=0x00000000010082a7
- (void)updateViewSizingConstraints:(id)arg1;	// IMP=0x0000000001007add
- (void)disableViewSizingConstraints:(unsigned long long)arg1 forNewView:(id)arg2;	// IMP=0x00000000010078f3
- (struct UIEdgeInsets)_aligningInsetsForChildInputViewController:(id)arg1 includeSceneBounds:(_Bool)arg2;	// IMP=0x0000000001006ddf
- (void)updateConstraintInsets;	// IMP=0x00000000010068f9
- (void)removeInputAssistantHostView;	// IMP=0x00000000010068e0
@property(readonly) TUIInputAssistantHostView *inputAssistantHostView;
- (id)inputAccessoryViewController;	// IMP=0x000000000100633b
- (id)inputAssistantViewController;	// IMP=0x00000000010062a4
- (id)inputViewController;	// IMP=0x000000000100620d
@property(nonatomic) UIView *inputAccessoryView;
- (void)inputModeDidChange:(id)arg1;	// IMP=0x0000000001006014
- (void)updateInputAssistantViewLayering;	// IMP=0x0000000001005e75
@property(nonatomic) UIView *inputAssistantView;
@property(nonatomic) UIView *inputView;
@property(readonly) UIInputViewSet *inputViewSet;
- (void)setPlacement:(id)arg1;	// IMP=0x00000000010054b4
@property(readonly) UIInputViewSetPlacement *placement;
- (void)dealloc;	// IMP=0x000000000100532b
- (id)initWithContainer:(id)arg1;	// IMP=0x0000000001004fe6
- (id)ownerView;	// IMP=0x0000000001004f96
@property(readonly, nonatomic) __weak UIInputWindowController *owner;
- (void)setPlacement;	// IMP=0x0000000001004ea7
- (void)resetPlacement;	// IMP=0x0000000001004e3e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
