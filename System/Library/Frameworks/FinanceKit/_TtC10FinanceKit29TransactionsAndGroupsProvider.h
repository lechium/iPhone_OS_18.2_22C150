//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol FKBankConnectTransactionsAndGroupsProviderDelegate;

@interface _TtC10FinanceKit29TransactionsAndGroupsProvider : NSObject
{
    MISSING_TYPE *primaryAccountIdentifier;	// 8 = 0x8
    MISSING_TYPE *store;	// 24 = 0x18
    MISSING_TYPE *context;	// 32 = 0x20
    MISSING_TYPE *formatterConfiguration;	// 0 = 0x0
    MISSING_TYPE *now;	// 0 = 0x0
    MISSING_TYPE *fixedNumberOfLatestTransactions;	// 0 = 0x0
    MISSING_TYPE *transactionExporter;	// 0 = 0x0
    MISSING_TYPE *transactionChangesObserver;	// 0 = 0x0
    MISSING_TYPE *transactions;	// 0 = 0x0
    MISSING_TYPE *monthlyTransactionGroups;	// 0 = 0x0
    MISSING_TYPE *yearlyTransactionGroups;	// 0 = 0x0
    MISSING_TYPE *delegate;	// 274424 = 0x42ff8
}

+ (id)makeProviderWithPrimaryAccountIdentifier:(id)arg1 fixedNumberOfLatestTransactions:(long long)arg2;	// IMP=0x0060000000330b30
+ (id)makeProviderWithPrimaryAccountIdentifier:(id)arg1;	// IMP=0x0060000000330ad0
- (void).cxx_destruct;	// IMP=0x0000000000330eb0
- (id)init;	// IMP=0x0000000000330e50
- (void)performFetchAndStartObservingNotifications;	// IMP=0x0000000000330dd0
@property(nonatomic) __weak id <FKBankConnectTransactionsAndGroupsProviderDelegate> delegate; // @synthesize delegate;

@end
