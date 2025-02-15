//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DistributedEvaluation/DESRecordStoreService-Protocol.h>

@class NSArray, NSDictionary, NSString, NSURL, NSUUID;

@protocol DESFullService <DESRecordStoreService>
- (void)donateJSONResult:(NSDictionary *)arg1 identifier:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)debugInfoStringForPluginID:(NSString *)arg1 completion:(void (^)(NSString *))arg2;
- (void)fetchNativeRecordDataForRecordUUID:(NSUUID *)arg1 bundleId:(NSString *)arg2 completion:(void (^)(NSData *, NSError *))arg3;
- (void)wakeUpWithCompletion:(void (^)(void))arg1;
- (void)setValue:(NSString *)arg1 forInfoKey:(NSString *)arg2 bundleID:(NSString *)arg3 completion:(void (^)(NSDictionary *))arg4;
- (void)fetchTelemetryForBundleId:(NSString *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)runLiveEvaluationForAllBundlesWithBaseURL:(NSURL *)arg1 localeIdentifier:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)runLiveEvaluationForBundleId:(NSString *)arg1 taskSource:(long long)arg2 baseURL:(NSURL *)arg3 localeIdentifier:(NSString *)arg4 completion:(void (^)(id, NSError *))arg5;
- (void)runEvaluationForBundleId:(NSString *)arg1 recipePath:(NSString *)arg2 recordUUIDs:(NSArray *)arg3 attachments:(NSArray *)arg4 sandboxExtensions:(NSArray *)arg5 completion:(void (^)(NSDictionary *, NSData *, NSURL *, NSError *))arg6;
- (void)fetchRecordsForBundleId:(NSString *)arg1 completion:(void (^)(NSDictionary *, NSDictionary *, NSArray *, NSError *))arg2;
@end

