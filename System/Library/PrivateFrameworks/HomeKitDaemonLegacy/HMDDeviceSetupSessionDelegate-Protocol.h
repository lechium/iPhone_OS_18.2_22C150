//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class HMDDeviceSetupSession, NSError, NSUUID;

@protocol HMDDeviceSetupSessionDelegate <NSObject>
- (void)setupSession:(HMDDeviceSetupSession *)arg1 didReceiveAccessoryWithUUID:(NSUUID *)arg2;
- (void)setupSession:(HMDDeviceSetupSession *)arg1 didCloseWithError:(NSError *)arg2;
@end

