//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewLayoutAttributes.h>

__attribute__((visibility("hidden")))
@interface PUCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes
{
    struct CGPoint _parallaxOffset;	// 8 = 0x8
    struct CGPoint _edgeParallaxOffset;	// 24 = 0x18
}

@property(nonatomic) struct CGPoint edgeParallaxOffset; // @synthesize edgeParallaxOffset=_edgeParallaxOffset;
@property(nonatomic) struct CGPoint parallaxOffset; // @synthesize parallaxOffset=_parallaxOffset;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000025654a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002564c6

@end
