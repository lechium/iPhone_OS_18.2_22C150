//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@protocol PurchaseIntentService
- (void)setAppInstallSheetBundleID:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)purchaseIntentsWithRequest:(NSData *)arg1 reply:(void (^)(NSData *, NSError *))arg2;
- (void)clearPurchaseIntentsWithRequest:(NSData *)arg1 reply:(void (^)(NSError *))arg2;
- (void)addPurchaseIntentWithRequest:(NSData *)arg1 reply:(void (^)(NSError *))arg2;
@end

