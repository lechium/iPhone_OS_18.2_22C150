//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

#import <UIKitCore/UIFocusEnvironment-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, UIInterfaceAction, UIInterfaceActionVisualStyle, UISpringLoadedInteraction;
@protocol UIFocusEnvironment, UIFocusItemContainer, UIInterfaceActionVisualBackgroundDisplaying;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionRepresentationView : UIView <UIFocusEnvironment>
{
    _Bool _hasLoadedBackgroundView;	// 160 = 0xa0
    _Bool _canKeepContentsInHierarchy;	// 161 = 0xa1
    _Bool _hasLoadedContentFirstTime;	// 162 = 0xa2
    _Bool _enforcedCanRemoveContentFromHierarchyWhenNotVisible;	// 163 = 0xa3
    _Bool _enforcedCanRemoveContentFromHierarchyWhenNotVisibleValue;	// 164 = 0xa4
    _Bool _contentsInsertedIntoViewHierarchy;	// 165 = 0xa5
    _Bool _ownsActionContent;	// 166 = 0xa6
    _Bool _highlighted;	// 167 = 0xa7
    _Bool _pressed;	// 168 = 0xa8
    _Bool _canRemoveContentFromHierarchyWhenNotVisible;	// 169 = 0xa9
    UIInterfaceAction *_action;	// 176 = 0xb0
    unsigned long long _visualCornerPosition;	// 184 = 0xb8
    id _actionViewStateContext;	// 192 = 0xc0
    UIView<UIInterfaceActionVisualBackgroundDisplaying> *_backgroundHighlightView;	// 200 = 0xc8
    NSLayoutConstraint *_minimumWidthConstraint;	// 208 = 0xd0
    NSLayoutConstraint *_minimumHeightConstraint;	// 216 = 0xd8
    NSArray *_viewsToDisappearWhenHighlighted;	// 224 = 0xe0
    NSString *_sectionID;	// 232 = 0xe8
    UISpringLoadedInteraction *_interactionForSpringLoading;	// 240 = 0xf0
}

