//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSDate, NSString, NSUUID;

@interface _TtC10FinanceKit24ManagedMapsLookupRequest : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x000000000008b8e0

// Remaining properties
@property(nonatomic, copy) NSString *bankMerchantEnhancedName; // @dynamic bankMerchantEnhancedName;
@property(nonatomic, copy) NSString *bankTransactionDescription; // @dynamic bankTransactionDescription;
@property(nonatomic, copy) NSString *bankTransactionDescriptionClean; // @dynamic bankTransactionDescriptionClean;
@property(nonatomic, copy) NSDate *creationDate; // @dynamic creationDate;
@property(nonatomic, copy) NSData *otherBankTransactionLocationsData; // @dynamic otherBankTransactionLocationsData;
@property(nonatomic) _Bool piiRedactionOccurred; // @dynamic piiRedactionOccurred;
@property(nonatomic, copy) NSString *transactionDisplayName; // @dynamic transactionDisplayName;
@property(nonatomic, copy) NSUUID *transactionID; // @dynamic transactionID;

@end

