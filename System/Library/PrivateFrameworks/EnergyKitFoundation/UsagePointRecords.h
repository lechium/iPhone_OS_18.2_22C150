//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSDate, NSString;

@interface UsagePointRecords : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x00000000000058a0

// Remaining properties
@property(nonatomic, copy) NSDate *creationDate; // @dynamic creationDate;
@property(nonatomic, copy) NSString *recordID; // @dynamic recordID;
@property(nonatomic, copy) NSDate *sourceTime; // @dynamic sourceTime;
@property(nonatomic, copy) NSString *subscriptionID; // @dynamic subscriptionID;
@property(nonatomic, copy) NSData *tariffProfiles; // @dynamic tariffProfiles;
@property(nonatomic, copy) NSData *tariffRiders; // @dynamic tariffRiders;
@property(nonatomic, copy) NSString *usagePointID; // @dynamic usagePointID;
@property(nonatomic, copy) NSString *utilityID; // @dynamic utilityID;
@property(nonatomic, copy) NSString *zoneName; // @dynamic zoneName;

@end

