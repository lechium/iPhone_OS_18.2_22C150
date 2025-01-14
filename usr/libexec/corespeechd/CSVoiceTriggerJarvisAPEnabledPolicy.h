//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSPolicy.h>

@class NSString;

@interface CSVoiceTriggerJarvisAPEnabledPolicy : CSPolicy
{
    _Bool _isPlaybackAudioSessionActive;	// 8 = 0x8
    NSString *_clientRecordRoute;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00200000000f0611
- (void).cxx_destruct;	// IMP=0x00200000000f0243
@property(retain, nonatomic) NSString *clientRecordRoute; // @synthesize clientRecordRoute=_clientRecordRoute;
@property(nonatomic) _Bool isPlaybackAudioSessionActive; // @synthesize isPlaybackAudioSessionActive=_isPlaybackAudioSessionActive;
- (void)siriClientBehaviorMonitorAudioDeviceInfoUpdated:(id)arg1;	// IMP=0x00100000000f0174
- (void)siriClientBehaviorMonitorReleasedAudioSession:(id)arg1;	// IMP=0x00100000000f0142
- (void)siriClientBehaviorMonitor:(id)arg1 activatedAudioSessionWithReason:(unsigned long long)arg2;	// IMP=0x00100000000f0102
- (void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 withEventUUID:(id)arg3;	// IMP=0x00100000000f00fc
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2 reason:(unsigned long long)arg3;	// IMP=0x00100000000f00f6
- (void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(_Bool)arg3 option:(id)arg4 withEventUUID:(id)arg5;	// IMP=0x00100000000f00f0
- (void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;	// IMP=0x00100000000f00ea
- (void)_addVoiceTriggerHearstAPEnabledPolicy;	// IMP=0x00100000000f0005
- (void)_subscribeEventMonitors;	// IMP=0x00100000000efee9
- (id)init;	// IMP=0x00100000000efe7d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

