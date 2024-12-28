//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CarPlaySupport/NSObject-Protocol.h>

@class NSArray, NSUUID;

@protocol CPBannerDelegate <NSObject>
- (void)sendSuggestUI:(NSArray *)arg1;
- (void)bannerDidDisappearWithIdentifier:(NSUUID *)arg1;
- (void)bannerDidAppearWithIdentifier:(NSUUID *)arg1;
- (void)bannerTappedWithIdentifier:(NSUUID *)arg1;
@end
