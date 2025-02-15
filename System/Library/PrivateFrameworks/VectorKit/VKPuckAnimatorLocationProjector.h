//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEORouteMatch;

__attribute__((visibility("hidden")))
@interface VKPuckAnimatorLocationProjector : NSObject
{
    GEORouteMatch *_routeMatch;	// 8 = 0x8
    GEORouteMatch *_projectedRouteMatch;	// 16 = 0x10
    Matrix_6e1d3589 _projectedPosition;	// 24 = 0x18
    struct PolylineCoordinate _projectedCoordinate;	// 48 = 0x30
    _Bool _isProjectedPositionBehind;	// 56 = 0x38
    optional_fcefa02e _elevationInProjectedPosition;	// 64 = 0x40
    double _projectedCourse;	// 80 = 0x50
    optional_89639096 _currentSnappedSegment;	// 88 = 0x58
    _Bool _alwaysUseGoodRouteMatch;	// 144 = 0x90
    struct PolylineCoordinate _maxTravelledCoordinate;	// 148 = 0x94
}

- (id).cxx_construct;	// IMP=0x0000000000cf8270
- (void).cxx_destruct;	// IMP=0x0000000000cf8240
@property(readonly, nonatomic) struct PolylineCoordinate projectedCoordinate; // @synthesize projectedCoordinate=_projectedCoordinate;
@property(nonatomic) _Bool alwaysUseGoodRouteMatch; // @synthesize alwaysUseGoodRouteMatch=_alwaysUseGoodRouteMatch;
@property(readonly, nonatomic) _Bool isProjectedPositionBehind; // @synthesize isProjectedPositionBehind=_isProjectedPositionBehind;
@property(readonly, nonatomic) optional_89639096 currentSnappedSegment; // @synthesize currentSnappedSegment=_currentSnappedSegment;
@property(readonly, nonatomic) double projectedCourse; // @synthesize projectedCourse=_projectedCourse;
@property(readonly, nonatomic) optional_e65ed27b elevationInProjectedPostion; // @synthesize elevationInProjectedPostion=_elevationInProjectedPosition;
@property(readonly, nonatomic) Matrix_6e1d3589 projectedPosition; // @synthesize projectedPosition=_projectedPosition;
@property(retain, nonatomic) GEORouteMatch *projectedRouteMatch; // @synthesize projectedRouteMatch=_projectedRouteMatch;
@property(retain, nonatomic) GEORouteMatch *routeMatch; // @synthesize routeMatch=_routeMatch;
- (id)detailedDescription;	// IMP=0x0000000000cf7ff0
@property(readonly, nonatomic) _Bool projectedLocationOnRoute;
@property(readonly, nonatomic) CDStruct_2c43369c projectedLocation;
- (void)projectFromLocation:(id)arg1 routeMatch:(id)arg2 speedMultiplier:(double)arg3 routeLine:(id)arg4;	// IMP=0x0000000000cf77f0
- (void)_updateCourseAndPositionFromRouteMatch:(id)arg1;	// IMP=0x0000000000cf7540
- (void)reset;	// IMP=0x0000000000cf74e0
- (void)dealloc;	// IMP=0x0000000000cf7460
- (id)init;	// IMP=0x0000000000cf73e0

@end

