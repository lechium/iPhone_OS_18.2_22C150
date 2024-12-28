//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class CNPostalAddress, NSDate, NSSet, NSString, NSURL, _TtC10FinanceKit15LocalizedString;

@interface _TtC10FinanceKit31ManagedOrderShippingFulfillment : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x000000000020b030

// Remaining properties
@property(nonatomic, copy) NSString *carrier; // @dynamic carrier;
@property(nonatomic, copy) NSString *carrierIdentifier; // @dynamic carrierIdentifier;
@property(nonatomic, copy) NSDate *deliveryDate; // @dynamic deliveryDate;
@property(nonatomic, copy) NSDate *estimatedDeliveryDate; // @dynamic estimatedDeliveryDate;
@property(nonatomic, copy) NSString *estimatedDeliveryWindowDurationValue; // @dynamic estimatedDeliveryWindowDurationValue;
@property(nonatomic, copy) NSString *fulfillmentIdentifier; // @dynamic fulfillmentIdentifier;
@property(nonatomic, retain) NSSet *lineItemObjects; // @dynamic lineItemObjects;
@property(nonatomic, retain) _TtC10FinanceKit15LocalizedString *notes; // @dynamic notes;
@property(nonatomic) short positionIndex; // @dynamic positionIndex;
@property(nonatomic, retain) CNPostalAddress *recipientAddress; // @dynamic recipientAddress;
@property(nonatomic, copy) NSString *recipientFamilyName; // @dynamic recipientFamilyName;
@property(nonatomic, copy) NSString *recipientGivenName; // @dynamic recipientGivenName;
@property(nonatomic, copy) NSString *recipientOrganizationName; // @dynamic recipientOrganizationName;
@property(nonatomic, copy) NSDate *shippedDate; // @dynamic shippedDate;
@property(nonatomic) short shippingTypeValue; // @dynamic shippingTypeValue;
@property(nonatomic, retain) _TtC10FinanceKit15LocalizedString *statusDescription; // @dynamic statusDescription;
@property(nonatomic) short statusValue; // @dynamic statusValue;
@property(nonatomic, copy) NSString *trackingNumber; // @dynamic trackingNumber;
@property(nonatomic, copy) NSURL *trackingURL; // @dynamic trackingURL;

@end
