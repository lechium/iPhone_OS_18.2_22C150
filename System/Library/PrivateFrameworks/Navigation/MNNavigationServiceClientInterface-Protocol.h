//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Navigation/NSObject-Protocol.h>

@class GEOComposedGuidanceEvent, GEOComposedWaypoint, GEOStep, MNActiveRouteInfo, MNGuidanceEventFeedback, MNGuidanceJunctionViewInfo, MNGuidanceLaneInfo, MNGuidanceSignInfo, MNLocation, MNNavigationDetails, MNNavigationServiceCallbackParameters, MNTracePlaybackDetails, MNTrafficIncidentAlert, MNTransitAlert, NSArray, NSError, NSSet, NSString, NSUUID;
@protocol MNNavigationServiceProxy;

@protocol MNNavigationServiceClientInterface <NSObject>
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didSendNavigationServiceCallback:(MNNavigationServiceCallbackParameters *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didReceiveTransitAlert:(MNTransitAlert *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didReceiveRealtimeUpdates:(NSSet *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 willRequestRealtimeUpdatesForRouteIDs:(NSSet *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 triggerHaptics:(int)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didProcessSpeechEvent:(GEOComposedGuidanceEvent *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 willProcessSpeechEvent:(GEOComposedGuidanceEvent *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didStartSpeakingPrompt:(NSString *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didActivateAudioSession:(_Bool)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateTracePlaybackDetails:(MNTracePlaybackDetails *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didDismissTrafficIncidentAlert:(MNTrafficIncidentAlert *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didInvalidateTrafficIncidentAlert:(MNTrafficIncidentAlert *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateTrafficIncidentAlert:(MNTrafficIncidentAlert *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didReceiveTrafficIncidentAlert:(MNTrafficIncidentAlert *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateAlternateRoutes:(NSArray *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didFailRerouteWithError:(NSError *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(MNActiveRouteInfo *)arg3;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateRouteWithNewRideSelection:(MNActiveRouteInfo *)arg2;
- (void)navigationServiceProxyDidCancelReroute:(id <MNNavigationServiceProxy>)arg1;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didRerouteWithRoute:(MNActiveRouteInfo *)arg2 withLocation:(MNLocation *)arg3 withAlternateRoutes:(NSArray *)arg4 rerouteReason:(unsigned long long)arg5;
- (void)navigationServiceProxyWillReroute:(id <MNNavigationServiceProxy>)arg1;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdatePreviewRoutes:(NSArray *)arg2 withSelectedRouteIndex:(unsigned long long)arg3;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateMotionType:(unsigned long long)arg2 confidence:(unsigned long long)arg3;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateHeading:(double)arg2 accuracy:(double)arg3;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateETAResponseForRoute:(MNActiveRouteInfo *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didReceiveRouteSignalStrength:(unsigned long long)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 updatedGuidanceEventFeedback:(MNGuidanceEventFeedback *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 newGuidanceEventFeedback:(MNGuidanceEventFeedback *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didEnableGuidancePrompts:(_Bool)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 hideJunctionViewForId:(NSUUID *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 showJunctionView:(MNGuidanceJunctionViewInfo *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 hideLaneDirectionsForId:(NSUUID *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 showLaneDirections:(MNGuidanceLaneInfo *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 usePersistentDisplay:(_Bool)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 updateSignsWithARInfo:(NSArray *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 updateSignsWithInfo:(MNGuidanceSignInfo *)arg2;
- (void)navigationServiceProxyEndGuidanceUpdate:(id <MNNavigationServiceProxy>)arg1;
- (void)navigationServiceProxyBeginGuidanceUpdate:(id <MNNavigationServiceProxy>)arg1;
- (void)navigationServiceProxyHideSecondaryStep:(id <MNNavigationServiceProxy>)arg1;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 displaySecondaryStep:(GEOStep *)arg2 instructions:(NSArray *)arg3 shieldType:(int)arg4 shieldText:(NSString *)arg5 drivingSide:(int)arg6;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 displayPrimaryStep:(GEOStep *)arg2 instructions:(NSArray *)arg3 shieldType:(int)arg4 shieldText:(NSString *)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(_Bool)arg8;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateDistanceUntilSign:(double)arg2 timeUntilSign:(double)arg3 forStepIndex:(unsigned long long)arg4;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateProceedToRouteDistance:(double)arg2 displayString:(NSString *)arg3 closestStepIndex:(unsigned long long)arg4;
- (void)navigationServiceProxyDidArrive:(id <MNNavigationServiceProxy>)arg1;
- (void)navigationServiceProxyDidEnterPreArrivalState:(id <MNNavigationServiceProxy>)arg1;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didResumeNavigatingFromWaypoint:(GEOComposedWaypoint *)arg2 endOfLegIndex:(unsigned long long)arg3 reason:(unsigned long long)arg4;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didArriveAtWaypoint:(GEOComposedWaypoint *)arg2 endOfLegIndex:(unsigned long long)arg3;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 isApproachingEndOfLeg:(unsigned long long)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didEnterPreArrivalStateForWaypoint:(GEOComposedWaypoint *)arg2 endOfLegIndex:(unsigned long long)arg3;
- (void)navigationServiceProxyDidFinishLocationUpdate:(id <MNNavigationServiceProxy>)arg1;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateDistanceUntilManeuver:(double)arg2 timeUntilManeuver:(double)arg3 forStepIndex:(unsigned long long)arg4;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateDisplayedStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didChangeNavigationState:(int)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didFailWithError:(NSError *)arg2;
- (void)navigationServiceProxyWillResumeFromPauseNavigation:(id <MNNavigationServiceProxy>)arg1;
- (void)navigationServiceProxyWillPauseNavigation:(id <MNNavigationServiceProxy>)arg1;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didUpdateNavigationDetails:(MNNavigationDetails *)arg2;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)navigationServiceProxy:(id <MNNavigationServiceProxy>)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
@end

