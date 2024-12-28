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

+ (id)logCategory;	// IMP=0x0010000000234d03
- (void).cxx_destruct;	// IMP=0x00000000002347b4
@property(retain) AVCRemoteVideoClient *avcRemoteVideo; // @synthesize avcRemoteVideo=_avcRemoteVideo;
@property(readonly) HMDCameraStreamSnapshotHandler *streamSnapshotHandler; // @synthesize streamSnapshotHandler=_streamSnapshotHandler;
@property __weak id <HMDCameraStreamManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) HMDCameraStreamSessionID *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly) HMDAudioStreamInterface *audioStreamInterface; // @synthesize audioStreamInterface=_audioStreamInterface;
@property(readonly) HMDVideoStreamInterface *videoStreamInterface; // @synthesize videoStreamInterface=_videoStreamInterface;
@property(copy) NSNumber *aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(copy) NSNumber *slotIdentifier; // @synthesize slotIdentifier=_slotIdentifier;
- (void)remoteVideoServerDidDie:(id)arg1;	// IMP=0x0000000000234633
- (void)remoteVideoClientDidReceiveLastFrame:(id)arg1;	// IMP=0x00000000002345c2
- (void)remoteVideoClient:(id)arg1 remoteVideoAttributesDidChange:(id)arg2;	// IMP=0x000000000023450a
- (void)remoteVideoClientDidReceiveFirstFrame:(id)arg1;	// IMP=0x0000000000234452
- (void)videoStreamDidUpdateConfiguration:(id)arg1;	// IMP=0x000000000023431e
- (void)videoStreamDidNetworkDeteriorate:(id)arg1;	// IMP=0x00000000002341ea
- (void)videoStreamDidNetworkImprove:(id)arg1;	// IMP=0x00000000002340b6
- (void)videoStream:(id)arg1 didStop:(id)arg2;	// IMP=0x0000000000233f67
- (void)videoStream:(id)arg1 didStart:(id)arg2;	// IMP=0x0000000000233a3f
- (void)audioStream:(id)arg1 didStop:(id)arg2;	// IMP=0x0000000000233a39
- (void)audioStream:(id)arg1 didResume:(id)arg2;	// IMP=0x0000000000233a33
- (void)audioStream:(id)arg1 didPause:(id)arg2;	// IMP=0x0000000000233a2d
- (void)audioStream:(id)arg1 didStart:(id)arg2;	// IMP=0x0000000000233a27
- (void)_callConfigurationUpdated;	// IMP=0x00000000002338d4
- (void)_callNetworkDeteriorated;	// IMP=0x0000000000233781
- (void)_callNetworkImproved;	// IMP=0x000000000023362e
- (void)_callStreamStoppedWithError:(id)arg1;	// IMP=0x00000000002334c1
- (void)_callRelayStarted;	// IMP=0x000000000023336e
- (void)_callReceivedFirstFrame;	// IMP=0x000000000023321b
- (void)_callStreamStarted;	// IMP=0x00000000002330c8
- (void)updateAudioVolume:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x0000000000233011
- (void)updateAudioSetting:(unsigned long long)arg1;	// IMP=0x0000000000232f8e
- (void)stopStream;	// IMP=0x0000000000232dc9
- (void)updateStreamConfiguration:(id)arg1;	// IMP=0x0000000000232b08
- (void)updateReconfigurationMode:(_Bool)arg1;	// IMP=0x0000000000232a87
- (void)startStreamWithVideoConfig:(id)arg1 audioConfig:(id)arg2;	// IMP=0x00000000002320f8
@property(readonly) unsigned long long audioStreamSetting;
- (id)logIdentifier;	// IMP=0x000000000023202f
- (id)initWithSessionID:(id)arg1 streamSnapshotHandler:(id)arg2 workQueue:(id)arg3 delegate:(id)arg4 videoStreamInterface:(id)arg5 audioStreamInterface:(id)arg6;	// IMP=0x0000000000231e69
- (id)initWithSessionID:(id)arg1 streamSnapshotHandler:(id)arg2 workQueue:(id)arg3 delegate:(id)arg4 localVideoNetworkConfig:(id)arg5 localAudioNetworkConfig:(id)arg6 sessionHandler:(id)arg7;	// IMP=0x0000000000231b1c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
