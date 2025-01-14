//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CarPlaySupport/NSObject-Protocol.h>

@class CPLaneGuidance, CPManeuver, CPRouteInfo, CPTravelEstimates, NSArray;

@protocol CPSNavigationMetadataDelegate <NSObject>

@optional
@property(nonatomic) short destinationTimeZoneOffsetMinutes;
// Preceding property had unknown attributes: ?
// Original attribute string: Ts,?,N

@property(copy, nonatomic) NSArray *destinationNameVariants;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,C,N

@property(nonatomic) _Bool sendsNavigationMetadata;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

- (void)setCurrentLaneGuidance:(CPLaneGuidance *)arg1;
- (void)setCurrentRoadNameVariants:(NSArray *)arg1;
- (void)setManeuverState:(long long)arg1;
- (void)updateTripTravelEstimates:(CPTravelEstimates *)arg1;
- (void)updateTravelEstimates:(CPTravelEstimates *)arg1 forManeuver:(CPManeuver *)arg2;
- (void)setActiveManeuvers:(NSArray *)arg1;
- (void)addLaneGuidances:(NSArray *)arg1;
- (void)addManeuvers:(NSArray *)arg1;
- (void)cancelTrip;
- (void)finishTrip;
- (void)routeChangedWithReason:(unsigned char)arg1 routeInfo:(CPRouteInfo *)arg2;
- (void)startRerouting;
- (void)pauseTripForReason:(unsigned long long)arg1;
@end

