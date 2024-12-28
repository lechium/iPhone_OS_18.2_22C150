//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, NSDate, NSIndexPath, NSString, NSTimer, UICollectionViewDiffableDataSource, UIHoverGestureRecognizer, UISelectionFeedbackGenerator, _UIContextMenuLinkedList, _UIContextMenuListView, _UIContextMenuNode, _UIContextMenuSelectionDelayGestureRecognizer, _UIContinuousSelectionGestureRecognizer, _UIVelocityIntegrator;
@protocol _UIContextMenuHierarchyLayout, _UIContextMenuViewDelegate;

__attribute__((visibility("hidden")))
@interface _UIContextMenuView : UIView
{
    _Bool _showsShadow;	// 160 = 0xa0
    _Bool _reversesActionOrder;	// 161 = 0xa1
    _Bool _scrubbingEnabled;	// 162 = 0xa2
    _Bool _allowsBackgroundViewInteraction;	// 163 = 0xa3
    _Bool _isComputingPreferredSize;	// 164 = 0xa4
    _Bool _retainHighlightOnMenuNavigation;	// 165 = 0xa5
    _Bool _shouldAvoidInputViews;	// 166 = 0xa6
    _Bool _hasTrackingTouch;	// 167 = 0xa7
    _Bool _wantsFocusDeferralIfSupported;	// 168 = 0xa8
    id <_UIContextMenuViewDelegate> _delegate;	// 176 = 0xb0
    unsigned long long _hierarchyStyle;	// 184 = 0xb8
    unsigned long long _attachmentEdge;	// 192 = 0xc0
    _UIContextMenuNode *_departingNode;	// 200 = 0xc8
    UICollectionViewDiffableDataSource *_collectionViewDataSource;	// 208 = 0xd0
    _UIContinuousSelectionGestureRecognizer *_selectionGestureRecognizer;	// 216 = 0xd8
    _UIContextMenuSelectionDelayGestureRecognizer *_selectionDelayGestureRecognizer;	// 224 = 0xe0
    NSDate *_appearanceDate;	// 232 = 0xe8
    UIHoverGestureRecognizer *_highlightHoverGestureRecognizer;	// 240 = 0xf0
    UISelectionFeedbackGenerator *_feedbackGenerator;	// 248 = 0xf8
    _UIContextMenuLinkedList *_submenus;	// 256 = 0x100
    NSTimer *_autoNavigationTimer;	// 264 = 0x108
    NSTimer *_autoUnhighlightTimer;	// 272 = 0x110
    NSIndexPath *_unselectableIndexPath;	// 280 = 0x118
    id <_UIContextMenuHierarchyLayout> _layout;	// 288 = 0x120
    _UIContextMenuNode *_hoveredNode;	// 296 = 0x128
    _UIVelocityIntegrator *_hoverVelocityIntegrator;	// 304 = 0x130
    NSTimer *_hoverAutoExitTimer;	// 312 = 0x138
    double _preferredScrollTruncationDetent;	// 320 = 0x140
    struct CGSize _visibleContentSize;	// 328 = 0x148
    struct CGSize _maxContainerSize;	// 344 = 0x158
}

