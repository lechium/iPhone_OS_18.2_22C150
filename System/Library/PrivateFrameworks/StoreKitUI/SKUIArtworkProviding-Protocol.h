//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/NSCopying-Protocol.h>
#import <StoreKitUI/NSObject-Protocol.h>
#import <StoreKitUI/NSSecureCoding-Protocol.h>
#import <StoreKitUI/SKUICacheCoding-Protocol.h>

@class NSURL, SKUIArtwork;

@protocol SKUIArtworkProviding <NSObject, NSSecureCoding, SKUICacheCoding, NSCopying>
+ (_Bool)canHandleArtworkFormat:(id)arg1;
@property(readonly, nonatomic) SKUIArtwork *smallestArtwork;
@property(readonly, nonatomic) SKUIArtwork *largestArtwork;
- (_Bool)hasArtwork;
- (SKUIArtwork *)preferredExactArtworkForSize:(struct CGSize)arg1;
- (SKUIArtwork *)bestArtworkForScaledSize:(struct CGSize)arg1;
- (SKUIArtwork *)bestArtworkForSize:(struct CGSize)arg1;
- (SKUIArtwork *)artworkWithWidth:(long long)arg1;
- (NSURL *)artworkURLForSize:(long long)arg1;
- (SKUIArtwork *)artworkForSize:(long long)arg1;
@end

