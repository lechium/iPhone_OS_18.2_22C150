//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface CHBAutoStyling
{
}

- (void)resolveMarker:(id)arg1 withSeriesGraphicProperties:(id)arg2 forSeriesIndex:(unsigned long long)arg3 clientGraphicPropertyDefaults:(CDUnknownBlockType)arg4;	// IMP=0x0000000000389796
- (void)resolveGraphicPropertiesOfErrorBar:(id)arg1 forSeriesIndex:(unsigned long long)arg2;	// IMP=0x00000000003896ec
- (void)resolveGraphicPropertiesOfTrendline:(id)arg1 forSeriesIndex:(unsigned long long)arg2;	// IMP=0x0000000000217f98
- (void)resolveGraphicPropertiesOfSeries:(id)arg1 forSeriesIndex:(unsigned long long)arg2 isLine:(_Bool)arg3;	// IMP=0x00000000003895d9
- (void)resolveGraphicPropertiesOfSeries:(id)arg1 forSeriesIndex:(unsigned long long)arg2;	// IMP=0x00000000003895c4
- (id)autoTextFill;	// IMP=0x0000000000389560
- (void)resolveLegendGraphicProperties:(id)arg1;	// IMP=0x00000000001df5bd
- (void)resolveMinorGridLinesGraphicProperties:(id)arg1;	// IMP=0x000000000017685f
- (void)resolveMajorGridLinesGraphicProperties:(id)arg1;	// IMP=0x0000000000176947
- (void)resolveAxisGraphicProperties:(id)arg1;	// IMP=0x0000000000176599
- (void)resolvePlotAreaGraphicProperties:(id)arg1;	// IMP=0x0000000000173caf
- (void)resolveFloorGraphicProperties:(id)arg1;	// IMP=0x00000000001775b4
- (void)resolveWallGraphicProperties:(id)arg1;	// IMP=0x0000000000176b71
- (void)resolveChartAreaGraphicProperties:(id)arg1;	// IMP=0x000000000016d2ca
- (id)autoStrokeForSeriesIndex:(unsigned long long)arg1;	// IMP=0x00000000001898ca
- (id)autoSeriesFill:(unsigned long long)arg1;	// IMP=0x000000000017bfec
- (id)autoSeriesBorderStroke;	// IMP=0x000000000017c031
- (id)autoFill;	// IMP=0x000000000016d3a6
- (id)autoStroke;	// IMP=0x000000000016d490
- (id)strokeWithColorIndex:(int)arg1;	// IMP=0x000000000016d4a7
- (id)fillWithColorIndex:(unsigned long long)arg1;	// IMP=0x000000000016d3bd
- (void)resolvedGraphicProperties:(id)arg1 autoFill:(id)arg2 autoStroke:(id)arg3 autoShadow:(_Bool)arg4 nullFill:(id)arg5 nullStroke:(id)arg6 nullShadow:(_Bool)arg7;	// IMP=0x000000000016d543

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

