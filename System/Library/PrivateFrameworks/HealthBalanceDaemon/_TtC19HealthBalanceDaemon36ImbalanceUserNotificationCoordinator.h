//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC19HealthBalanceDaemon36ImbalanceUserNotificationCoordinator : NSObject
{
    MISSING_TYPE *notificationManager;	// 8 = 0x8
    MISSING_TYPE *notificationStateKeyValueDomain;	// 16 = 0x10
    MISSING_TYPE *notificationSyncClient;	// 24 = 0x18
    MISSING_TYPE *analyticsEventSubmissionManager;	// 32 = 0x20
    MISSING_TYPE *shouldPostForwardedChangeNotifications;	// 40 = 0x28
    MISSING_TYPE *unitTest_didProcessNotificationSyncInstruction;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000001a170
- (id)init;	// IMP=0x000000000001a110
- (void)notificationSyncClient:(id)arg1 didReceiveInstructionWithAction:(long long)arg2;	// IMP=0x000000000001a0c0

@end
