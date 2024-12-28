//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewHeaderFooterView.h>

@class NSLayoutConstraint, NSString, UIButton;

@interface TableViewSelectableFooterView : UITableViewHeaderFooterView
{
    NSLayoutConstraint *_topToFirstBaselineConstraint;	// 8 = 0x8
    NSLayoutConstraint *_lastBaselineToBottomConstraint;	// 16 = 0x10
    UIButton *_footerButton;	// 24 = 0x18
    NSString *_footerLinkText;	// 32 = 0x20
    NSString *_footerLabelText;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000047f940
@property(retain, nonatomic) UIButton *footerButton; // @synthesize footerButton=_footerButton;
@property(copy, nonatomic) NSString *footerLabelText; // @synthesize footerLabelText=_footerLabelText;
- (void)prepareForReuse;	// IMP=0x001000000047f876
- (void)setTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x001000000047f853
- (void)layoutSubviews;	// IMP=0x001000000047f824
- (id)_initialConstraints;	// IMP=0x001000000047f41d
- (double)bottomPadding;	// IMP=0x001000000047f3b2
- (void)_createSubviews;	// IMP=0x001000000047f013
- (void)contentSizeDidChange;	// IMP=0x001000000047ef40
- (id)initWithReuseIdentifier:(id)arg1 options:(id)arg2;	// IMP=0x001000000047edea

@end
