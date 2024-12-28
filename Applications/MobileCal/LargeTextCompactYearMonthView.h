//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKitUI/EKUIYearMonthView.h>

@interface LargeTextCompactYearMonthView : EKUIYearMonthView
{
}

+ (double)heightForInterfaceOrientation:(long long)arg1 windowSize:(struct CGSize)arg2 heightSizeClass:(long long)arg3;	// IMP=0x004000000001c1fe
+ (double)rightMarginForWindowSize:(struct CGSize)arg1;	// IMP=0x001000000001c0e4
+ (double)leftMarginForWindowSize:(struct CGSize)arg1;	// IMP=0x001000000001c054
- (struct CGRect)frameForGridOfDays:(_Bool)arg1;	// IMP=0x004000000001c86e
- (struct CGSize)roundedRectSizeForDayNumberString:(id)arg1;	// IMP=0x001000000001c74e
- (_Bool)computeCircleFrameWithoutAdjustments;	// IMP=0x001000000001c746
- (id)weekDayInitialsFont;	// IMP=0x001000000001c73e
- (double)weekDayInitialsAdjustTop;	// IMP=0x001000000001c735
- (double)weekDayInitialsAdjustLeft;	// IMP=0x001000000001c72c
- (_Bool)showWeekDayInitials;	// IMP=0x001000000001c724
- (double)ySpacing;	// IMP=0x001000000001c692
- (double)xSpacing;	// IMP=0x001000000001c600
- (double)daysYAdjustTop;	// IMP=0x001000000001c56e
- (double)daysXAdjustLeft;	// IMP=0x001000000001c565
- (double)circleSizeForDoubleDigit;	// IMP=0x001000000001c553
- (double)circleSize;	// IMP=0x001000000001c4c1
- (double)todayTextSize;	// IMP=0x001000000001c4af
- (double)dayTextSize;	// IMP=0x001000000001c41d
- (double)todayNumberKerning;	// IMP=0x001000000001c414
- (id)todayNumberFont;	// IMP=0x001000000001c402
- (double)dayNumberKerning;	// IMP=0x001000000001c3f9
- (id)dayNumberFont;	// IMP=0x001000000001c3c7
- (double)headerFontKerning;	// IMP=0x001000000001c3be
- (id)headerFont;	// IMP=0x001000000001c30b
- (double)headerFontMinSize;	// IMP=0x001000000001c2f9
- (double)headerFontMaxSize;	// IMP=0x001000000001c2a9
- (double)headerXAdjust;	// IMP=0x001000000001c2a0
- (double)yInset;	// IMP=0x001000000001c297
- (double)xInset;	// IMP=0x001000000001c28e
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x001000000001c0f6

@end
