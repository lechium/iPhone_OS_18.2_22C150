//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC12PhotosUICoreP33_7168310A7BB869661DCEBE4E2645382233LemonadeOneUpPresentationDelegate : NSObject
{
    MISSING_TYPE *initialAsset;	// 8 = 0x8
    MISSING_TYPE *assetsDataSourceManager;	// 16 = 0x10
    MISSING_TYPE *mediaProvider;	// 24 = 0x18
    MISSING_TYPE *wantsShowInLibraryButton;	// 32 = 0x20
    MISSING_TYPE *presentingViewController;	// 40 = 0x28
    MISSING_TYPE *context;	// 442 = 0x1ba
    MISSING_TYPE *sourceImageViewSpec;	// 3784894710 = 0xe198e8f6
    MISSING_TYPE *hiddenAssetReferences;	// 1221734659 = 0x48d23103
}

- (void).cxx_destruct;	// IMP=0x00000000003e5990
- (id)init;	// IMP=0x00000000003e5930
- (id)oneUpPresentation:(id)arg1 presentingScrollViewForAssetReference:(id)arg2;	// IMP=0x00000000003e5490
- (_Bool)oneUpPresentationWantsShowInLibraryButton:(id)arg1;	// IMP=0x00000000003e5470
- (id)oneUpPresentationInitialAssetReference:(id)arg1;	// IMP=0x00000000003e5370
- (void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2;	// IMP=0x00000000003e52d0
- (void)oneUpPresentation:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;	// IMP=0x00000000003e5260
- (id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2;	// IMP=0x00000000003e4a40
- (long long)oneUpPresentationOrigin:(id)arg1;	// IMP=0x00000000003e4a30
- (id)oneUpPresentationMediaProvider:(id)arg1;	// IMP=0x00000000003e4a10
- (id)oneUpPresentationDataSourceManager:(id)arg1;	// IMP=0x00000000003e49f0

@end
