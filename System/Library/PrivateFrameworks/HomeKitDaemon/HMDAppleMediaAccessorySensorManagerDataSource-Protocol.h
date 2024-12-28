//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDAccessory, HMDAppleMediaAccessorySensorManager, HMDService, HMFFuture, HMFMessageDispatcher, HMSetupAccessoryDescription, NSArray, NSNotificationCenter, NSObject, NSString, NSUUID;
@protocol HAPKeyStore, HMDAccessoryBrowserProtocol, HMDLocalAddAccessoryProgressDelegate, HMMLogEventSubmitting, OS_dispatch_queue;

@protocol HMDAppleMediaAccessorySensorManagerDataSource <NSObject>
- (void)performAfterDelay:(double)arg1 block:(void (^)(void))arg2 queue:(NSObject<OS_dispatch_queue> *)arg3;
- (id <HAPKeyStore>)keychainStoreForAppleMediaAccessorySensorManager:(HMDAppleMediaAccessorySensorManager *)arg1;
- (HMFFuture *)firstCloudKitImportFutureForAppleMediaAccessorySensorManager:(HMDAppleMediaAccessorySensorManager *)arg1;
- (HMFFuture *)residentSyncClientDidSyncFutureForAppleMediaAccessorySensorManager:(HMDAppleMediaAccessorySensorManager *)arg1;
- (id <HMMLogEventSubmitting>)logSubmitterForAppleMediaAccessorySensorManager:(HMDAppleMediaAccessorySensorManager *)arg1;
- (_Bool)isReadyForSensorPairing:(HMDAppleMediaAccessorySensorManager *)arg1;
- (NSUUID *)hostUUIDForAppleMediaAccessorySensorManager:(HMDAppleMediaAccessorySensorManager *)arg1;
- (NSArray *)accessoriesWithHostUUID:(NSUUID *)arg1 forAppleMediaAccessorySensorManager:(HMDAppleMediaAccessorySensorManager *)arg2;
- (HMDAccessory *)accessoryWithUUID:(NSUUID *)arg1 forAppleMediaAccessorySensorManager:(HMDAppleMediaAccessorySensorManager *)arg2;
- (void)renameService:(HMDService *)arg1 name:(NSString *)arg2;
- (void)performLocalAddAccessoryWithDescription:(HMSetupAccessoryDescription *)arg1 progressHandlerDelegate:(id <HMDLocalAddAccessoryProgressDelegate>)arg2 completion:(void (^)(NSError *))arg3;
- (id <HMDAccessoryBrowserProtocol>)accessoryBrowserForAppleMediaAccessorySensorManager:(HMDAppleMediaAccessorySensorManager *)arg1;
- (_Bool)isResidentConfirmedForAppleMediaAccessorySensorManager:(HMDAppleMediaAccessorySensorManager *)arg1;
- (NSUUID *)homeUUIDForAppleMediaAccessorySensorManager:(HMDAppleMediaAccessorySensorManager *)arg1;
- (HMFMessageDispatcher *)messageDispatcherForAppleMediaAccessorySensorManager:(HMDAppleMediaAccessorySensorManager *)arg1;
- (NSNotificationCenter *)notificationCenterForAppleMediaAccessorySensorManager:(HMDAppleMediaAccessorySensorManager *)arg1;
- (id)residentNotificationObjectForAppleMediaAccessorySensorManager:(HMDAppleMediaAccessorySensorManager *)arg1;
- (id)addAccessoryNotificationObjectForAppleMediaAccessorySensorManager:(HMDAppleMediaAccessorySensorManager *)arg1;
@end
