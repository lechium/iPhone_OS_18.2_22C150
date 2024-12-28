//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSString;

__attribute__((visibility("hidden")))
@interface MusicKit_SoftLinking_CoverArtworkDataSource : NSObject
{
    NSCache *_cache;	// 8 = 0x8
}

+ (id)_bundle;	// IMP=0x001000000000a171
+ (id)sharedDataSource;	// IMP=0x0010000000004be7
- (void).cxx_destruct;	// IMP=0x000000000000a210
- (id)_generateNineDotGradientImageForCoverArtworkRecipe:(id)arg1 withImageRenderer:(id)arg2 size:(struct CGSize)arg3 andSpace:(struct CGColorSpace *)arg4;	// IMP=0x000000000000984d
- (id)_generateGradientArchesImageForCoverArtworkRecipe:(id)arg1 withImageRenderer:(id)arg2 size:(struct CGSize)arg3 andSpace:(struct CGColorSpace *)arg4;	// IMP=0x0000000000009231
- (id)_generateRadialGradientImageForCoverArtworkRecipe:(id)arg1 withImageRenderer:(id)arg2 size:(struct CGSize)arg3 andSpace:(struct CGColorSpace *)arg4;	// IMP=0x0000000000008d30
- (id)_generateAngularGradientImageForCoverArtworkRecipe:(id)arg1 withImageRenderer:(id)arg2 size:(struct CGSize)arg3 andSpace:(struct CGColorSpace *)arg4;	// IMP=0x0000000000008902
- (id)_generateGradientSoundwaveImageForCoverArtworkRecipe:(id)arg1 withImageRenderer:(id)arg2 size:(struct CGSize)arg3 andSpace:(struct CGColorSpace *)arg4;	// IMP=0x0000000000008274
- (id)_generateLinearGradientImageForCoverArtworkRecipe:(id)arg1 withImageRenderer:(id)arg2 size:(struct CGSize)arg3 andSpace:(struct CGColorSpace *)arg4;	// IMP=0x0000000000007d37
- (id)_generateGradientVinylImageForCoverArtworkRecipe:(id)arg1 withImageRenderer:(id)arg2 size:(struct CGSize)arg3 andSpace:(struct CGColorSpace *)arg4;	// IMP=0x0000000000006d1b
- (id)_generateSimpleGradientImageForCoverArtworkRecipe:(id)arg1 withImageRenderer:(id)arg2 size:(struct CGSize)arg3 andSpace:(struct CGColorSpace *)arg4;	// IMP=0x00000000000066de
- (id)imageForCoverArtworkRecipe:(id)arg1;	// IMP=0x00000000000064c4
- (id)_errorWithDescription:(id)arg1;	// IMP=0x00000000000063e9
- (double)roundValueFor:(double)arg1 toScale:(double)arg2;	// IMP=0x0000000000006357
- (id)_coverArtworkImageWithSize:(struct CGSize)arg1 destinationScale:(double)arg2 coverArtworkToken:(id)arg3;	// IMP=0x00000000000050b7
- (id)_cacheIdentifierForCoverArtworkRecipeToken:(id)arg1 withSize:(struct CGSize)arg2;	// IMP=0x000000000000502f
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;	// IMP=0x000000000000501a
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004d66
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;	// IMP=0x0000000000004d60
- (id)existingRepresentationForArtworkCatalog:(id)arg1;	// IMP=0x0000000000004ca2
- (_Bool)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;	// IMP=0x0000000000004c9a
- (_Bool)areRepresentationsAvailableForCatalog:(id)arg1;	// IMP=0x0000000000004c92
- (id)init;	// IMP=0x0000000000004c3c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
