//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKRecord, NSArray, NSData, NSDate, NSDateComponents, NSOrderedSet, NSSet, NSString, NSURL, RDDueDateDeltaAlerts, REMCDList, REMCDSharedToMeReminderPlaceholder, REMDisplayDate, REMDisplayDateUtils;

@interface REMCDReminder
{
    _Bool willSave_handledExtraneousAlarmsMarking;	// 8 = 0x8
    _Bool willSave_handledUpdateDisplayDate;	// 9 = 0x9
    _Bool willSave_hasProcessedDueDateDeltaAlertsDataChanges;	// 10 = 0xa
    REMDisplayDateUtils *_displayDateUtils;	// 16 = 0x10
    REMCDList *previousList;	// 24 = 0x18
    RDDueDateDeltaAlerts *cachedDeserializedDueDateDeltaAlerts;	// 32 = 0x20
}

+ (id)propertiesThatShouldTriggerReindexing;	// IMP=0x00200000000563eb
+ (id)cdEntityName;	// IMP=0x001000000005637f
+ (_Bool)isAbstract;	// IMP=0x0010000000056377
+ (id)fetchRequest;	// IMP=0x001000000004b348
+ (id)dueDateComponentsWithDueDate:(id)arg1 isAllDay:(_Bool)arg2 timeZoneName:(id)arg3;	// IMP=0x0010000000057544
+ (id)timeZoneFromName:(id)arg1;	// IMP=0x001000000005750f
+ (id)keyPathsForValuesAffectingEffectiveMinimumSupportedVersion;	// IMP=0x0010000000057407
+ (_Bool)shouldAttemptLocalObjectMerge;	// IMP=0x0010000000334570
+ (id)newCloudObjectForRecord:(id)arg1 account:(id)arg2 context:(id)arg3;	// IMP=0x001000000032c100
+ (id)existingCloudObjectForRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3;	// IMP=0x001000000032abf0
+ (id)recordTypes;	// IMP=0x001000000032ab00
- (void).cxx_destruct;	// IMP=0x00200000000564be
@property(retain, nonatomic) RDDueDateDeltaAlerts *cachedDeserializedDueDateDeltaAlerts; // @synthesize cachedDeserializedDueDateDeltaAlerts;
@property(nonatomic) _Bool willSave_hasProcessedDueDateDeltaAlertsDataChanges; // @synthesize willSave_hasProcessedDueDateDeltaAlertsDataChanges;
@property(nonatomic) _Bool willSave_handledUpdateDisplayDate; // @synthesize willSave_handledUpdateDisplayDate;
@property(nonatomic) _Bool willSave_handledExtraneousAlarmsMarking; // @synthesize willSave_handledExtraneousAlarmsMarking;
@property(retain, nonatomic) REMCDList *previousList; // @synthesize previousList;
- (id)spotlightObjectToReindex;	// IMP=0x001000000005640b
- (void)incrementSpotlightIndexCount;	// IMP=0x0010000000056398
- (void)updateDisplayDateWithAlarm:(id)arg1;	// IMP=0x0010000000056290
- (void)updateDisplayDate;	// IMP=0x00100000000561d9
- (void)didSave;	// IMP=0x001000000005617f
- (void)willSave;	// IMP=0x0010000000055f67
@property(readonly, retain, nonatomic) REMDisplayDateUtils *displayDateUtils; // @synthesize displayDateUtils=_displayDateUtils;
@property(retain, nonatomic) REMDisplayDate *displayDate;
- (_Bool)_validateAssignmentsForInvalidSharees:(id *)arg1;	// IMP=0x0010000000054d72
- (_Bool)_validateForReminderTreeConsistency:(id *)arg1;	// IMP=0x00100000000542e5
- (_Bool)_validateMoveAcrossSharedLists:(id *)arg1;	// IMP=0x0010000000053d77
- (_Bool)_validateMoveAcrossLists:(id *)arg1;	// IMP=0x0010000000053928
- (_Bool)validateForUpdate:(id *)arg1;	// IMP=0x0010000000053785
- (_Bool)validateForInsert:(id *)arg1;	// IMP=0x0010000000053666
@property(retain, nonatomic) REMCDList *list; // @dynamic list;
- (void)debug_lowLevelRemoveFromParent;	// IMP=0x0010000000057c91
@property(nonatomic) unsigned long long displayOrder;
@property(readonly, nonatomic) NSArray *alarms;
@property(copy, nonatomic) NSDateComponents *startDateComponents;
@property(copy, nonatomic) NSDateComponents *dueDateComponents;
- (long long)parentEffectiveMinimumSupportedVersion;	// IMP=0x0010000000057433
- (_Bool)isConnectedToAccountObject:(id)arg1;	// IMP=0x00100000000572a6
- (_Bool)markExtraneousAlarmsForDeletion;	// IMP=0x00100000001429f0
- (void)willChangeList:(id)arg1 toList:(id)arg2;	// IMP=0x0010000000250740
- (void)prepareForDeletion_Swift;	// IMP=0x00100000002d2ff0
- (void)willChangeValueForKey_Swfit:(id)arg1;	// IMP=0x00100000002d2fc0
- (void)didSave_Swift;	// IMP=0x00100000002d2f80
- (void)willSave_Swift;	// IMP=0x00100000002d2f30
- (_Bool)validateForUpdate_Swift:(id *)arg1;	// IMP=0x00100000002d61f0
- (_Bool)validateForInsert_Swift:(id *)arg1;	// IMP=0x00100000002d2e20
- (_Bool)shouldUseResolutionTokenMapForMergingData;	// IMP=0x001000000032a920
- (void)fixBrokenReferences;	// IMP=0x0010000000339720
- (id)objectsToBeDeletedBeforeThisObject;	// IMP=0x0010000000338bd0
- (void)cleanUpAfterLocalObjectMerge;	// IMP=0x0010000000338920
- (_Bool)mergeWithLocalObject:(id)arg1;	// IMP=0x00100000003388c0
- (id)existingLocalObjectToMergeWithPredicate:(id)arg1;	// IMP=0x0010000000335400
- (_Bool)shouldMarkAsDeletedInsteadOfDeletingImmediately;	// IMP=0x0010000000334560
- (_Bool)supportsDeletionByTTL;	// IMP=0x0010000000334550
- (id)parentCloudObject;	// IMP=0x0010000000334510
- (id)newlyCreatedRecord;	// IMP=0x00100000003344c0
@property(nonatomic, retain) CKRecord *ckServerRecord;
- (void)mergeDataFromRecord:(id)arg1 accountID:(id)arg2;	// IMP=0x0010000000331a00
- (id)recordType;	// IMP=0x001000000032c1e0
- (id)recordZoneName;	// IMP=0x001000000032c180
- (void)processDueDateDeltaAlertsDataChanges;	// IMP=0x0010000000624660

