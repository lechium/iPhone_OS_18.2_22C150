//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@protocol PPInternalServerProtocol
- (void)setTrialUseDefaultFiles:(_Bool)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)trialOverridePath:(NSString *)arg1 namespaceName:(NSString *)arg2 factorName:(NSString *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)sysdiagnoseInformationWithCompletion:(void (^)(NSString *, NSError *))arg1;
- (void)abGroupInfoWithCompletion:(void (^)(NSDictionary *, NSError *))arg1;
- (void)assetVersionsWithCompletion:(void (^)(NSDictionary *, NSError *))arg1;
- (void)assetDefaultBundleOverridePathForAssetIdentifier:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)setAssetDefaultBundleOverridePath:(NSString *)arg1 assetIdentifier:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)downloadAssetMetadataWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)assetMetadataRefreshIntervalSecondsWithCompletion:(void (^)(_Bool, double, NSError *))arg1;
- (void)clearAssetMetadataRefreshIntervalSecondsWithCompletion:(void (^)(NSError *))arg1;
- (void)setAssetMetadataRefreshIntervalSeconds:(double)arg1 completion:(void (^)(NSError *))arg2;
@end

