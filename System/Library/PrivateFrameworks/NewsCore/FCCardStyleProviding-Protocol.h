//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsCore/NSCopying-Protocol.h>
#import <NewsCore/NSObject-Protocol.h>

@class FCColor, FCColorGradient;

@protocol FCCardStyleProviding <NSObject, NSCopying>
@property(readonly, copy, nonatomic) FCColor *ctaForegroundColor;
@property(readonly, copy, nonatomic) FCColor *ctaBackgroundColor;
@property(readonly, copy, nonatomic) FCColorGradient *sauceGradient;
@property(readonly, copy, nonatomic) FCColor *cardForegroundColor;
@property(readonly, copy, nonatomic) FCColor *cardBackgroundColor;
@property(readonly, copy, nonatomic) FCColor *eyebrowForegroundColor;
@property(readonly, copy, nonatomic) FCColor *titleForegroundColor;
@end
