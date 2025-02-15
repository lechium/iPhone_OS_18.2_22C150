//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class CLLocation, CNPostalAddress, NSDate, NSSet, NSString, _TtC10FinanceKit15LocalizedString, _TtC10FinanceKit19ManagedOrderBarcode;

@interface _TtC10FinanceKit29ManagedOrderPickupFulfillment : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x00000000001fe4d0

// Remaining properties
@property(nonatomic, retain) CNPostalAddress *address; // @dynamic address;
@property(nonatomic, retain) _TtC10FinanceKit19ManagedOrderBarcode *barcode; // @dynamic barcode;
@property(nonatomic, retain) _TtC10FinanceKit15LocalizedString *displayName; // @dynamic displayName;
@property(nonatomic, copy) NSString *fulfillmentIdentifier; // @dynamic fulfillmentIdentifier;
@property(nonatomic, copy) NSSet *lineItemObjects; // @dynamic lineItemObjects;
@property(nonatomic, retain) CLLocation *location; // @dynamic location;
@property(nonatomic, retain) _TtC10FinanceKit15LocalizedString *notes; // @dynamic notes;
@property(nonatomic, copy) NSDate *pickedUpDate; // @dynamic pickedUpDate;
@property(nonatomic, copy) NSDate *pickupDate; // @dynamic pickupDate;
@property(nonatomic, copy) NSString *pickupWindowDurationValue; // @dynamic pickupWindowDurationValue;
@property(nonatomic) short positionIndex; // @dynamic positionIndex;
@property(nonatomic, retain) _TtC10FinanceKit15LocalizedString *statusDescription; // @dynamic statusDescription;
@property(nonatomic) short statusValue; // @dynamic statusValue;

@end

