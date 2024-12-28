//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MSPGroupSessionStorage, MSPNavigationListener, MSPSharedTripGroupSession, MSPSharedTripRelay, MSPSharedTripSenderStrategyController, MSPSharedTripStorageController, NSArray, NSDictionary, NSMutableSet, NSString;
@protocol MSPSenderETAControllerDelegate, OS_os_transaction;

__attribute__((visibility("hidden")))
@interface MSPSenderETAController : NSObject
{
    NSObject<OS_os_transaction> *_transaction;	// 8 = 0x8
    MSPNavigationListener *_navigationListener;	// 16 = 0x10
    NSMutableSet *_destinations;	// 24 = 0x18
    MSPSharedTripRelay *_idsRelay;	// 32 = 0x20
    MSPSharedTripGroupSession *_groupSession;	// 40 = 0x28
    MSPSharedTripSenderStrategyController *_senderStrategyController;	// 48 = 0x30
    MSPGroupSessionStorage *_sessionStorage;	// 56 = 0x38
    MSPSharedTripStorageController *_storageController;	// 64 = 0x40
    NSObject<MSPSenderETAControllerDelegate> *_delegate;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000077653
@property(nonatomic) __weak NSObject<MSPSenderETAControllerDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)groupSessionEnded:(id)arg1 withError:(id)arg2;	// IMP=0x00000000000775d6
- (void)groupSession:(id)arg1 participantDidLeave:(id)arg2;	// IMP=0x00000000000774f8
- (void)groupSession:(id)arg1 participantDidJoin:(id)arg2;	// IMP=0x00000000000773de
- (void)navigationListenerStopped:(id)arg1;	// IMP=0x0000000000077379
- (void)navigationListenerResumed:(id)arg1;	// IMP=0x0000000000077325
- (void)navigationListenerArrived:(id)arg1;	// IMP=0x00000000000772d1
- (void)navigationListenerTrafficUpdated:(id)arg1;	// IMP=0x000000000007727d
- (void)navigationListenerRouteUpdated:(id)arg1;	// IMP=0x0000000000077229
- (void)navigationListenerLocationUpdated:(id)arg1;	// IMP=0x00000000000771d5
- (void)navigationListenerETAUpdated:(id)arg1;	// IMP=0x0000000000077181
- (void)navigationListenerIsReady:(id)arg1;	// IMP=0x000000000007711b
- (void)navigationListenerWaypointsUpdated:(id)arg1;	// IMP=0x00000000000770b2
- (void)touchedRules;	// IMP=0x000000000007709c
- (id)rulesForParticipant:(id)arg1;	// IMP=0x0000000000077086
- (void)_setState:(id)arg1 forEvent:(unsigned long long)arg2;	// IMP=0x0000000000077069
- (_Bool)_validateNavigationState:(id *)arg1;	// IMP=0x0000000000076df6
- (void)_stopNavigationListener;	// IMP=0x0000000000076d4d
- (void)_startNavigationListener;	// IMP=0x0000000000076ca3
- (void)_invalidateActiveHandles;	// IMP=0x0000000000076c07
- (void)_invalidateSharedTripWithError:(id)arg1;	// IMP=0x0000000000076adf
- (void)_cleanObjects;	// IMP=0x00000000000769ba
- (void)_stopLiveForVirtualReceiver:(id)arg1;	// IMP=0x00000000000768fb
- (void)_startLiveForVirtualReceiver:(id)arg1;	// IMP=0x00000000000767aa
@property(readonly, nonatomic) NSDictionary *serviceNamesByActiveHandle;
@property(readonly, nonatomic) NSArray *activeHandles;
- (_Bool)stopSharingWithReason:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000000007647a
- (_Bool)stopSharingWith:(id)arg1 reason:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000075b52
- (_Bool)stopSharingWithGroup:(id)arg1 reason:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000075b4a
- (_Bool)startSharingWithGroup:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000075b42
- (_Bool)startSharingWith:(id)arg1 capabilityType:(unsigned long long)arg2 serviceName:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000753a7
- (void)_startingGroupSession;	// IMP=0x000000000007533b
- (void)_createGroupSessionIfNeededWithIdentifier:(id)arg1;	// IMP=0x000000000007512a
- (void)_restoreLastSession;	// IMP=0x0000000000074cf0
- (void)_updateStorage;	// IMP=0x0000000000074c21
- (void)dealloc;	// IMP=0x0000000000074b68
- (id)initWithRelay:(id)arg1;	// IMP=0x00000000000749a3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
