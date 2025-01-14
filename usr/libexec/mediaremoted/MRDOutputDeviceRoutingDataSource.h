//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVOutputDeviceDiscoverySession, NSMutableArray;

@interface MRDOutputDeviceRoutingDataSource
{
    AVOutputDeviceDiscoverySession *_discoverySession;	// 8 = 0x8
    NSMutableArray *_activeReconnaissanceSessions;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000004fa4d
- (id)_activeSystemContext;	// IMP=0x001000000004fa32
- (_Bool)unpickAirPlayRoutes;	// IMP=0x001000000004f9ee
- (_Bool)resetPickedSystemRouteForSource:(unsigned int)arg1;	// IMP=0x001000000004f9da
- (_Bool)resetPickedRouteForSource:(unsigned int)arg1;	// IMP=0x001000000004f996
- (_Bool)setPickedSystemRoute:(id)arg1 withPassword:(id)arg2 forSource:(unsigned int)arg3;	// IMP=0x001000000004efb5
- (_Bool)setPickedRoute:(id)arg1 withPassword:(id)arg2 forSource:(unsigned int)arg3;	// IMP=0x001000000004efa3
- (_Bool)setPickedRoute:(id)arg1 withPassword:(id)arg2;	// IMP=0x001000000004ef8e
- (id)pickedRouteForCategory:(id)arg1 source:(unsigned int)arg2;	// IMP=0x000000000004ef04
- (id)pickedRouteForCategory:(id)arg1;	// IMP=0x001000000004eef0
- (id)pickedRoute;	// IMP=0x001000000004eed5
- (id)pickableRoutesForCategory:(id)arg1 source:(unsigned int)arg2;	// IMP=0x001000000004ed19
- (id)pickableRoutesForCategory:(id)arg1;	// IMP=0x001000000004ed05
- (_Bool)currentRouteSupportsVolumeControl;	// IMP=0x001000000004ec99
- (unsigned int)externalScreenType;	// IMP=0x001000000004ec91
- (void)setDiscoveryMode:(unsigned int)arg1;	// IMP=0x001000000004ebab
- (unsigned int)discoveryMode;	// IMP=0x001000000004eb74
- (id)init;	// IMP=0x001000000004eada

@end

