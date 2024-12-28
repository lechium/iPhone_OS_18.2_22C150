//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class CHWorkoutFormattingManager, NSDictionary, NSLayoutConstraint, UILabel, UISegmentedControl, UIView;
@protocol CHWorkoutDetailPaceSelectionDelegate;

@interface CHWorkoutDetailPaceTableViewCell : UITableViewCell
{
    id <CHWorkoutDetailPaceSelectionDelegate> _paceSelectionDelegate;	// 8 = 0x8
    long long _selectedPaceFormat;	// 16 = 0x10
    CHWorkoutFormattingManager *_formattingManager;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UILabel *_valueLabel;	// 40 = 0x28
    UIView *_separatorView;	// 48 = 0x30
    UISegmentedControl *_segmentedControl;	// 56 = 0x38
    NSDictionary *_splitsDictionary;	// 64 = 0x40
    NSLayoutConstraint *_heightConstraint;	// 72 = 0x48
    NSLayoutConstraint *_segControlToBaselineConstraint;	// 80 = 0x50
}

+ (double)preferredHeightForWorkout:(id)arg1;	// IMP=0x0040000000005ae9
+ (id)_paceFormats;	// IMP=0x0010000000005a99
- (void).cxx_destruct;	// IMP=0x0020000000007b2f
@property(retain, nonatomic) NSLayoutConstraint *segControlToBaselineConstraint; // @synthesize segControlToBaselineConstraint=_segControlToBaselineConstraint;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) NSDictionary *splitsDictionary; // @synthesize splitsDictionary=_splitsDictionary;
@property(retain, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) CHWorkoutFormattingManager *formattingManager; // @synthesize formattingManager=_formattingManager;
@property(nonatomic) long long selectedPaceFormat; // @synthesize selectedPaceFormat=_selectedPaceFormat;
@property(nonatomic) __weak id <CHWorkoutDetailPaceSelectionDelegate> paceSelectionDelegate; // @synthesize paceSelectionDelegate=_paceSelectionDelegate;
- (void)_segmentedControlValueDidChange:(id)arg1;	// IMP=0x0010000000007910
- (void)configureWithWorkout:(id)arg1 workoutActivity:(id)arg2 dataCalculator:(id)arg3;	// IMP=0x0010000000006d6e
- (void)_createSeparator;	// IMP=0x001000000000697c
- (void)_createSegmentedControl;	// IMP=0x00100000000061e7
- (void)_createLabels;	// IMP=0x0010000000005c69
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0010000000005b14

@end
