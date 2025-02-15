//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString, UIColor, UILabel;

@interface _CHWorkoutSummaryTabbedLabelContainer : UIView
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_totalLabel;	// 16 = 0x10
    UILabel *_averageLabel;	// 24 = 0x18
    NSString *_titleText;	// 32 = 0x20
    NSString *_totalText;	// 40 = 0x28
    NSString *_averageText;	// 48 = 0x30
    UIColor *_textColor;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000046ce2
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSString *averageText; // @synthesize averageText=_averageText;
@property(retain, nonatomic) NSString *totalText; // @synthesize totalText=_totalText;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (double)_firstBaselineOffsetFromTop;	// IMP=0x0010000000046c81
- (void)sizeToFit;	// IMP=0x0010000000046c05
- (struct CGSize)intrinsicContentSize;	// IMP=0x0010000000046b4d
- (void)layoutSubviews;	// IMP=0x0010000000046802
- (void)setText:(id)arg1;	// IMP=0x0010000000046781
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000046188

@end

