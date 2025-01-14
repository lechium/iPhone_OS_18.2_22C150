//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class EKDayOccurrenceView, EKEvent, EKEventCreationGestureController, NSDate, UIView;

@protocol EKEventCreationGestureControllerDelegate <NSObject>
- (void)creationGestureControllerDidCancel:(EKEventCreationGestureController *)arg1;
- (void)creationGestureController:(EKEventCreationGestureController *)arg1 didCreateNewEvent:(EKEvent *)arg2;
- (EKEvent *)creationGestureControllerRequestsNewEvent:(EKEventCreationGestureController *)arg1;
- (NSDate *)creationGestureController:(EKEventCreationGestureController *)arg1 dateForPoint:(struct CGPoint)arg2;
- (void)creationGestureController:(EKEventCreationGestureController *)arg1 didResizeToDate:(NSDate *)arg2;
- (struct CGPoint)creationGestureController:(EKEventCreationGestureController *)arg1 requestsPointForDate:(NSDate *)arg2;
- (double)creationGestureController:(EKEventCreationGestureController *)arg1 requestedXCoordinateForEventPreviewAtPoint:(struct CGPoint)arg2;
- (double)creationGestureController:(EKEventCreationGestureController *)arg1 requestedWidthForEventPreview:(UIView *)arg2 atPoint:(struct CGPoint)arg3;
- (EKDayOccurrenceView *)creationGestureController:(EKEventCreationGestureController *)arg1 requestedPreviewForEvent:(EKEvent *)arg2;
- (UIView *)creationGestureControllerRequestedContainerView:(EKEventCreationGestureController *)arg1;
- (_Bool)creationGestureController:(EKEventCreationGestureController *)arg1 canActivateAtPoint:(struct CGPoint)arg2;
@end

