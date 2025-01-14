//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CARSessionStatus, CUSystemMonitor, IDSAccountController, MRGroupSessionEligibilityStatus, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface MRDGroupSessionEligibilityMonitor : NSObject
{
    MRGroupSessionEligibilityStatus *_eligibilityStatus;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 24 = 0x18
    IDSAccountController *_accountController;	// 32 = 0x20
    CUSystemMonitor *_systemMonitor;	// 40 = 0x28
    NSHashTable *_observers;	// 48 = 0x30
    CARSessionStatus *_carStatus;	// 56 = 0x38
}

+ (id)sharedMonitor;	// IMP=0x00200000001931e7
- (void).cxx_destruct;	// IMP=0x00200000001955a1
@property(retain, nonatomic) CARSessionStatus *carStatus; // @synthesize carStatus=_carStatus;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) CUSystemMonitor *systemMonitor; // @synthesize systemMonitor=_systemMonitor;
- (void);	// IMP=0x001000000019553f
@property(retain, nonatomic) IDSAccountController *accountController; // @synthesize accountController=_accountController;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) MRGroupSessionEligibilityStatus *eligibilityStatus; // @synthesize eligibilityStatus=_eligibilityStatus;
- (void)sessionDidDisconnect:(id)arg1;	// IMP=0x0010000000195489
- (void)sessionDidConnect:(id)arg1;	// IMP=0x0010000000195402
- (void)accountController:(id)arg1 accountDisabled:(id)arg2;	// IMP=0x00100000001953f0
- (void)accountController:(id)arg1 accountEnabled:(id)arg2;	// IMP=0x00100000001953de
- (void)accountController:(id)arg1 accountRemoved:(id)arg2;	// IMP=0x00100000001953cc
- (void)accountController:(id)arg1 accountAdded:(id)arg2;	// IMP=0x00100000001953ba
- (void)handleDeviceInfoChangeNotification:(id)arg1;	// IMP=0x001000000019528a
- (void)handleEndpointNotification:(id)arg1;	// IMP=0x0010000000195203
- (void)handleCloudStateChangeNotification:(id)arg1;	// IMP=0x001000000019517c
- (_Bool)isCarPlay;	// IMP=0x0010000000195119
- (_Bool)needsAcknowledgement;	// IMP=0x0010000000195111
- (unsigned char)pickedRouteType;	// IMP=0x0010000000195048
- (unsigned long long)hostingStateForUserState:(id)arg1 reason:(id *)arg2;	// IMP=0x0010000000194c48
- (unsigned long long)bestHostingStateForUserStates:(id)arg1 reason:(id *)arg2;	// IMP=0x0010000000194937
- (unsigned long long)hostingStateForEligibilityStatus:(id)arg1 reason:(id *)arg2;	// IMP=0x0010000000194896
- (unsigned long long)joiningStateForEligibilityStatus:(id)arg1 reason:(id *)arg2;	// IMP=0x00100000001946a0
- (void)_onQueue_notifyObservers:(id)arg1;	// IMP=0x001000000019449c
- (void)removeObserver:(id)arg1;	// IMP=0x00100000001943f1
- (void)addObserver:(id)arg1;	// IMP=0x001000000019426c
- (void)reevaluateState;	// IMP=0x0010000000193bbf
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x001000000019399f
- (void)initializeObserversAndState;	// IMP=0x00100000001933e1
- (id)init;	// IMP=0x001000000019323c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

