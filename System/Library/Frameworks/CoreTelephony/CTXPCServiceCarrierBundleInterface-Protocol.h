//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CTBundle, CTBundleMatchingInfo, CTXPCServiceSubscriptionContext, NSArray, NSDictionary, NSObject, NSString;

@protocol CTXPCServiceCarrierBundleInterface
- (void)getCountryBundleLocationForMatchingInfo:(CTBundleMatchingInfo *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)checkForUpdatedBundlesWithAutoInstall:(_Bool)arg1 completion:(void (^)(NSError *))arg2;
- (void)copyBundleLocation:(CTXPCServiceSubscriptionContext *)arg1 bundleType:(CTBundle *)arg2 completion:(void (^)(NSString *, NSError *))arg3;
- (void)getEnglishCarrierNameFor:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)getCountryBundleIdentifierForCountryCode:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)getCountryBundleLocationForBundleIdentifier:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)restoreToSystemBundles:(void (^)(_Bool, NSError *))arg1;
- (void)copyBundleIdentifier:(CTXPCServiceSubscriptionContext *)arg1 bundleType:(CTBundle *)arg2 completion:(void (^)(NSString *, NSError *))arg3;
- (void)copyBundleVersion:(CTXPCServiceSubscriptionContext *)arg1 bundleType:(CTBundle *)arg2 completion:(void (^)(NSString *, NSError *))arg3;
- (void)getWiFiCallingSettingPreferences:(CTXPCServiceSubscriptionContext *)arg1 key:(NSString *)arg2 completion:(void (^)(NSObject *, NSError *))arg3;
- (void)setWiFiCallingSettingPreferences:(CTXPCServiceSubscriptionContext *)arg1 key:(NSString *)arg2 value:(NSObject *)arg3 completion:(void (^)(NSError *))arg4;
- (void)context:(CTXPCServiceSubscriptionContext *)arg1 getAttachApnSettingsWithCompletion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)context:(CTXPCServiceSubscriptionContext *)arg1 modifyAttachApnSettings:(NSDictionary *)arg2 completion:(void (^)(NSError *))arg3;
- (void)isAttachApnSettingAllowed:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)copyCarrierBundleVersion:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)copyCarrierBookmarks:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)copyCarrierBundleLocation:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)copyCarrierBundleValueWithCountryBundleLookup:(CTXPCServiceSubscriptionContext *)arg1 keyHierarchy:(NSArray *)arg2 matchingInfo:(CTBundleMatchingInfo *)arg3 completion:(void (^)(NSObject *, NSError *))arg4;
- (void)copyCarrierBundleValueWithDefault:(CTXPCServiceSubscriptionContext *)arg1 keyHierarchy:(NSArray *)arg2 bundleType:(CTBundle *)arg3 completion:(void (^)(NSObject *, NSError *))arg4;
- (void)copyCarrierBundleValueWithDefault:(CTXPCServiceSubscriptionContext *)arg1 key:(NSString *)arg2 bundleType:(CTBundle *)arg3 completion:(void (^)(NSObject *, NSError *))arg4;
- (void)copyCarrierBundleValues:(CTXPCServiceSubscriptionContext *)arg1 keyHierarchies:(NSArray *)arg2 defaultValues:(NSArray *)arg3 bundleType:(CTBundle *)arg4 withFallbackBundleCheck:(_Bool)arg5 completion:(void (^)(NSArray *, NSError *))arg6;
- (void)copyCarrierBundleValues:(CTXPCServiceSubscriptionContext *)arg1 keys:(NSArray *)arg2 defaultValues:(NSArray *)arg3 bundleType:(CTBundle *)arg4 withFallbackBundleCheck:(_Bool)arg5 completion:(void (^)(NSArray *, NSError *))arg6;
- (void)copyCarrierBundleValue:(CTXPCServiceSubscriptionContext *)arg1 keyHierarchy:(NSArray *)arg2 bundleType:(CTBundle *)arg3 completion:(void (^)(NSObject *, NSError *))arg4;
- (void)copyCarrierBundleValue:(CTXPCServiceSubscriptionContext *)arg1 key:(NSString *)arg2 bundleType:(CTBundle *)arg3 completion:(void (^)(NSObject *, NSError *))arg4;
@end

