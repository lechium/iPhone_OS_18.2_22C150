//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSDecimalNumber, PKBillPaymentRingView, PKBillPaymentSuggestedAmount;

@protocol PKBillPaymentRingViewDelegate <NSObject>
- (void)billPaymentRingView:(PKBillPaymentRingView *)arg1 selectedSuggestedAmount:(PKBillPaymentSuggestedAmount *)arg2 selectedSuggestedAmountIsTarget:(_Bool)arg3 userInitiatedChange:(_Bool)arg4;

@optional
- (void)billPaymentRingView:(PKBillPaymentRingView *)arg1 amountChanged:(NSDecimalNumber *)arg2;
@end