- (void).cxx_destruct;	// IMP=0x0000000000305259
@property(nonatomic) _Bool wantsFocusDeferralIfSupported; // @synthesize wantsFocusDeferralIfSupported=_wantsFocusDeferralIfSupported;
@property(nonatomic) double preferredScrollTruncationDetent; // @synthesize preferredScrollTruncationDetent=_preferredScrollTruncationDetent;
@property(retain, nonatomic) NSTimer *hoverAutoExitTimer; // @synthesize hoverAutoExitTimer=_hoverAutoExitTimer;
@property(retain, nonatomic) _UIVelocityIntegrator *hoverVelocityIntegrator; // @synthesize hoverVelocityIntegrator=_hoverVelocityIntegrator;
@property(retain, nonatomic) _UIContextMenuNode *hoveredNode; // @synthesize hoveredNode=_hoveredNode;
@property(retain, nonatomic) id <_UIContextMenuHierarchyLayout> layout; // @synthesize layout=_layout;
@property(nonatomic) struct CGSize maxContainerSize; // @synthesize maxContainerSize=_maxContainerSize;
@property(nonatomic) _Bool hasTrackingTouch; // @synthesize hasTrackingTouch=_hasTrackingTouch;
@property(copy, nonatomic) NSIndexPath *unselectableIndexPath; // @synthesize unselectableIndexPath=_unselectableIndexPath;
@property(retain, nonatomic) NSTimer *autoUnhighlightTimer; // @synthesize autoUnhighlightTimer=_autoUnhighlightTimer;
@property(retain, nonatomic) NSTimer *autoNavigationTimer; // @synthesize autoNavigationTimer=_autoNavigationTimer;
@property(nonatomic) _Bool shouldAvoidInputViews; // @synthesize shouldAvoidInputViews=_shouldAvoidInputViews;
@property(nonatomic) _Bool retainHighlightOnMenuNavigation; // @synthesize retainHighlightOnMenuNavigation=_retainHighlightOnMenuNavigation;
@property(nonatomic) _Bool isComputingPreferredSize; // @synthesize isComputingPreferredSize=_isComputingPreferredSize;
@property(retain, nonatomic) _UIContextMenuLinkedList *submenus; // @synthesize submenus=_submenus;
@property(retain, nonatomic) UISelectionFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(retain, nonatomic) UIHoverGestureRecognizer *highlightHoverGestureRecognizer; // @synthesize highlightHoverGestureRecognizer=_highlightHoverGestureRecognizer;
@property(retain, nonatomic) NSDate *appearanceDate; // @synthesize appearanceDate=_appearanceDate;
@property(retain, nonatomic) _UIContextMenuSelectionDelayGestureRecognizer *selectionDelayGestureRecognizer; // @synthesize selectionDelayGestureRecognizer=_selectionDelayGestureRecognizer;
@property(retain, nonatomic) _UIContinuousSelectionGestureRecognizer *selectionGestureRecognizer; // @synthesize selectionGestureRecognizer=_selectionGestureRecognizer;
@property(retain, nonatomic) UICollectionViewDiffableDataSource *collectionViewDataSource; // @synthesize collectionViewDataSource=_collectionViewDataSource;
@property(retain, nonatomic) _UIContextMenuNode *departingNode; // @synthesize departingNode=_departingNode;
@property(nonatomic) unsigned long long attachmentEdge; // @synthesize attachmentEdge=_attachmentEdge;
@property(nonatomic) unsigned long long hierarchyStyle; // @synthesize hierarchyStyle=_hierarchyStyle;
@property(nonatomic) struct CGSize visibleContentSize; // @synthesize visibleContentSize=_visibleContentSize;
@property(nonatomic) _Bool allowsBackgroundViewInteraction; // @synthesize allowsBackgroundViewInteraction=_allowsBackgroundViewInteraction;
@property(nonatomic) _Bool scrubbingEnabled; // @synthesize scrubbingEnabled=_scrubbingEnabled;
@property(nonatomic) _Bool reversesActionOrder; // @synthesize reversesActionOrder=_reversesActionOrder;
@property(nonatomic) _Bool showsShadow; // @synthesize showsShadow=_showsShadow;
@property(nonatomic) __weak id <_UIContextMenuViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_testing_tapAnAction;	// IMP=0x0000000000304da3
- (struct CGRect)_rectOfNodeParentElement:(id)arg1;	// IMP=0x0000000000304bfc
- (void)_performActionForElement:(id)arg1;	// IMP=0x0000000000304b75
- (void)_handleSelectPressGesture:(id)arg1;	// IMP=0x0000000000304a9d
- (void)_handleMenuPressGesture:(id)arg1;	// IMP=0x0000000000304a51
- (void)_handleRightArrowKey:(id)arg1;	// IMP=0x0000000000304864
- (void)_handleLeftArrowKey:(id)arg1;	// IMP=0x0000000000304852
- (void)_selectPreviousMenuIfPossible;	// IMP=0x00000000003046e4
- (void)_handleEscapeKey:(id)arg1;	// IMP=0x0000000000304698
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0000000000304313
- (id)keyCommands;	// IMP=0x00000000003041c7
- (_Bool)_allowsChangingFirstResponderForFocusUpdateWithContext:(id)arg1;	// IMP=0x00000000003041bf
- (_Bool)canBecomeFirstResponder;	// IMP=0x00000000003041b7
- (id)preferredFocusEnvironments;	// IMP=0x000000000030412e
- (void)_clearHoverAutoExitTimer;	// IMP=0x00000000003040d4
- (void)_setHoverAutoExitTimer;	// IMP=0x0000000000303f47
- (void)_clearAutoNavigationTimer;	// IMP=0x0000000000303eed
- (void)_setAutoNavigationTimerIfNecessaryForElement:(id)arg1 isTrackpadHover:(_Bool)arg2;	// IMP=0x0000000000303bfb
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000003038fe
- (_Bool)_touchSupportsAutoNavigation:(id)arg1;	// IMP=0x00000000003038f6
- (void)_setHighlightedIndexPath:(id)arg1 playFeedback:(_Bool)arg2 atLocation:(struct CGPoint)arg3 allowAutoNavigation:(_Bool)arg4;	// IMP=0x00000000003033d4
- (void)_handleHoverGestureRecognizer:(id)arg1;	// IMP=0x00000000003029f8
- (void)_handleSelectionGesture:(id)arg1;	// IMP=0x0000000000302235
- (void)_handleSelectionForElement:(id)arg1;	// IMP=0x0000000000301f95
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0000000000301f8d
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;	// IMP=0x0000000000301e34
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000301d76
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000301c7e
- (void)_updateSelectionGestureAllowableMovementForGestureBeginningAtIndexPath:(id)arg1;	// IMP=0x0000000000301b9f
- (id)_newListViewWithMenu:(id)arg1 position:(unsigned long long)arg2;	// IMP=0x0000000000301725
- (void)_displayMenu:(id)arg1 inPlaceOfMenu:(id)arg2 updateType:(unsigned long long)arg3 alongsideAnimations:(CDUnknownBlockType)arg4;	// IMP=0x00000000002fff83
- (void)displayMenu:(id)arg1 updateType:(unsigned long long)arg2 alongsideAnimations:(CDUnknownBlockType)arg3;	// IMP=0x00000000002fff69
- (void)replaceVisibleMenu:(id)arg1 withMenu:(id)arg2 alongsideAnimations:(CDUnknownBlockType)arg3;	// IMP=0x00000000002fff45
@property(readonly, nonatomic) NSArray *visibleMenus;
- (id)hoveredListView;	// IMP=0x00000000002ffde0
@property(readonly, nonatomic) _UIContextMenuListView *currentListView;
- (void)layoutSubviews;	// IMP=0x00000000002ffcad
- (double)closestScrollTruncationDetentToHeight:(double)arg1;	// IMP=0x00000000002ffc0a
- (struct CGSize)preferredContentSizeWithinContainerSize:(struct CGSize)arg1;	// IMP=0x00000000002ffa92
- (void)didMoveToWindow;	// IMP=0x00000000002ffa01
- (struct CGRect)activeSubmenuFrameInCoordinateSpace:(id)arg1;	// IMP=0x00000000002ff945
- (void)didCompleteMenuAppearanceAnimation;	// IMP=0x00000000002ff8f8
- (void)flashScrollIndicators;	// IMP=0x00000000002ff88e
- (void)scrollToFirstSignificantAction;	// IMP=0x00000000002ff851
- (_Bool)kickstartActionScrubbingWithGesture:(id)arg1;	// IMP=0x00000000002ff78a
- (void)setUserInteractionEnabled:(_Bool)arg1;	// IMP=0x00000000002ff4f1
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002fef38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
