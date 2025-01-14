//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CDDeviceDiscovery, CDIDSService, CDServiceConnection, CDServiceListener, MISSING_TYPE, NSString;
@protocol OS_dispatch_queue;

@interface CDProviderDaemon : NSObject
{
    CDIDSService *_idsService;	// 8 = 0x8
    CDServiceListener *_serviceListener;	// 16 = 0x10
    CDDeviceDiscovery *_deviceDiscovery;	// 24 = 0x18
    MISSING_TYPE *_currentSession;	// 32 = 0x20
    CDServiceConnection *_currentSessionConnection;	// 40 = 0x28
    _Atomic _Bool _activateCalledAtomic;	// 48 = 0x30
    _Bool _invalidateDone;	// 49 = 0x31
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000001cbe6
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)serviceListener:(id)arg1 connectionInvalidated:(id)arg2;	// IMP=0x001000000001cbc6
- (void)serviceListener:(id)arg1 willAcceptConnection:(id)arg2;	// IMP=0x001000000001cbae
- (void)serviceConnection:(id)arg1 fetchDaemonStatusWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001cb4a
- (void)serviceConnection:(id)arg1 serviceClient:(id)arg2 startAuthenticationSessionWithRequest:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000001c785
- (id)succinctDescription;	// IMP=0x001000000001c735
- (id)succinctDescriptionBuilder;	// IMP=0x001000000001c719
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x001000000001c6c9
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x001000000001c567
- (id)_authenticationSessionWithClient:(id)arg1 request:(id)arg2;	// IMP=0x001000000001c4db
- (void)_startIDSService;	// IMP=0x001000000001c3ff
- (void)_startDeviceDiscovery;	// IMP=0x001000000001c34c
- (void)_foundDeviceWithIdentifier:(id)arg1 discoveryType:(long long)arg2;	// IMP=0x001000000001c1b4
- (void)_startServiceListener;	// IMP=0x001000000001c152
- (void)_invalidated;	// IMP=0x001000000001c0a8
- (void)_activated;	// IMP=0x001000000001c061
- (void)invalidate;	// IMP=0x001000000001c000
- (void)activate;	// IMP=0x001000000001bf92
- (id)init;	// IMP=0x001000000001bf2e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

