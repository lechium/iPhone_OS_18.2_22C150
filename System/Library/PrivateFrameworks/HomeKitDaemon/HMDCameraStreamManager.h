//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class AVCRemoteVideoClient, HMDAudioStreamInterface, HMDCameraStreamSessionID, HMDCameraStreamSnapshotHandler, HMDVideoStreamInterface, NSNumber, NSObject, NSString;
@protocol HMDCameraStreamManagerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCameraStreamManager : HMFObject
{
    NSNumber *_slotIdentifier;	// 8 = 0x8
    NSNumber *_aspectRatio;	// 16 = 0x10
    HMDVideoStreamInterface *_videoStreamInterface;	// 24 = 0x18
    HMDAudioStreamInterface *_audioStreamInterface;	// 32 = 0x20
    HMDCameraStreamSessionID *_sessionID;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
    id <HMDCameraStreamManagerDelegate> _delegate;	// 56 = 0x38
    HMDCameraStreamSnapshotHandler *_streamSnapshotHandler;	// 64 = 0x40
    AVCRemoteVideoClient *_avcRemoteVideo;	// 72 = 0x48
}

+ (id)logCategory;	// IMP=0x00100000003b1c0e
- (void).cxx_destruct;	// IMP=0x00000000003b16bf
@property(retain) AVCRemoteVideoClient *avcRemoteVideo; // @synthesize avcRemoteVideo=_avcRemoteVideo;
@property(readonly) HMDCameraStreamSnapshotHandler *streamSnapshotHandler; // @synthesize streamSnapshotHandler=_streamSnapshotHandler;
@property __weak id <HMDCameraStreamManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) HMDCameraStreamSessionID *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly) HMDAudioStreamInterface *audioStreamInterface; // @synthesize audioStreamInterface=_audioStreamInterface;
@property(readonly) HMDVideoStreamInterface *videoStreamInterface; // @synthesize videoStreamInterface=_videoStreamInterface;
@property(copy) NSNumber *aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(copy) NSNumber *slotIdentifier; // @synthesize slotIdentifier=_slotIdentifier;
- (void)remoteVideoServerDidDie:(id)arg1;	// IMP=0x00000000003b153e
- (void)remoteVideoClientDidReceiveLastFrame:(id)arg1;	// IMP=0x00000000003b14cd
- (void)remoteVideoClient:(id)arg1 remoteVideoAttributesDidChange:(id)arg2;	// IMP=0x00000000003b1415
- (void)remoteVideoClientDidReceiveFirstFrame:(id)arg1;	// IMP=0x00000000003b135d
- (void)videoStreamDidUpdateConfiguration:(id)arg1;	// IMP=0x00000000003b1229
- (void)videoStreamDidNetworkDeteriorate:(id)arg1;	// IMP=0x00000000003b10f5
- (void)videoStreamDidNetworkImprove:(id)arg1;	// IMP=0x00000000003b0fc1
- (void)videoStream:(id)arg1 didStop:(id)arg2;	// IMP=0x00000000003b0e72
- (void)videoStream:(id)arg1 didStart:(id)arg2;	// IMP=0x00000000003b094a
- (void)audioStream:(id)arg1 didStop:(id)arg2;	// IMP=0x00000000003b0944
- (void)audioStream:(id)arg1 didResume:(id)arg2;	// IMP=0x00000000003b093e
- (void)audioStream:(id)arg1 didPause:(id)arg2;	// IMP=0x00000000003b0938
- (void)audioStream:(id)arg1 didStart:(id)arg2;	// IMP=0x00000000003b0932
- (void)_callConfigurationUpdated;	// IMP=0x00000000003b07df
- (void)_callNetworkDeteriorated;	// IMP=0x00000000003b068c
- (void)_callNetworkImproved;	// IMP=0x00000000003b0539
- (void)_callStreamStoppedWithError:(id)arg1;	// IMP=0x00000000003b03cc
- (void)_callRelayStarted;	// IMP=0x00000000003b0279
- (void)_callReceivedFirstFrame;	// IMP=0x00000000003b0126
- (void)_callStreamStarted;	// IMP=0x00000000003affd3
- (void)updateAudioVolume:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x00000000003aff1c
- (void)updateAudioSetting:(unsigned long long)arg1;	// IMP=0x00000000003afe99
- (void)stopStream;	// IMP=0x00000000003afcd4
- (void)updateStreamConfiguration:(id)arg1;	// IMP=0x00000000003afa13
- (void)updateReconfigurationMode:(_Bool)arg1;	// IMP=0x00000000003af992
- (void)startStreamWithVideoConfig:(id)arg1 audioConfig:(id)arg2;	// IMP=0x00000000003af003
@property(readonly) unsigned long long audioStreamSetting;
- (id)logIdentifier;	// IMP=0x00000000003aef3a
- (id)initWithSessionID:(id)arg1 streamSnapshotHandler:(id)arg2 workQueue:(id)arg3 delegate:(id)arg4 videoStreamInterface:(id)arg5 audioStreamInterface:(id)arg6;	// IMP=0x00000000003aed74
- (id)initWithSessionID:(id)arg1 streamSnapshotHandler:(id)arg2 workQueue:(id)arg3 delegate:(id)arg4 localVideoNetworkConfig:(id)arg5 localAudioNetworkConfig:(id)arg6 sessionHandler:(id)arg7;	// IMP=0x00000000003aea27

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
