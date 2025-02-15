//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSObject-Protocol.h>

@protocol GEONavigationServerRequestStateXPCInterface <NSObject>
- (void)setWantsRoutes:(_Bool)arg1;
- (void)requestETAUpdate;
- (void)requestNavigationVoiceVolume;
- (void)requestPositionFromDestination;
- (void)requestPositionFromManeuver;
- (void)requestPositionFromSign;
- (void)requestRideSelections;
- (void)requestStepNameInfo;
- (void)requestStepIndex;
- (void)requestActiveRouteDetailsData;
- (void)requestUpdates;
- (void)requestGuidanceState;
- (void)requestTransitSummary;
- (void)requestRouteSummary;
- (void)requestRoute;
@end

