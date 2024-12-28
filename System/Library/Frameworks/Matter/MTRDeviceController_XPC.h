//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTRDeviceController.h"

@class MTRXPCDeviceControllerParameters, NSString, NSXPCConnection;

@interface MTRDeviceController_XPC : MTRDeviceController
{
    _Bool _xpcConnectedOrConnecting;	// 8 = 0x8
    NSXPCConnection *_xpcConnection;	// 16 = 0x10
    MTRXPCDeviceControllerParameters *_xpcParameters;	// 24 = 0x18
    double _xpcRetryTimeInterval;	// 32 = 0x20
}

+ (id)_allowedClasses;	// IMP=0x00100000004dc341
- (void).cxx_destruct;	// IMP=0x00000000004df159
@property _Bool xpcConnectedOrConnecting; // @synthesize xpcConnectedOrConnecting=_xpcConnectedOrConnecting;
@property double xpcRetryTimeInterval; // @synthesize xpcRetryTimeInterval=_xpcRetryTimeInterval;
@property(retain) MTRXPCDeviceControllerParameters *xpcParameters; // @synthesize xpcParameters=_xpcParameters;
@property(retain) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (oneway void)device:(id)arg1 internalStateUpdated:(id)arg2;	// IMP=0x00000000004def55
- (oneway void)deviceConfigurationChanged:(id)arg1;	// IMP=0x00000000004dee0e
- (oneway void)deviceCachePrimed:(id)arg1;	// IMP=0x00000000004decc7
- (oneway void)deviceBecameActive:(id)arg1;	// IMP=0x00000000004deb80
- (oneway void)device:(id)arg1 receivedEventReport:(id)arg2;	// IMP=0x00000000004dea02
- (oneway void)device:(id)arg1 receivedAttributeReport:(id)arg2;	// IMP=0x00000000004de884
- (oneway void)device:(id)arg1 stateChanged:(unsigned long long)arg2;	// IMP=0x00000000004de725
- (id)controllerNodeID;	// IMP=0x00000000004de34f
- (_Bool)isRunning;	// IMP=0x00000000004ddfd5
- (id)_setupDeviceForNodeID:(id)arg1 prefetchedClusterData:(id)arg2;	// IMP=0x00000000004ddd8b
- (id)initWithParameters:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004dd85f
- (_Bool)_setupXPCConnection;	// IMP=0x00000000004dce49
- (void)_xpcConnectionRetry;	// IMP=0x00000000004dcc0d
- (void)_startXPCConnectionRetry;	// IMP=0x00000000004dc9a8
- (id)controllerXPCID;	// IMP=0x00000000004dc944
- (id)_interfaceForClientProtocol;	// IMP=0x00000000004dc74b
- (id)_interfaceForServerProtocol;	// IMP=0x00000000004dc485
- (void)removeDevice:(id)arg1;	// IMP=0x00000000004dc2d0
- (void)_unregisterNodeID:(id)arg1;	// IMP=0x00000000004dc2be
- (void)_registerNodeID:(id)arg1;	// IMP=0x00000000004dc2ac
- (void)_updateRegistrationInfo;	// IMP=0x00000000004dbce6
- (void)updateControllerConfiguration:(id)arg1;	// IMP=0x00000000004db9f6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
