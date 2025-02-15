//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface UIDatePickerWeekMonthDayView : UIView
{
    struct {
        unsigned int weekdayLast:1;
    } _datePickerWeekMonthDayViewFlags;	// 160 = 0xa0
    UILabel *_dateLabel;	// 168 = 0xa8
    UILabel *_weekdayLabel;	// 176 = 0xb0
    NSString *_formattedDateString;	// 184 = 0xb8
    double _weekdayWidth;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x000000000129dade
@property(nonatomic) double weekdayWidth; // @synthesize weekdayWidth=_weekdayWidth;
@property(copy, nonatomic) NSString *formattedDateString; // @synthesize formattedDateString=_formattedDateString;
@property(readonly, nonatomic) UILabel *weekdayLabel; // @synthesize weekdayLabel=_weekdayLabel;
@property(readonly, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(nonatomic) _Bool weekdayLast;
- (void)layoutSubviews;	// IMP=0x000000000129d342
- (_Bool)_canBeReusedInPickerView;	// IMP=0x000000000129d31c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000129cf1c

@end

