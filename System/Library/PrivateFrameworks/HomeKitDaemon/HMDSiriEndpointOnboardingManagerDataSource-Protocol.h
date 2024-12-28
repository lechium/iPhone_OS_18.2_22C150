//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDAccessory, HMSiriEndpointOnboardingSelections, NSNumber, NSUUID;

@protocol HMDSiriEndpointOnboardingManagerDataSource <NSObject>
- (void)enableUserListeningHistoryForHomeUUID:(NSUUID *)arg1 accessoryUUID:(NSUUID *)arg2 userUUID:(NSUUID *)arg3;
- (HMDAccessory *)accessoryWithHomeUUID:(NSUUID *)arg1 accessoryUUID:(NSUUID *)arg2;
- (void)applyOnboardingSelections:(HMSiriEndpointOnboardingSelections *)arg1 accessoryUUID:(NSUUID *)arg2 homeUUID:(NSUUID *)arg3 completion:(void (^)(NSError *, long long))arg4;
- (void)setNeedsOnboardingCompleteWitHomeUUID:(NSUUID *)arg1 accessoryUUID:(NSUUID *)arg2 completion:(void (^)(NSError *))arg3;
- (NSNumber *)needsOnboardingForHomeUUID:(NSUUID *)arg1 accessoryUUID:(NSUUID *)arg2;
@end
