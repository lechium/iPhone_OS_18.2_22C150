//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString, VUIAppContext;

__attribute__((visibility("hidden")))
@interface VUIActionCommerceTransaction
{
    NSString *_commerceActionRef;	// 8 = 0x8
    NSDictionary *_contextData;	// 16 = 0x10
    VUIAppContext *_appContext;	// 24 = 0x18
}

+ (id)extractSalableAdamIDFromBuyParams:(id)arg1;	// IMP=0x006000000031d3e1
+ (_Bool)isTransactionInProgressForBuyParams:(id)arg1;	// IMP=0x006000000031d1a9
+ (void)displayConfirmationUIWithTitle:(id)arg1 andBody:(id)arg2;	// IMP=0x006000000031d141
+ (void)displayConfirmationUIWithTitle:(id)arg1 andBody:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x006000000031d12e
- (void).cxx_destruct;	// IMP=0x000000000031d751
@property(nonatomic) __weak VUIAppContext *appContext; // @synthesize appContext=_appContext;
@property(readonly, copy, nonatomic) NSDictionary *contextData; // @synthesize contextData=_contextData;
@property(retain, nonatomic) NSString *commerceActionRef; // @synthesize commerceActionRef=_commerceActionRef;
- (void)_recordLog:(id)arg1 withBuyParams:(id)arg2;	// IMP=0x000000000031d21b
- (void)_notifyDidEndPurchaseType:(long long)arg1 transactionOffer:(id)arg2 withError:(id)arg3;	// IMP=0x000000000031ce4c
- (void)_notifyDidStartPurchaseType:(long long)arg1 transactionOffer:(id)arg2;	// IMP=0x000000000031ccb7
- (void)_showUIConfirmationForSubTransaction:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000031cb16
- (void)_handleSubscriptionCompletionForOffer:(id)arg1 appContext:(id)arg2 shouldInitiateFamilySetup:(_Bool)arg3 serverResponse:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000031be07
- (void)_handleBuyCompletionForOffer:(id)arg1 appContext:(id)arg2 shouldPlayWhenDone:(_Bool)arg3 serverResponse:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000031bad2
- (void)_startTransactionOfOffer:(id)arg1 withAppContext:(id)arg2 andCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000031b09c
- (id)_preflightManagerForTransactionOffer:(id)arg1 purchaseType:(long long)arg2;	// IMP=0x000000000031ae00
@property(readonly, nonatomic) NSString *buyParams;
- (void)performWithTargetResponder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000031ac30
- (id)initWithActionRef:(id)arg1 contextData:(id)arg2 appContext:(id)arg3;	// IMP=0x000000000031ab32

@end
