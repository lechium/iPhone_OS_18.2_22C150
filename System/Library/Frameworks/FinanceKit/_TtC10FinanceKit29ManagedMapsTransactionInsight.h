//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, _TtC10FinanceKit16ManagedMapsBrand, _TtC10FinanceKit19ManagedMapsMerchant;

@interface _TtC10FinanceKit29ManagedMapsTransactionInsight : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x000000000006ba00

// Remaining properties
@property(nonatomic, retain) _TtC10FinanceKit16ManagedMapsBrand *brandObject; // @dynamic brandObject;
@property(nonatomic, retain) NSNumber *classificationMissReasonValue; // @dynamic classificationMissReasonValue;
@property(nonatomic, copy) NSDate *earliestRetryDate; // @dynamic earliestRetryDate;
@property(nonatomic) short failedAttemptsCount; // @dynamic failedAttemptsCount;
@property(nonatomic, retain) NSNumber *fallbackCategoryValue; // @dynamic fallbackCategoryValue;
@property(nonatomic) _Bool includeLocationsInTheNextRetry; // @dynamic includeLocationsInTheNextRetry;
@property(nonatomic, retain) _TtC10FinanceKit19ManagedMapsMerchant *merchantObject; // @dynamic merchantObject;
@property(nonatomic, copy) NSDate *updatedAt; // @dynamic updatedAt;

@end

