//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSEventMonitor.h>

@interface CSHomePodSettingsMonitor : CSEventMonitor
{
}

+ (id)sharedInstance;	// IMP=0x00400000000474bf
- (_Bool)shouldAudioMonitoringRecording;	// IMP=0x00400000000474b7
- (_Bool)shouldVoiceTriggerRun;	// IMP=0x00100000000474af
- (void)_stopMonitoring;	// IMP=0x0010000000047430
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x001000000004742a

@end
