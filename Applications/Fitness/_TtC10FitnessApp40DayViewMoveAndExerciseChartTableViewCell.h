//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class MISSING_TYPE, UIButton, UILabel, _TtC10FitnessApp29DayViewTitleAndValueLabelPair, _TtC10FitnessApp32ActivityMoveAndExerciseChartView;

@interface _TtC10FitnessApp40DayViewMoveAndExerciseChartTableViewCell : UITableViewCell
{
    MISSING_TYPE *chartViewType;	// 8 = 0x8
    MISSING_TYPE *histogram;	// 16 = 0x10
    MISSING_TYPE *workoutHistogram;	// 72 = 0x48
    MISSING_TYPE *onEditGoal;	// 128 = 0x80
    MISSING_TYPE *isToday;	// 144 = 0x90
    MISSING_TYPE *auxiliaryValue;	// 152 = 0x98
    MISSING_TYPE *formattingManager;	// 160 = 0xa0
    MISSING_TYPE *labelPair;	// 168 = 0xa8
    MISSING_TYPE *chartView;	// 176 = 0xb0
    MISSING_TYPE *auxiliaryLabel;	// 184 = 0xb8
    MISSING_TYPE *editGoalButton;	// 192 = 0xc0
    MISSING_TYPE *fontListener;	// 200 = 0xc8
    MISSING_TYPE *chartData;	// 232 = 0xe8
    MISSING_TYPE *workouts;	// 240 = 0xf0
    MISSING_TYPE *nBins;	// 248 = 0xf8
}

- (void).cxx_destruct;	// IMP=0x0040000000330110
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000003312f0
- (void)dealloc;	// IMP=0x00100000003300f0
- (void)layoutSubviews;	// IMP=0x001000000032ff00
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x001000000032fed0
@property(nonatomic, readonly) UIButton *editGoalButton; // @synthesize editGoalButton;
@property(nonatomic, readonly) UILabel *auxiliaryLabel; // @synthesize auxiliaryLabel;
@property(nonatomic, readonly) _TtC10FitnessApp32ActivityMoveAndExerciseChartView *chartView; // @synthesize chartView;
@property(nonatomic, readonly) _TtC10FitnessApp29DayViewTitleAndValueLabelPair *labelPair; // @synthesize labelPair;

@end

