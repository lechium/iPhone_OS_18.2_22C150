//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _MKSpatialColliderPairSet;

__attribute__((visibility("hidden")))
@interface MKSpatialCollider : NSObject
{
    long long _options;	// 8 = 0x8
    _MKSpatialColliderPairSet *_previousCollisionPairs;	// 16 = 0x10
    _MKSpatialColliderPairSet *_registeredCollisonPairs;	// 24 = 0x18
    _Bool _isVertical;	// 32 = 0x20
    struct vector<MKAnnotationView *, std::allocator<MKAnnotationView *>> _sortedAnnotationViews;	// 40 = 0x28
    double _maxLength;	// 64 = 0x40
    unsigned long long mutator;	// 72 = 0x48
}

- (id).cxx_construct;	// IMP=0x00000000001b22e4
- (void).cxx_destruct;	// IMP=0x00000000001b22c8
- (id)registeredCollissions;	// IMP=0x00000000001b22b1
- (id)viewsCollidingWithAnnotationView:(id)arg1 inCollidableList:(_Bool)arg2 fromIndex:(long long)arg3 length:(double)arg4;	// IMP=0x00000000001b194c
- (id)viewsCollidingWithAnnotationViewAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001b18d6
- (id)viewsCollidingWithAnnotationView:(id)arg1 inCollidableList:(_Bool)arg2;	// IMP=0x00000000001b176f
- (unsigned long long)insertAnnotationView:(id)arg1;	// IMP=0x00000000001b143d
- (id)annotationViewAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001b142f
- (unsigned long long)viewCount;	// IMP=0x00000000001b141d
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000001b13eb
- (void)dealloc;	// IMP=0x00000000001b13a1
- (id)initWithAnnotationViews:(id)arg1 previousCollissions:(id)arg2 options:(long long)arg3;	// IMP=0x00000000001b0f86

@end

