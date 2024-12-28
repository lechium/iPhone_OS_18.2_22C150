//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DataDeliveryServices/NSObject-Protocol.h>

@class DDSAssetQuery, DDSMAAutoAssetSelector, NSArray, NSString;

@protocol DDSMAAutoAssetManager <NSObject>
- (void)updateAssetForQuery:(DDSAssetQuery *)arg1 callback:(void (^)(NSNumber *, NSError *))arg2;
- (void)fetchAssetUpdateStatusForQuery:(DDSAssetQuery *)arg1 callback:(void (^)(long long, NSError *))arg2;
- (void)serverDidUpdateAssetsWithType:(NSString *)arg1;
- (void)lockAssetsForQuery:(DDSAssetQuery *)arg1;
- (NSArray *)assetsForQuery:(DDSAssetQuery *)arg1;
- (void)unregisterInterestInContentForAssetSelector:(DDSMAAutoAssetSelector *)arg1;
- (void)registerInterestInContentForQuery:(DDSAssetQuery *)arg1;
@end
