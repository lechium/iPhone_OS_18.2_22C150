//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol VKGlobeLineContainerDelegate, VKRouteMatchedAnnotationPresentation;

__attribute__((visibility("hidden")))
@interface VKGlobeLineContainer : NSObject
{
    id <VKRouteMatchedAnnotationPresentation> _routeLineSplitAnnotation;	// 8 = 0x8
    id <VKRouteMatchedAnnotationPresentation> _skippedRouteLineSplitAnnotation;	// 16 = 0x10
    id <VKGlobeLineContainerDelegate> _delegate;	// 24 = 0x18
    struct set<id<VKRouteOverlay>, std::less<id<VKRouteOverlay>>, std::allocator<id<VKRouteOverlay>>> _retainedOverlays;	// 32 = 0x20
    struct set<__unsafe_unretained id<VKRouteOverlay>, std::less<__unsafe_unretained id<VKRouteOverlay>>, std::allocator<__unsafe_unretained id<VKRouteOverlay>>> _overlays;	// 56 = 0x38
    struct set<__unsafe_unretained id<VKRouteOverlay>, std::less<__unsafe_unretained id<VKRouteOverlay>>, std::allocator<__unsafe_unretained id<VKRouteOverlay>>> _persistentOverlays;	// 80 = 0x50
    struct set<__unsafe_unretained id<VKRouteOverlay>, std::less<__unsafe_unretained id<VKRouteOverlay>>, std::allocator<__unsafe_unretained id<VKRouteOverlay>>> _nonPersistentOverlays;	// 104 = 0x68
    void *_routeRenderLayer;	// 128 = 0x80
    struct map<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::weak_ptr<altitude::RouteLineData>, std::less<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>>, std::allocator<std::pair<const geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::weak_ptr<altitude::RouteLineData>>>> _polylinesToRoutes;	// 136 = 0x88
    _retain_ptr_816b7ffd _selectedPolyline;	// 160 = 0xa0
    _retain_ptr_816b7ffd _skippedPolyline;	// 184 = 0xb8
    struct VKGlobeRouteSplit *_routeSplit;	// 208 = 0xd0
    struct VKGlobeRouteSplit *_skippedRouteSplit;	// 216 = 0xd8
}

- (id).cxx_construct;	// IMP=0x0000000000b39080
- (void).cxx_destruct;	// IMP=0x0000000000b38fe0
@property(retain, nonatomic) id <VKRouteMatchedAnnotationPresentation> skippedRouteLineSplitAnnotation; // @synthesize skippedRouteLineSplitAnnotation=_skippedRouteLineSplitAnnotation;
@property(nonatomic) __weak id <VKGlobeLineContainerDelegate> delegate; // @synthesize delegate=_delegate;
- (float)halfWidthForLine:(id)arg1 styleZ:(float)arg2;	// IMP=0x0000000000b38d70
- (void)update;	// IMP=0x0000000000b38d40
- (void)_destroyLinesIfNeeded;	// IMP=0x0000000000b382d0
- (void)_recreateLinesIfNeeded;	// IMP=0x0000000000b37e40
- (void)_updateSkippedRouteSplit;	// IMP=0x0000000000b37d20
- (void)_updateRouteSplit;	// IMP=0x0000000000b37c00
@property(retain, nonatomic) id <VKRouteMatchedAnnotationPresentation> routeLineSplitAnnotation;
- (void)setSkipped:(_retain_ptr_816b7ffd)arg1 skipped:(_Bool)arg2;	// IMP=0x0000000000b37910
- (void)setSelected:(_retain_ptr_816b7ffd)arg1 selected:(_Bool)arg2;	// IMP=0x0000000000b37790
- (void)clearLineSkip;	// IMP=0x0000000000b375e0
- (void)clearLineSelection;	// IMP=0x0000000000b37430
- (void)removeLine:(_retain_ptr_816b7ffd)arg1;	// IMP=0x0000000000b372a0
- (void)addLine:(_retain_ptr_816b7ffd)arg1;	// IMP=0x0000000000b356b0
- (const void *)nonPersistentOverlays;	// IMP=0x0000000000b356a0
- (const void *)persistentOverlays;	// IMP=0x0000000000b35690
- (const void *)overlays;	// IMP=0x0000000000b35680
- (void)removeNonPersistentOverlay:(id)arg1;	// IMP=0x0000000000b35590
- (void)removePersistentOverlay:(id)arg1;	// IMP=0x0000000000b354a0
- (_Bool)hasPersistentOverlay:(id)arg1;	// IMP=0x0000000000b35450
- (_Bool)hasNonPersistentOverlay:(id)arg1;	// IMP=0x0000000000b35400
- (void)_removeOverlay:(id)arg1;	// IMP=0x0000000000b35070
- (void)addNonPersistentOverlay:(id)arg1;	// IMP=0x0000000000b34fa0
- (void)addPersistentOverlay:(id)arg1;	// IMP=0x0000000000b34ed0
- (void)_addOverlay:(id)arg1;	// IMP=0x0000000000b34b10
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000b34b00
- (void)dealloc;	// IMP=0x0000000000b348c0
- (id)initWithRouteRenderLayer:(void *)arg1;	// IMP=0x0000000000b347a0

@end
