//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKSQLiteTableEntry.h"

@class NSDate, NSNumber, NSString;

@interface CKSQLiteDatabaseActivityEntry : CKSQLiteTableEntry
{
    NSNumber *_activityID;	// 8 = 0x8
    NSNumber *_databaseID;	// 16 = 0x10
    NSNumber *_groupID;	// 24 = 0x18
    NSString *_tableName;	// 32 = 0x20
    NSDate *_activityEarliestDate;	// 40 = 0x28
    NSNumber *_coalescingInterval;	// 48 = 0x30
    NSNumber *_separationInterval;	// 56 = 0x38
    NSDate *_activityLatestDate;	// 64 = 0x40
    NSDate *_activityNotBeforeDate;	// 72 = 0x48
    NSDate *_activityStartDate;	// 80 = 0x50
    NSString *_groupName;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000022638f
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(retain, nonatomic) NSDate *activityStartDate; // @synthesize activityStartDate=_activityStartDate;
@property(retain, nonatomic) NSDate *activityNotBeforeDate; // @synthesize activityNotBeforeDate=_activityNotBeforeDate;
@property(retain, nonatomic) NSDate *activityLatestDate; // @synthesize activityLatestDate=_activityLatestDate;
@property(retain, nonatomic) NSNumber *separationInterval; // @synthesize separationInterval=_separationInterval;
@property(retain, nonatomic) NSNumber *coalescingInterval; // @synthesize coalescingInterval=_coalescingInterval;
@property(retain, nonatomic) NSDate *activityEarliestDate; // @synthesize activityEarliestDate=_activityEarliestDate;
@property(retain, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;
@property(retain, nonatomic) NSNumber *groupID; // @synthesize groupID=_groupID;
@property(retain, nonatomic) NSNumber *databaseID; // @synthesize databaseID=_databaseID;
@property(retain, nonatomic) NSNumber *activityID; // @synthesize activityID=_activityID;
- (id)targetDescription;	// IMP=0x000000000022614f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000225fa4
- (unsigned long long)hash;	// IMP=0x0000000000225f14

@end
