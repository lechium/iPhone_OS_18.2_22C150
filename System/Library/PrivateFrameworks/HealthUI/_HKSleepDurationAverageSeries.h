//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLock, NSNumber;

__attribute__((visibility("hidden")))
@interface _HKSleepDurationAverageSeries
{
    NSLock *_seriesMutableStateLock;	// 8 = 0x8
    double _averageValueStorage;	// 16 = 0x10
    NSNumber *_averageValueTypeStorage;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002e4dc2
@property(retain, nonatomic) NSNumber *averageValueTypeStorage; // @synthesize averageValueTypeStorage=_averageValueTypeStorage;
@property(nonatomic) double averageValueStorage; // @synthesize averageValueStorage=_averageValueStorage;
@property(readonly, nonatomic) NSLock *seriesMutableStateLock; // @synthesize seriesMutableStateLock=_seriesMutableStateLock;
- (void)drawOverlayInContext:(struct CGContext *)arg1 seriesOverlayData:(id)arg2;	// IMP=0x00000000002e4a9e
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform)arg4 renderContext:(struct CGContext *)arg5 secondaryRenderContext:(id)arg6 seriesRenderingDelegate:(id)arg7;	// IMP=0x00000000002e4830
- (id)coordinatesForBlock:(id)arg1 blockPath:(struct HKGraphSeriesDataBlockPath)arg2 xAxis:(id)arg3 yAxis:(id)arg4;	// IMP=0x00000000002e468d
- (long long)overlayType;	// IMP=0x00000000002e4682
@property(retain, nonatomic) NSNumber *averageValueType;
- (void)setAverageValue:(double)arg1;	// IMP=0x00000000002e4498
- (id)init;	// IMP=0x00000000002e43ea

@end

