//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKGraphSeriesBlockCoordinateList.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface _HKBaseBlockCoordinateList : HKGraphSeriesBlockCoordinateList
{
    NSArray *_coordinates;	// 8 = 0x8
    struct HKGraphSeriesDataBlockPath _blockPath;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000020a92c
- (id)lastCoordinateWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2;	// IMP=0x000000000020a8af
- (id)firstCoordinateWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2;	// IMP=0x000000000020a832
- (long long)_numCoordinatesInChartableRange:(id)arg1;	// IMP=0x000000000020a70d
- (long long)numCoordinates;	// IMP=0x000000000020a6f0
- (id)_coordinatesInChartableRange:(id)arg1;	// IMP=0x000000000020a5cb
- (id)coordinates;	// IMP=0x000000000020a5b7
- (struct HKGraphSeriesDataBlockPath)blockPathEnd;	// IMP=0x000000000020a597
- (struct HKGraphSeriesDataBlockPath)blockPathStart;	// IMP=0x000000000020a577
- (void)_enumerateCoordinatesWithTransform:(struct CGAffineTransform)arg1 chartableValueRange:(id)arg2 roundToViewScale:(_Bool)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x000000000020a1fa
- (id)initWithCoordinates:(id)arg1 blockPath:(struct HKGraphSeriesDataBlockPath)arg2;	// IMP=0x000000000020a170

@end

