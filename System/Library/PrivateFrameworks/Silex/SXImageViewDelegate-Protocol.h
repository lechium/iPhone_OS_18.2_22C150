//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/NSObject-Protocol.h>

@class SXAnimatedImage, SXImageView, UIImage;

@protocol SXImageViewDelegate <NSObject>

@optional
- (void)imageView:(SXImageView *)arg1 didLoadAnimatedImage:(SXAnimatedImage *)arg2;
- (void)imageView:(SXImageView *)arg1 didLoadImage:(UIImage *)arg2 ofQuality:(int)arg3;
@end
