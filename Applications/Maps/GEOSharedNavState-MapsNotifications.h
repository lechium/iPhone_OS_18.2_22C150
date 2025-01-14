//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOSharedNavState.h>

@class NSString;

@interface GEOSharedNavState (MapsNotifications)
- (id)arrivalMessage;	// IMP=0x002000000051dd8e
- (id)arrivalNotificationBody;	// IMP=0x001000000051dc30
- (id)arrivalNotificationSubtitle;	// IMP=0x001000000051db71
- (id)waypointResumeMessage;	// IMP=0x001000000051d9b2
- (id)waypointResumeNotificationBody;	// IMP=0x001000000051d7b0
- (id)waypointResumeNotificationSubtitle;	// IMP=0x001000000051d6f1
- (id)intermediateArrivalMessage;	// IMP=0x001000000051d5b4
- (id)intermediateArrivalNotificationBody;	// IMP=0x001000000051d42b
- (id)intermediateArrivalNotificationSubtitle;	// IMP=0x001000000051d36c
- (id)chargingStopMessage;	// IMP=0x001000000051d291
- (id)chargingStopNotificationBody;	// IMP=0x001000000051d18e
- (id)chargingStopNotificationSubtitle;	// IMP=0x001000000051d0cf
- (id)updateMessage;	// IMP=0x001000000051cef2
- (id)updateNotificationBody;	// IMP=0x001000000051cccc
- (id)updateNotificationSubtitle;	// IMP=0x001000000051cc0d
- (id)initialMessage;	// IMP=0x001000000051ca3d
- (id)initialNotificationBody;	// IMP=0x001000000051c832
- (id)initialNotificationSubtitle;	// IMP=0x001000000051c773
- (id)senderNameIncludingHandleIfNecessary;	// IMP=0x001000000051c664
- (void)updateModel:(id)arg1;	// IMP=0x001000000058c305
- (id)_transportTypeStringForAnalytics;	// IMP=0x00100000009f4b7f
- (id)carPlayListCellSubtitle;	// IMP=0x0010000000b1970b
- (id)carPlayListCellTitle;	// IMP=0x0010000000b196f9
- (id)listCellSubtitle;	// IMP=0x0010000000b196e7
- (id)listCellTitle;	// IMP=0x0010000000b196d5
- (_Bool)_willArriveSoon:(double)arg1;	// IMP=0x0010000000b1966c
- (id)_lastUpdatedStringWithElapsedTime:(id)arg1;	// IMP=0x0010000000b195ad
- (id)_arrivingAroundStringWithETATimeString:(id)arg1;	// IMP=0x0010000000b194d4
- (id)_transportTypeString;	// IMP=0x0010000000b192e7
- (id)homeCellSubtitle;	// IMP=0x0010000000b18b47
- (id)homeCellTitle;	// IMP=0x0010000000b1860e
- (id)alertMessageForClosedTrip;	// IMP=0x0010000000b184f5
- (id)alertMessageForTransportOrProtocolError;	// IMP=0x0010000000b18123
- (id)alertMessageForChinaError;	// IMP=0x0010000000b17ed3
- (id)alertTitleForDisallowedDetails;	// IMP=0x0010000000b17e6b
- (_Bool)_disallowDetailsForAnyReason;	// IMP=0x0010000000b17e1e
- (_Bool)disallowDetailsForProtocolVersion;	// IMP=0x0010000000b17dcf
- (_Bool)disallowDetailsForTransportType;	// IMP=0x0010000000b17d7a
- (_Bool)disallowDetailsForChina;	// IMP=0x0010000000b17d44

// Remaining properties
// Error: Property attributes should begin with the type ('T') attribute, property name: debugDescription
// Property attributes: (null)

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

