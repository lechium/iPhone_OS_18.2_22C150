//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUAssetsDataSource.h"

@class PXAssetsDataSource;

__attribute__((visibility("hidden")))
@interface PUPXAssetsDataSource : PUAssetsDataSource
{
    PXAssetsDataSource *_underlyingDataSource;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000427975
@property(readonly, nonatomic) PXAssetsDataSource *underlyingDataSource; // @synthesize underlyingDataSource=_underlyingDataSource;
- (id)badgeInfoPromiseForAssetAtIndexPath:(id)arg1;	// IMP=0x00000000004277ca
- (id)convertIndexPath:(id)arg1 fromAssetsDataSource:(id)arg2;	// IMP=0x0000000000427768
- (id)indexPathForAssetReference:(id)arg1;	// IMP=0x0000000000427584
- (id)assetReferenceAtIndexPath:(id)arg1;	// IMP=0x0000000000427456
- (long long)numberOfSubItemsAtIndexPath:(id)arg1;	// IMP=0x00000000004272f4
- (id)startingAssetReference;	// IMP=0x0000000000427237
- (id)initWithUnderlyingDataSource:(id)arg1;	// IMP=0x00000000004271c9
- (id)init;	// IMP=0x000000000042714f

@end

