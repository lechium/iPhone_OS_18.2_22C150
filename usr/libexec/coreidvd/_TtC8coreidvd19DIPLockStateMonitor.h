//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC8coreidvd19DIPLockStateMonitor : NSObject
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *notifyToken;	// 16 = 0x10
    MISSING_TYPE *notifyQueue;	// 24 = 0x18
    MISSING_TYPE *deviceLockStateNotification;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00400000003dbf10
- (void)dealloc;	// IMP=0x00100000003dbef0
- (void)unregisterFromDeviceLockNotificationsWithWatchPairingID:(id)arg1;	// IMP=0x00100000003dbd80
- (_Bool)registerForDeviceLockNotificationsWithWatchPairingID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000003db940
- (id)init;	// IMP=0x00100000003daf70

@end

