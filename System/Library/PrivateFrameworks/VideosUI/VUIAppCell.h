//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class NSString, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface VUIAppCell : UICollectionViewCell
{
    UIImage *_image;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    _Bool _didLayout;	// 24 = 0x18
    UIImageView *_imageView;	// 32 = 0x20
    UILabel *_titleLabel;	// 40 = 0x28
    struct CGSize _iconSize;	// 48 = 0x30
}

+ (struct UIEdgeInsets)contentInsets;	// IMP=0x00600000000316aa
- (void).cxx_destruct;	// IMP=0x00000000000323a9
- (void)updateConstraints;	// IMP=0x0000000000031b85
- (void)layoutSubviews;	// IMP=0x0000000000031897
- (void)setTitle:(id)arg1;	// IMP=0x00000000000317c9
- (void)setImage:(id)arg1;	// IMP=0x0000000000031735
- (void)setIconSize:(struct CGSize)arg1;	// IMP=0x00000000000316bd

@end

