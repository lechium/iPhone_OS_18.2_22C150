//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC21UserNotificationsCore33NotificationCoreServiceConnection : NSObject
{
    MISSING_TYPE *connection;	// 8 = 0x8
    MISSING_TYPE *notificationRepository;	// 16 = 0x10
    MISSING_TYPE *categoryRepository;	// 24 = 0x18
    MISSING_TYPE *delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001676a0
- (id)init;	// IMP=0x0000000000167a80
- (void)dealloc;	// IMP=0x0000000000167640
- (void)setCategories:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x0000000000168c70
- (id)categoriesForBundleIdentifier:(id)arg1;	// IMP=0x0000000000168b50
- (id)categoryForIdentifier:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x0000000000168a50
- (id)allBundleIdentifiersForCategories;	// IMP=0x00000000001689a0
- (void)categoryRepositoryDidChangeCategoriesForBundleIdentifier:(id)arg1;	// IMP=0x00000000001688d0
- (void)setBadgeString:(id)arg1 forBundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001687e0
- (void)setBadgeCount:(id)arg1 forBundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000168620
- (void)setBadgeNumber:(id)arg1 forBundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000168470
- (id)badgeNumberForBundleIdentifier:(id)arg1;	// IMP=0x0000000000168300
- (void)removeStoreForBundleIdentifier:(id)arg1;	// IMP=0x0000000000168260
- (void)removeAllNotificationRecordsForBundleIdentifier:(id)arg1;	// IMP=0x0000000000168240
- (void)removeInvalidNotificationRecordsForBundleIdentifier:(id)arg1;	// IMP=0x0000000000168220
- (void)removeNotificationRecordsWithNonPushTriggerForBundleIdentifier:(id)arg1;	// IMP=0x0000000000168200
- (void)removeSimilarNotificationRecords:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x00000000001681d0
- (void)removeNotificationRecordsForIdentifiers:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x00000000001680f0
- (void)saveNotificationRequest:(id)arg1 shouldRepost:(id)arg2 apsMessageTimestamp:(id)arg3 forBundleIdentifier:(id)arg4;	// IMP=0x0000000000167fc0
- (void)saveNotificationRecord:(id)arg1 targetRevisionNumber:(id)arg2 shouldRepost:(id)arg3 forBundleIdentifier:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000167e90
- (id)notificationRecordForIdentifier:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x0000000000167c70
- (id)notificationRecordsForBundleIdentifier:(id)arg1;	// IMP=0x0000000000167c30
- (id)allBundleIdentifiersForNotifications;	// IMP=0x0000000000167c10
- (void)notificationRepositoryDidPerformUpdates:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x0000000000167ad0

@end
