//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class CNPostalAddress, NSString;

@interface _TtC10FinanceKit37ManagedBankMerchantInformationInsight : NSManagedObject
{
}

- (void).cxx_destruct;	// IMP=0x0000000000362600
- (void).cxx_construct;	// IMP=0x00000000003625f0
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x0000000000362570

// Remaining properties
@property(nonatomic, copy) NSString *categoryDescription; // @dynamic categoryDescription;
@property(nonatomic, retain) CNPostalAddress *merchantAddress; // @dynamic merchantAddress;
@property(nonatomic, copy) NSString *merchantName; // @dynamic merchantName;
@property(nonatomic, copy) NSString *merchantNumber; // @dynamic merchantNumber;
@property(nonatomic, copy) NSString *standardIndustrialClassificationCode; // @dynamic standardIndustrialClassificationCode;

@end
