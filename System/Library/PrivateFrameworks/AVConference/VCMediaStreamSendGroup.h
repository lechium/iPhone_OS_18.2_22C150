//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSMutableDictionary;
@protocol VCRedundancyControllerProtocol;

__attribute__((visibility("hidden")))
@interface VCMediaStreamSendGroup
{
    _Bool _isRedundancyEnabled;	// 268 = 0x10c
    unsigned int _uplinkBitrateCapWifi;	// 272 = 0x110
    unsigned int _uplinkBitrateCapCell;	// 276 = 0x114
    unsigned int _currentUplinkTargetBitrate;	// 280 = 0x118
    NSMutableArray *_peerSubscribedStreams;	// 288 = 0x120
    _Bool _isRemoteOnPeace;	// 296 = 0x128
    NSMutableDictionary *_sendGroupConfigForMode;	// 304 = 0x130
    unsigned int _streamGroupMode;	// 312 = 0x138
    id <VCRedundancyControllerProtocol> _redundancyController;	// 320 = 0x140
    unsigned int _currentUplinkTotalBitrate;	// 328 = 0x148
    _Bool _shouldSynchronizeWithSourceRTPTimestamps;	// 332 = 0x14c
    struct _opaque_pthread_rwlock_t _sourceTimestampRWLock;	// 336 = 0x150
    unsigned int _lastSentSourceSampleTime;	// 536 = 0x218
    double _lastSentSourceHostTime;	// 544 = 0x220
    _Bool _isSourceTimestampInfoAvailable;	// 552 = 0x228
    double _sourceSampleRate;	// 560 = 0x230
    _Bool _isRetransmissionEnabled;	// 568 = 0x238
    _Bool _isSuspended;	// 569 = 0x239
}

@property(nonatomic, setter=setRetransmissionEnabled:) _Bool isRetransmissionEnabled; // @synthesize isRetransmissionEnabled=_isRetransmissionEnabled;
@property(retain, nonatomic) id <VCRedundancyControllerProtocol> redundancyController; // @synthesize redundancyController=_redundancyController;
@property(nonatomic) _Bool isSuspended; // @synthesize isSuspended=_isSuspended;
@property(nonatomic) unsigned int uplinkBitrateCapWifi; // @synthesize uplinkBitrateCapWifi=_uplinkBitrateCapWifi;
@property(nonatomic) unsigned int uplinkBitrateCapCell; // @synthesize uplinkBitrateCapCell=_uplinkBitrateCapCell;
@property(nonatomic) unsigned int currentUplinkTargetBitrate; // @synthesize currentUplinkTargetBitrate=_currentUplinkTargetBitrate;
@property(nonatomic) unsigned int currentUplinkTotalBitrate; // @synthesize currentUplinkTotalBitrate=_currentUplinkTotalBitrate;
- (void)didReceiveRTCPPackets:(struct _RTCPPacketList *)arg1;	// IMP=0x000000000033119a
- (void)didReceiveCustomReportPacket:(struct tagRTCPPACKET *)arg1 arrivalNTPTime:(union tagNTP)arg2;	// IMP=0x0000000000331194
- (void)didReceiveReportPacket:(struct tagRTCPPACKET *)arg1 arrivalNTPTime:(union tagNTP)arg2;	// IMP=0x000000000033118e
- (void)setStatisticsCollector:(id)arg1;	// IMP=0x0000000000331031
- (void)didPause:(_Bool)arg1;	// IMP=0x0000000000330fc8
- (void)didStop;	// IMP=0x0000000000330f67
- (void)didStart;	// IMP=0x0000000000330f06
- (void)updateEnabledState;	// IMP=0x0000000000330f00
- (void)updateActiveStreamsCount:(unsigned int)arg1;	// IMP=0x0000000000330899
- (unsigned int)calculateUplinkTotalBitrateForMediaStreams:(id)arg1;	// IMP=0x00000000003306a8
- (id)activeStreamKeys;	// IMP=0x0000000000330647
- (void)setActiveConnection:(id)arg1 uplinkBitrateCap:(unsigned int)arg2 activeMediaStreamIDs:(id)arg3 mediaBitrates:(id)arg4 rateChangeCounter:(unsigned int)arg5;	// IMP=0x000000000033038c
- (void)dispatchedUpdateStreamsWithActiveConnection:(id)arg1;	// IMP=0x0000000000330075
- (id)dispatchedMediaStreamInfosForEndToEndConnection:(_Bool)arg1;	// IMP=0x0000000000330005
- (id)checkStreamsForAdditionalOptIn:(id)arg1;	// IMP=0x000000000032fffc
- (_Bool)updatePeerSubscribedStreams:(id)arg1 containsRepairStreams:(_Bool)arg2;	// IMP=0x000000000032fe96
- (id)peerSubscribedStreams;	// IMP=0x000000000032fe85
- (void)updateUplinkBitrateCapWifi:(unsigned int)arg1 activeStreamIDs:(id)arg2;	// IMP=0x000000000032fe75
- (void)updateUplinkBitrateCapCell:(unsigned int)arg1 activeStreamIDs:(id)arg2;	// IMP=0x000000000032fe65
- (_Bool)enableRedundancy:(_Bool)arg1;	// IMP=0x000000000032fbda
- (_Bool)dispatchedEnableRedundancy:(_Bool)arg1;	// IMP=0x000000000032fb9e
- (void)dispatchedUpdateActiveMediaStreamIDs:(id)arg1 withTargetBitrate:(unsigned int)arg2 mediaBitrates:(id)arg3 rateChangeCounter:(unsigned int)arg4;	// IMP=0x000000000032fb46
- (_Bool)v2PayloadsAllowed;	// IMP=0x000000000032f843
- (void)updateActiveMediaStreamIDs:(id)arg1 withTargetBitrate:(unsigned int)arg2 mediaBitrates:(id)arg3 rateChangeCounter:(unsigned int)arg4;	// IMP=0x000000000032f793
- (_Bool)updateUplinkStreamsForPeerSubscribedStreams:(id)arg1;	// IMP=0x000000000032f78b
- (_Bool)shouldSubscribeToStreamID:(id)arg1 peerSubscribedStreams:(id)arg2;	// IMP=0x000000000032f776
- (id)streamDescriptionForMediaStreamConfig:(id)arg1;	// IMP=0x000000000032f708
- (void)updateStreamIDCompoundingWithBlock:(CDUnknownBlockType)arg1 activeStreamIds:(id)arg2;	// IMP=0x000000000032f222
- (_Bool)shouldCompoundListIgnoreStream:(id)arg1 streamConfig:(id)arg2 activeStreamIds:(id)arg3;	// IMP=0x000000000032f21a
- (_Bool)updateConfig:(id)arg1 forMode:(unsigned int)arg2;	// IMP=0x000000000032ed23
- (_Bool)setupStreamGroupWithConfig:(id)arg1;	// IMP=0x000000000032e9d6
- (void)updateEncryptionInformationWithConfig:(id)arg1;	// IMP=0x000000000032e80d
- (unsigned int)streamGroupMode;	// IMP=0x000000000032e730
- (_Bool)setStreamGroupMode:(unsigned int)arg1;	// IMP=0x000000000032dcb0
- (id)streamGroupConfigForMode:(unsigned int)arg1;	// IMP=0x000000000032db45
- (void)dealloc;	// IMP=0x000000000032daad
- (id)initWithConfig:(id)arg1;	// IMP=0x000000000032d783

@end

