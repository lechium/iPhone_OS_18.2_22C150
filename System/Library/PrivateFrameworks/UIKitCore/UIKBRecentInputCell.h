//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UICollectionViewCell.h"

@class UILabel;

__attribute__((visibility("hidden")))
@interface UIKBRecentInputCell : UICollectionViewCell
{
    UILabel *_label;	// 8 = 0x8
}

+ (id)titleAttributesForRenderConfig:(id)arg1;	// IMP=0x0060000000e8f05d
+ (id)textColorForRenderConfig:(id)arg1 isSelected:(_Bool)arg2;	// IMP=0x0060000000e8efd8
- (void).cxx_destruct;	// IMP=0x0000000000e8f1fb
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)setInputText:(id)arg1;	// IMP=0x0000000000e8ee19
- (void)layoutSubviews;	// IMP=0x0000000000e8ed45
- (void)setSelected:(_Bool)arg1;	// IMP=0x0000000000e8ec72
- (_Bool)isFocused;	// IMP=0x0000000000e8ec60
- (_Bool)_canFocusProgrammatically;	// IMP=0x0000000000e8ec58
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000e8ebf6

@end

