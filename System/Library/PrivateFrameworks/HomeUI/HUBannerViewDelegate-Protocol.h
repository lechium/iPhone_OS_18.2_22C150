//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/NSObject-Protocol.h>

@class HUBannerView, UIButton, UIView;

@protocol HUBannerViewDelegate <NSObject>

@optional
- (void)bannerView:(HUBannerView *)arg1 footerViewTapped:(UIView *)arg2;
- (_Bool)bannerView:(HUBannerView *)arg1 shouldReceiveFooterViewTaps:(UIView *)arg2;
- (void)bannerView:(HUBannerView *)arg1 dismissButtonTapped:(UIButton *)arg2;
@end
