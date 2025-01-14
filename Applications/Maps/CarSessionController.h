//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, NSString, NavigationSession, PlatformController, RouteGeniusSession, RoutePlanningSession;

@interface CarSessionController : NSObject
{
    _Bool _active;	// 8 = 0x8
    NavigationSession *_navigationSession;	// 16 = 0x10
    RoutePlanningSession *_routePlanningSession;	// 24 = 0x18
    RouteGeniusSession *_routeGeniusSession;	// 32 = 0x20
    CDUnknownBlockType _navigationEndedHandler;	// 40 = 0x28
    NSMutableSet *_observers;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x0020000000820473
- (void).cxx_destruct;	// IMP=0x00200000008231f5
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) NSMutableSet *observers; // @synthesize observers=_observers;
@property(copy, nonatomic) CDUnknownBlockType navigationEndedHandler; // @synthesize navigationEndedHandler=_navigationEndedHandler;
@property(retain, nonatomic) RouteGeniusSession *routeGeniusSession; // @synthesize routeGeniusSession=_routeGeniusSession;
@property(retain, nonatomic) RoutePlanningSession *routePlanningSession; // @synthesize routePlanningSession=_routePlanningSession;
@property(retain, nonatomic) NavigationSession *navigationSession; // @synthesize navigationSession=_navigationSession;
- (void)didUpdateRouteGenius:(id)arg1;	// IMP=0x0010000000822f0c
- (void)_routeGeniusSessionDidChangeState:(unsigned long long)arg1;	// IMP=0x0010000000822d4d
- (void)routePlanningSession:(id)arg1 didReceiveUpdates:(id)arg2 forRoutesResult:(id)arg3;	// IMP=0x0010000000822d47
- (void)routePlanningSession:(id)arg1 didUpdateRouteCollectionResult:(id)arg2 forTransportType:(long long)arg3;	// IMP=0x0010000000822d41
- (void)routePlanningSession:(id)arg1 didFinishResolvingWaypointSet:(id)arg2;	// IMP=0x0010000000822d3b
- (void)routePlanningSession:(id)arg1 didChangeCurrentTransportType:(long long)arg2 userInitiated:(_Bool)arg3;	// IMP=0x0010000000822c58
- (void)_routePlanningSessionDidChangeState:(unsigned long long)arg1;	// IMP=0x0010000000822ad2
- (void)navigationService:(id)arg1 didUpdateArrivalInfo:(id)arg2;	// IMP=0x0010000000822955
- (void)navigationServicePredictingDidArrive:(id)arg1;	// IMP=0x0010000000822909
- (void)navigationSession:(id)arg1 didChangeCurrentTransportType:(long long)arg2;	// IMP=0x0010000000822903
- (void)navigationSession:(id)arg1 didUpdateRouteCollection:(id)arg2;	// IMP=0x00100000008227fd
- (void)_promptToEndNavigationAccepted:(CDUnknownBlockType)arg1;	// IMP=0x001000000082271d
- (void)endNavigationIfNeededWithPrompt:(_Bool)arg1 andPerformBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000822339
- (void)_stopNavigation;	// IMP=0x00100000008220e8
- (void)_startNavigatingAnimated:(_Bool)arg1;	// IMP=0x0010000000821ddd
- (void)_navigationSessionDidChangeState:(unsigned long long)arg1;	// IMP=0x0010000000821daa
- (void)mapsSession:(id)arg1 didChangeState:(unsigned long long)arg2;	// IMP=0x0010000000821a72
- (void)_handleTransportType:(long long)arg1;	// IMP=0x00100000008217bb
- (void)_handleIncomingSession:(id)arg1;	// IMP=0x0010000000821647
- (void)platformController:(id)arg1 didChangeCurrentSessionFromSession:(id)arg2 toSession:(id)arg3;	// IMP=0x00100000008211d9
- (void)platformController:(id)arg1 willChangeCurrentSessionFromSession:(id)arg2 toSession:(id)arg3;	// IMP=0x0010000000820ead
@property(readonly, nonatomic) PlatformController *platformController;
- (void)removeObserver:(id)arg1;	// IMP=0x00100000008208d3
- (void)addObserver:(id)arg1;	// IMP=0x00100000008205ff
@property(readonly, nonatomic) NSSet *sessionObservers;
- (void)dealloc;	// IMP=0x0010000000820537
- (id)init;	// IMP=0x00100000008204c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

