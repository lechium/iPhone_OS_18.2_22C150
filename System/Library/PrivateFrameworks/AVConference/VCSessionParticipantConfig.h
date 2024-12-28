//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString, VCAudioCaptionsCoordinator, VCNetworkFeedbackController, VCSecurityKeyManager, VCSessionMediaNegotiator;
@protocol OS_nw_activity;

__attribute__((visibility("hidden")))
@interface VCSessionParticipantConfig : NSObject
{
    NSData *_participantData;	// 8 = 0x8
    NSString *_uuid;	// 16 = 0x10
    unsigned long long _idsParticipantID;	// 24 = 0x18
    _Bool _audioEnabled;	// 32 = 0x20
    _Bool _videoEnabled;	// 33 = 0x21
    _Bool _screenEnabled;	// 34 = 0x22
    _Bool _frequencyMeteringEnabled;	// 35 = 0x23
    _Bool _audioMuted;	// 36 = 0x24
    float _volume;	// 40 = 0x28
    float _audioPosition;	// 44 = 0x2c
    _Bool _audioPaused;	// 48 = 0x30
    _Bool _videoPaused;	// 49 = 0x31
    unsigned char _videoQuality;	// 50 = 0x32
    unsigned int _visibilityIndex;	// 52 = 0x34
    unsigned int _prominenceIndex;	// 56 = 0x38
    NSData *_positionalInfo;	// 64 = 0x40
    struct __CFDictionary *_spatialMetadataEntryMap;	// 72 = 0x48
    NSDictionary *_mediaStates;	// 80 = 0x50
    _Bool _isServerRTxEnabled;	// 88 = 0x58
    void *_spatialMetadata;	// 96 = 0x60
    VCSessionMediaNegotiator *_mediaNegotiator;	// 104 = 0x68
    VCSecurityKeyManager *_securityKeyManager;	// 112 = 0x70
    NSString *_sessionUUID;	// 120 = 0x78
    unsigned int _transportSessionID;	// 128 = 0x80
    NSString *_idsDestination;	// 136 = 0x88
    int _processId;	// 144 = 0x90
    _Bool _isGKVoiceChat;	// 148 = 0x94
    _Bool _isLowLatencyAudio;	// 149 = 0x95
    long long _sessionMode;	// 152 = 0x98
    _Bool _isOneToOneModeEnabled;	// 160 = 0xa0
    _Bool _oneToOneAuthenticationTagEnabled;	// 161 = 0xa1
    VCNetworkFeedbackController *_networkFeedbackController;	// 168 = 0xa8
    VCAudioCaptionsCoordinator *_captionsCoordinator;	// 176 = 0xb0
    _Bool _isEnhancedJBAdaptationsEnabled;	// 184 = 0xb8
    _Bool _isUplinkRetransmissionEnabled;	// 185 = 0xb9
    _Bool _enableMaxCameraBitrateVideoQualityNewTier;	// 186 = 0xba
    _Bool _isHigherAudioREDCutoverU1Enabled;	// 187 = 0xbb
    _Bool _screenControlEnabled;	// 188 = 0xbc
    _Bool _outOfProcessCodecsEnabled;	// 189 = 0xbd
    NSObject<OS_nw_activity> *_nwActivity;	// 192 = 0xc0
}

