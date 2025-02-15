//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class HMDAppleMediaAccessoryInfoController, HMFSoftwareVersion, NSString;
@protocol HMEEventForwarder, HMELastEventStoreReadHandle;

@protocol HMDAppleMediaAccessoryInfoControllerDataSource <NSObject>
@property(readonly) id <HMELastEventStoreReadHandle> eventStoreReadHandle;
@property(readonly) id <HMEEventForwarder> eventForwarder;
- (HMFSoftwareVersion *)currentAccessorySoftwareVersion;
- (NSString *)eventSourceIdentifierNameForAccessoryInfoController:(HMDAppleMediaAccessoryInfoController *)arg1;
- (NSString *)accessoryInfoControllerTopicForWifiInfo;
- (NSString *)accessoryInfoControllerSoftwareVersionTopicForController:(HMDAppleMediaAccessoryInfoController *)arg1;
@end

