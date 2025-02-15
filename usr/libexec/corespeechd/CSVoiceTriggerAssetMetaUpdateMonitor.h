//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSEventMonitor.h>

@interface CSVoiceTriggerAssetMetaUpdateMonitor : CSEventMonitor
{
    int _notifyToken;	// 8 = 0x8
    int _gibraltarMacNotifyToken;	// 12 = 0xc
    int _darwinNotifyToken;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x004000000009aecb
- (void)_notifyObserver:(id)arg1;	// IMP=0x002000000009ae07
- (void)_didReceiveNewVoiceTriggerAssetMetaData;	// IMP=0x001000000009ad40
- (void)_stopMonitoring;	// IMP=0x001000000009abb0
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x001000000009a93f
- (const char *)_asssetMetaUpdatedKey;	// IMP=0x001000000009a88c
- (void)notifyNewVoiceTriggerAssetMetaDataUpdated;	// IMP=0x001000000009a87a
- (id)init;	// IMP=0x001000000009a823

@end

