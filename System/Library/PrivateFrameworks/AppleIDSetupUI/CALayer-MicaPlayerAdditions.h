//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@interface CALayer (MicaPlayerAdditions)
- (void)mp_setFillOfAllShapeLayersToColor:(struct CGColor *)arg1;	// IMP=0x0070000000004eda
- (void)mp_moveAndResizeWithinParentLayer:(id)arg1 usingGravity:(id)arg2 geometryFlipped:(_Bool)arg3 retinaScale:(double)arg4 animate:(_Bool)arg5;	// IMP=0x0070000000004811
- (id)mp_allAnimationsInTree;	// IMP=0x0070000000004520
- (id)mp_allLayersWithKindOfClass:(Class)arg1;	// IMP=0x007000000000437e
- (id)mp_allLayersWhoseNamesContainString:(id)arg1;	// IMP=0x0070000000004124
- (void)mp_addLayerAndSublayersToArray:(id)arg1 allowHiddenLayers:(_Bool)arg2;	// IMP=0x0070000000003f1b
- (id)mp_allLayersInTree;	// IMP=0x0070000000003ec4
- (id)mp_propertiesToCopy;	// IMP=0x0070000000003dcd
- (id)mp_basicPropertiesToCopy;	// IMP=0x0070000000003bd8
- (id)mp_deepCopyLayer;	// IMP=0x00700000000035d2
@end
