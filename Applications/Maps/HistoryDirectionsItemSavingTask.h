//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MNNavigationService, NSString;
@protocol NavigationRouteHistoryInfoProviding, NavigationRouteInterrupting;

@interface HistoryDirectionsItemSavingTask : NSObject
{
    MNNavigationService *_navigationService;	// 8 = 0x8
    id <NavigationRouteHistoryInfoProviding> _routeInfoProvider;	// 16 = 0x10
    id <NavigationRouteInterrupting> _routeInterrupter;	// 24 = 0x18
    _Bool _arrivedAtDestination;	// 32 = 0x20
    _Bool _shouldLaunchRouteGeniusOnEnd;	// 33 = 0x21
    _Bool _navigationIsEnding;	// 34 = 0x22
}

+ (long long)creationPreference;	// IMP=0x00200000003a4466
- (void).cxx_destruct;	// IMP=0x00200000003a7c53
- (void)platformController:(id)arg1 willChangeCurrentSessionFromSession:(id)arg2 toSession:(id)arg3;	// IMP=0x00100000003a7c4d
- (void)platformController:(id)arg1 didChangeCurrentSessionFromSession:(id)arg2 toSession:(id)arg3;	// IMP=0x00100000003a7c47
- (void)sharedTripService:(id)arg1 sharingDidInvalidateWithError:(id)arg2;	// IMP=0x00100000003a7c2e
- (void)sharedTripService:(id)arg1 didUpdateSharingIdentity:(id)arg2;	// IMP=0x00100000003a7c28
- (void)sharedTripServiceDidUpdateSendingAvailability:(id)arg1;	// IMP=0x00100000003a7c22
- (void)sharedTripService:(id)arg1 didUpdateReceivers:(id)arg2;	// IMP=0x00100000003a7adf
- (unsigned long long)_routeProgressWaypointIndexForCurrentLegIndex:(unsigned long long)arg1 inRoute:(id)arg2;	// IMP=0x00100000003a762f
- (void)_saveCustomRouteToHistory:(id)arg1 uuid:(id)arg2;	// IMP=0x00100000003a7486
- (void)_saveRouteHistory:(id)arg1 withOriginalHistoryIdentifier:(id)arg2 arrivalState:(unsigned long long)arg3;	// IMP=0x00100000003a6f51
- (void)_updateHistoryEntry:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000003a6a80
- (void)navigationService:(id)arg1 willEndWithReason:(unsigned long long)arg2;	// IMP=0x00100000003a669f
- (void)_handleArrivalAtWaypoint:(id)arg1 endOfLegIndex:(unsigned long long)arg2;	// IMP=0x00100000003a6197
- (void)navigationService:(id)arg1 didArriveAtWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x00100000003a617f
- (void)navigationService:(id)arg1 isApproachingEndOfLeg:(unsigned long long)arg2;	// IMP=0x00100000003a5faa
- (void)navigationService:(id)arg1 didEnterPreArrivalStateForWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x00100000003a5f92
- (void)navigationService:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x00100000003a5d91
- (void)navigationService:(id)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x00100000003a5d6e
- (void)navigationService:(id)arg1 didResumeNavigatingFromWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3 reason:(unsigned long long)arg4;	// IMP=0x00100000003a59fb
- (void)navigationService:(id)arg1 didUpdateResumeRouteHandle:(id)arg2;	// IMP=0x00100000003a579a
- (void)navigationService:(id)arg1 didReroute:(id)arg2 rerouteReason:(unsigned long long)arg3;	// IMP=0x00100000003a55c9
- (void)_appWillTerminate:(id)arg1;	// IMP=0x00100000003a5357
- (id)_currentRouteHandleStorage;	// IMP=0x00100000003a52c1
- (void)_launchRouteGeniusIfNeeded;	// IMP=0x00100000003a505f
- (void)_uninterruptHistoryEntry:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003a4dc2
- (void)_interruptAndSaveHistoryEntry:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003a4ac8
- (_Bool)_updateEVInfoForHistoryEntry:(id)arg1;	// IMP=0x00100000003a47c8
- (void)_preserveAutosharingContacts:(_Bool)arg1 inHistoryEntry:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000003a4487
- (id)historyEntryRoute;	// IMP=0x00100000003a4471
- (void)dealloc;	// IMP=0x00100000003a43e0
- (id)initWithNavigationService:(id)arg1 routeInfoProvider:(id)arg2 routeInterrupter:(id)arg3;	// IMP=0x00100000003a428a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
