//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface HKBalanceDaySeries
{
    MISSING_TYPE *gregorianCalendar;	// 0 = 0x0
    MISSING_TYPE *sleepingMetrics;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00000000003d1980
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform)arg4 renderContext:(struct CGContext *)arg5 secondaryRenderContext:(id)arg6 seriesRenderingDelegate:(id)arg7;	// IMP=0x00000000003d12b0
- (id)coordinatesForBlock:(id)arg1 blockPath:(struct HKGraphSeriesDataBlockPath)arg2 xAxis:(id)arg3 yAxis:(id)arg4;	// IMP=0x00000000003d0910
- (id)init;	// IMP=0x00000000003cfb40

@end

