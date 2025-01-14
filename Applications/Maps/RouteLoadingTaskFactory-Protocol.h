//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class GEOComposedGeometryRoutePersistentData, GEOCountryConfiguration, GEOMapServiceTraits, GEOResumeRouteHandle, NSArray, NSSet, WaypointSet;
@protocol RouteLoadingTask, RouteUpdatingTask;

@protocol RouteLoadingTaskFactory <NSObject>
@property(retain, nonatomic) GEOComposedGeometryRoutePersistentData *persistentData;
@property(retain, nonatomic) GEOResumeRouteHandle *resumeRouteHandle;
@property(nonatomic) _Bool isResumingMultipointRoute;
@property(retain, nonatomic) GEOMapServiceTraits *traits;
@property(nonatomic) unsigned long long initiator;
@property(retain, nonatomic) GEOCountryConfiguration *countryConfiguration;
@property(readonly, copy, nonatomic) NSSet *supportedTransportTypes;
- (id <RouteUpdatingTask>)taskForRoutes:(NSArray *)arg1;
- (id <RouteLoadingTask>)taskForTransportType:(long long)arg1 waypointSet:(WaypointSet *)arg2;
@end

