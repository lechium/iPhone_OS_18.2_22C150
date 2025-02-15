//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ASDImpressionParamsConfig, ASDInstallAttributionParamsConfig, ASDInstallWebAttributionParamsConfig, NSDictionary, NSNumber, NSString;

@protocol ASDInstallAttributionServiceProtocol
- (void)validateWebAdImpressionResponseProperties:(NSDictionary *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)validateImpression:(ASDInstallAttributionParamsConfig *)arg1 withFidelityType:(NSNumber *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)updatePostbackConversionValuesForApp:(NSNumber *)arg1 fineConversionValue:(NSNumber *)arg2 coarseConversionValue:(NSString *)arg3 lockWindow:(_Bool)arg4 completionHandler:(void (^)(NSError *))arg5;
- (void)updatePostbackConversionValuesForApp:(NSNumber *)arg1 fineConversionValue:(NSNumber *)arg2 coarseConversionValue:(NSString *)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)updateConversionValueForApp:(NSNumber *)arg1 conversionValue:(NSNumber *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)registerPingbackForApp:(NSNumber *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)startGhostFetchTaskWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)startPingbackTaskWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)addInstallWebAttributionParamsWithConfig:(ASDInstallWebAttributionParamsConfig *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)addInstallAttributionParamsWithConfig:(ASDInstallAttributionParamsConfig *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)endAdImpressionWithConfig:(ASDImpressionParamsConfig *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)startAdImpressionWithConfig:(ASDImpressionParamsConfig *)arg1 completionHandler:(void (^)(NSError *))arg2;
@end

