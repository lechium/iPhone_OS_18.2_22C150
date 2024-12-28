//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CHDChart;

__attribute__((visibility("hidden")))
@interface CHBState : NSObject
{
    CHDChart *mChart;	// 8 = 0x8
    struct __CFArray *mXlChartDataSeriesCollection;	// 16 = 0x10
    int mXlSeriesCount;	// 24 = 0x18
    int mXlCurrentSeriesIndex;	// 28 = 0x1c
    _Bool mHasPrimaryMixedArea;	// 32 = 0x20
    _Bool mHasPrimaryMixedColumn;	// 33 = 0x21
    _Bool mHasPrimaryMixedLine;	// 34 = 0x22
    _Bool mHasSecondaryMixedArea;	// 35 = 0x23
    _Bool mHasSecondaryMixedColumn;	// 36 = 0x24
    _Bool mHasSecondaryMixedLine;	// 37 = 0x25
}

- (void).cxx_destruct;	// IMP=0x000000000038a8d1
- (unsigned int)chartGroupIndexForType:(int)arg1 isForPrimary:(_Bool)arg2;	// IMP=0x000000000038a7e4
- (_Bool)isMixedChart;	// IMP=0x000000000038a7b7
- (void)setHasSecondaryMixedLine:(_Bool)arg1;	// IMP=0x000000000038a7ae
- (_Bool)hasSecondaryMixedLine;	// IMP=0x000000000038a7a5
- (void)setHasSecondaryMixedColumn:(_Bool)arg1;	// IMP=0x000000000038a79c
- (_Bool)hasSecondaryMixedColumn;	// IMP=0x000000000038a793
- (void)setHasSecondaryMixedArea:(_Bool)arg1;	// IMP=0x000000000038a78a
- (_Bool)hasSecondaryMixedArea;	// IMP=0x000000000038a781
- (void)setHasPrimaryMixedLine:(_Bool)arg1;	// IMP=0x000000000038a778
- (_Bool)hasPrimaryMixedLine;	// IMP=0x000000000038a76f
- (void)setHasPrimaryMixedColumn:(_Bool)arg1;	// IMP=0x000000000038a766
- (_Bool)hasPrimaryMixedColumn;	// IMP=0x000000000038a75d
- (void)setHasPrimaryMixedArea:(_Bool)arg1;	// IMP=0x000000000038a754
- (_Bool)hasPrimaryMixedArea;	// IMP=0x000000000038a74b
- (void)deleteXlChartDataSeriesCollection;	// IMP=0x000000000016dfd6
- (void)readAndCacheXlChartDataSeries;	// IMP=0x000000000038a745
- (int)xlSeriesCount;	// IMP=0x0000000000179c4d
- (int)xlCurrentChartDataSeriesIndex;	// IMP=0x000000000038a73c
- (void *)xlCurrentChartDataSeries;	// IMP=0x000000000038a71e
- (void)setXlCurrentSeriesIndex:(int)arg1;	// IMP=0x0000000000179ca6
- (void *)xlChartDataSeriesAtIndex:(int)arg1;	// IMP=0x0000000000179c56
- (id)resources;	// IMP=0x000000000038a716
- (id)workbook;	// IMP=0x000000000038a70e
- (void)setChart:(id)arg1;	// IMP=0x000000000016b8e3
- (id)chart;	// IMP=0x000000000016beb2
- (void)dealloc;	// IMP=0x000000000017da7c
- (id)init;	// IMP=0x000000000016b8a0

@end
