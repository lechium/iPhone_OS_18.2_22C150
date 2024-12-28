//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable, NSMutableDictionary, NSOperationQueue, NSURL, SUUIClientContext;

__attribute__((visibility("hidden")))
@interface SUUIDonationConfiguration : NSObject
{
    NSArray *_charities;	// 8 = 0x8
    NSMutableDictionary *_charityImages;	// 16 = 0x10
    SUUIClientContext *_clientContext;	// 24 = 0x18
    NSURL *_donationPurchaseURL;	// 32 = 0x20
    NSURL *_donationValidationURL;	// 40 = 0x28
    NSHashTable *_observers;	// 48 = 0x30
    NSOperationQueue *_operationQueue;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000081098
@property(readonly, nonatomic) NSURL *donationValidationURL; // @synthesize donationValidationURL=_donationValidationURL;
@property(readonly, nonatomic) NSURL *donationPurchaseURL; // @synthesize donationPurchaseURL=_donationPurchaseURL;
@property(readonly, nonatomic) SUUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(readonly, nonatomic) NSArray *allCharities; // @synthesize allCharities=_charities;
- (void)_setLogoImage:(id)arg1 forCharity:(id)arg2;	// IMP=0x0000000000080e3e
- (void)_finishLoadWithResponse:(id)arg1 error:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000000080a6b
- (void)removeObserver:(id)arg1;	// IMP=0x0000000000080a34
- (id)logoImageForCharity:(id)arg1;	// IMP=0x00000000000809d1
- (void)loadLogoForCharity:(id)arg1;	// IMP=0x00000000000806bd
- (void)loadConfigurationWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000080184
- (id)charityForIdentifier:(id)arg1;	// IMP=0x000000000007ffbf
- (void)addObserver:(id)arg1;	// IMP=0x000000000007ff19
- (id)initWithOperationQueue:(id)arg1 clientContext:(id)arg2;	// IMP=0x000000000007fe80

@end
