//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class BDSDistributedPriceTrackingConfig, NSArray, NSDictionary;

@protocol BDSDistributedPriceTracking <NSObject>
- (void)priceTrackingSetConfiguration:(BDSDistributedPriceTrackingConfig *)arg1 completion:(void (^)(NSError *))arg2;

@optional
- (void)priceTrackingCtlOverrideReferencePrices:(NSDictionary *)arg1 completion:(void (^)(NSError *))arg2;
- (void)priceTrackingCtlAddTrackedItems:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)priceTrackingCtlGetStateWithCompletion:(void (^)(NSData *, NSError *))arg1;
- (void)priceTrackingCtlRefreshTrackedPricesIgnoringSchedule:(_Bool)arg1 completion:(void (^)(NSError *))arg2;
@end
