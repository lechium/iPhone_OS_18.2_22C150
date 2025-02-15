//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CarDisplayController, MNNavigationService, NSString, NavigationSession, OverlayManager, RouteCollection, RoutePlanningSession, RouteTileLoadingSession;

@interface TilePreloadingTask : NSObject
{
    MNNavigationService *_navigationService;	// 8 = 0x8
    CarDisplayController *_carDisplayController;	// 16 = 0x10
    OverlayManager *_overlayManager;	// 24 = 0x18
    RoutePlanningSession *_observedRoutePlanningSession;	// 32 = 0x20
    NavigationSession *_observedNavigationSession;	// 40 = 0x28
    RouteTileLoadingSession *_tileLoadingSession;	// 48 = 0x30
}

+ (long long)creationPreference;	// IMP=0x0020000000c36292
- (void).cxx_destruct;	// IMP=0x0000000000c36fb7
@property(retain, nonatomic) RouteTileLoadingSession *tileLoadingSession; // @synthesize tileLoadingSession=_tileLoadingSession;
@property(retain, nonatomic) NavigationSession *observedNavigationSession; // @synthesize observedNavigationSession=_observedNavigationSession;
@property(retain, nonatomic) RoutePlanningSession *observedRoutePlanningSession; // @synthesize observedRoutePlanningSession=_observedRoutePlanningSession;
@property(retain, nonatomic) OverlayManager *overlayManager; // @synthesize overlayManager=_overlayManager;
@property(retain, nonatomic) CarDisplayController *carDisplayController; // @synthesize carDisplayController=_carDisplayController;
@property(retain, nonatomic) MNNavigationService *navigationService; // @synthesize navigationService=_navigationService;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000c36e4a
- (id)traitsForPreloadingSession;	// IMP=0x0010000000c36d4e
@property(readonly, nonatomic) RouteCollection *currentRouteCollection;
- (void)_updateNavServiceWithCurrentRouteCollectionInSession;	// IMP=0x0010000000c36bfd
- (void)_updateRoutePreloadingSessionWithCurrentRouteCollectionInSession;	// IMP=0x0010000000c36975
- (void)_updateRoutePreloadingAndNavService;	// IMP=0x0010000000c36947
- (void)navigationSession:(id)arg1 didChangeCurrentTransportType:(long long)arg2;	// IMP=0x0010000000c36941
- (void)navigationSession:(id)arg1 didUpdateRouteCollection:(id)arg2;	// IMP=0x0010000000c3692f
- (void)routePlanningSession:(id)arg1 didChangeCurrentTransportType:(long long)arg2 userInitiated:(_Bool)arg3;	// IMP=0x0010000000c3691d
- (void)routePlanningSession:(id)arg1 didReceiveUpdates:(id)arg2 forRoutesResult:(id)arg3;	// IMP=0x0010000000c36917
- (void)routePlanningSession:(id)arg1 didUpdateRouteCollectionResult:(id)arg2 forTransportType:(long long)arg3;	// IMP=0x0010000000c3673f
- (void)routePlanningSession:(id)arg1 didFinishResolvingWaypointSet:(id)arg2;	// IMP=0x0010000000c36739
- (void)mapsSession:(id)arg1 didChangeState:(unsigned long long)arg2;	// IMP=0x0010000000c3671f
- (void)_clearPreloadingIfNecessary;	// IMP=0x0010000000c36457
- (void)platformController:(id)arg1 didChangeCurrentSessionFromSession:(id)arg2 toSession:(id)arg3;	// IMP=0x0010000000c362a3
- (void)platformController:(id)arg1 willChangeCurrentSessionFromSession:(id)arg2 toSession:(id)arg3;	// IMP=0x0010000000c3629d
- (void)dealloc;	// IMP=0x0010000000c36203
- (id)initWithNavigationService:(id)arg1 carDisplayController:(id)arg2;	// IMP=0x0010000000c35fb9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

