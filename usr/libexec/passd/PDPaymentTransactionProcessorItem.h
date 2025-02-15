//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PKPaymentTransaction;

@interface PDPaymentTransactionProcessorItem : NSObject
{
    struct os_unfair_lock_s _transactionLock;	// 8 = 0x8
    _Bool _foundOptimalLocation;	// 12 = 0xc
    _Bool _useBackgroundLocation;	// 13 = 0xd
    _Bool _isClearingAttempt;	// 14 = 0xe
    PKPaymentTransaction *_paymentTransaction;	// 16 = 0x10
    NSString *_transactionSourceIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000560469
@property(nonatomic) _Bool isClearingAttempt; // @synthesize isClearingAttempt=_isClearingAttempt;
@property(nonatomic) _Bool useBackgroundLocation; // @synthesize useBackgroundLocation=_useBackgroundLocation;
@property(nonatomic) _Bool foundOptimalLocation; // @synthesize foundOptimalLocation=_foundOptimalLocation;
@property(retain, nonatomic) NSString *transactionSourceIdentifier; // @synthesize transactionSourceIdentifier=_transactionSourceIdentifier;
@property(retain, nonatomic) PKPaymentTransaction *paymentTransaction; // @synthesize paymentTransaction=_paymentTransaction;
- (id)init;	// IMP=0x00100000005602a0

@end

