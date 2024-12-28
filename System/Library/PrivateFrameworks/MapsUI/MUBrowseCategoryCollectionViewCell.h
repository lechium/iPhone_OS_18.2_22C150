//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class MUBrowseCategoryItem, NSLayoutConstraint, UIFont, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface MUBrowseCategoryCollectionViewCell : UICollectionViewCell
{
    MUBrowseCategoryItem *_browseItem;	// 8 = 0x8
    UIFont *_preferredTitleLabelFont;	// 16 = 0x10
    UIImageView *_imageView;	// 24 = 0x18
    UIImageView *_highlightedImageView;	// 32 = 0x20
    UILabel *_titleLabel;	// 40 = 0x28
    NSLayoutConstraint *_titleLabelTopConstraint;	// 48 = 0x30
    struct CGSize _preferredSize;	// 56 = 0x38
}

+ (id)reuseIdentifier;	// IMP=0x00600000000fee73
- (void).cxx_destruct;	// IMP=0x0000000000100173
@property(retain, nonatomic) NSLayoutConstraint *titleLabelTopConstraint; // @synthesize titleLabelTopConstraint=_titleLabelTopConstraint;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *highlightedImageView; // @synthesize highlightedImageView=_highlightedImageView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIFont *preferredTitleLabelFont; // @synthesize preferredTitleLabelFont=_preferredTitleLabelFont;
@property(nonatomic) struct CGSize preferredSize; // @synthesize preferredSize=_preferredSize;
@property(retain, nonatomic) MUBrowseCategoryItem *browseItem; // @synthesize browseItem=_browseItem;
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000000ffe6e
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;	// IMP=0x00000000000ff92d
- (void)setTitleLabelTextColor:(id)arg1;	// IMP=0x00000000000ff8c4
- (void)prepareForReuse;	// IMP=0x00000000000ff881
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000fee80

@end