// Remaining properties
@property(retain, nonatomic) NSOrderedSet *alarmStorage; // @dynamic alarmStorage;
@property(nonatomic) _Bool allDay; // @dynamic allDay;
@property(copy, nonatomic) NSDate *alternativeDisplayDateDate_forCalendar; // @dynamic alternativeDisplayDateDate_forCalendar;
@property(retain, nonatomic) NSSet *assignments; // @dynamic assignments;
@property(retain, nonatomic) NSOrderedSet *attachments; // @dynamic attachments;
@property(retain, nonatomic) NSSet *children; // @dynamic children;
@property(copy, nonatomic) NSString *ckParentReminderIdentifier; // @dynamic ckParentReminderIdentifier;
@property(nonatomic) _Bool completed; // @dynamic completed;
@property(copy, nonatomic) NSDate *completionDate; // @dynamic completionDate;
@property(retain, nonatomic) NSData *contactHandles; // @dynamic contactHandles;
@property(copy, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(copy, nonatomic) NSString *daCalendarItemUniqueIdentifier; // @dynamic daCalendarItemUniqueIdentifier;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSDate *displayDateDate; // @dynamic displayDateDate;
@property(nonatomic) _Bool displayDateIsAllDay; // @dynamic displayDateIsAllDay;
@property(copy, nonatomic) NSString *displayDateTimeZone; // @dynamic displayDateTimeZone;
@property(nonatomic) long long displayDateUpdatedForSecondsFromGMT; // @dynamic displayDateUpdatedForSecondsFromGMT;
@property(copy, nonatomic) NSDate *dueDate; // @dynamic dueDate;
@property(retain, nonatomic) NSData *dueDateDeltaAlertsData; // @dynamic dueDateDeltaAlertsData;
@property(nonatomic) long long flagged; // @dynamic flagged;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSSet *hashtags; // @dynamic hashtags;
@property(nonatomic) long long icsDisplayOrder; // @dynamic icsDisplayOrder;
@property(copy, nonatomic) NSURL *icsUrl; // @dynamic icsUrl;
@property(retain, nonatomic) NSData *importedICSData; // @dynamic importedICSData;
@property(copy, nonatomic) NSDate *lastBannerPresentationDate; // @dynamic lastBannerPresentationDate;
@property(copy, nonatomic) NSDate *lastModifiedDate; // @dynamic lastModifiedDate;
@property(copy, nonatomic) NSString *notes; // @dynamic notes;
@property(retain, nonatomic) NSData *notesDocument; // @dynamic notesDocument;
@property(retain, nonatomic) REMCDReminder *parentReminder; // @dynamic parentReminder;
@property(nonatomic) long long priority; // @dynamic priority;
@property(retain, nonatomic) NSOrderedSet *recurrenceRules; // @dynamic recurrenceRules;
@property(retain, nonatomic) REMCDSharedToMeReminderPlaceholder *sharedToMeReminderPlaceholder; // @dynamic sharedToMeReminderPlaceholder;
@property(retain, nonatomic) NSData *siriFoundInAppsData; // @dynamic siriFoundInAppsData;
@property(nonatomic) long long spotlightIndexCount; // @dynamic spotlightIndexCount;
@property(copy, nonatomic) NSDate *startDate; // @dynamic startDate;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *timeZone; // @dynamic timeZone;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSData *titleDocument; // @dynamic titleDocument;
@property(retain, nonatomic) NSData *userActivity; // @dynamic userActivity;

@end
