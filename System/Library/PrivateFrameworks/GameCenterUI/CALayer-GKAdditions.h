//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@interface CALayer (GKAdditions)
- (struct CATransform3D)_gkParentSublayerTransform;	// IMP=0x006000000000946a
- (id)_gkRecursiveDescription;	// IMP=0x0060000000009456
- (id)_gkDescriptionWithChildren:(long long)arg1;	// IMP=0x0060000000009219
- (void)mp_moveAndResizeWithinParentLayer:(id)arg1 usingGravity:(id)arg2 geometryFlipped:(_Bool)arg3 retinaScale:(double)arg4 animate:(_Bool)arg5;	// IMP=0x006000000003d0c4
- (id)mp_allAnimationsInTree;	// IMP=0x006000000003cdd3
- (id)mp_allLayersWithKindOfClass:(Class)arg1;	// IMP=0x006000000003cc31
- (id)mp_allLayersWhoseNamesContainString:(id)arg1;	// IMP=0x006000000003c9d7
- (void)mp_addLayerAndSublayersToArray:(id)arg1 allowHiddenLayers:(_Bool)arg2;	// IMP=0x006000000003c7ce
- (id)mp_allLayersInTree;	// IMP=0x006000000003c777
- (id)mp_propertiesToCopy;	// IMP=0x006000000003c698
- (id)mp_basicPropertiesToCopy;	// IMP=0x006000000003c4b5
- (id)mp_deepCopyLayer;	// IMP=0x006000000003beaf
@end
