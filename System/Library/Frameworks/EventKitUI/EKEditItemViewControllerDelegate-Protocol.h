//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKitUI/NSObject-Protocol.h>

@class EKEditItemViewController, EKEvent;
@protocol EKEditItemViewControllerProtocol;

@protocol EKEditItemViewControllerDelegate <NSObject>
- (EKEvent *)editItemEventToDetach;
- (_Bool)editItemViewControllerShouldShowDetachAlert;
- (void)editItemViewController:(EKEditItemViewController *)arg1 didCompleteWithAction:(int)arg2;

@optional
- (void)editItemPendingVideoConferenceCompleted:(EKEditItemViewController *)arg1;
- (void)editItemViewControllerWantsKeyboardPinned:(_Bool)arg1;
- (_Bool)editItemViewControllerSave:(id <EKEditItemViewControllerProtocol>)arg1;
@end

