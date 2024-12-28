//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiSplitCategoryCell : UITableViewCell
{
    UIImageView *_symbol;	// 8 = 0x8
    UILabel *_title;	// 16 = 0x10
    UIView *_selectedCircle;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000fc98ed
@property(retain, nonatomic) UIView *selectedCircle; // @synthesize selectedCircle=_selectedCircle;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImageView *symbol; // @synthesize symbol=_symbol;
- (void)setSelectedCircleBlendMode:(_Bool)arg1;	// IMP=0x0000000000fc9697
- (void)setPressIndicatorHidden:(_Bool)arg1;	// IMP=0x0000000000fc967a
- (void)setTitleText:(id)arg1;	// IMP=0x0000000000fc965d
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000fc8edc
- (id)titleFont;	// IMP=0x0000000000fc8e3f
- (id)symbolFont;	// IMP=0x0000000000fc8d96

@end
