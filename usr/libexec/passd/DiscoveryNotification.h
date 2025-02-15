//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DiscoveryNotification
{
}

+ (id)_propertySettersForNotification;	// IMP=0x00400000004af70c
+ (id)_predicateForNotificationsThatAreNotExpiredForDate:(id)arg1;	// IMP=0x00100000004af5a4
+ (id)_predicateForNotificationsWithRelevantDate:(id)arg1;	// IMP=0x00100000004af2e7
+ (id)_predicateForNotificationsThatAreScheduled:(unsigned long long)arg1;	// IMP=0x00100000004af274
+ (id)_predicateForNotificationsThatAreDelivered:(unsigned long long)arg1;	// IMP=0x00100000004af1ec
+ (id)_predicateForNotificationsWithScheduledDeliveryDateBeforeDate:(id)arg1;	// IMP=0x00100000004af173
+ (id)_predicateForNotificationsThatAreActive:(unsigned long long)arg1;	// IMP=0x00100000004af0f9
+ (id)_predicateForNotificationIdentifier:(id)arg1;	// IMP=0x00100000004af0d6
+ (void)deleteAllNotificationInDatabase:(id)arg1;	// IMP=0x00100000004aebc5
+ (void)deleteNotificationsNotIncludingIdentifiers:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000004aeb21
+ (void)deleteNotificationWithIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000004aeadf
+ (id)nextRelevantNotificationForDate:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000004ae72b
+ (id)notificationsRequiringInsertionForDate:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000004ae46e
+ (id)notificationsToScheduleForDate:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000004ae1b6
+ (id)notificationsThatAreNotExpiredForDate:(id)arg1 active:(unsigned long long)arg2 delivered:(unsigned long long)arg3 inDatabase:(id)arg4;	// IMP=0x00100000004adf1c
+ (id)notificationsInDatabase:(id)arg1;	// IMP=0x00100000004add74
+ (id)insertOrUpdateNotification:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000004ad44c
+ (id)notificationWithIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000004ad3c0
+ (id)databaseTable;	// IMP=0x00100000004ad3b3
- (id)notification;	// IMP=0x00400000004aec5f
- (void)updateWithNotification:(id)arg1;	// IMP=0x00100000004ad985
- (id)initWithNotification:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000004ad523

@end

