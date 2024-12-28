//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSEventMonitor.h>

@class NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface CSAutomaticVolumeEnabledMonitor : CSEventMonitor
{
    _Bool _isAutomaticVolumeEnabled;	// 8 = 0x8
    NSUserDefaults *_defaults;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x004000000007b5b3
- (void).cxx_destruct;	// IMP=0x002000000007b387
- (void)_stopMonitoring;	// IMP=0x001000000007b366
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x001000000007b2e7
- (void)_notifyObserver:(id)arg1 withEnabled:(_Bool)arg2;	// IMP=0x001000000007b27d
- (void)_didReceiveAutomaticVolumeToggled:(_Bool)arg1;	// IMP=0x001000000007b22b
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000007b18d
- (id)init;	// IMP=0x001000000007b15e

@end
