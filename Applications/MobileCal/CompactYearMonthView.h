//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKitUI/EKUIYearMonthView.h>

@class NSString;

@interface CompactYearMonthView : EKUIYearMonthView
{
}

+ (double)heightForInterfaceOrientation:(long long)arg1 windowSize:(struct CGSize)arg2 heightSizeClass:(long long)arg3;	// IMP=0x002000000010fe91
- (_Bool)shouldAddPreciseInteractivity;	// IMP=0x00200000001110b9
- (double)circleFrameYAdjustment;	// IMP=0x0010000000110fca
- (double)weekDayInitialsAdjustTop;	// IMP=0x0010000000110fc1
- (double)weekDayInitialsAdjustLeft;	// IMP=0x0010000000110fb8
- (id)weekDayInitialsFont;	// IMP=0x0010000000110fb0
- (_Bool)showWeekDayInitials;	// IMP=0x0010000000110fa8
- (double)todayNumberKerning;	// IMP=0x0010000000110ead
- (double)dayNumberKerning;	// IMP=0x0010000000110db2
- (double)ySpacing;	// IMP=0x0010000000110cc3
- (double)xSpacing;	// IMP=0x0010000000110bd4
- (double)daysYAdjustTop;	// IMP=0x0010000000110a9a
- (double)daysXAdjustLeft;	// IMP=0x0010000000110a8c
- (double)circleSizeForDoubleDigit;	// IMP=0x0010000000110a7a
- (double)circleSize;	// IMP=0x00100000001109a5
- (double)todayTextSize;	// IMP=0x00100000001108b6
- (double)dayTextSize;	// IMP=0x00100000001106b5
- (id)todayNumberFont;	// IMP=0x0010000000110603
- (id)dayNumberFont;	// IMP=0x0010000000110546
- (double)headerFontKerning;	// IMP=0x001000000011053d
- (id)headerFont;	// IMP=0x001000000011048e
- (double)headerFontMinSize;	// IMP=0x0010000000110480
- (double)headerFontMaxSize;	// IMP=0x0010000000110462
- (double)headerXAdjust;	// IMP=0x0010000000110454
- (double)yInset;	// IMP=0x001000000011044b
- (double)xInset;	// IMP=0x001000000011035c
- (double)_gridOfDaysHeightAdjustment;	// IMP=0x0010000000110287
- (double)_gridOfDaysYAdjustment;	// IMP=0x00100000001101bc
- (struct CGRect)frameForGridOfDays:(_Bool)arg1;	// IMP=0x0010000000110011
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x001000000010fcfd
- (void)_localeChanged:(id)arg1;	// IMP=0x001000000010fce0
- (id)initWithCalendarDate:(id)arg1 calendar:(id)arg2;	// IMP=0x001000000010fc0e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
