//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CloudTabGroupSyncManager, NSSet;

@protocol CloudTabGroupSyncManagerDelegate <NSObject>

@optional
- (void)cloudTabGroupSyncManager:(CloudTabGroupSyncManager *)arg1 didFindChangesToRecordZonesWithIDs:(NSSet *)arg2;
- (void)cloudTabGroupSyncManagerDidFinishSync:(CloudTabGroupSyncManager *)arg1;
- (void)cloudTabGroupSyncManagerDidBeginSync:(CloudTabGroupSyncManager *)arg1;
- (_Bool)areAccountTermsVerifiedForCloudTabGroupSyncManager:(CloudTabGroupSyncManager *)arg1;
- (_Bool)isDeviceToDeviceEncryptionEnabledForCloudTabGroupSyncManager:(CloudTabGroupSyncManager *)arg1;
- (void)userDidUpdateCloudTabGroupSyncManagerDatabase:(CloudTabGroupSyncManager *)arg1;
- (void)cloudTabGroupSyncManagerPCSIdentitiesDidChange:(CloudTabGroupSyncManager *)arg1;
- (_Bool)hasEntitlementForSensitiveOperationInCloudTabGroupSyncManager:(CloudTabGroupSyncManager *)arg1;
@end
