//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDecimalNumber, NSLocale, NSString, SKProductDiscount, SKProductSubscriptionPeriod;

@interface SKProductInternal : NSObject
{
    NSString *_contentVersion;	// 8 = 0x8
    _Bool _downloadable;	// 16 = 0x10
    NSArray *_downloadContentLengths;	// 24 = 0x18
    SKProductDiscount *_introductoryPrice;	// 32 = 0x20
    NSString *_localeIdentifier;	// 40 = 0x28
    NSString *_localizedDescription;	// 48 = 0x30
    NSString *_localizedTitle;	// 56 = 0x38
    NSDecimalNumber *_price;	// 64 = 0x40
    NSLocale *_priceLocale;	// 72 = 0x48
    NSString *_productIdentifier;	// 80 = 0x50
    NSString *_subscriptionGroupIdentifier;	// 88 = 0x58
    SKProductSubscriptionPeriod *_subscriptionPeriod;	// 96 = 0x60
    NSArray *_discounts;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x002000000004a8f1

@end

