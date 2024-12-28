//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDCameraLocalStreamAccessoryCommunicator, HMDCameraLocalStreamSession, HMDCameraMediaConfigGenerator, HMDCameraStreamMetrics, HMDCameraSupportedConfigurationCache, NSDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface HMDCameraLocalStreamControlManager
{
    HMDCameraLocalStreamSession *_streamSession;	// 8 = 0x8
    HMDCameraLocalStreamAccessoryCommunicator *_accessoryCommunicator;	// 16 = 0x10
    HMDCameraSupportedConfigurationCache *_supportedConfigCache;	// 24 = 0x18
    HMDCameraMediaConfigGenerator *_configGenerator;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x00100000007594cf
- (void).cxx_destruct;	// IMP=0x00000000007585f1
@property(readonly) HMDCameraMediaConfigGenerator *configGenerator; // @synthesize configGenerator=_configGenerator;
@property(readonly) HMDCameraSupportedConfigurationCache *supportedConfigCache; // @synthesize supportedConfigCache=_supportedConfigCache;
@property(readonly) HMDCameraLocalStreamAccessoryCommunicator *accessoryCommunicator; // @synthesize accessoryCommunicator=_accessoryCommunicator;
@property(retain) HMDCameraLocalStreamSession *streamSession; // @synthesize streamSession=_streamSession;
- (void)_sendUpdatedConfiguration;	// IMP=0x000000000075825c
- (void)_reconfigureStreams;	// IMP=0x00000000007580de
- (void)streamManagerDidUpdateConfiguration:(id)arg1;	// IMP=0x0000000000757f68
- (void)streamManagerDidNetworkDeteriorate:(id)arg1;	// IMP=0x0000000000757d16
- (void)streamManagerDidNetworkImprove:(id)arg1;	// IMP=0x0000000000757ac4
- (void)streamManagerDidStopStream:(id)arg1 error:(id)arg2;	// IMP=0x0000000000757a03
- (void)streamManagerDidStartRelay:(id)arg1;	// IMP=0x00000000007579b0
- (void)streamManagerDidReceiveFirstFrame:(id)arg1;	// IMP=0x000000000075795d
- (void)streamManagerDidStartStream:(id)arg1;	// IMP=0x0000000000757829
- (void)deviceConnectionSender:(id)arg1 didEndSessionWithError:(id)arg2;	// IMP=0x00000000007576e5
- (void)deviceConnectionSender:(id)arg1 didSetUpWithError:(id)arg2;	// IMP=0x0000000000757494
- (void)sessionInitiator:(id)arg1 didEndSessionWithError:(id)arg2;	// IMP=0x0000000000757350
- (void)sessionInitiator:(id)arg1 didSetUpWithError:(id)arg2;	// IMP=0x000000000075710c
- (void)_streamStarted;	// IMP=0x0000000000757064
- (void)_cleanUpStreamSessionWithError:(id)arg1;	// IMP=0x0000000000756de4
- (void)_writeStopConfig;	// IMP=0x0000000000756a32
- (void)_writeReselectConfig;	// IMP=0x0000000000756856
- (void)_writeStartConfig;	// IMP=0x000000000075667a
- (void)stopStreamWithError:(id)arg1;	// IMP=0x0000000000756504
- (void)updateMaximumVideoResolutionQuality:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000075620b
- (void)reconfigureStream:(id)arg1;	// IMP=0x0000000000755bfa
- (void)_deregisterForHAPSessionRestore;	// IMP=0x0000000000755b68
- (void)_registerForHAPSessionRestore;	// IMP=0x0000000000755ad6
- (void)_startStreamManager;	// IMP=0x000000000075546d
- (id)_calculateMTU;	// IMP=0x0000000000755156
- (void)startStreamWithRemoteSettings:(id)arg1;	// IMP=0x000000000075475e
- (_Bool)_isSetupEndPointConfigurationValid;	// IMP=0x000000000075430d
- (void)_sendSetupEndPointReadRequest;	// IMP=0x0000000000754231
- (void)_sendSetupEndPointWriteRequest;	// IMP=0x0000000000753a8b
- (void)_getSupportedConfigurations;	// IMP=0x000000000075391e
- (void)negotiateStream;	// IMP=0x000000000075326e
- (void)updateAudioVolume:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x0000000000753196
- (void)updateAudioSetting:(unsigned long long)arg1;	// IMP=0x00000000007530f5
- (void)setUpRemoteConnectionWithDevice:(id)arg1;	// IMP=0x00000000007530dc
@property(readonly, copy) NSDictionary *stateDump;
@property(readonly, getter=isSendingStream) _Bool sendingStream;
@property(readonly, copy) NSNumber *aspectRatio;
@property(readonly) unsigned long long audioStreamSetting;
@property(readonly, copy) NSNumber *slotIdentifier;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 delegate:(id)arg4 accessory:(id)arg5 streamManagementService:(id)arg6 supportedConfigCache:(id)arg7 streamSession:(id)arg8 accessoryCommunicator:(id)arg9;	// IMP=0x0000000000752b6c
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 reachabilityPath:(unsigned long long)arg4 device:(id)arg5 delegate:(id)arg6 accessory:(id)arg7 streamManagementService:(id)arg8 localNetworkConfig:(id)arg9 remoteCapabilities:(id)arg10 supportedConfigCache:(id)arg11 streamPreference:(id)arg12;	// IMP=0x00000000007526cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) HMDCameraStreamMetrics *streamMetrics;
@property(readonly) Class superclass;

@end
