//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@interface CALayer (PASUIMicaPlayerAdditions)
- (void)mp_setFillOfAllShapeLayersToColor:(struct CGColor *)arg1;	// IMP=0x0070000000004b88
- (void)mp_moveAndResizeWithinParentLayer:(id)arg1 usingGravity:(id)arg2 geometryFlipped:(_Bool)arg3 retinaScale:(double)arg4 animate:(_Bool)arg5;	// IMP=0x00700000000044bf
- (id)mp_allAnimationsInTree;	// IMP=0x00700000000041ce
- (id)mp_allLayersWithKindOfClass:(Class)arg1;	// IMP=0x007000000000402c
- (id)mp_allLayersWhoseNamesContainString:(id)arg1;	// IMP=0x0070000000003dd2
- (void)mp_addLayerAndSublayersToArray:(id)arg1 allowHiddenLayers:(_Bool)arg2;	// IMP=0x0070000000003bc9
- (id)mp_allLayersInTree;	// IMP=0x0070000000003b72
- (id)mp_propertiesToCopy;	// IMP=0x0070000000003a7b
- (id)mp_basicPropertiesToCopy;	// IMP=0x0070000000003886
- (id)mp_deepCopyLayer;	// IMP=0x0070000000003280
@end
