//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC16FitnessMarketing31MarketingDynamicViewCoordinator : NSObject
{
    MISSING_TYPE *onDismiss;	// 8 = 0x8
    MISSING_TYPE *onPurchase;	// 24 = 0x18
    MISSING_TYPE *onCarrierLink;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000027ca0
- (id)init;	// IMP=0x0000000000027c40
- (void)dynamicViewController:(id)arg1 didFinishCarrierLinkingWithResult:(id)arg2 error:(id)arg3;	// IMP=0x0000000000027e80
- (void)dynamicViewController:(id)arg1 didFinishPurchaseWithResult:(id)arg2 error:(id)arg3;	// IMP=0x0000000000027d80
- (void)dynamicViewController:(id)arg1 didFinishWithPurchaseResult:(id)arg2 error:(id)arg3;	// IMP=0x0000000000027d20

@end
