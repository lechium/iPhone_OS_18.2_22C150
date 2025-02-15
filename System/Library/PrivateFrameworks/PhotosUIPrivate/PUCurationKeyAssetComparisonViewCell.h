//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class NSString, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface PUCurationKeyAssetComparisonViewCell : UICollectionViewCell
{
    UIImageView *_imageView;	// 8 = 0x8
    UIImage *_thumbnailImage;	// 16 = 0x10
    NSString *_representedAssetIdentifier;	// 24 = 0x18
}

+ (double)cellHeightWithCellWidth:(double)arg1;	// IMP=0x006000000018f63e
- (void).cxx_destruct;	// IMP=0x000000000018f5fc
@property(retain, nonatomic) NSString *representedAssetIdentifier; // @synthesize representedAssetIdentifier=_representedAssetIdentifier;
@property(retain, nonatomic) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
- (void)prepareForReuse;	// IMP=0x000000000018f519
- (void)layoutSubviews;	// IMP=0x000000000018f439
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000018f357

@end

