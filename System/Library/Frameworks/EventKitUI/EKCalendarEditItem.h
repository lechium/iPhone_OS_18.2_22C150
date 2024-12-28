//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EKCalendar, EKEventStore;
@protocol EKCalendarEditItemDelegate;

__attribute__((visibility("hidden")))
@interface EKCalendarEditItem : NSObject
{
    EKEventStore *_store;	// 8 = 0x8
    EKCalendar *_calendar;	// 16 = 0x10
    id <EKCalendarEditItemDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001c536c
@property(readonly, nonatomic) EKCalendar *calendar; // @synthesize calendar=_calendar;
@property(nonatomic) __weak id <EKCalendarEditItemDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)becomeFirstResponder;	// IMP=0x00000000001c5333
- (_Bool)saveStateToCalendar:(id)arg1;	// IMP=0x00000000001c532b
- (_Bool)calendarEditor:(id)arg1 shouldSelectSubitem:(unsigned long long)arg2;	// IMP=0x00000000001c5323
- (void)calendarEditor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;	// IMP=0x00000000001c531d
- (void)layoutForWidth:(double)arg1;	// IMP=0x00000000001c5317
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001c530f
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;	// IMP=0x00000000001c5301
- (id)footerTitle;	// IMP=0x00000000001c52f9
- (id)headerTitle;	// IMP=0x00000000001c52f1
- (unsigned long long)numberOfSubitems;	// IMP=0x00000000001c52e6
- (_Bool)configureWithCalendar:(id)arg1 store:(id)arg2;	// IMP=0x00000000001c524a
- (_Bool)configureWithCalendar:(id)arg1;	// IMP=0x00000000001c5236
- (void)reloadData;	// IMP=0x00000000001c5230
- (void)reset;	// IMP=0x00000000001c522a
- (void)setCalendar:(id)arg1 store:(id)arg2;	// IMP=0x00000000001c51a6

@end
