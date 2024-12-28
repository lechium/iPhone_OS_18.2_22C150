//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTRDevice.h"

@class NSDictionary, NSString;

@interface MTRDevice_XPC : MTRDevice
{
    NSDictionary *_internalState;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000055b481
@property(retain, getter=_internalState, setter=_setInternalState:) NSDictionary *_internalState; // @synthesize _internalState;
- (void)downloadLogOfType:(long long)arg1 timeout:(double)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000055ac6e
- (void)_invokeCommandWithEndpointID:(id)arg1 clusterID:(id)arg2 commandID:(id)arg3 commandFields:(id)arg4 expectedValues:(id)arg5 expectedValueInterval:(id)arg6 timedInvokeTimeout:(id)arg7 serverSideProcessingTimeout:(id)arg8 queue:(id)arg9 completion:(CDUnknownBlockType)arg10;	// IMP=0x000000000055a629
- (id)readAttributePaths:(id)arg1;	// IMP=0x000000000055a165
- (void)writeAttributeWithEndpointID:(id)arg1 clusterID:(id)arg2 attributeID:(id)arg3 value:(id)arg4 expectedValueInterval:(id)arg5 timedWriteTimeout:(id)arg6;	// IMP=0x0000000000559cfa
- (id)readAttributeWithEndpointID:(id)arg1 clusterID:(id)arg2 attributeID:(id)arg3 params:(id)arg4;	// IMP=0x00000000005597e9
- (id)estimatedSubscriptionLatency;	// IMP=0x000000000055938c
- (id)estimatedStartTime;	// IMP=0x0000000000558f0a
- (_Bool)deviceCachePrimed;	// IMP=0x0000000000558b01
- (unsigned long long)state;	// IMP=0x00000000005586fa
- (oneway void)device:(id)arg1 internalStateUpdated:(id)arg2;	// IMP=0x00000000005585f6
- (oneway void)deviceConfigurationChanged:(id)arg1;	// IMP=0x000000000055853c
- (oneway void)deviceCachePrimed:(id)arg1;	// IMP=0x0000000000558482
- (oneway void)deviceBecameActive:(id)arg1;	// IMP=0x0000000000558309
- (oneway void)device:(id)arg1 receivedEventReport:(id)arg2;	// IMP=0x0000000000558176
- (oneway void)device:(id)arg1 receivedAttributeReport:(id)arg2;	// IMP=0x0000000000557fe3
- (oneway void)device:(id)arg1 stateChanged:(unsigned long long)arg2;	// IMP=0x0000000000557ea5
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000557abd
- (id)initWithNodeID:(id)arg1 controller:(id)arg2;	// IMP=0x0000000000557a8e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
