//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DataDeliveryServices/NSObject-Protocol.h>

@class DDSAssertion, DDSAsset, DDSAssetQuery, DDSAttributeFilter, MADownloadOptions, NSArray, NSSet, NSString;
@protocol DDSAssetProvidingDelegate;

@protocol DDSAssetProviding <NSObject>
@property(retain, nonatomic) id <DDSAssetProvidingDelegate> delegate;
- (void)setCompatabilityVersion:(long long)arg1 forAssetType:(NSString *)arg2;
- (NSSet *)updatableAssetsForAssertion:(DDSAssertion *)arg1;
- (void)serverDidUpdateAssetsWithType:(NSString *)arg1;
- (void)removeOldAssetsForAssertions:(NSSet *)arg1;
- (void)removeAssetsForAssertions:(NSSet *)arg1;
- (void)startCatalogDownloadForAssetType:(NSString *)arg1 withDownloadOptions:(MADownloadOptions *)arg2 withCompletion:(void (^)(long long))arg3;
- (void)updateCatalogForAssetType:(NSString *)arg1 discretionaryDownload:(_Bool)arg2 withCompletion:(void (^)(NSError *))arg3;
- (NSArray *)allContentItemsMatchingQuery:(DDSAssetQuery *)arg1 error:(id *)arg2;
- (NSArray *)contentItemsFromAssets:(NSArray *)arg1 matchingFilter:(DDSAttributeFilter *)arg2;
- (NSArray *)assetsForQuery:(DDSAssetQuery *)arg1 errorPtr:(id *)arg2;
- (void)startDownloadForAsset:(DDSAsset *)arg1 withOptions:(MADownloadOptions *)arg2 progress:(void (^)(MAProgressNotification *))arg3 handler:(void (^)(long long))arg4;
- (void)beginDownloadForAssertion:(DDSAssertion *)arg1 discretionaryDownload:(_Bool)arg2 handler:(void (^)(DDSAssertion *, NSError *))arg3;
- (void)beginDownloadForAssertions:(NSSet *)arg1 discretionaryDownload:(_Bool)arg2;
@end

