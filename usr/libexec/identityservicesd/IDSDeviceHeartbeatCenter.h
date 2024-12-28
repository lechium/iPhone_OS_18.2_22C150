//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IMTimer, NSMutableDictionary;

@interface IDSDeviceHeartbeatCenter : NSObject
{
    IMTimer *_getDependentHeartbeatTimer;	// 8 = 0x8
    NSMutableDictionary *_usersToHeartbeatDatesMap;	// 16 = 0x10
    _Bool _isSetup;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00200000000086e5
- (void).cxx_destruct;	// IMP=0x002000000000a498
- (void)systemDidWake;	// IMP=0x001000000000a486
- (void)_cleanupKeychain;	// IMP=0x001000000000a3c8
- (_Bool)_fetchExpiryDatesIfNecessary;	// IMP=0x0010000000009f81
- (void)accountsChanged;	// IMP=0x0010000000009a09
- (void)_updateExpiry:(double)arg1 forUser:(id)arg2;	// IMP=0x00100000000096c4
- (void)resetExpiryForUser:(id)arg1;	// IMP=0x00100000000095f3
- (void)_updateDependentRegistrations;	// IMP=0x0010000000009541
- (void)_heartbeatTimerFiredOnMain;	// IMP=0x00100000000094c2
- (void)_scheduleRescueHeartBeat;	// IMP=0x0010000000009347
- (void)_updateDependentRegistrationTimerFiredOnMain;	// IMP=0x00100000000092c8
- (_Bool)_scheduleDependentRegistrations;	// IMP=0x00100000000090fb
- (void)invalidateTimer;	// IMP=0x00100000000090c9
- (void)printInfo;	// IMP=0x0010000000008d09
- (void)dealloc;	// IMP=0x0010000000008c87
- (id)_getNextExpirationDate;	// IMP=0x001000000000890d
- (void)_heartBeat;	// IMP=0x001000000000883b
- (void)setup;	// IMP=0x00100000000087e4
- (id)init;	// IMP=0x001000000000873a

@end
