//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SKUIURLConnectionRequest;

__attribute__((visibility("hidden")))
@interface SKUIGiftPurchaseRequest : NSObject
{
    SKUIURLConnectionRequest *_request;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000036e391
- (id)_requestWithURL:(id)arg1 bodyDictionary:(id)arg2;	// IMP=0x000000000036e219
- (void)purchaseWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000036df8c
- (id)initWithGift:(id)arg1 configuration:(id)arg2;	// IMP=0x000000000036de51
- (id)initWithDonation:(id)arg1 configuration:(id)arg2;	// IMP=0x000000000036dd16

@end

