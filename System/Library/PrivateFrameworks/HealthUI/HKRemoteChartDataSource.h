//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKGraphSeriesDataSource.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface HKRemoteChartDataSource : HKGraphSeriesDataSource
{
    NSMutableDictionary *_dataBlocksForTimescopes;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000024967
@property(retain, nonatomic) NSMutableDictionary *dataBlocksForTimescopes; // @synthesize dataBlocksForTimescopes=_dataBlocksForTimescopes;
- (void)invalidateCache;	// IMP=0x00000000000248f6
- (id)cachedBlockForPath:(struct HKGraphSeriesDataBlockPath)arg1 context:(id)arg2;	// IMP=0x000000000002481c
- (void)blocksRequestedFromPath:(struct HKGraphSeriesDataBlockPath)arg1 toPath:(struct HKGraphSeriesDataBlockPath)arg2 priorityDelegate:(id)arg3;	// IMP=0x0000000000024816
- (struct HKGraphSeriesDataBlockPath)blockPathForX:(id)arg1 zoom:(long long)arg2 resolution:(long long)arg3;	// IMP=0x0000000000024800
- (void)setDataForTimeScope:(long long)arg1 seriesData:(id)arg2 dataSourceForMapping:(id)arg3 seriesDataSourceContext:(id)arg4;	// IMP=0x0000000000024701
- (id)init;	// IMP=0x00000000000246a4

@end
