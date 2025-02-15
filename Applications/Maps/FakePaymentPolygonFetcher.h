//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSError;
@protocol OS_dispatch_queue;

@interface FakePaymentPolygonFetcher : NSObject
{
    CDUnknownBlockType _testCallback;	// 8 = 0x8
    NSArray *_paymentPolygonMapItems;	// 16 = 0x10
    NSError *_paymentPolygonResponseError;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000088a567
- (void)configurePaymentPolygonResponseError:(id)arg1;	// IMP=0x001000000088a556
- (void)configurePaymentPolygonMapItems:(id)arg1;	// IMP=0x001000000088a545
- (_Bool)paymentPolygonsAtLocation:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000088a18c
- (id)initWithTestCallback:(CDUnknownBlockType)arg1;	// IMP=0x001000000088a0de

@end

