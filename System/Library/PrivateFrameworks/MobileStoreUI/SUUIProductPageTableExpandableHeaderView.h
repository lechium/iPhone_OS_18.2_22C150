//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIControl.h>

@class NSString, SUUIColorScheme, UIColor, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface SUUIProductPageTableExpandableHeaderView : UIControl
{
    UILabel *_actionLabel;	// 8 = 0x8
    UIView *_bottomBorderView;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UIView *_topBorderView;	// 32 = 0x20
    SUUIColorScheme *_colorScheme;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000002ca711
@property(retain, nonatomic) SUUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000002ca6f2
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000002ca664
- (void)layoutSubviews;	// IMP=0x00000000002ca345
@property(copy, nonatomic) UIColor *topBorderColor;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) UIColor *bottomBorderColor;
@property(copy, nonatomic) NSString *actionString;

@end

