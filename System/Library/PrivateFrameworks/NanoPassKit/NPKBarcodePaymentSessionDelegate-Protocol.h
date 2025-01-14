//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoPassKit/NSObject-Protocol.h>

@class NPKBarcodePaymentSession, NPKPaymentBarcode, PKPaymentTransaction;

@protocol NPKBarcodePaymentSessionDelegate <NSObject>

@optional
- (void)barcodePaymentSession:(NPKBarcodePaymentSession *)arg1 didUpdateTransactionStatus:(unsigned long long)arg2 withTransaction:(PKPaymentTransaction *)arg3;
- (void)barcodePaymentSession:(NPKBarcodePaymentSession *)arg1 didReceivePaymentBarcode:(NPKPaymentBarcode *)arg2;
@end