@property(nonatomic) _Bool isServerRTxEnabled; // @synthesize isServerRTxEnabled=_isServerRTxEnabled;
@property(nonatomic) _Bool outOfProcessCodecsEnabled; // @synthesize outOfProcessCodecsEnabled=_outOfProcessCodecsEnabled;
@property(nonatomic) _Bool screenControlEnabled; // @synthesize screenControlEnabled=_screenControlEnabled;
@property(nonatomic) _Bool isHigherAudioREDCutoverU1Enabled; // @synthesize isHigherAudioREDCutoverU1Enabled=_isHigherAudioREDCutoverU1Enabled;
@property(nonatomic) _Bool enableMaxCameraBitrateVideoQualityNewTier; // @synthesize enableMaxCameraBitrateVideoQualityNewTier=_enableMaxCameraBitrateVideoQualityNewTier;
@property(nonatomic) _Bool isEnhancedJBAdaptationsEnabled; // @synthesize isEnhancedJBAdaptationsEnabled=_isEnhancedJBAdaptationsEnabled;
@property(nonatomic, getter=isOneToOneAuthenticationTagEnabled) _Bool oneToOneAuthenticationTagEnabled; // @synthesize oneToOneAuthenticationTagEnabled=_oneToOneAuthenticationTagEnabled;
@property(nonatomic) _Bool isUplinkRetransmissionEnabled; // @synthesize isUplinkRetransmissionEnabled=_isUplinkRetransmissionEnabled;
@property(retain, nonatomic) VCAudioCaptionsCoordinator *captionsCoordinator; // @synthesize captionsCoordinator=_captionsCoordinator;
@property(retain, nonatomic) VCNetworkFeedbackController *networkFeedbackController; // @synthesize networkFeedbackController=_networkFeedbackController;
@property(nonatomic) _Bool isOneToOneModeEnabled; // @synthesize isOneToOneModeEnabled=_isOneToOneModeEnabled;
@property(nonatomic) long long sessionMode; // @synthesize sessionMode=_sessionMode;
@property(nonatomic) _Bool isLowLatencyAudio; // @synthesize isLowLatencyAudio=_isLowLatencyAudio;
@property(nonatomic) _Bool isGKVoiceChat; // @synthesize isGKVoiceChat=_isGKVoiceChat;
@property(retain, nonatomic) NSString *idsDestination; // @synthesize idsDestination=_idsDestination;
@property(nonatomic) unsigned int transportSessionID; // @synthesize transportSessionID=_transportSessionID;
@property(retain, nonatomic) NSString *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
@property(nonatomic) int processId; // @synthesize processId=_processId;
@property(retain, nonatomic) VCSecurityKeyManager *securityKeyManager; // @synthesize securityKeyManager=_securityKeyManager;
@property(retain, nonatomic) VCSessionMediaNegotiator *mediaNegotiator; // @synthesize mediaNegotiator=_mediaNegotiator;
@property(retain, nonatomic) NSDictionary *mediaStates; // @synthesize mediaStates=_mediaStates;
@property(nonatomic) NSObject<OS_nw_activity> *nwActivity; // @synthesize nwActivity=_nwActivity;
@property(retain, nonatomic) NSData *positionalInfo; // @synthesize positionalInfo=_positionalInfo;
@property(nonatomic) unsigned int prominenceIndex; // @synthesize prominenceIndex=_prominenceIndex;
@property(nonatomic) unsigned int visibilityIndex; // @synthesize visibilityIndex=_visibilityIndex;
@property(nonatomic) unsigned char videoQuality; // @synthesize videoQuality=_videoQuality;
@property(nonatomic) _Bool videoPaused; // @synthesize videoPaused=_videoPaused;
@property(nonatomic) _Bool audioPaused; // @synthesize audioPaused=_audioPaused;
@property(nonatomic) float audioPosition; // @synthesize audioPosition=_audioPosition;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) _Bool audioMuted; // @synthesize audioMuted=_audioMuted;
@property(nonatomic) _Bool frequencyMeteringEnabled; // @synthesize frequencyMeteringEnabled=_frequencyMeteringEnabled;
@property(nonatomic) _Bool screenEnabled; // @synthesize screenEnabled=_screenEnabled;
@property(nonatomic) _Bool videoEnabled; // @synthesize videoEnabled=_videoEnabled;
@property(nonatomic) _Bool audioEnabled; // @synthesize audioEnabled=_audioEnabled;
@property(nonatomic) unsigned long long idsParticipantID; // @synthesize idsParticipantID=_idsParticipantID;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSData *participantData; // @synthesize participantData=_participantData;
@property(nonatomic) struct __CFDictionary *spatialMetadataEntryMap;
- (void)cleanupNwActivity;	// IMP=0x00000000003b92a0
@property(nonatomic) void *spatialMetadata;
- (id)description;	// IMP=0x00000000003b9187
- (void)dealloc;	// IMP=0x00000000003b90aa

@end
