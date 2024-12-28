//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSUUID, REMCDAccount, REMObjectID;

@interface REMCDDueDateDeltaAlert : NSManagedObject
{
}

+ (_Bool)conformsToREMChangeTrackingIdentifiable;	// IMP=0x00200000004b2980
+ (id)cdEntityName;	// IMP=0x00100000004b28f0
+ (id)objectIDWithUUID:(id)arg1;	// IMP=0x00100000007110d0
+ (id)newObjectID;	// IMP=0x00100000007110c0
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x00200000004b2870
- (id)remChangedObjectID;	// IMP=0x00100000004b2ac0
- (id)remObjectIDWithError:(id *)arg1;	// IMP=0x0010000000711030
@property(nonatomic, readonly) REMObjectID *remObjectID;

// Remaining properties
@property(nonatomic, retain) REMCDAccount *account; // @dynamic account;
@property(nonatomic, copy) NSDate *acknowledgedDate; // @dynamic acknowledgedDate;
@property(nonatomic, copy) NSDate *creationDate; // @dynamic creationDate;
@property(nonatomic) short dueDateDeltaCount; // @dynamic dueDateDeltaCount;
@property(nonatomic) short dueDateDeltaUnit; // @dynamic dueDateDeltaUnit;
@property(nonatomic, copy) NSUUID *identifier; // @dynamic identifier;
@property(nonatomic) long long minimumSupportedAppVersion; // @dynamic minimumSupportedAppVersion;
@property(nonatomic, copy) NSUUID *reminderIdentifier; // @dynamic reminderIdentifier;
@property(nonatomic) long long sortOrder; // @dynamic sortOrder;

@end
