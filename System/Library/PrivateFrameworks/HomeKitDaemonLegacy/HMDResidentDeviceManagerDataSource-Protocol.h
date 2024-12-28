//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class HMDAppleAccountManager, HMDHome, NSNotificationCenter, NSObject, NSString;
@protocol HMDPrimaryResidentElectionAddOn, HMDResidentDeviceManagerContext, OS_dispatch_queue;

@protocol HMDResidentDeviceManagerDataSource <NSObject>
@property(readonly) _Bool isResidentCapable;
@property(readonly) HMDAppleAccountManager *appleAccountManager;
@property(readonly) NSNotificationCenter *notificationCenter;
@property(readonly) NSObject<OS_dispatch_queue> *queue;
- (id <HMDPrimaryResidentElectionAddOn>)createElectionAddOnWithContext:(id <HMDResidentDeviceManagerContext>)arg1;
- (NSString *)logIdentifierForHome:(HMDHome *)arg1;
@end
