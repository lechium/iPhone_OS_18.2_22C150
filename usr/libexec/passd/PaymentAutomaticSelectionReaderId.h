//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PaymentAutomaticSelectionReaderId
{
}

+ (id)_predicateForPaymentAutomaticSelectionCriterionPID:(long long)arg1;	// IMP=0x00400000001b5199
+ (id)insertReaderIds:(id)arg1 withPaymentAutomaticSelectionCriterion:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000001b4dda
+ (void)deleteEntitiesInDatabase:(id)arg1 forPaymentAutomaticSelectionCriterionPID:(long long)arg2;	// IMP=0x00100000001b4d41
+ (id)_readerIDsInDatabase:(id)arg1 withPredicate:(id)arg2;	// IMP=0x00100000001b4bdc
+ (id)readerIDsInDatabase:(id)arg1 forPaymentAutomaticSelectionCriterionPID:(long long)arg2;	// IMP=0x00100000001b4b50
+ (id)databaseTable;	// IMP=0x00100000001b4b43
- (id)initWithReaderId:(id)arg1 forPaymentAutomaticSelectionCriterionPID:(long long)arg2 database:(id)arg3;	// IMP=0x00400000001b5080

@end
