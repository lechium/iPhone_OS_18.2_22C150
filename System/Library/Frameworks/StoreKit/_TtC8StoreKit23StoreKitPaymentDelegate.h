//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/SwiftNativeNSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8StoreKit23StoreKitPaymentDelegate : SwiftNativeNSObject
{
    MISSING_TYPE *$defaultActor;	// 4277009103 = 0xfeedfacf
    MISSING_TYPE *handler;	// 112 = 0x70
    MISSING_TYPE *uiAnchor;	// 128 = 0x80
}

- (id)init;	// IMP=0x00000000000f9b05
- (void)handleEngagementRequest:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f98a7
- (void)shouldContinueTransactionWithNewStorefront:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f930a
- (void)handlePaymentSheetRequest:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f903f

@end
