//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class NSDateComponents, UICalendarSelectionSingleDate;

@protocol UICalendarSelectionSingleDateDelegate <NSObject>
- (void)dateSelection:(UICalendarSelectionSingleDate *)arg1 didSelectDate:(NSDateComponents *)arg2;

@optional
- (_Bool)dateSelection:(UICalendarSelectionSingleDate *)arg1 canSelectDate:(NSDateComponents *)arg2;
@end
