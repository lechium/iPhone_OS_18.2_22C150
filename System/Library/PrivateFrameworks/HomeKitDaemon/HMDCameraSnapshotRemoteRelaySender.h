//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDCameraSnapshotIDSRelayInitiator, HMDCameraSnapshotLocal, NSString;
@protocol HMDCameraSnapshotRemoteRelaySenderDelegate;

__attribute__((visibility("hidden")))
@interface HMDCameraSnapshotRemoteRelaySender
{
    HMDCameraSnapshotLocal *_snapshotLocal;	// 8 = 0x8
    id <HMDCameraSnapshotRemoteRelaySenderDelegate> _delegate;	// 16 = 0x10
    HMDCameraSnapshotIDSRelayInitiator *_relayInitiator;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x0010000000ccbe36
- (void).cxx_destruct;	// IMP=0x0000000000ccb9fa
@property(readonly, nonatomic) HMDCameraSnapshotIDSRelayInitiator *relayInitiator; // @synthesize relayInitiator=_relayInitiator;
@property(readonly, nonatomic) __weak id <HMDCameraSnapshotRemoteRelaySenderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) HMDCameraSnapshotLocal *snapshotLocal; // @synthesize snapshotLocal=_snapshotLocal;
- (void)relayInitiatorDidSendIDSInvitation:(id)arg1;	// IMP=0x0000000000ccb944
- (void)relayInitiator:(id)arg1 didSendData:(id)arg2;	// IMP=0x0000000000ccb8ba
- (void)relayInitiatorDidStartDataSend:(id)arg1;	// IMP=0x0000000000ccb885
- (void)relayInitiatorIDSSessionDidStart:(id)arg1;	// IMP=0x0000000000ccb80a
- (void)relayInitiatorDidSendDataSuccessfully:(id)arg1;	// IMP=0x0000000000ccb78f
- (void)relayInitiator:(id)arg1 didEndIDSSessionWithError:(id)arg2;	// IMP=0x0000000000ccb75a
- (void)snapshotLocal:(id)arg1 didSaveSnapshotFile:(id)arg2 error:(id)arg3 sessionID:(id)arg4;	// IMP=0x0000000000ccb3ea
- (void)_callDidSaveSnapshotFileDelegate:(id)arg1;	// IMP=0x0000000000ccb1bf
- (void)_callDidCompleteSendImageDelegate:(id)arg1;	// IMP=0x0000000000ccaf8c
- (void)_callDidStartCaptureImageDelegate:(id)arg1;	// IMP=0x0000000000ccad59
- (void)snapShotTransferComplete;	// IMP=0x0000000000ccace8
- (void)getSnapshot:(unsigned long long)arg1;	// IMP=0x0000000000ccac6c
- (id)logIdentifier;	// IMP=0x0000000000ccac1c
- (void)dealloc;	// IMP=0x0000000000ccab1d
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 device:(id)arg3 accessory:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6 uniqueIdentifier:(id)arg7 snapshotRequestHandler:(id)arg8;	// IMP=0x0000000000cca917

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
