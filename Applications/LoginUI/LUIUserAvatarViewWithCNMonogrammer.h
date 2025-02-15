//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNMonogrammer, NSOperationQueue, UIImageView;

@interface LUIUserAvatarViewWithCNMonogrammer
{
    CNMonogrammer *monogrammer;	// 8 = 0x8
    UIImageView *imageView;	// 16 = 0x10
    NSOperationQueue *mOperationQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000039664
- (void)setImageViewAlpha:(double)arg1;	// IMP=0x0010000000039611
- (void)updateMonogram;	// IMP=0x0010000000038eff
- (_Bool)_isDistortedImage:(id)arg1;	// IMP=0x0010000000038e0f
- (void)layoutSubviews;	// IMP=0x0010000000038cfb
- (void)_setup;	// IMP=0x0010000000038c5c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000038bff

@end

