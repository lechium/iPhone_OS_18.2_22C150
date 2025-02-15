//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitBackingStore/HMBModel.h>

@class NSData, NSDictionary;

__attribute__((visibility("hidden")))
@interface HMDPersonSettingsModel : HMBModel
{
}

+ (id)sentinelModelUUID;	// IMP=0x0040000000f895dc
+ (id)sentinelParentUUID;	// IMP=0x0040000000f895ac
+ (_Bool)hmbExcludeFromCloudStorage;	// IMP=0x0040000000f895a4
+ (id)hmbProperties;	// IMP=0x0040000000f89574
- (void)archiveClassificationNotificationsEnabledForPersonUUID:(id)arg1;	// IMP=0x0000000000f89bb3
- (id)unarchivedClassificationNotificationsEnabledForPersonUUID;	// IMP=0x0000000000f89b6b
- (void)setClassificationNotificationsEnabled:(id)arg1 forPersonUUID:(id)arg2;	// IMP=0x0000000000f89acd
- (id)classificationNotificationsEnabledForPersonUUID:(id)arg1;	// IMP=0x0000000000f89a53
- (id)init;	// IMP=0x0000000000f899cc
@property(readonly, copy) NSDictionary *faceClassificationNotificationsEnabledByPersonUUID;

// Remaining properties
@property(retain) NSData *classificationNotificationSettingsData; // @dynamic classificationNotificationSettingsData;

@end

