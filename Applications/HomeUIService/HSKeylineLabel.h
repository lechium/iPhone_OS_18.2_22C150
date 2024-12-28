//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CALayer, NSAttributedString, NSString, UILabel;

@interface HSKeylineLabel : UIView
{
    CALayer *_leadingKeylineLayer;	// 8 = 0x8
    CALayer *_trailingKeylineLayer;	// 16 = 0x10
    UILabel *_label;	// 24 = 0x18
    double _margin;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000004eabc
@property(nonatomic) double margin; // @synthesize margin=_margin;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) CALayer *trailingKeylineLayer; // @synthesize trailingKeylineLayer=_trailingKeylineLayer;
@property(retain, nonatomic) CALayer *leadingKeylineLayer; // @synthesize leadingKeylineLayer=_leadingKeylineLayer;
@property(copy, nonatomic) NSAttributedString *attributedText;
@property(copy, nonatomic) NSString *text;
- (id)lastBaselineAnchor;	// IMP=0x001000000004e7fa
- (id)firstBaselineAnchor;	// IMP=0x001000000004e7aa
- (void)setBackgroundColor:(id)arg1;	// IMP=0x001000000004e563
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x001000000004e4f5
- (struct CGSize)intrinsicContentSize;	// IMP=0x001000000004e49b
- (void)layoutSubviews;	// IMP=0x001000000004e1ac
- (id)init;	// IMP=0x001000000004dc9e

@end
