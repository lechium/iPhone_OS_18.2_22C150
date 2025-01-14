//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, PDNotificationStreamManager, PKDAManager;

@interface PDPrivacyKeyMonitor : NSObject
{
    PDNotificationStreamManager *_notificationStreamManager;	// 8 = 0x8
    PKDAManager *_daManager;	// 16 = 0x10
    struct os_unfair_lock_s _lock;	// 24 = 0x18
    NSMutableArray *_entries;	// 32 = 0x20
    _Bool _isRegisteredForNotifications;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000004ab89a
- (void)handleNotificationWithName:(id)arg1 event:(id)arg2 forStream:(long long)arg3;	// IMP=0x00100000004ab80c
- (id)createCurrentNotificationRegistrationState;	// IMP=0x00100000004ab79c
- (void)_entryDidTimeout:(id)arg1;	// IMP=0x00100000004ab65a
- (void)_checkEntriesForNewKeys;	// IMP=0x00100000004ab233
- (id)_keysForEntry:(id)arg1;	// IMP=0x00100000004ab22b
- (void)_updateNotificationMonitoring;	// IMP=0x00100000004ab1ab
- (void)_waitForKeyWithGroupIdentifier:(id)arg1 keyIdentifier:(id)arg2 timeout:(double)arg3 newKey:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000004aae8a
- (void)waitForKeyWithKeyIdentifier:(id)arg1 timeout:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000004aae6a
- (void)waitForKeyWithGroupIdentifier:(id)arg1 timeout:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000004aae4d
- (void)waitForNewKeyWithKeyIdentifier:(id)arg1 timeout:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000004aae2a
- (void)waitForNewKeyWithGroupIdentifier:(id)arg1 timeout:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000004aae0a
- (_Bool)isMonitoring;	// IMP=0x00100000004aadce
- (void)dealloc;	// IMP=0x00100000004aad83
- (id)initWithNotificationStreamManager:(id)arg1;	// IMP=0x00100000004aacdb
- (id)init;	// IMP=0x00100000004aaccd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

