//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIFocusSystem, _UIFocusGroupMap, _UIFocusMapSearchInfo, _UIFocusSearchInfo;
@protocol UICoordinateSpace, _UIFocusRegionContainer;

__attribute__((visibility("hidden")))
@interface _UIFocusMap : NSObject
{
    _Bool _minimumSearchAreaIsEmpty;	// 8 = 0x8
    _Bool _trackingSearchInfo;	// 9 = 0x9
    _Bool _needsSearchInfo;	// 10 = 0xa
    _Bool _ignoresRootContainerClippingRect;	// 11 = 0xb
    id <_UIFocusRegionContainer> _rootContainerProxy;	// 16 = 0x10
    UIFocusSystem *_focusSystem;	// 24 = 0x18
    id <_UIFocusRegionContainer> _rootContainer;	// 32 = 0x20
    id <UICoordinateSpace> _coordinateSpace;	// 40 = 0x28
    _UIFocusGroupMap *_focusGroupMap;	// 48 = 0x30
    _UIFocusSearchInfo *_searchInfo;	// 56 = 0x38
    _UIFocusMapSearchInfo *_defaultItemSearchInfo;	// 64 = 0x40
    _UIFocusMapSearchInfo *_focusMovementSearchInfo;	// 72 = 0x48
    struct CGRect _minimumSearchArea;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000b04139
@property(readonly, nonatomic, getter=_focusMovementSearchContext) _UIFocusMapSearchInfo *focusMovementSearchInfo; // @synthesize focusMovementSearchInfo=_focusMovementSearchInfo;
@property(readonly, nonatomic, getter=_defaultItemSearchContext) _UIFocusMapSearchInfo *defaultItemSearchInfo; // @synthesize defaultItemSearchInfo=_defaultItemSearchInfo;
@property(nonatomic) struct CGRect minimumSearchArea; // @synthesize minimumSearchArea=_minimumSearchArea;
@property(readonly, nonatomic) _UIFocusSearchInfo *searchInfo; // @synthesize searchInfo=_searchInfo;
@property(readonly, nonatomic) _UIFocusGroupMap *focusGroupMap; // @synthesize focusGroupMap=_focusGroupMap;
@property(readonly, nonatomic) __weak id <UICoordinateSpace> coordinateSpace; // @synthesize coordinateSpace=_coordinateSpace;
@property(readonly, nonatomic) __weak id <_UIFocusRegionContainer> rootContainer; // @synthesize rootContainer=_rootContainer;
@property(readonly, nonatomic) __weak UIFocusSystem *focusSystem; // @synthesize focusSystem=_focusSystem;
- (void)diagnoseFocusabilityForItem:(id)arg1 report:(id)arg2;	// IMP=0x0000000000b0389c
- (void)_trackExternalSnapshot:(id)arg1;	// IMP=0x0000000000b037fc
- (void)_beginTrackingFocusMovementSearchInfoIfNecessary;	// IMP=0x0000000000b037c2
- (void)_beginTrackingDefaultItemSearchInfoIfNecessary;	// IMP=0x0000000000b03788
- (id)_stopTrackingSearches;	// IMP=0x0000000000b036f0
- (void)_beginTrackingSearches;	// IMP=0x0000000000b03667
- (_Bool)verifyFocusabilityForItem:(id)arg1;	// IMP=0x0000000000b03231
- (id)_linearlySortedFocusItemsForItems:(id)arg1 groupFilter:(long long)arg2 itemStandInMap:(id)arg3;	// IMP=0x0000000000b02ef1
- (id)_findAllDefaultFocusableRegionsWithSnapshotter:(id)arg1;	// IMP=0x0000000000b02c31
- (id)_closestFocusableItemToPoint:(struct CGPoint)arg1 inRect:(struct CGRect)arg2 excludingItems:(id)arg3 distanceMeasuringUnitPoint:(struct CGPoint)arg4;	// IMP=0x0000000000b02556
- (id)_allDefaultFocusableRegionsInContainer:(id)arg1 intersectingRegion:(id)arg2;	// IMP=0x0000000000b02404
- (id)_nextFocusedItemForLinearFocusMovementRequest:(id)arg1 startingFromRegion:(id)arg2 inRegions:(id)arg3 withSnapshot:(id)arg4;	// IMP=0x0000000000b018bb
- (id)_nextFocusedItemForNonLinearFocusMovementRequest:(id)arg1 startingFromRegion:(id)arg2 inRegions:(id)arg3 withSnapshot:(id)arg4;	// IMP=0x0000000000affe8d
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1 startingFromRegion:(id)arg2 inRegions:(id)arg3 withSnapshot:(id)arg4;	// IMP=0x0000000000affd94
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1 inRegions:(id)arg2 withSnapshot:(id)arg3;	// IMP=0x0000000000affcb7
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1 startingFromRegion:(id)arg2;	// IMP=0x0000000000aff56b
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1;	// IMP=0x0000000000afeee4
- (id)_inferredDefaultFocusItemInEnvironment:(id)arg1;	// IMP=0x0000000000afde49
- (id)_allFocusableItemsInEnvironment:(id)arg1;	// IMP=0x0000000000afdb14
- (id)_defaultMapSnapshotter;	// IMP=0x0000000000afda4f
- (id)initWithFocusSystem:(id)arg1 rootContainer:(id)arg2 coordinateSpace:(id)arg3 searchInfo:(id)arg4 ignoresRootContainerClippingRect:(_Bool)arg5;	// IMP=0x0000000000afd72e
- (id)initWithFocusSystem:(id)arg1 rootEnvironment:(id)arg2 coordinateSpace:(id)arg3 searchInfo:(id)arg4 ignoresRootContainerClippingRect:(_Bool)arg5;	// IMP=0x0000000000afd5c5
- (id)initWithFocusSystem:(id)arg1 rootEnvironment:(id)arg2;	// IMP=0x0000000000afd463
- (id)init;	// IMP=0x0000000000afd3dc

@end

