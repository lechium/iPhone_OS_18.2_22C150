//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDCameraIDSSessionInviterDeviceVerifier, IDSSession, NSString;
@protocol HMDCameraIDSSessionReceiverDelegate;

__attribute__((visibility("hidden")))
@interface HMDCameraIDSSessionReceiver
{
    id <HMDCameraIDSSessionReceiverDelegate> _delegate;	// 8 = 0x8
    HMDCameraIDSSessionInviterDeviceVerifier *_sessionInviterDeviceVerifier;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x0010000000b6bb58
- (void).cxx_destruct;	// IMP=0x0000000000b6bb29
@property(readonly, nonatomic) HMDCameraIDSSessionInviterDeviceVerifier *sessionInviterDeviceVerifier; // @synthesize sessionInviterDeviceVerifier=_sessionInviterDeviceVerifier;
@property __weak id <HMDCameraIDSSessionReceiverDelegate> delegate; // @synthesize delegate=_delegate;
- (id)logIdentifier;	// IMP=0x0000000000b6ba9b
- (void)sessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;	// IMP=0x0000000000b6b884
- (void)sessionStarted:(id)arg1;	// IMP=0x0000000000b6b70d
- (void)_receivedIDSSession:(id)arg1;	// IMP=0x0000000000b6b20f
- (void)service:(id)arg1 account:(id)arg2 inviteReceivedForSession:(id)arg3 fromID:(id)arg4 withContext:(id)arg5;	// IMP=0x0000000000b6ab96
- (void)_callSessionEndedWithError:(id)arg1;	// IMP=0x0000000000b6aa1e
- (void)_callSessionSetup:(id)arg1;	// IMP=0x0000000000b6a8a6
- (void)setUpRemoteConnectionWithDevice:(id)arg1;	// IMP=0x0000000000b6a8a0
@property(readonly, copy) NSString *remoteDestination;
@property(readonly) IDSSession *session;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 sessionInviterDeviceVerifier:(id)arg3 delegate:(id)arg4;	// IMP=0x0000000000b6a6b6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

