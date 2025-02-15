//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotificationsCore/NSObject-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSSet, NSString, UNCBulletin, UNCSectionInfo;

@protocol UNCSettingsPersistenceServerInterface <NSObject>
- (void)pairedSyncDeviceCountWithHandler:(void (^)(unsigned long long))arg1;
- (void)enqueueSyncedRemovalForBulletin:(UNCBulletin *)arg1 universalSectionID:(NSString *)arg2 feeds:(unsigned long long)arg3;
- (void)setEffectiveGlobalNotificationListDisplayStyleSetting:(long long)arg1 withHandler:(void (^)(void))arg2;
- (void)getEffectiveGlobalNotificationListDisplayStyleSettingWithHandler:(void (^)(long long, NSError *))arg1;
- (void)setEffectiveGlobalScheduledDeliveryShowNextSummarySetting:(long long)arg1 withHandler:(void (^)(void))arg2;
- (void)getEffectiveGlobalScheduledDeliveryShowNextSummarySettingWithHandler:(void (^)(long long, NSError *))arg1;
- (void)setEffectiveGlobalScheduledDeliveryTimes:(NSArray *)arg1 withHandler:(void (^)(void))arg2;
- (void)getEffectiveGlobalScheduledDeliveryTimesWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)setEffectiveGlobalScheduledDeliverySetting:(long long)arg1 withHandler:(void (^)(void))arg2;
- (void)getEffectiveGlobalScheduledDeliverySettingWithHandler:(void (^)(long long, NSError *))arg1;
- (void)setEffectiveGlobalAnnounceCarPlaySetting:(long long)arg1 withHandler:(void (^)(void))arg2;
- (void)getEffectiveGlobalAnnounceCarPlaySettingWithHandler:(void (^)(long long, NSError *))arg1;
- (void)setEffectiveGlobalAnnounceHeadphonesSetting:(long long)arg1 withHandler:(void (^)(void))arg2;
- (void)getEffectiveGlobalAnnounceHeadphonesSettingWithHandler:(void (^)(long long, NSError *))arg1;
- (void)setEffectiveGlobalAnnounceSetting:(long long)arg1 withHandler:(void (^)(void))arg2;
- (void)getEffectiveGlobalAnnounceSettingWithHandler:(void (^)(long long, NSError *))arg1;
- (void)setEffectiveGlobalContentPreviewsSetting:(long long)arg1 withHandler:(void (^)(void))arg2;
- (void)getEffectiveGlobalContentPreviewsSettingWithHandler:(void (^)(long long, NSError *))arg1;
- (void)readSectionInfoWithVersionNumberForMigrationWithHandler:(void (^)(NSDictionary *, NSError *))arg1;
- (void)deleteSectionInfoLegacyFile;
- (void)deleteSectionInfoFile;
- (void)readSectionInfoLegacyFileWithHandler:(void (^)(NSDictionary *, NSError *))arg1;
- (void)hasSectionInfoLegacyFileWithHandler:(void (^)(_Bool, NSError *))arg1;
- (void)writeSectionInfo:(NSDictionary *)arg1;
- (void)writeSectionOrder:(NSDictionary *)arg1;
- (void)writeClearedSections:(NSDictionary *)arg1;
- (void)readSectionOrderWithHandler:(void (^)(NSDictionary *, NSError *))arg1;
- (void)readSectionInfoWithHandler:(void (^)(NSDictionary *, NSError *))arg1;
- (void)readSavedClearedSectionsWithHandler:(void (^)(NSDictionary *, NSError *))arg1;
- (void)setAllSectionInfoByID:(NSDictionary *)arg1 withHandler:(void (^)(void))arg2;
- (void)allSortedActiveSections:(_Bool)arg1 withHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)allSortedSectionInfos:(_Bool)arg1 withHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)allSectionInfosByIDWithHandler:(void (^)(NSDictionary *, NSError *))arg1;
- (void)allSectionIDsWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)sortedSectionIDsWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)activeSectionIDsWithHandler:(void (^)(NSSet *, NSError *))arg1;
- (void)setClearedInfo:(NSDate *)arg1 forSectionID:(NSString *)arg2 withHandler:(void (^)(void))arg3;
- (void)clearedInfoForSectionID:(NSString *)arg1 withHandler:(void (^)(NSDate *, NSError *))arg2;
- (void)setClearedSectionsByID:(NSDictionary *)arg1 withHandler:(void (^)(void))arg2;
- (void)clearedSectionsByIDWithHandler:(void (^)(NSDictionary *, NSError *))arg1;
- (void)addActiveSectionID:(NSString *)arg1 withHandler:(void (^)(void))arg2;
- (void)removeSectionWithID:(NSString *)arg1 withHandler:(void (^)(void))arg2;
- (void)setSectionInfo:(UNCSectionInfo *)arg1 forSectionID:(NSString *)arg2 withHandler:(void (^)(void))arg3;
- (void)sectionInfosForSectionIDs:(NSSet *)arg1 effective:(_Bool)arg2 withHandler:(void (^)(NSArray *, NSError *))arg3;
- (void)sectionInfoForSectionID:(NSString *)arg1 effective:(_Bool)arg2 withHandler:(void (^)(UNCSectionInfo *, NSError *))arg3;
@end

