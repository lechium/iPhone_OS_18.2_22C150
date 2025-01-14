//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSDecimalNumber, NSString, NSUUID, _TtC10FinanceKit18ManagedTransaction, _TtC10FinanceKit22ManagedInternalAccount, _TtC10FinanceKit25ManagedTransactionActions, _TtC10FinanceKit26ManagedTransactionInsights;

@interface _TtC10FinanceKit26ManagedInternalTransaction : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x0000000000442ea0
- (_Bool)validateForUpdate:(id *)arg1;	// IMP=0x0000000000443240
- (_Bool)validateForInsert:(id *)arg1;	// IMP=0x0000000000442f60
@property(nonatomic, readonly) NSDecimalNumber *foreignCurrencyExchangeRate;
@property(nonatomic, readonly) NSString *foreignCurrency;
@property(nonatomic, readonly) NSDecimalNumber *foreignAmount;
@property(nonatomic, readonly) NSString *currency;
@property(nonatomic, readonly) NSDecimalNumber *amount;
@property(nonatomic, readonly) NSUUID *id;

// Remaining properties
@property(nonatomic, retain) _TtC10FinanceKit22ManagedInternalAccount *accountObject; // @dynamic accountObject;
@property(nonatomic, retain) _TtC10FinanceKit25ManagedTransactionActions *actionsObject; // @dynamic actionsObject;
@property(nonatomic, copy) NSString *altDSID; // @dynamic altDSID;
@property(nonatomic, copy) NSString *applePayPrimaryAccountIdentifier; // @dynamic applePayPrimaryAccountIdentifier;
@property(nonatomic, copy) NSString *bankTransactionCodeSubCode; // @dynamic bankTransactionCodeSubCode;
@property(nonatomic, copy) NSString *bankTransactionCodeValue; // @dynamic bankTransactionCodeValue;
@property(nonatomic) short day; // @dynamic day;
@property(nonatomic) _Bool hasNotificationServiceData; // @dynamic hasNotificationServiceData;
@property(nonatomic, retain) _TtC10FinanceKit26ManagedTransactionInsights *insightsObject; // @dynamic insightsObject;
@property(nonatomic) _Bool isTransactionIDStable; // @dynamic isTransactionIDStable;
@property(nonatomic, copy) NSString *monthAndYear; // @dynamic monthAndYear;
@property(nonatomic, copy) NSString *paymentHash; // @dynamic paymentHash;
@property(nonatomic, copy) NSString *pkServiceIdentifier; // @dynamic pkServiceIdentifier;
@property(nonatomic, copy) NSString *proprietaryBankTransactionCodeIssuer; // @dynamic proprietaryBankTransactionCodeIssuer;
@property(nonatomic, copy) NSString *proprietaryBankTransactionCodeValue; // @dynamic proprietaryBankTransactionCodeValue;
@property(nonatomic, retain) _TtC10FinanceKit18ManagedTransaction *publicTransactionObject; // @dynamic publicTransactionObject;
@property(nonatomic, copy) NSUUID *sharedId; // @dynamic sharedId;
@property(nonatomic) short sourceValue; // @dynamic sourceValue;
@property(nonatomic, copy) NSString *transactionId; // @dynamic transactionId;
@property(nonatomic, copy) NSDate *updatedAt; // @dynamic updatedAt;
@property(nonatomic) short weekOfMonth; // @dynamic weekOfMonth;
@property(nonatomic) short year; // @dynamic year;

@end

