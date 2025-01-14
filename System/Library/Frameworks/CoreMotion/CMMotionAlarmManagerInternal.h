//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CMMotionAlarmManagerInternal : NSObject
{
    void *fLocationdConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *fInternalQueue;	// 16 = 0x10
    NSMutableDictionary *fAlarms;	// 24 = 0x18
    _Bool fListening;	// 32 = 0x20
}

+ (id)instance;	// IMP=0x00600000001d28d4
- (void)_handleAlarmFire:(id)arg1;	// IMP=0x00000000001d5ac4
- (_Bool)_launchRemoteAppWithError:(id *)arg1 delegate:(id)arg2;	// IMP=0x00000000001d571f
- (_Bool)_acknowledgeAlarm:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001d4c0f
- (_Bool)_unregisterAlarm:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001d3e1a
- (_Bool)_registerAlarm:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001d3142
- (void)_stopListeners;	// IMP=0x00000000001d2e24
- (void)_startListeners;	// IMP=0x00000000001d2b6a
- (void)_teardown;	// IMP=0x00000000001d2987
- (void)dealloc;	// IMP=0x00000000001d2949
- (id)init;	// IMP=0x00000000001d233c

@end

