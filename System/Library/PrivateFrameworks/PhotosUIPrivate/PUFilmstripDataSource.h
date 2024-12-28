//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUTilingDataSource.h"

@class AVAsset, NSArray, NSMapTable, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PUFilmstripDataSource : PUTilingDataSource
{
    NSMutableDictionary *_assetByIndexPath;	// 8 = 0x8
    NSMapTable *_indexPathByAsset;	// 16 = 0x10
    AVAsset *_asset;	// 24 = 0x18
    long long _numberOfIndexes;	// 32 = 0x20
    NSArray *_indicatorInfos;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000002c8a9d
@property(copy, nonatomic) NSArray *indicatorInfos; // @synthesize indicatorInfos=_indicatorInfos;
@property(readonly, nonatomic) long long numberOfIndexes; // @synthesize numberOfIndexes=_numberOfIndexes;
@property(readonly, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
- (CDStruct_5c5366e1)timeRangeRepresentedByAssetAtIndex:(long long)arg1;	// IMP=0x00000000002c8917
- (id)indexPathForAsset:(id)arg1;	// IMP=0x00000000002c88fa
- (id)assetAtIndexPath:(id)arg1;	// IMP=0x00000000002c8771
- (double)_normalizedTimeForIndex:(long long)arg1;	// IMP=0x00000000002c86ae
- (long long)numberOfSubItemsAtIndexPath:(id)arg1;	// IMP=0x00000000002c85ef
- (id)initWithAsset:(id)arg1 numberOfIndexes:(long long)arg2 indicatorInfos:(id)arg3;	// IMP=0x00000000002c84db
- (id)init;	// IMP=0x00000000002c84c2

@end
