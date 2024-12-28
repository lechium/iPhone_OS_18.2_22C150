//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface CSAttendingOptions : NSObject
{
    _Bool _useVAD;	// 8 = 0x8
    _Bool _useOwnVoiceVAD;	// 9 = 0x9
    _Bool _useBoron;	// 10 = 0xa
    long long _attendingType;	// 16 = 0x10
    unsigned long long _startAttendingHostTime;	// 24 = 0x18
    double _startOfSpeechThresholdInMs;	// 32 = 0x20
    double _startOfSpeechNearMissThresholdInMs;	// 40 = 0x28
    double _prependAudioDuration;	// 48 = 0x30
    double _timeoutThresholdInSec;	// 56 = 0x38
    long long _triggerType;	// 64 = 0x40
    double _audioStreamHoldingDurationInSec;	// 72 = 0x48
    long long _recordType;	// 80 = 0x50
    NSString *_deviceId;	// 88 = 0x58
    unsigned long long _attendingListeningType;	// 96 = 0x60
    double _pauseDurationThreshold;	// 104 = 0x68
    double _maxPauseDelay;	// 112 = 0x70
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000d6ca5
+ (id)optionForJarvisAnnounceMessageWithDeviceId:(id)arg1;	// IMP=0x00100000000d6c09
+ (MISSING_TYPE *)optionForFlexibleFollowupWithAudioRecordType:deviceId: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000d6b61
- (void).cxx_destruct;	// IMP=0x00200000000d6b51
@property(readonly, nonatomic) double maxPauseDelay; // @synthesize maxPauseDelay=_maxPauseDelay;
@property(readonly, nonatomic) double pauseDurationThreshold; // @synthesize pauseDurationThreshold=_pauseDurationThreshold;
@property(readonly, nonatomic) unsigned long long attendingListeningType; // @synthesize attendingListeningType=_attendingListeningType;
@property(readonly, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(readonly, nonatomic) long long recordType; // @synthesize recordType=_recordType;
@property(readonly, nonatomic) double audioStreamHoldingDurationInSec; // @synthesize audioStreamHoldingDurationInSec=_audioStreamHoldingDurationInSec;
@property(readonly, nonatomic) long long triggerType; // @synthesize triggerType=_triggerType;
@property(readonly, nonatomic) double timeoutThresholdInSec; // @synthesize timeoutThresholdInSec=_timeoutThresholdInSec;
@property(readonly, nonatomic) double prependAudioDuration; // @synthesize prependAudioDuration=_prependAudioDuration;
@property(readonly, nonatomic) double startOfSpeechNearMissThresholdInMs; // @synthesize startOfSpeechNearMissThresholdInMs=_startOfSpeechNearMissThresholdInMs;
@property(readonly, nonatomic) double startOfSpeechThresholdInMs; // @synthesize startOfSpeechThresholdInMs=_startOfSpeechThresholdInMs;
@property(readonly, nonatomic) _Bool useBoron; // @synthesize useBoron=_useBoron;
@property(readonly, nonatomic) _Bool useOwnVoiceVAD; // @synthesize useOwnVoiceVAD=_useOwnVoiceVAD;
@property(readonly, nonatomic) _Bool useVAD; // @synthesize useVAD=_useVAD;
@property(readonly, nonatomic) unsigned long long startAttendingHostTime; // @synthesize startAttendingHostTime=_startAttendingHostTime;
@property(readonly, nonatomic) long long attendingType; // @synthesize attendingType=_attendingType;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000d669d
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000d61ef
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000d61e4
- (id)description;	// IMP=0x00100000000d5fba
- (id)copyWithRecordType:(long long)arg1;	// IMP=0x00100000000d5e2b
- (id)initWithAttendingType:(long long)arg1 startAttendingHostTime:(unsigned long long)arg2 useVAD:(_Bool)arg3 useOwnVoiceVAD:(_Bool)arg4 useBoron:(_Bool)arg5 startOfSpeechThresholdInMs:(double)arg6 prependAudioDuration:(double)arg7 timeoutThresholdInSec:(double)arg8 triggerType:(long long)arg9 audioStreamHoldingDurationInSec:(double)arg10 audioRecordType:(long long)arg11 deviceId:(id)arg12 attendingListeningType:(unsigned long long)arg13 pauseDurationThreshold:(double)arg14 maxPauseDelay:(double)arg15;	// IMP=0x00100000000d5ca7
- (id)initWithAttendingType:(long long)arg1;	// IMP=0x00100000000d5c3e

@end
