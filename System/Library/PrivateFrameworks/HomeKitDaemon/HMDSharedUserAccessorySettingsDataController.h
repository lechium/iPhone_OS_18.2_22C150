//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDManagedObjectContext, NSArray, NSPersistentStore, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDSharedUserAccessorySettingsDataController : NSObject
{
    NSUUID *_userModelID;	// 8 = 0x8
    NSUUID *_homeModelID;	// 16 = 0x10
    NSPersistentStore *_privateStore;	// 24 = 0x18
    HMDManagedObjectContext *_moc;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000008905a9
- (void)_addMissingAccessorySettingsFromAccessoryModelIDs:(id)arg1 dataRoot:(id)arg2;	// IMP=0x00000000008902c3
- (id)_fetchDataRootWithError:(id *)arg1;	// IMP=0x0000000000890054
- (void)handleRemovedAccessoryWithModelID:(id)arg1;	// IMP=0x000000000088ffbe
- (void)enableUserListeningHistoryForAccessory:(id)arg1;	// IMP=0x000000000088ff28
- (void)handleUserListeningHistoryUpdateControlUpdatedAccessoryUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000088fe5e
- (void)handleMediaContentProfileAccessControlUpdatedAccessoryUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000088fd94
- (void)handleAssistantAccessControlAccessoryUUIDsUpdated:(id)arg1 activityNotificationsEnabledForPersonalRequests:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000088fcc1
@property(readonly, copy) NSArray *userListeningHistoryUpdateControlModelAccessoriesToEncode;
@property(readonly, copy) NSArray *mediaContentProfileAccessControlAccessoriesToEncode;
@property(readonly, copy) NSArray *assistantAccessControlAccessoriesToEncode;
@property(readonly) _Bool assistantAccessControlActivityNotificationsEnabledForPersonalRequests;
- (id)initWithUserModelID:(id)arg1 homeModelID:(id)arg2 privateStore:(id)arg3 managedObjectContext:(id)arg4;	// IMP=0x000000000088f82c

@end
