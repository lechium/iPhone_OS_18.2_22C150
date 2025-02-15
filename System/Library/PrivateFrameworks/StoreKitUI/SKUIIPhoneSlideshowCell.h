//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface SKUIIPhoneSlideshowCell : UICollectionViewCell
{
    UIImageView *_imageView;	// 8 = 0x8
    UIImageView *_playIcon;	// 16 = 0x10
    struct CGSize _imageSize;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002c5130
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
- (void)prepareForReuse;	// IMP=0x00000000002c50f9
- (void)layoutSubviews;	// IMP=0x00000000002c4e5c
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000002c4d5f
@property(nonatomic, getter=isVideo) _Bool video;
@property(retain, nonatomic) UIImage *image;
@property(readonly, nonatomic) struct CGRect imageFrame;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002c49a0

@end

