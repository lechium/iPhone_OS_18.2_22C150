//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet, NSPointerArray, NSString, UIGestureRecognizer, UIHoverGestureRecognizer, UILongPressGestureRecognizer, UIScrollView, UISelectionFeedbackGenerator, UIView, _UIInterfaceActionSelectByPressGestureRecognizer, _UIInterfaceActionSelectionDelayGestureRecognizer;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionSelectionTrackingController : NSObject
{
    _Bool _scrubbingEnabled;	// 8 = 0x8
    _Bool _selectByPressGestureEnabled;	// 9 = 0x9
    _Bool _selectionFeedbackEnabled;	// 10 = 0xa
    _Bool _selectByIndirectPointerTouchEnabled;	// 11 = 0xb
    UIView *_trackableContainerView;	// 16 = 0x10
    UIScrollView *_actionsScrollView;	// 24 = 0x18
    NSArray *_representationViews;	// 32 = 0x20
    UILongPressGestureRecognizer *_selectionGestureRecognizer;	// 40 = 0x28
    _UIInterfaceActionSelectionDelayGestureRecognizer *_selectionDelayGestureRecognizer;	// 48 = 0x30
    UIGestureRecognizer *_systemProvidedGestureRecognizer;	// 56 = 0x38
    NSMutableSet *_viewsRequiringSelectionGestureDisabling;	// 64 = 0x40
    _UIInterfaceActionSelectByPressGestureRecognizer *_selectByPressGestureRecognizer;	// 72 = 0x48
    UISelectionFeedbackGenerator *_selectionRetargetFeedbackGenerator;	// 80 = 0x50
    NSPointerArray *_weakCooperatingSelectionTrackingControllers;	// 88 = 0x58
    id _scrollViewWillBeginDraggingNotificationToken;	// 96 = 0x60
    id _scrollViewDidEndDraggingNotificationToken;	// 104 = 0x68
    id _scrollViewDidEndDeceleratingNotificationToken;	// 112 = 0x70
    UIHoverGestureRecognizer *_hoverGestureRecognizer;	// 120 = 0x78
    struct CGPoint _actionSelectionInitialLocationInContainerView;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000000002eddc7
@property(retain, nonatomic) UIHoverGestureRecognizer *hoverGestureRecognizer; // @synthesize hoverGestureRecognizer=_hoverGestureRecognizer;
@property(retain, nonatomic) id scrollViewDidEndDeceleratingNotificationToken; // @synthesize scrollViewDidEndDeceleratingNotificationToken=_scrollViewDidEndDeceleratingNotificationToken;
@property(retain, nonatomic) id scrollViewDidEndDraggingNotificationToken; // @synthesize scrollViewDidEndDraggingNotificationToken=_scrollViewDidEndDraggingNotificationToken;
@property(retain, nonatomic) id scrollViewWillBeginDraggingNotificationToken; // @synthesize scrollViewWillBeginDraggingNotificationToken=_scrollViewWillBeginDraggingNotificationToken;
@property(retain, nonatomic) NSPointerArray *weakCooperatingSelectionTrackingControllers; // @synthesize weakCooperatingSelectionTrackingControllers=_weakCooperatingSelectionTrackingControllers;
@property(retain, nonatomic) UISelectionFeedbackGenerator *selectionRetargetFeedbackGenerator; // @synthesize selectionRetargetFeedbackGenerator=_selectionRetargetFeedbackGenerator;
@property(retain, nonatomic) _UIInterfaceActionSelectByPressGestureRecognizer *selectByPressGestureRecognizer; // @synthesize selectByPressGestureRecognizer=_selectByPressGestureRecognizer;
@property(readonly, nonatomic) NSMutableSet *viewsRequiringSelectionGestureDisabling; // @synthesize viewsRequiringSelectionGestureDisabling=_viewsRequiringSelectionGestureDisabling;
@property(readonly, nonatomic) UIGestureRecognizer *systemProvidedGestureRecognizer; // @synthesize systemProvidedGestureRecognizer=_systemProvidedGestureRecognizer;
@property(readonly, nonatomic) _UIInterfaceActionSelectionDelayGestureRecognizer *selectionDelayGestureRecognizer; // @synthesize selectionDelayGestureRecognizer=_selectionDelayGestureRecognizer;
@property(readonly, nonatomic) UILongPressGestureRecognizer *selectionGestureRecognizer; // @synthesize selectionGestureRecognizer=_selectionGestureRecognizer;
@property(readonly, nonatomic) struct CGPoint actionSelectionInitialLocationInContainerView; // @synthesize actionSelectionInitialLocationInContainerView=_actionSelectionInitialLocationInContainerView;
@property(retain, nonatomic) NSArray *representationViews; // @synthesize representationViews=_representationViews;
@property(nonatomic) _Bool selectByIndirectPointerTouchEnabled; // @synthesize selectByIndirectPointerTouchEnabled=_selectByIndirectPointerTouchEnabled;
@property(nonatomic) _Bool selectionFeedbackEnabled; // @synthesize selectionFeedbackEnabled=_selectionFeedbackEnabled;
@property(nonatomic) _Bool selectByPressGestureEnabled; // @synthesize selectByPressGestureEnabled=_selectByPressGestureEnabled;
@property(nonatomic) _Bool scrubbingEnabled; // @synthesize scrubbingEnabled=_scrubbingEnabled;
@property(nonatomic) __weak UIScrollView *actionsScrollView; // @synthesize actionsScrollView=_actionsScrollView;
@property(nonatomic) __weak UIView *trackableContainerView; // @synthesize trackableContainerView=_trackableContainerView;
- (id)_allGestureRecognizers;	// IMP=0x00000000002edbe1
- (id)_allActionViewsIncludingCooperatingActionViews;	// IMP=0x00000000002edb28
- (void)_performRecursivelyWithVisitedCooperatingControllers:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000002ed817
- (_Bool)_shouldDisableSelectionTrackingIfScrollingScrollView:(id)arg1;	// IMP=0x00000000002ed79a
- (void)_noteScrollView:(id)arg1 isUserScrolling:(_Bool)arg2;	// IMP=0x00000000002ed705
- (void)_unregisterForScrollViewNotifications;	// IMP=0x00000000002ed695
- (void)_registerForScrollViewNotifications;	// IMP=0x00000000002ed23f
- (void)_initializeSelectionGestureRecognizer;	// IMP=0x00000000002ed082
- (id)_actionViewAtCurrentLocationForGestureRecognizer:(id)arg1;	// IMP=0x00000000002ecd6b
- (id)_actionViewIncludingCooperatingActionViewsAtCurrentLocationForGestureRecognizer:(id)arg1;	// IMP=0x00000000002ecbe0
- (_Bool)_allowSelectionForCurrentGestureLocationWithGestureRecognizer:(id)arg1;	// IMP=0x00000000002ecb16
- (void)_invokeHandlerForInterfaceAction:(id)arg1;	// IMP=0x00000000002ecaf4
- (_Bool)_isPresentedAndVisible;	// IMP=0x00000000002eca9e
- (void)_handleActionSelectionGestureRecognizer:(id)arg1;	// IMP=0x00000000002ec320
- (void)_rolloverActionChanged:(id)arg1;	// IMP=0x00000000002ec1ae
- (void)_handleSystemProvidedGestureRecognizer:(id)arg1;	// IMP=0x00000000002ec19c
- (void)deselectAllActions;	// IMP=0x00000000002ec141
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;	// IMP=0x00000000002ebfd8
- (_Bool)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000000002ebef4
- (_Bool)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x00000000002ebe3c
- (void)_clearSystemProvidedGestureRecognizer;	// IMP=0x00000000002ebe28
- (void)_setSystemProvidedGestureRecognizer:(id)arg1;	// IMP=0x00000000002ebc75
- (void)beginTrackingSessionByTakingOverForSystemProvidedGestureRecognizer:(id)arg1;	// IMP=0x00000000002ebc20
- (void)handlePressedFocusedInterfaceAction:(id)arg1;	// IMP=0x00000000002ebc0e
- (id)_interfaceActionOfFocusedRepresentationView;	// IMP=0x00000000002ebaac
- (id)focusedInterfaceAction;	// IMP=0x00000000002eba9a
- (void)setCooperatingSelectionTrackingControllers:(id)arg1;	// IMP=0x00000000002eb552
- (void)dealloc;	// IMP=0x00000000002eb514
- (id)initWithTrackableContainerView:(id)arg1 actionsScrollView:(id)arg2;	// IMP=0x00000000002eb435

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

