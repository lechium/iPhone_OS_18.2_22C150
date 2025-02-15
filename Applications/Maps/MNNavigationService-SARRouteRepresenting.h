//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Navigation/MNNavigationService.h>

@class GEOComposedRouteEVChargingStationInfo, GEOComposedWaypoint, NSString;

@interface MNNavigationService (SARRouteRepresenting)
- (id)originalWaypointRouteRepresentation;	// IMP=0x002000000055290a
- (id)legacyRouteRepresentation;	// IMP=0x00100000005528b8
- (id)routeId;	// IMP=0x0010000000552868
@property(readonly, nonatomic) GEOComposedWaypoint *stopAfterCharging;
@property(readonly, nonatomic) GEOComposedRouteEVChargingStationInfo *arrivalChargingStationInfo;
@property(readonly, nonatomic) _Bool isArrivedAtEVCharger;
@property(readonly, nonatomic) unsigned long long arrivalState;
@property(readonly, nonatomic) GEOComposedWaypoint *upcomingStop;
- (id)incidentsOnRouteOffsets;	// IMP=0x0010000000a6de28
- (id)incidentsOnRouteData;	// IMP=0x0010000000a6dbc8
- (id)etaFilterData;	// IMP=0x0010000000a6db29
- (void)setVoiceGuidanceEnabled:(_Bool)arg1;	// IMP=0x0010000000a6da5a
- (id)routeRepresentator;	// IMP=0x0010000000a6da51
@property(readonly, nonatomic) int effectiveTransportType;
@property(readonly, nonatomic) long long effectiveNavigationType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

