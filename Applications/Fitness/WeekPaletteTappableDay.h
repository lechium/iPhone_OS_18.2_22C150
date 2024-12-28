//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UIColor, UIFont, UILabel;

@interface WeekPaletteTappableDay : UIView
{
    UIFont *_dayFont;	// 8 = 0x8
    UIColor *_dayTextColor;	// 16 = 0x10
    long long _index;	// 24 = 0x18
    UIView *_circle;	// 32 = 0x20
    UILabel *_weekDayLabel;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000063a8b
@property(retain, nonatomic) UILabel *weekDayLabel; // @synthesize weekDayLabel=_weekDayLabel;
@property(retain, nonatomic) UIView *circle; // @synthesize circle=_circle;
@property(nonatomic) long long index; // @synthesize index=_index;
- (void)setCircleHidden:(_Bool)arg1 updateCircleColor:(_Bool)arg2;	// IMP=0x00100000000638b8
- (void)layoutSubviews;	// IMP=0x0010000000063458
- (void)setTextColorHighlighted:(_Bool)arg1;	// IMP=0x001000000006338d
- (void)setFont:(id)arg1 textColor:(id)arg2;	// IMP=0x00100000000632c6
- (id)init;	// IMP=0x00100000000631a0

@end
