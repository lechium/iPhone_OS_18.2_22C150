//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtCV9PassKitUI32PeerPaymentAmountEntryKeypadView11Coordinator : NSObject
{
    MISSING_TYPE *peerPaymentAccount;	// 8 = 0x8
    MISSING_TYPE *_amount;	// 16 = 0x10
    MISSING_TYPE *_memo;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000003e98c0
- (id)init;	// IMP=0x00000000003e9860
- (void)memoDidChangeTo:(id)arg1;	// IMP=0x00000000003e97f0
- (void)amountDidChangeTo:(id)arg1;	// IMP=0x00000000003e9790
- (double)percentExpanded;	// IMP=0x00000000003e9780
- (id)currentBalance;	// IMP=0x00000000003e9750
- (id)maximumTransferAmount;	// IMP=0x00000000003e96b0
- (id)minimumTransferAmount;	// IMP=0x00000000003e9690

@end
