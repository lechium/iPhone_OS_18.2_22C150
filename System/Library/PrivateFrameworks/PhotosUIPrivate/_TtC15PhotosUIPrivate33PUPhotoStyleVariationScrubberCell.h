//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC15PhotosUIPrivate33PUPhotoStyleVariationScrubberCell : UICollectionViewCell
{
    MISSING_TYPE *scrubberView;	// 8 = 0x8
    MISSING_TYPE *image;	// 16 = 0x10
    MISSING_TYPE *scrubberImageSources;	// 24 = 0x18
    MISSING_TYPE *delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000e1999
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e1957
- (void)layoutSubviews;	// IMP=0x00000000000e1496
- (void)wheelScrubberViewDidChangeSelectedIndex:(id)arg1;	// IMP=0x00000000000e1383
- (void)wheelScrubberView:(id)arg1 updateCell:(id)arg2 forItemAtIndex:(long long)arg3;	// IMP=0x00000000000e128a
- (void)prepareForReuse;	// IMP=0x00000000000e10b2
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000e1010

@end
