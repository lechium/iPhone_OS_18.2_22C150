//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class PKPaymentMethodSelectionViewController, PKPaymentPass;

@protocol PKPaymentMethodSelectionViewControllerDelegate <NSObject>
- (void)paymentMethodSelectionViewController:(PKPaymentMethodSelectionViewController *)arg1 didToggleUseAppleCashBalance:(_Bool)arg2;
- (void)paymentMethodSelectionViewController:(PKPaymentMethodSelectionViewController *)arg1 didSelectPaymentMethod:(PKPaymentPass *)arg2;
@end
