//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSEventMonitor.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface CSHangUpEnabledMonitor : CSEventMonitor
{
    int _notifyToken;	// 8 = 0x8
    _Bool _isEnabled;	// 12 = 0xc
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x004000000007b109
- (void).cxx_destruct;	// IMP=0x002000000007afcc
- (void)_voiceTriggerDuringCallEnabledDidChange;	// IMP=0x001000000007af7a
- (_Bool)_checkCanUseVoiceTriggerDuringCallEnabled;	// IMP=0x001000000007aee7
- (_Bool)isEnabled;	// IMP=0x001000000007aed7
- (void)_notifyObserver:(id)arg1 withEnabled:(_Bool)arg2;	// IMP=0x001000000007aec5
- (void)_didReceiveCanUseVoiceTriggerDuringCallSettingChangedInQueue:(_Bool)arg1;	// IMP=0x001000000007ae73
- (void)_stopMonitoring;	// IMP=0x001000000007ae6d
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x001000000007ae46
- (id)init;	// IMP=0x001000000007ada3

@end

