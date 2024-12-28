//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, VCMediaStreamSynchronizer;
@protocol VCMediaStreamSyncSource, VCVideoReceiverDelegate;

__attribute__((visibility("hidden")))
@interface VCVideoReceiverBase : NSObject
{
    struct tagVCVideoReceiverRealtimeClassVTable _vTable;	// 8 = 0x8
    int _remoteVideoOrientation;	// 16 = 0x10
    struct tagVCVideoReceiverDelegateRealtimeInstanceVTable _delegateFunctions;	// 24 = 0x18
    id <VCVideoReceiverDelegate> _delegate;	// 40 = 0x28
    id <VCMediaStreamSyncSource> _syncSource;	// 48 = 0x30
    double _roundTripTime;	// 56 = 0x38
    double _lastReceivedVideoRTPPacketTime;	// 64 = 0x40
    double _lastReceivedVideoRTCPPacketTime;	// 72 = 0x48
    double _synchronizationTimeOffset;	// 80 = 0x50
    float lastLastVideoStallDuration;	// 88 = 0x58
    unsigned int _rtpTimestampRate;	// 92 = 0x5c
    VCMediaStreamSynchronizer *_mediaStreamSynchronizer;	// 96 = 0x60
    float _lastLastVideoStallDuration;	// 104 = 0x68
}

@property(nonatomic) struct tagVCVideoReceiverDelegateRealtimeInstanceVTable delegateFunctions; // @synthesize delegateFunctions=_delegateFunctions;
@property(readonly) float lastLastVideoStallDuration; // @synthesize lastLastVideoStallDuration=_lastLastVideoStallDuration;
@property(readonly) double lastReceivedVideoRTCPPacketTime; // @synthesize lastReceivedVideoRTCPPacketTime=_lastReceivedVideoRTCPPacketTime;
@property(readonly) double lastReceivedVideoRTPPacketTime; // @synthesize lastReceivedVideoRTPPacketTime=_lastReceivedVideoRTPPacketTime;
@property double roundTripTime; // @synthesize roundTripTime=_roundTripTime;
@property(nonatomic) id <VCMediaStreamSyncSource> syncSource; // @synthesize syncSource=_syncSource;
@property int remoteVideoOrientation; // @synthesize remoteVideoOrientation=_remoteVideoOrientation;
@property(nonatomic) id <VCVideoReceiverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateSourcePlayoutTime:(const struct tagVCMediaTime *)arg1;	// IMP=0x000000000019b302
- (void)setJitterBufferMode:(int)arg1;	// IMP=0x000000000019b2a1
- (void)handleActiveConnectionChange:(id)arg1;	// IMP=0x000000000019b240
- (void)setLooseAVSyncEnabled:(_Bool)arg1;	// IMP=0x000000000019b1df
- (void)setDeferredAssemblyEnabled:(_Bool)arg1;	// IMP=0x000000000019b17e
- (void)setVideoExpected:(_Bool)arg1;	// IMP=0x000000000019b178
- (void)setShouldEnableMLEnhance:(_Bool)arg1 streamID:(unsigned short)arg2;	// IMP=0x000000000019b172
@property(readonly, nonatomic) unsigned int lastDisplayedFrameRTPTimestamp;
- (void)setTargetStreamID:(unsigned short)arg1;	// IMP=0x000000000019b0b0
- (void)collectChannelMetrics:(CDStruct_b671a7c4 *)arg1 interval:(float)arg2;	// IMP=0x000000000019b04f
- (void)setSynchronizer:(id)arg1;	// IMP=0x000000000019b049
- (void)stopSynchronization;	// IMP=0x000000000019b008
- (_Bool)startSynchronization:(id)arg1;	// IMP=0x000000000019ae3a
- (void)rtcpSendIntervalElapsed;	// IMP=0x000000000019add9
- (void)pauseVideo;	// IMP=0x000000000019ad78
- (void)stopVideo;	// IMP=0x000000000019ad17
- (void)startVideo;	// IMP=0x000000000019acb6
- (void)setEnableRateAdaptation:(_Bool)arg1 maxBitrate:(unsigned int)arg2 minBitrate:(unsigned int)arg3 adaptationInterval:(double)arg4;	// IMP=0x000000000019ac55
- (void)setEnableCVO:(_Bool)arg1 cvoExtensionID:(unsigned long long)arg2;	// IMP=0x000000000019abf4
- (void)dealloc;	// IMP=0x000000000019ab8c
- (id)initWithDelegate:(id)arg1 delegateFunctions:(const struct tagVCVideoReceiverDelegateRealtimeInstanceVTable *)arg2;	// IMP=0x000000000019aaa6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
