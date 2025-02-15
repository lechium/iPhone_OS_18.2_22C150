//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PaymentExpressMode
{
}

+ (id)_predicateForPaymentApplicationPID:(long long)arg1;	// IMP=0x00000000002ec3be
+ (id)_predicateForPaymentApplication:(id)arg1;	// IMP=0x00100000002ec359
+ (id)insertExpressModes:(id)arg1 withPaymentApplication:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000002ec0ff
+ (void)deleteEntitiesInDatabase:(id)arg1 forPaymentApplication:(id)arg2;	// IMP=0x00100000002ec066
+ (id)_expressModesInDatabase:(id)arg1 forPredicate:(id)arg2;	// IMP=0x00100000002ebf10
+ (id)expressModesInDatabase:(id)arg1 forPaymentApplicationPID:(long long)arg2;	// IMP=0x00100000002ebe84
+ (id)expressModesInDatabase:(id)arg1 forPaymentApplication:(id)arg2;	// IMP=0x00100000002ebdf8
+ (id)databaseTable;	// IMP=0x00100000002ebdeb
- (id)expressMode;	// IMP=0x00400000002ec5ac
- (id)initWithExpressMode:(id)arg1 forPaymentApplication:(id)arg2 database:(id)arg3;	// IMP=0x00100000002ec42f

@end

