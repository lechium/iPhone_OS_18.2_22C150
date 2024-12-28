//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDCharacteristic, NSString;

__attribute__((visibility("hidden")))
@interface HMDHAPMediaProfile
{
    long long _airPlayEnable;	// 24 = 0x18
    NSString *_clientIdentifier;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000a68522
- (void).cxx_destruct;	// IMP=0x0000000000a657d2
@property(readonly) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
- (void)setEnable:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a652eb
- (void)_notifyProfileSettingsUpdated:(id)arg1;	// IMP=0x0000000000a65265
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000a651a9
- (void)_updateCurrentMediaState:(id)arg1 volumePercentage:(id)arg2 muted:(id)arg3 enable:(id)arg4 message:(id)arg5;	// IMP=0x0000000000a64d06
- (_Bool)_updateAudioControl:(id)arg1;	// IMP=0x0000000000a6467b
- (void)handlePrimaryResidentChanged:(id)arg1;	// IMP=0x0000000000a6460a
- (void)handleResidentAdded:(id)arg1;	// IMP=0x0000000000a64552
- (void)_disableCharacteristicNotifications;	// IMP=0x0000000000a64395
- (void)_setCharacteristicNotifications:(_Bool)arg1;	// IMP=0x0000000000a64149
- (id)_allCharacteristicsToMonitor;	// IMP=0x0000000000a640ad
- (void)handleCharacteristicsUpdated:(id)arg1;	// IMP=0x0000000000a63ff5
- (void)handleAccessoryConfigured:(id)arg1;	// IMP=0x0000000000a63f3d
- (void)handleHomeCharacteristicValuesChanged:(id)arg1;	// IMP=0x0000000000a63cb8
- (void)_updateCharacteristicChanges;	// IMP=0x0000000000a63ae6
- (void)_handleCharacteristicChanges:(id)arg1;	// IMP=0x0000000000a635a2
- (void)updateMediaSessionState:(id)arg1 usingCharacteristics:(id)arg2;	// IMP=0x0000000000a6314e
- (void)updateMediaSessionState:(id)arg1 usingServices:(id)arg2;	// IMP=0x0000000000a63072
- (id)_mediaSessionStateFromProfile;	// IMP=0x0000000000a62ec1
- (id)mediaSessionFromProfile;	// IMP=0x0000000000a62d48
- (_Bool)_updateRefreshPlayback:(id)arg1;	// IMP=0x0000000000a623d2
- (_Bool)_updatePlayback:(id)arg1;	// IMP=0x0000000000a61efc
@property long long airPlayEnable; // @synthesize airPlayEnable=_airPlayEnable;
- (id)_smartSpeakerAirPlayEnableReadRequest;	// IMP=0x0000000000a61e1c
- (id)_smartSpeakerAirPlayEnableCharacteristic;	// IMP=0x0000000000a61dc5
- (id)_smartSpeakerMutedWriteRequestWithMuted:(id)arg1;	// IMP=0x0000000000a61d04
- (id)_smartSpeakerMutedReadRequest;	// IMP=0x0000000000a61ca4
- (id)_smartSpeakerMutedCharacteristic;	// IMP=0x0000000000a61c4a
- (id)_smartSpeakerVolumeWriteRequestWithVolumePercentage:(id)arg1;	// IMP=0x0000000000a619b5
- (id)volumeWriteRequestWithVolumePercentage:(id)arg1;	// IMP=0x0000000000a619a3
- (id)_smartSpeakerVolumeReadRequest;	// IMP=0x0000000000a61943
@property(readonly) HMDCharacteristic *smartSpeakerVolumeCharacteristic;
- (id)_smartSpeakerCurrentMediaStateReadRequest;	// IMP=0x0000000000a61889
@property(readonly) HMDCharacteristic *smartSpeakerCurrentMediaStateCharacteristic;
- (id)_smartSpeakerTargetMediaStateWriteRequestWithPlaybackState:(id)arg1;	// IMP=0x0000000000a61722
- (id)playStateWriteRequestWithPlaybackState:(long long)arg1;	// IMP=0x0000000000a616bc
- (id)_smartSpeakerTargetMediaStateCharacteristic;	// IMP=0x0000000000a61662
- (id)_smartSpeakerService;	// IMP=0x0000000000a61649
- (unsigned long long)capability;	// IMP=0x0000000000a6163e
- (void)registerForNotifications;	// IMP=0x0000000000a61325
- (id)initWithMediaServices:(id)arg1;	// IMP=0x0000000000a6110a

@end