- (void).cxx_destruct;	// IMP=0x00000000002f3f1a
@property(retain, nonatomic) UISpringLoadedInteraction *interactionForSpringLoading; // @synthesize interactionForSpringLoading=_interactionForSpringLoading;
@property(retain, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property(nonatomic) _Bool canRemoveContentFromHierarchyWhenNotVisible; // @synthesize canRemoveContentFromHierarchyWhenNotVisible=_canRemoveContentFromHierarchyWhenNotVisible;
@property(retain, nonatomic) NSArray *viewsToDisappearWhenHighlighted; // @synthesize viewsToDisappearWhenHighlighted=_viewsToDisappearWhenHighlighted;
@property(readonly, nonatomic) NSLayoutConstraint *minimumHeightConstraint; // @synthesize minimumHeightConstraint=_minimumHeightConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *minimumWidthConstraint; // @synthesize minimumWidthConstraint=_minimumWidthConstraint;
@property(readonly, nonatomic) UIView<UIInterfaceActionVisualBackgroundDisplaying> *backgroundHighlightView; // @synthesize backgroundHighlightView=_backgroundHighlightView;
@property(retain, nonatomic) id actionViewStateContext; // @synthesize actionViewStateContext=_actionViewStateContext;
@property(nonatomic, getter=isPressed) _Bool pressed; // @synthesize pressed=_pressed;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) unsigned long long visualCornerPosition; // @synthesize visualCornerPosition=_visualCornerPosition;
@property(nonatomic) _Bool ownsActionContent; // @synthesize ownsActionContent=_ownsActionContent;
@property(readonly, nonatomic) UIInterfaceAction *action; // @synthesize action=_action;
@property(nonatomic, setter=_setContentsInsertedIntoViewHierarchy:) _Bool _contentsInsertedIntoViewHierarchy; // @synthesize _contentsInsertedIntoViewHierarchy;
- (id)_actionViewState;	// IMP=0x00000000002f3d7d
- (void)_clearBackgroundPressedState;	// IMP=0x00000000002f3d5e
- (id)_viewDisplayingBackground;	// IMP=0x00000000002f3d49
- (_Bool)_isVisibleWithinContainmentAncestor;	// IMP=0x00000000002f3c3c
- (_Bool)_canLoadContentsIntoHierarchy;	// IMP=0x00000000002f3c08
- (void)_removeLoadedContentsFromHierarchyIfNotVisible;	// IMP=0x00000000002f3bb5
- (void)_addLoadedContentsToHierarchyIfAllowed;	// IMP=0x00000000002f3b6c
- (void)_addLoadedContentsToHierarchyFirstTime;	// IMP=0x00000000002f3ad6
- (void)_updateLoadedContentsHierarchyByInsertingOrRemovingIfNecessary;	// IMP=0x00000000002f3aab
- (void)_loadContentsIntoHierarchyAndPrepareIfNecessary;	// IMP=0x00000000002f3a5f
- (void)_updateHighlightAndPressedFeedback;	// IMP=0x00000000002f37a4
- (_Bool)isFocused;	// IMP=0x00000000002f372a
- (void)_reloadBackgroundHighlightView;	// IMP=0x00000000002f32a3
- (void)_applyVisualStyleToBackgroundViewAndHighlighting;	// IMP=0x00000000002f3291
- (void)_applyVisualStyleToLayoutMargins;	// IMP=0x00000000002f31a1
- (void)_initializeHorizontalMarginsForAction;	// IMP=0x00000000002f30dc
- (void)_setHorizontalMargins:(struct UIEdgeInsets)arg1 preservesSuperviewLayoutMargins:(_Bool)arg2;	// IMP=0x00000000002f2ff7
- (_Bool)_fittingContentViewHasItsOwnActiveMinimumSizeConstraintsWithSize:(struct CGSize)arg1;	// IMP=0x00000000002f2f78
- (void)_applyVisualStyleToMinimumSizeConstraints;	// IMP=0x00000000002f2df7
- (void)_applyVisualStyle;	// IMP=0x00000000002f2dbc
- (void)_didScroll;	// IMP=0x00000000002f2daa
- (void)_showVisualFeedbackForPressed:(_Bool)arg1;	// IMP=0x00000000002f2d87
- (_Bool)_shouldShowPressFeedbackForEventWithPresses:(id)arg1;	// IMP=0x00000000002f2ce2
- (_Bool)_handleVisualFeedbackForPress:(id)arg1 pressed:(_Bool)arg2;	// IMP=0x00000000002f2c9c
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000002f2c11
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000002f2b86
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000002f2af8
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000002f2a6a
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000002f292a
- (_Bool)canBecomeFocused;	// IMP=0x00000000002f28e6
- (_Bool)_showsFocusForFocusedView:(id)arg1;	// IMP=0x00000000002f2870
@property(nonatomic, getter=isSpringLoaded) _Bool springLoaded; // @dynamic springLoaded;
- (struct CGRect)_fittingContentSizingViewFrameInBounds:(struct CGRect)arg1;	// IMP=0x00000000002f269b
- (struct CGSize)_fittingContentSizeWithFittingViewSize:(struct CGSize)arg1;	// IMP=0x00000000002f2648
- (struct UIEdgeInsets)_fittingContentSizingViewMargins;	// IMP=0x00000000002f2616
- (id)_fittingContentSizingView;	// IMP=0x00000000002f260d
- (id)__fittingContentSizingViewAllowingSelf;	// IMP=0x00000000002f25c8
- (id)__fittingContentSizingViewIfNotSelf;	// IMP=0x00000000002f2584
- (void)_updateFittingContentSizingViewToFitSize;	// IMP=0x00000000002f24a5
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000002f2493
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;	// IMP=0x00000000002f23b5
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000002f2303
- (void)layoutMarginsDidChange;	// IMP=0x00000000002f22c2
- (void)invalidateIntrinsicContentSize;	// IMP=0x00000000002f2255
- (void)layoutSubviews;	// IMP=0x00000000002f2152
- (void)updateConstraints;	// IMP=0x00000000002f2114
- (void)interfaceAction:(id)arg1 reloadDisplayedContentVisualStyle:(id)arg2;	// IMP=0x00000000002f2102
- (void)interfaceAction:(id)arg1 reloadDisplayedContentActionProperties:(id)arg2;	// IMP=0x00000000002f2019
- (void)_enforceActionRepresentationViewsCanRemoveContentFromHierarchyWhenNotVisible:(_Bool)arg1;	// IMP=0x00000000002f1fd1
- (_Bool)hasLayoutHeightConstraintsIdenticalToRepresentationView:(id)arg1;	// IMP=0x00000000002f1fc9
@property(readonly, nonatomic) UIInterfaceActionVisualStyle *visualStyle;
- (void)invokeInterfaceAction;	// IMP=0x00000000002f1e82
- (void)updateContentsInsertedIntoHierarchy;	// IMP=0x00000000002f1e59
- (void)loadContents;	// IMP=0x00000000002f1e53
- (void)dealloc;	// IMP=0x00000000002f1e07
@property(readonly, copy) NSString *description;
- (id)initWithAction:(id)arg1;	// IMP=0x00000000002f1bb0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy, nonatomic) NSString *focusGroupIdentifier;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N

@property(readonly, nonatomic) id <UIFocusItemContainer> focusItemContainer;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak id <UIFocusEnvironment> parentFocusEnvironment;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly, nonatomic) __weak UIView *preferredFocusedView;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIView",?,R,W,N

@property(readonly) Class superclass;

@end

