//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class HKUnit, MISSING_TYPE, NSArray, UILabel;

@interface _TtC10FitnessApp20TrendDetailChartView : UIView
{
    MISSING_TYPE *type;	// 8 = 0x8
    MISSING_TYPE *direction;	// 9 = 0x9
    MISSING_TYPE *average90;	// 16 = 0x10
    MISSING_TYPE *histogram90;	// 24 = 0x18
    MISSING_TYPE *average365;	// 80 = 0x50
    MISSING_TYPE *histogram365;	// 88 = 0x58
    MISSING_TYPE *chartHistogram90;	// 144 = 0x90
    MISSING_TYPE *chartHistogram365;	// 200 = 0xc8
    MISSING_TYPE *formattingManager;	// 256 = 0x100
    MISSING_TYPE *titleLabel;	// 264 = 0x108
    MISSING_TYPE *chartMaxLabel;	// 272 = 0x110
    MISSING_TYPE *chartContainer;	// 280 = 0x118
    MISSING_TYPE *container365;	// 288 = 0x120
    MISSING_TYPE *container90;	// 296 = 0x128
    MISSING_TYPE *axisContainer;	// 304 = 0x130
    MISSING_TYPE *axisLayer;	// 312 = 0x138
    MISSING_TYPE *gradientLayer90;	// 320 = 0x140
    MISSING_TYPE *barLayer90;	// 328 = 0x148
    MISSING_TYPE *gradientLayer365;	// 336 = 0x150
    MISSING_TYPE *barLayer365;	// 344 = 0x158
    MISSING_TYPE *lineLayer90;	// 352 = 0x160
    MISSING_TYPE *lineLayer365;	// 360 = 0x168
    MISSING_TYPE *averagePlatter365;	// 368 = 0x170
    MISSING_TYPE *averagePlatter90;	// 376 = 0x178
    MISSING_TYPE *chartMask;	// 384 = 0x180
    MISSING_TYPE *scrubberPlatter;	// 392 = 0x188
    MISSING_TYPE *scrubberFlagpole;	// 400 = 0x190
    MISSING_TYPE *axisMonthLabels;	// 408 = 0x198
    MISSING_TYPE *axisYearLabel;	// 416 = 0x1a0
    MISSING_TYPE *monthLabelsStackView;	// 424 = 0x1a8
    MISSING_TYPE *div;	// 432 = 0x1b0
    MISSING_TYPE *barStops;	// 440 = 0x1b8
    MISSING_TYPE *lineStops;	// 448 = 0x1c0
    MISSING_TYPE *firstFirstOfMonth;	// 24 = 0x18
    MISSING_TYPE *longPressRecognizer;	// 65536 = 0x10000
    MISSING_TYPE *extraTopPaddingPercentage;	// 1937330991 = 0x7379532f
    MISSING_TYPE *januaryLabel;	// 1919052108 = 0x7262694c
    MISSING_TYPE *stackViewLeftConstraint;	// 0 = 0x0
    MISSING_TYPE *stackViewRightConstraint;	// 0 = 0x0
    MISSING_TYPE *yearLabelLeftConstraint;	// 0 = 0x0
    MISSING_TYPE *platter90CenterXConstraint;	// 0 = 0x0
    MISSING_TYPE *platter90CenterYConstraint;	// 0 = 0x0
    MISSING_TYPE *platter365CenterXConstraint;	// 0 = 0x0
    MISSING_TYPE *platter365CenterYConstraint;	// 0 = 0x0
    MISSING_TYPE *scrubberCenterXConstraint;	// 0 = 0x0
    MISSING_TYPE *scrubberFlagpoleBottomConstraint;	// 0 = 0x0
    MISSING_TYPE *scrubberFlagpoleCenterXConstraint;	// 0 = 0x0
    MISSING_TYPE *nWeeksIn90DayBucket;	// 0 = 0x0
    MISSING_TYPE *filled;	// 1986622032 = 0x76697250
}

- (void).cxx_destruct;	// IMP=0x002000000062b590
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000062b530
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000062b500
- (void)layoutSubviews;	// IMP=0x001000000062abe0
- (void)setupFontsWithNote:(id)arg1;	// IMP=0x0010000000626a60
@property(nonatomic, copy) NSArray *barStops;
@property(nonatomic, readonly) UILabel *chartMaxLabel; // @synthesize chartMaxLabel;
@property(nonatomic, readonly) UILabel *titleLabel; // @synthesize titleLabel;
- (void)longPressWithSender:(id)arg1;	// IMP=0x001000000062cdd0
- (id)accessibilityQuantityForIndex:(long long)arg1;	// IMP=0x001000000062d250
- (id)accessibilityDateIntervalForIndex:(long long)arg1;	// IMP=0x001000000062d0f0
@property(nonatomic, readonly) HKUnit *accessibilityUnit;

@end
