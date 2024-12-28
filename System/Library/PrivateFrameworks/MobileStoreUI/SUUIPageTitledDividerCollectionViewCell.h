//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class NSNumber, NSString, SUUIButtonViewElement, UIButton, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface SUUIPageTitledDividerCollectionViewCell : UICollectionViewCell
{
    double _buttonContentHorizontalPadding;	// 8 = 0x8
    SUUIButtonViewElement *_buttonViewElement;	// 16 = 0x10
    struct UIEdgeInsets _contentEdgeInsets;	// 24 = 0x18
    struct UIEdgeInsets _contentInset;	// 56 = 0x38
    UIButton *_dividerButton;	// 88 = 0x58
    NSNumber *_dividerButtonImageRequestIdentifier;	// 96 = 0x60
    UILabel *_dividerLabel;	// 104 = 0x68
    struct UIEdgeInsets _imageVerticalPadding;	// 112 = 0x70
    struct UIEdgeInsets _internalHorizontalMargins;	// 144 = 0x90
    UIView *_leftLine;	// 176 = 0xb0
    UIView *_rightLine;	// 184 = 0xb8
    struct UIEdgeInsets _titleVerticalPadding;	// 192 = 0xc0
    double _topEdgeInset;	// 224 = 0xe0
}

+ (struct UIEdgeInsets)_titleVerticalPaddingForViewElement:(id)arg1;	// IMP=0x00100000001b4713
+ (struct UIEdgeInsets)_imageVerticalPaddingForViewElement:(id)arg1;	// IMP=0x00100000001b461f
+ (struct UIEdgeInsets)_contentEdgeInsetsForViewElement:(id)arg1;	// IMP=0x00100000001b456a
+ (id)_attributedStringForViewElementText:(id)arg1 style:(id)arg2 context:(id)arg3;	// IMP=0x00100000001b43fd
+ (id)_attributedStringForDividerTitle:(id)arg1 context:(id)arg2;	// IMP=0x00100000001b42bf
+ (id)_attributedStringForButtonViewElement:(id)arg1 context:(id)arg2;	// IMP=0x00100000001b416a
+ (double)viewElementInsetDividerHeight:(id)arg1;	// IMP=0x00100000001b2819
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x00100000001b252e
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 dividerTitle:(id)arg2 context:(id)arg3;	// IMP=0x00100000001b247b
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00100000001b2475
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x00100000001b23e2
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x00100000001b23da
- (void).cxx_destruct;	// IMP=0x00000000001b49df
@property(nonatomic) double topEdgeInset; // @synthesize topEdgeInset=_topEdgeInset;
- (id)_imageForImageViewElement:(id)arg1 returningRequestIdentifier:(out id *)arg2 context:(id)arg3;	// IMP=0x00000000001b4874
- (void)_buttonAction:(id)arg1;	// IMP=0x00000000001b4124
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000001b4096
- (void)layoutSubviews;	// IMP=0x00000000001b3a03
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x00000000001b3972
@property(copy, nonatomic) NSString *dividerTitle;
- (void)setColoringWithColorScheme:(id)arg1;	// IMP=0x00000000001b354b
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x00000000001b3526
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000001b351e
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x00000000001b3461
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x00000000001b3409
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00000000001b28a1
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001b2249

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
