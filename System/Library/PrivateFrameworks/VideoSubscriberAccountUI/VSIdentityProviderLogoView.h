//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface VSIdentityProviderLogoView : UIView
{
    UIImageView *_imageView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000050f8c
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000050f3f
- (void)layoutSubviews;	// IMP=0x0000000000050ea5
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000050dd8
@property(readonly, nonatomic) struct CGSize preferredImageSize;
@property(readonly, nonatomic) double marginLength;
@property(retain, nonatomic) UIImage *logo;
- (double)_height;	// IMP=0x0000000000050cbd
- (struct CGRect)_imageViewFrame;	// IMP=0x0000000000050c4f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000050c0b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000050b1f

@end

