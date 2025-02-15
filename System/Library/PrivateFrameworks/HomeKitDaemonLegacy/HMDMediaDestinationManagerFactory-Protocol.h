//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class HMDBackingStore, HMDMediaDestinationManager, HMFMessageDispatcher, HMMediaDestination, NSNotificationCenter;
@protocol HMDMediaDestinationManagerDataSource, HMDMediaDestinationManagerDelegate;

@protocol HMDMediaDestinationManagerFactory <NSObject>
- (HMDMediaDestinationManager *)mediaDestinationManagerWithDestination:(HMMediaDestination *)arg1 messageDispatcher:(HMFMessageDispatcher *)arg2 notificationCenter:(NSNotificationCenter *)arg3 backingStore:(HMDBackingStore *)arg4 targetDevice:(_Bool)arg5 dataSource:(id <HMDMediaDestinationManagerDataSource>)arg6 delegate:(id <HMDMediaDestinationManagerDelegate>)arg7;
@end

