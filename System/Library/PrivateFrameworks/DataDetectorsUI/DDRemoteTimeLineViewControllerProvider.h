//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "DDRemoteActionViewControllerProvider.h"

@class APBaseExtensionShieldView, EKEvent, EKEventStore, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface DDRemoteTimeLineViewControllerProvider : DDRemoteActionViewControllerProvider
{
    APBaseExtensionShieldView *_shieldView;	// 8 = 0x8
    NSArray *_events;	// 16 = 0x10
    EKEvent *_event;	// 24 = 0x18
    EKEventStore *_store;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000ef96
@property(retain) EKEventStore *store; // @synthesize store=_store;
@property(retain) EKEvent *event; // @synthesize event=_event;
@property(retain) NSArray *events; // @synthesize events=_events;
- (id)selectedEventsForEditMenu;	// IMP=0x000000000000ef14
- (void)dayViewController:(id)arg1 didSelectEvent:(id)arg2 animated:(_Bool)arg3 userInitiated:(_Bool)arg4;	// IMP=0x000000000000ef0e
- (void)dayOccurrenceViewSelected:(id)arg1 source:(unsigned long long)arg2;	// IMP=0x000000000000ef08
- (void)dayViewControllerDidRespondToApplicationDidBecomeActiveStateChange:(id)arg1;	// IMP=0x000000000000ef02
- (void)updateSelectedOccurrenceView;	// IMP=0x000000000000eefc
- (void)dayViewControllerDidFinishPinchingDayView:(id)arg1;	// IMP=0x000000000000eef6
- (void)dayViewControllerIsPinchingDayView:(id)arg1;	// IMP=0x000000000000eef0
- (void)dayViewcontrollerDidBeginMovingEventWithGesture:(id)arg1;	// IMP=0x000000000000eeea
- (_Bool)dayViewControllerShouldShowDetachDialogOnGestureDraggingEnd:(id)arg1;	// IMP=0x000000000000eee2
- (_Bool)dayviewControllerShouldAllowSwipeToChangeDays:(id)arg1;	// IMP=0x000000000000eeda
- (void)dayViewController:(id)arg1 handleGestureCommittingOccurrence:(id)arg2;	// IMP=0x000000000000eed4
- (_Bool)delegateWantsToHandleDayViewController:(id)arg1 gestureCommittingOccurrence:(id)arg2;	// IMP=0x000000000000eecc
- (void)dayViewControllerDidChangeDisplayedOccurrences:(id)arg1;	// IMP=0x000000000000eec6
- (void)dayViewControllerDidReloadData:(id)arg1;	// IMP=0x000000000000ee5b
- (void)dayViewControllerDidTapEmptySpace:(id)arg1;	// IMP=0x000000000000ee55
- (_Bool)dayViewControllerShouldAllowLongPress:(id)arg1;	// IMP=0x000000000000ee4d
- (void)dayViewController:(id)arg1 awaitsDeletingOccurrence:(id)arg2;	// IMP=0x000000000000ee47
- (void)dayViewController:(id)arg1 awaitsRefreshingOccurrence:(id)arg2;	// IMP=0x000000000000ee41
- (void)dayViewController:(id)arg1 beginEditingOccurrence:(id)arg2;	// IMP=0x000000000000ee3b
- (id)dayViewController:(id)arg1 createEventAtDate:(id)arg2 allDay:(_Bool)arg3;	// IMP=0x000000000000ee33
- (void)dayViewController:(id)arg1 didChangeDisplayDate:(id)arg2;	// IMP=0x000000000000ee2d
- (void)dayViewController:(id)arg1 didSelectEvent:(id)arg2;	// IMP=0x000000000000ee27
- (void)dayViewController:(id)arg1 didSelectEvent:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000000ee21
- (_Bool)dayViewControllerShouldRespondToApplicationDidBecomeActiveStateChange:(id)arg1;	// IMP=0x000000000000ee19
- (id)dayViewController:(id)arg1 eventsForStartDate:(id)arg2 endDate:(id)arg3;	// IMP=0x000000000000e735
- (void)createViewControllerWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000d734

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

