//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKLineSeries.h"

@class MISSING_TYPE;

@interface HKAudiogramLineSeries : HKLineSeries
{
    MISSING_TYPE *seriesEar;	// 8 = 0x8
    MISSING_TYPE *selectedFrequency;	// 16 = 0x10
}

+ (id)filledSymbolUsingMetadata:(id)arg1 forEar:(long long)arg2 radius:(double)arg3 useEarSpecificColor:(_Bool)arg4;	// IMP=0x00600000003b3a80
+ (id)selectedRangeMetadataWith:(id)arg1;	// IMP=0x00600000003b3a30
+ (id)selectedRangeMetadataForAudiogram:(id)arg1 side:(long long)arg2 backgroundColor:(id)arg3;	// IMP=0x00600000003b39c0
+ (id)audiogramLineSeriesForSeriesEar:(long long)arg1 selectedEar:(long long)arg2 disableConnectionLines:(_Bool)arg3 disabledStyleOverride:(_Bool)arg4 selectedFrequency:(id)arg5;	// IMP=0x00600000003b1a50
+ (id)audiogramLineSeriesForSeriesEar:(long long)arg1 selectedEar:(long long)arg2 disableConnectionLines:(_Bool)arg3;	// IMP=0x00600000003b1a20
- (void).cxx_destruct;	// IMP=0x00000000003b3e00
- (id)init;	// IMP=0x00000000003b3d80
- (id)filteredPointSelectionContexts:(id)arg1 forTouchPoints:(id)arg2 resultsDidChange:(_Bool *)arg3;	// IMP=0x00000000003b38e0
- (void)drawLegendPointLabelInContext:(struct CGContext *)arg1 point:(struct CGPoint)arg2 untransformedPoint:(struct CGPoint)arg3 axisRect:(struct CGRect)arg4 presentationStyle:(id)arg5 leftOfPoint:(_Bool)arg6;	// IMP=0x00000000003b3800
- (void)renderPointMarkersInContext:(struct CGContext *)arg1 blockCoordinates:(id)arg2 pointTransform:(struct CGAffineTransform)arg3 pointMarkerStyle:(id)arg4 selectedBoundsMarkerStyle:(id)arg5 selectedPointMarkerStyle:(id)arg6;	// IMP=0x00000000003b31c0
- (id)pointMarkerImageForPointMarkerStyle:(id)arg1;	// IMP=0x00000000003b2000
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform)arg4 renderContext:(struct CGContext *)arg5 secondaryRenderContext:(id)arg6 seriesRenderingDelegate:(id)arg7;	// IMP=0x00000000003b1d10
- (_Bool)supportsMultiTouchSelection;	// IMP=0x00000000003b1a00

@end

