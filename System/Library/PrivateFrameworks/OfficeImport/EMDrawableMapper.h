//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface EMDrawableMapper
{
    double *mRowGrid;	// 176 = 0xb0
    double *mColumnGrid;	// 184 = 0xb8
}

+ (_Bool)isAnchorRelative:(id)arg1;	// IMP=0x0060000000466c87
- (void)mapTextBoxAt:(id)arg1 withState:(id)arg2;	// IMP=0x000000000016792f
- (struct CGRect)mapAnchorToRect:(id)arg1 rowGrid:(double *)arg2 columnGrid:(double *)arg3;	// IMP=0x0000000000143f56
- (struct CGPoint)anchorMarkerToPosition:(struct EDCellAnchorMarker)arg1 rowGrid:(double *)arg2 columnGrid:(double *)arg3 start:(_Bool)arg4 relative:(_Bool)arg5;	// IMP=0x0000000000144255
- (struct CGRect)getImageRect;	// IMP=0x0000000000143dd2
- (void)mapBounds;	// IMP=0x0000000000143d3e
- (void)setBoundingBox;	// IMP=0x0000000000466c2f
- (void)mapAt:(id)arg1 withState:(id)arg2;	// IMP=0x00000000001439c8
- (id)initWithOADDrawable:(id)arg1 rowGrid:(double *)arg2 columnGrid:(double *)arg3;	// IMP=0x0000000000466bd7
- (id)initWithChartDrawable:(id)arg1 box:(struct CGRect)arg2 parent:(id)arg3;	// IMP=0x0000000000183530
- (id)initWithOADDrawable:(id)arg1 parent:(id)arg2;	// IMP=0x00000000001437e1
- (void)mapDiagramAt:(id)arg1 withState:(id)arg2;	// IMP=0x0000000000466d0d
- (void)mapChartAt:(id)arg1 withState:(id)arg2;	// IMP=0x0000000000183651
- (void)mapOfficeArtGroupAt:(id)arg1 withState:(id)arg2;	// IMP=0x000000000018bef2
- (void)mapOfficeArtShapeAt:(id)arg1 withState:(id)arg2;	// IMP=0x0000000000145060
- (id)workbookMapper;	// IMP=0x0000000000466c75
- (id)worksheetMapper;	// IMP=0x0000000000143927

@end
