//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class HMDSoftwareUpdate, NSNotificationCenter, NSString, NSUUID;

@protocol HMDSoftwareUpdateDataSource <NSObject>
- (void)updateGenerationCounterWithReason:(NSString *)arg1 sourceUUID:(NSUUID *)arg2 shouldNotifyClients:(_Bool)arg3;
- (NSNotificationCenter *)notificationCenterForSoftwareUpdate:(HMDSoftwareUpdate *)arg1;
@end

