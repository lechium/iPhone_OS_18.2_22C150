//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VUIFavoriteBannerLayout, VUIFavoriteBannerView;

__attribute__((visibility("hidden")))
@interface VUIFavoriteBannerCollectionViewCell
{
    VUIFavoriteBannerView *_bannerView;	// 8 = 0x8
    VUIFavoriteBannerLayout *_bannerLayout;	// 16 = 0x10
    double _width;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000014b5bc
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) VUIFavoriteBannerLayout *bannerLayout; // @synthesize bannerLayout=_bannerLayout;
@property(retain, nonatomic) VUIFavoriteBannerView *bannerView; // @synthesize bannerView=_bannerView;
- (void)prepareForReuse;	// IMP=0x000000000014b512
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000014b4c3
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000014b472
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000014b451
- (void)layoutSubviews;	// IMP=0x000000000014b3a1
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000014b0fc

@end
