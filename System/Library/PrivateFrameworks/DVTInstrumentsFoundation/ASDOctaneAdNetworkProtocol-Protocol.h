//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSString;

@protocol ASDOctaneAdNetworkProtocol
- (void)configureSourceForTestPostbackDictionaries:(NSArray *)arg1 forBundleID:(NSString *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)developerPostbackURLForBundleID:(NSString *)arg1 completion:(void (^)(NSURL *))arg2;
- (void)sendTestPingbackForBundleID:(NSString *)arg1 completion:(void (^)(NSDictionary *))arg2;
- (void)retrieveTestPostbacksForBundleID:(NSString *)arg1 completion:(void (^)(NSArray *))arg2;
- (void)addPostbacksFromDictionaries:(NSArray *)arg1 forBundleID:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)validateSKAdNetworkImpression:(NSDictionary *)arg1 withPublicKey:(NSString *)arg2 forBundleID:(NSString *)arg3 source:(long long)arg4 completion:(void (^)(NSError *))arg5;
@end
