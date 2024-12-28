//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCBasebandCongestionDetector, VCMediaStreamConfig;

__attribute__((visibility("hidden")))
@interface VCMediaStreamTransport : NSObject
{
    VCMediaStreamConfig *_streamConfig;	// 8 = 0x8
    unsigned int _localSSRC;	// 16 = 0x10
    struct tagHANDLE *_rtpHandle;	// 24 = 0x18
    _Bool _isSRTPInitialized;	// 32 = 0x20
    AVCBasebandCongestionDetector *_basebandCongestionDetector;	// 40 = 0x28
    int _payloadType;	// 48 = 0x30
    CDStruct_cd00b3f0 _transportStreamInfo;	// 56 = 0x38
    struct tagVCCryptor *_receiverSframeCryptor;	// 80 = 0x50
    struct tagVCCryptor *_transmitterSframeCryptor;	// 88 = 0x58
    _Bool _rtcpXREnabled;	// 96 = 0x60
    _Bool _encryptionInfoReceived;	// 97 = 0x61
}

+ (_Bool)isSameSRTPKey:(id)arg1 newKey:(id)arg2;	// IMP=0x006000000035a81a
+ (int)SRTPCipherSuiteForVCMediaStreamCipherSuite:(long long)arg1;	// IMP=0x006000000035a805
+ (int)getSRTPMediaKeyLength:(long long)arg1;	// IMP=0x006000000035a7e8
@property(readonly, nonatomic) _Bool encryptionInfoReceived; // @synthesize encryptionInfoReceived=_encryptionInfoReceived;
@property(readonly, nonatomic) struct tagVCCryptor *transmitterSframeCryptor; // @synthesize transmitterSframeCryptor=_transmitterSframeCryptor;
@property(readonly, nonatomic) struct tagVCCryptor *receiverSframeCryptor; // @synthesize receiverSframeCryptor=_receiverSframeCryptor;
@property(retain, nonatomic) AVCBasebandCongestionDetector *basebandCongestionDetector; // @synthesize basebandCongestionDetector=_basebandCongestionDetector;
@property(readonly, nonatomic) struct tagHANDLE *rtpHandle; // @synthesize rtpHandle=_rtpHandle;
@property(readonly, nonatomic) VCMediaStreamConfig *streamConfig; // @synthesize streamConfig=_streamConfig;
- (unsigned int)getExtendedSequenceNumberForSequenceNumber:(unsigned short)arg1;	// IMP=0x000000000035d285
- (unsigned int)getRTCPReportNTPTimeMiddle32ForReportId:(unsigned char)arg1;	// IMP=0x000000000035d111
- (_Bool)generateRTCPXRVoIPMetricsReport:(struct tagVCRTCPXRVoIPMetricsReport *)arg1 reportCount:(char *)arg2;	// IMP=0x000000000035cf68
- (_Bool)generateRTCPXRSummaryReport:(struct tagVCRTCPXRSummaryReport *)arg1 reportCount:(char *)arg2;	// IMP=0x000000000035cdba
- (_Bool)generateReceptionReport:(struct _RTCP_RECEPTION_REPORT *)arg1 reportCount:(char *)arg2;	// IMP=0x000000000035cc36
@property(readonly, nonatomic) unsigned short idsStreamId;
@property(nonatomic) long long streamDirection;
- (_Bool)setThrottlingInterval:(double)arg1;	// IMP=0x000000000035cbad
- (_Bool)sendIntervalDidElapse:(int *)arg1 remainingTime:(double *)arg2;	// IMP=0x000000000035cb93
@property(nonatomic, getter=isDecryptionTimeoutEnabled) _Bool decryptionTimeoutEnabled;
@property(nonatomic) double rtcpTimeoutInterval;
@property(nonatomic, getter=isRTCPTimeoutEnabled) _Bool rtcpTimeoutEnabled;
@property(nonatomic) double rtpTimeoutInterval;
@property(nonatomic, getter=isRTPTimeoutEnabled) _Bool rtpTimeoutEnabled;
@property(readonly, nonatomic, getter=isRTCPSendEnabled) _Bool rtcpSendEnabled;
@property(nonatomic) double rtcpSendInterval;
@property(readonly, nonatomic, getter=isRTCPXREnabled) _Bool rtcpXREnabled;
@property(nonatomic, getter=isRTCPEnabled) _Bool rtcpEnabled;
- (void)handleEncryptionInfoChange:(id)arg1;	// IMP=0x000000000035c710
@property(readonly, nonatomic) double lastReceivedRTCPPacketTime;
- (id)rxNetworkPayloads;	// IMP=0x000000000035c364
- (void)registerRTPPayloadMappings;	// IMP=0x000000000035bf44
- (_Bool)setupRTPWithTransportSetupInfo:(struct _VCMediaStreamTransportSetupInfo *)arg1 error:(id *)arg2;	// IMP=0x000000000035be36
- (_Bool)setupRTPWithIPInfo:(struct _VCMediaStreamTransportSetupInfo *)arg1 error:(id *)arg2;	// IMP=0x000000000035bd85
- (_Bool)setupRTPForIDS:(id *)arg1;	// IMP=0x000000000035bcaf
- (_Bool)setupRTPWithNWConnection:(struct _VCMediaStreamTransportSetupInfo *)arg1 error:(id *)arg2;	// IMP=0x000000000035bbd2
- (int)setupRTPWithTransportStreams;	// IMP=0x000000000035b9b9
- (_Bool)setupRTPWithSockets:(struct _VCMediaStreamTransportSetupInfo *)arg1 error:(id *)arg2;	// IMP=0x000000000035b8e0
- (int)setupSRTP;	// IMP=0x000000000035aba2
- (int)getCryptoSet:(struct tagSRTPExchangeInfo *)arg1 withMediaKey:(id)arg2;	// IMP=0x000000000035a83f
- (void)sendControlPacketWithParameters:(struct _RTCP_SEND_CONTROL_PARAMETERS *)arg1;	// IMP=0x000000000035a7d7
- (void)resetPayloadMapping;	// IMP=0x000000000035a7c9
- (void)reset;	// IMP=0x000000000035a7bb
- (_Bool)setupSframeCryptorsWithError:(id *)arg1;	// IMP=0x000000000035a620
- (struct tagVCCryptor *)createSframeCryptorWithStreamConfig:(id)arg1 ssrc:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x000000000035a4a0
- (_Bool)isSendingMedia:(id)arg1;	// IMP=0x000000000035a460
- (_Bool)configureWithStreamConfig:(id)arg1 setupInfo:(struct _VCMediaStreamTransportSetupInfo *)arg2 reducedSizeRTCPPackets:(_Bool)arg3 hopByHopEncryptRTCPPackets:(_Bool)arg4 statisticsCollector:(id)arg5 basebandCongestionDetector:(id)arg6 error:(id *)arg7;	// IMP=0x0000000000359302
- (void)onStop;	// IMP=0x00000000003592eb
- (int)onStart;	// IMP=0x000000000035929d
- (void)updateLastGeneratedKeyMaterial;	// IMP=0x0000000000358f9a
- (_Bool)isSameSRTPConfig:(id)arg1;	// IMP=0x0000000000358e8a
- (void)dealloc;	// IMP=0x0000000000358dc4
- (id)initWithHandle:(struct tagHANDLE *)arg1 localSSRC:(unsigned int)arg2;	// IMP=0x0000000000358d54

@end
