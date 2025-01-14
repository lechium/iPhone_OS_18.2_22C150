//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class COCompanionLinkClientFactory, NSError, NSMutableSet, NSString, RPCompanionLinkClient;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface COCompanionLinkClient : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Atomic _Bool _isInvalidated;	// 12 = 0xc
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    unsigned long long _flags;	// 24 = 0x18
    CDUnknownBlockType _interruptionHandler;	// 32 = 0x20
    CDUnknownBlockType _stateUpdatedHandler;	// 40 = 0x28
    CDUnknownBlockType _errorFlagsChangedHandler;	// 48 = 0x30
    CDUnknownBlockType _disconnectHandler;	// 56 = 0x38
    CDUnknownBlockType _invalidationHandler;	// 64 = 0x40
    CDUnknownBlockType _deviceFoundHandler;	// 72 = 0x48
    CDUnknownBlockType _deviceLostHandler;	// 80 = 0x50
    CDUnknownBlockType _localDeviceUpdatedHandler;	// 88 = 0x58
    CDUnknownBlockType _deviceChangedHandler;	// 96 = 0x60
    CDUnknownBlockType _requestIDRegistrationCompletion;	// 104 = 0x68
    CDUnknownBlockType _eventIDRegistrationCompletion;	// 112 = 0x70
    COCompanionLinkClientFactory *_factory;	// 120 = 0x78
    RPCompanionLinkClient *_rapport;	// 128 = 0x80
    NSError *_activationError;	// 136 = 0x88
    CDUnknownBlockType _activationHandler;	// 144 = 0x90
    NSMutableSet *_registeredEventIDs;	// 152 = 0x98
    NSMutableSet *_registeredRequestIDs;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x00000000000a426d
@property(readonly, copy, nonatomic) NSMutableSet *registeredRequestIDs; // @synthesize registeredRequestIDs=_registeredRequestIDs;
@property(readonly, copy, nonatomic) NSMutableSet *registeredEventIDs; // @synthesize registeredEventIDs=_registeredEventIDs;
@property(copy, nonatomic) CDUnknownBlockType activationHandler; // @synthesize activationHandler=_activationHandler;
@property(copy, nonatomic) NSError *activationError; // @synthesize activationError=_activationError;
@property(readonly, nonatomic) RPCompanionLinkClient *rapport; // @synthesize rapport=_rapport;
@property(nonatomic) __weak COCompanionLinkClientFactory *factory; // @synthesize factory=_factory;
- (void)sendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000a3f52
- (void)sendEventID:(id)arg1 event:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000a3d0b
- (void)deregisterRequestID:(id)arg1;	// IMP=0x00000000000a3ca2
- (void)registerRequestID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a3979
- (void)deregisterEventID:(id)arg1;	// IMP=0x00000000000a3910
- (void)registerEventID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a3603
- (void)invalidate;	// IMP=0x00000000000a349d
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a31f8
- (unsigned long long)errorFlags;	// IMP=0x00000000000a31b4
- (_Bool)usingOnDemandConnection;	// IMP=0x00000000000a3170
- (void)setControlFlags:(unsigned long long)arg1;	// IMP=0x00000000000a3102
- (unsigned long long)controlFlags;	// IMP=0x00000000000a30be
- (id)activeDevices;	// IMP=0x00000000000a301d
- (id)destinationDevice;	// IMP=0x00000000000a2fcd
- (id)localDevice;	// IMP=0x00000000000a2f7d
@property(copy, nonatomic) CDUnknownBlockType eventIDRegistrationCompletion; // @synthesize eventIDRegistrationCompletion=_eventIDRegistrationCompletion;
@property(copy, nonatomic) CDUnknownBlockType requestIDRegistrationCompletion; // @synthesize requestIDRegistrationCompletion=_requestIDRegistrationCompletion;
@property(copy, nonatomic) CDUnknownBlockType deviceChangedHandler; // @synthesize deviceChangedHandler=_deviceChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType localDeviceUpdatedHandler; // @synthesize localDeviceUpdatedHandler=_localDeviceUpdatedHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceLostHandler; // @synthesize deviceLostHandler=_deviceLostHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceFoundHandler; // @synthesize deviceFoundHandler=_deviceFoundHandler;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType disconnectHandler; // @synthesize disconnectHandler=_disconnectHandler;
@property(copy, nonatomic) CDUnknownBlockType errorFlagsChangedHandler; // @synthesize errorFlagsChangedHandler=_errorFlagsChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType stateUpdatedHandler; // @synthesize stateUpdatedHandler=_stateUpdatedHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) unsigned long long flags; // @synthesize flags=_flags;
- (void)didInvalidate;	// IMP=0x00000000000a11c2
- (void)didDisconnect;	// IMP=0x00000000000a1120
- (void)didChangeErrorFlags;	// IMP=0x00000000000a108d
- (void)didUpdateState;	// IMP=0x00000000000a0ffa
- (void)didInterrupt;	// IMP=0x00000000000a0f72
- (void)didActivateWithError:(id)arg1;	// IMP=0x00000000000a0b4d
- (_Bool)isInvalidated;	// IMP=0x00000000000a0b42
- (void)_withLock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a0b04
- (void)dealloc;	// IMP=0x00000000000a0928
- (id)initWithCompanionLinkClient:(id)arg1;	// IMP=0x00000000000a07b7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

