//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface DBGViewDebuggerSupport : NSObject
{
}

+ (double)lastBaselineOffsetFromBottomForView:(id)arg1;	// IMP=0x0080000000014372
+ (double)firstBaselineOffsetFromTopForView:(id)arg1;	// IMP=0x0080000000014369
+ (void)addLayoutInfoForView:(id)arg1 toDict:(id)arg2;	// IMP=0x0080000000014363
+ (void)addViewLayerInfo:(id)arg1 toDict:(id)arg2;	// IMP=0x0080000000013da0
+ (void)addViewBasics:(id)arg1 toDict:(id)arg2;	// IMP=0x0080000000013d9a
+ (void)addFrameBasics:(id)arg1 toDict:(id)arg2;	// IMP=0x0080000000013d94
+ (id)primaryWindowFromWindows:(id)arg1;	// IMP=0x0080000000013d8c
+ (id)displayNameForView:(id)arg1;	// IMP=0x0080000000013d84
+ (_Bool)isViewSubclass:(id)arg1;	// IMP=0x0080000000013d7c
+ (_Bool)isWindowSubclass:(id)arg1;	// IMP=0x0080000000013d74
+ (id)subviewsForView:(id)arg1;	// IMP=0x0080000000013d6c
+ (id)layerForView:(id)arg1;	// IMP=0x0080000000013d64
+ (id)snapshotMethodForView:(id)arg1;	// IMP=0x0080000000013d5c
+ (id)snapshotView:(id)arg1 errorString:(id *)arg2;	// IMP=0x0080000000013d54
+ (double)screenBackingScaleForView:(id)arg1;	// IMP=0x0080000000013d46
+ (double)screenBackingScaleForWindow:(id)arg1;	// IMP=0x0080000000013d38
+ (id)titleForWindow:(id)arg1;	// IMP=0x0080000000013d2b
+ (_Bool)isHiddenForWindow:(id)arg1;	// IMP=0x0080000000013d23
+ (id)additionalRootLevelViewsToArchive;	// IMP=0x0080000000013d1b
+ (id)windowContentViewForWindow:(id)arg1;	// IMP=0x0080000000013d13
+ (id)appWindows;	// IMP=0x0080000000013d0b
+ (id)_layerInfo:(id)arg1 view:(id)arg2;	// IMP=0x0080000000013bb4
+ (id)_collectSubviewInfoForView:(id)arg1 encodeLayers:(_Bool)arg2;	// IMP=0x008000000001397c
+ (void)_populateConstraintInfosArray:(id)arg1 forViewHierarchy:(id)arg2;	// IMP=0x008000000001339f
+ (void)_snapshotView:(id)arg1 andAddDataToDictionary:(id)arg2;	// IMP=0x0080000000013304
+ (_Bool)_layerShouldSupersedeSnapshot:(id)arg1;	// IMP=0x008000000001318b
+ (_Bool)_shouldEncodeLayers;	// IMP=0x0080000000013176
+ (id)_arrayEncodedIndexPath:(id)arg1;	// IMP=0x00800000000130a2
+ (void)addViewSubclassSpecificInfoForView:(id)arg1 toDict:(id)arg2;	// IMP=0x0080000000012eb9
+ (void)addObjectBasics:(id)arg1 toDict:(id)arg2;	// IMP=0x0080000000012e1d
+ (id)collectViewInfo:(id)arg1;	// IMP=0x0080000000012d4c
+ (id)fetchViewHierarchy;	// IMP=0x008000000001248d
+ (void)disableLayersAsSnapshots;	// IMP=0x0080000000012480
+ (void)enableLayersAsSnapshots;	// IMP=0x0080000000012473
+ (id)viewDebuggerEffectViewsToSnapshotAsImage;	// IMP=0x0080000000012466
+ (id)fetchViewHierarchyWithOptions:(id)arg1;	// IMP=0x0080000000012320
+ (id)pathForClass:(Class)arg1;	// IMP=0x0080000000012280
+ (void)addPathForClass:(Class)arg1;	// IMP=0x00800000000121e8
+ (id)classMap;	// IMP=0x00800000000121b2
+ (unsigned long long)minorVersion;	// IMP=0x00800000000121aa
+ (unsigned long long)majorVersion;	// IMP=0x008000000001219f

@end
