//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class PHAsset, UIImageView;

__attribute__((visibility("hidden")))
@interface _PUPhotoImportHistoryCell : UICollectionViewCell
{
    int _currentImageRequestToken;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
    PHAsset *_asset;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000329714
@property(nonatomic) int currentImageRequestToken; // @synthesize currentImageRequestToken=_currentImageRequestToken;
@property(retain, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)_updateBorderColor;	// IMP=0x0000000000329569
- (void)prepareForReuse;	// IMP=0x00000000003292be
- (void)layoutSubviews;	// IMP=0x0000000000329228
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000329138

@end
