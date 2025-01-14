//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSEventMonitor.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface CSSiriInCallEnabledMonitor : CSEventMonitor
{
    int _notifyToken;	// 8 = 0x8
    _Bool _isEnabled;	// 12 = 0xc
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00400000000e18a7
- (void).cxx_destruct;	// IMP=0x00200000000e1755
- (void)_siriInCallEnabledDidChangeEnabledDidChange;	// IMP=0x00100000000e1703
- (_Bool)_checkSiriInCallEnabled;	// IMP=0x00100000000e1670
- (_Bool)isEnabled;	// IMP=0x00100000000e1660
- (void)_notifyObserver:(id)arg1 withEnabled:(_Bool)arg2;	// IMP=0x00100000000e164e
- (void)_didReceiveSiriInCallChangedInQueue:(_Bool)arg1;	// IMP=0x00100000000e15fc
- (void)_stopMonitoring;	// IMP=0x00100000000e1535
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00100000000e1446
- (id)init;	// IMP=0x00100000000e13a3

@end

