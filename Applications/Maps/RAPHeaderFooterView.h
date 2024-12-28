//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewHeaderFooterView.h>

@class NSDictionary, NSLayoutConstraint, NSString, UILabel;

@interface RAPHeaderFooterView : UITableViewHeaderFooterView
{
    NSDictionary *_attributes;	// 8 = 0x8
    NSLayoutConstraint *_topToFirstBaselineConstraint;	// 16 = 0x10
    NSLayoutConstraint *_lastBaselineToBottomConstraint;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    NSString *_titleLabelText;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000868d39
@property(copy, nonatomic) NSString *titleLabelText; // @synthesize titleLabelText=_titleLabelText;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)layoutSubviews;	// IMP=0x0010000000868c5b
- (id)_initialConstraints;	// IMP=0x00100000008687ba
- (double)bottomPadding;	// IMP=0x001000000086874f
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;	// IMP=0x00100000008686f5
- (void)_createSubviews;	// IMP=0x00100000008685a8
- (void)contentSizeDidChange;	// IMP=0x00100000008684d5
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x0010000000868359

@end
