//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedGeometryRoutePersistentData, GEOCountryConfiguration, GEOLocation, GEOMapServiceTraits, GEOResumeRouteHandle, NSString, WaypointSet;
@protocol TransportTypeRequestInfoProvider;

@interface RouteRequestBuilderFactory : NSObject
{
    _Bool _useMetricSystemWasManuallySet;	// 8 = 0x8
    _Bool _useMetricSystem;	// 9 = 0x9
    _Bool _isResumingMultipointRoute;	// 10 = 0xa
    GEOCountryConfiguration *_countryConfiguration;	// 16 = 0x10
    NSString *_voiceLanguageIdentifier;	// 24 = 0x18
    id <TransportTypeRequestInfoProvider> _transportTypeRequestInfoProvider;	// 32 = 0x20
    WaypointSet *_waypointSet;	// 40 = 0x28
    unsigned long long _initiator;	// 48 = 0x30
    GEOMapServiceTraits *_traits;	// 56 = 0x38
    GEOResumeRouteHandle *_resumeRouteHandle;	// 64 = 0x40
    GEOComposedGeometryRoutePersistentData *_persistentData;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000348750
@property(retain, nonatomic) GEOComposedGeometryRoutePersistentData *persistentData; // @synthesize persistentData=_persistentData;
@property(retain, nonatomic) GEOResumeRouteHandle *resumeRouteHandle; // @synthesize resumeRouteHandle=_resumeRouteHandle;
@property(nonatomic) _Bool isResumingMultipointRoute; // @synthesize isResumingMultipointRoute=_isResumingMultipointRoute;
@property(retain, nonatomic) GEOMapServiceTraits *traits; // @synthesize traits=_traits;
@property(nonatomic) unsigned long long initiator; // @synthesize initiator=_initiator;
@property(retain, nonatomic) WaypointSet *waypointSet; // @synthesize waypointSet=_waypointSet;
@property(retain, nonatomic) id <TransportTypeRequestInfoProvider> transportTypeRequestInfoProvider; // @synthesize transportTypeRequestInfoProvider=_transportTypeRequestInfoProvider;
- (id)_routeAttributesBuilders;	// IMP=0x001000000034850b
- (id)makeRouteRequestBuilder;	// IMP=0x0010000000348374
@property(readonly, nonatomic) unsigned long long navigationMode;
@property(readonly, nonatomic) GEOLocation *currentUserLocation;
@property(copy, nonatomic) NSString *voiceLanguageIdentifier; // @synthesize voiceLanguageIdentifier=_voiceLanguageIdentifier;
@property(retain, nonatomic) GEOCountryConfiguration *countryConfiguration; // @synthesize countryConfiguration=_countryConfiguration;
@property(nonatomic) _Bool useMetricSystem; // @synthesize useMetricSystem=_useMetricSystem;
- (id)initWithTransportTypeRequestInfoProvider:(id)arg1 waypointSet:(id)arg2;	// IMP=0x0010000000348040

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

