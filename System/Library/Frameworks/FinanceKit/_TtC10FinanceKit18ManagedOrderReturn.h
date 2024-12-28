//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSSet, NSString, NSURL, _TtC10FinanceKit15LocalizedString;

@interface _TtC10FinanceKit18ManagedOrderReturn : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x000000000024db70

// Remaining properties
@property(nonatomic, copy) NSString *carrier; // @dynamic carrier;
@property(nonatomic, copy) NSDate *dropOffDate; // @dynamic dropOffDate;
@property(nonatomic, copy) NSDate *initiationDate; // @dynamic initiationDate;
@property(nonatomic, copy) NSSet *lineItemObjects; // @dynamic lineItemObjects;
@property(nonatomic, retain) _TtC10FinanceKit15LocalizedString *notes; // @dynamic notes;
@property(nonatomic) short positionIndex; // @dynamic positionIndex;
@property(nonatomic, copy) NSDate *returnDate; // @dynamic returnDate;
@property(nonatomic, copy) NSString *returnIdentifier; // @dynamic returnIdentifier;
@property(nonatomic, copy) NSString *returnLabel; // @dynamic returnLabel;
@property(nonatomic, copy) NSURL *returnManagementURL; // @dynamic returnManagementURL;
@property(nonatomic, copy) NSString *returnNumber; // @dynamic returnNumber;
@property(nonatomic, retain) _TtC10FinanceKit15LocalizedString *statusDescription; // @dynamic statusDescription;
@property(nonatomic) short statusValue; // @dynamic statusValue;
@property(nonatomic, copy) NSString *trackingNumber; // @dynamic trackingNumber;

@end
