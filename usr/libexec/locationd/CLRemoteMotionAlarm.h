//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class CLTimer, NSMutableSet, NSString;
@protocol CLLocationStreamingConnectionManagerServiceProtocol;

@interface CLRemoteMotionAlarm : CLIntersiloService
{
    int _lastKnownMotionState;	// 8 = 0x8
    id <CLLocationStreamingConnectionManagerServiceProtocol> _streamingConnection;	// 16 = 0x10
    NSMutableSet *_motionAlarmClients;	// 24 = 0x18
    CLTimer *_resendTimer;	// 32 = 0x20
    CLTimer *_revertToUnknownTimer;	// 40 = 0x28
}

+ (_Bool)isSupported;	// IMP=0x0020000000a8cb4a
+ (id)getSilo;	// IMP=0x0010000000a8caee
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000a8cad5
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000a8ca78
@property(retain, nonatomic) CLTimer *revertToUnknownTimer; // @synthesize revertToUnknownTimer=_revertToUnknownTimer;
@property(retain, nonatomic) CLTimer *resendTimer; // @synthesize resendTimer=_resendTimer;
@property(nonatomic) int lastKnownMotionState; // @synthesize lastKnownMotionState=_lastKnownMotionState;
@property(retain, nonatomic) NSMutableSet *motionAlarmClients; // @synthesize motionAlarmClients=_motionAlarmClients;
@property(retain, nonatomic) id <CLLocationStreamingConnectionManagerServiceProtocol> streamingConnection; // @synthesize streamingConnection=_streamingConnection;
- (void)pairedDeviceIsNearby:(_Bool)arg1;	// IMP=0x0010000000a8d9c5
- (void)successfullySentMessage:(id)arg1;	// IMP=0x0010000000a8d9bf
- (void)failedToSendMessage:(id)arg1 withError:(id)arg2 isFatal:(_Bool)arg3;	// IMP=0x0010000000a8d9b9
- (void)receivedMessageOfType:(id)arg1 withPayload:(id)arg2;	// IMP=0x0010000000a8d76b
- (void)unregisterClientForRemoteMotionAlarm:(byref id)arg1;	// IMP=0x0010000000a8d721
- (void)registerClientForRemoteMotionAlarm:(byref id)arg1;	// IMP=0x0010000000a8d678
- (void)sendMotionAlarmRequest;	// IMP=0x0010000000a8d495
- (void)delayRevertToUnknownTimer;	// IMP=0x0010000000a8d45f
- (void)evaluateMotionAlarmState;	// IMP=0x0010000000a8d1b4
- (void)endService;	// IMP=0x0010000000a8cf4d
- (void)beginService;	// IMP=0x0010000000a8cbde
- (id)init;	// IMP=0x0010000000a8cba1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

