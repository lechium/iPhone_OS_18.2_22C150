//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString, REMCDAlarmTrigger, REMCDReminder;

@interface REMCDAlarm
{
    _Bool didHandleMarkingExtraneousAlarmDuringWillSave;	// 8 = 0x8
}

+ (id)cdEntityName;	// IMP=0x00200000000606dd
+ (_Bool)isAbstract;	// IMP=0x00100000000606d5
+ (id)keyPathsForValuesAffectingEffectiveMinimumSupportedVersion;	// IMP=0x001000000005fefa
+ (id)fetchRequest;	// IMP=0x0010000000078dca
+ (_Bool)shouldAttemptLocalObjectMerge;	// IMP=0x0010000000169480
+ (id)newCloudObjectForRecord:(id)arg1 account:(id)arg2 context:(id)arg3;	// IMP=0x00100000001687e0
+ (id)existingCloudObjectForRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3;	// IMP=0x0010000000168390
+ (id)recordTypes;	// IMP=0x00100000001682a0
+ (id)ckRecordType;	// IMP=0x001000000016a390
@property(nonatomic) _Bool didHandleMarkingExtraneousAlarmDuringWillSave; // @synthesize didHandleMarkingExtraneousAlarmDuringWillSave;
- (void)didSave;	// IMP=0x001000000006094c
- (void)willSave;	// IMP=0x00100000000607d9
@property(retain, nonatomic) REMCDReminder *reminder; // @dynamic reminder;
- (_Bool)isSnooze;	// IMP=0x00100000000606f6
- (void)debug_lowLevelRemoveFromParent;	// IMP=0x001000000005ff9d
- (long long)parentEffectiveMinimumSupportedVersion;	// IMP=0x001000000005ff1a
- (id)modelObject;	// IMP=0x001000000005fe21
- (_Bool)isConnectedToAccountObject:(id)arg1;	// IMP=0x001000000005fdb3
- (void)fixBrokenReferences;	// IMP=0x0010000000169f50
- (id)objectsToBeDeletedBeforeThisObject;	// IMP=0x0010000000169800
- (void)cleanUpAfterLocalObjectMerge;	// IMP=0x0010000000169740
- (_Bool)mergeWithLocalObject:(id)arg1;	// IMP=0x0010000000169510
- (id)existingLocalObjectToMergeWithPredicate:(id)arg1;	// IMP=0x00100000001694a0
- (id)parentCloudObject;	// IMP=0x0010000000169440
- (id)newlyCreatedRecord;	// IMP=0x00100000001693f0
- (void)mergeDataFromRecord:(id)arg1 accountID:(id)arg2;	// IMP=0x0010000000168de0
- (_Bool)shouldMarkAsDeletedInsteadOfDeletingImmediately;	// IMP=0x0010000000168930
- (_Bool)supportsDeletionByTTL;	// IMP=0x0010000000168910
- (id)recordType;	// IMP=0x00100000001688c0
- (id)recordZoneName;	// IMP=0x0010000000168860

// Remaining properties
@property(copy, nonatomic) NSDate *acknowledgedDate; // @dynamic acknowledgedDate;
@property(copy, nonatomic) NSString *alarmUID; // @dynamic alarmUID;
@property(nonatomic) double dueDateResolutionTokenAsNonce; // @dynamic dueDateResolutionTokenAsNonce;
@property(nonatomic) _Bool isExtraneous; // @dynamic isExtraneous;
@property(copy, nonatomic) NSString *originalAlarmUID; // @dynamic originalAlarmUID;
@property(retain, nonatomic) REMCDAlarmTrigger *trigger; // @dynamic trigger;

@end
