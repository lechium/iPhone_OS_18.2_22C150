//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKitUI/NSObject-Protocol.h>

@class EKCalendar, EKEventEditViewController;

@protocol EKEventEditViewDelegate <NSObject>
- (void)eventEditViewController:(EKEventEditViewController *)arg1 didCompleteWithAction:(long long)arg2;

@optional
- (EKCalendar *)eventEditViewControllerDefaultCalendarForNewEvents:(EKEventEditViewController *)arg1;
@end
