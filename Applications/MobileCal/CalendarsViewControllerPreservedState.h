//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EKAbstractCalendarEditor, EKCalendar, NSArray;

@interface CalendarsViewControllerPreservedState : NSObject
{
    EKCalendar *_centeredCalendar;	// 8 = 0x8
    EKAbstractCalendarEditor *_displayedEditor;	// 16 = 0x10
    NSArray *_presentedViewControllersState;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000122b01
@property(retain, nonatomic) NSArray *presentedViewControllersState; // @synthesize presentedViewControllersState=_presentedViewControllersState;
@property(retain, nonatomic) EKAbstractCalendarEditor *displayedEditor; // @synthesize displayedEditor=_displayedEditor;
@property(retain, nonatomic) EKCalendar *centeredCalendar; // @synthesize centeredCalendar=_centeredCalendar;

@end
