//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ASDBetaAppFeedback, ASDBetaAppLaunchInfo, ASDBetaAppVersion, NSDictionary, NSString, NSURL;

@protocol ASDTestFlightFeedbackServiceProtocol
- (void)updateTestNotes:(NSDictionary *)arg1 forVersion:(ASDBetaAppVersion *)arg2 withCompletionHandler:(void (^)(NSError *))arg3;
- (void)submitFeedback:(ASDBetaAppFeedback *)arg1 bundleURL:(NSURL *)arg2 withCompletionHandler:(void (^)(NSError *))arg3;
- (void)submitFeedback:(ASDBetaAppFeedback *)arg1 withCompletionHandler:(void (^)(NSError *))arg2;
- (void)setLaunchInfo:(ASDBetaAppLaunchInfo *)arg1 withCompletionHandler:(void (^)(NSError *))arg2;
- (void)setLaunchScreenEnabled:(_Bool)arg1 forVersion:(ASDBetaAppVersion *)arg2 withCompletionHandler:(void (^)(NSError *))arg3;
- (void)setFeedbackEnabled:(_Bool)arg1 forVersion:(ASDBetaAppVersion *)arg2 withCompletionHandler:(void (^)(NSError *))arg3;
- (void)isLaunchScreenEnabledForBundleURL:(NSURL *)arg1 withCompletionHandler:(void (^)(_Bool))arg2;
- (void)isLaunchScreenEnabledForBundleID:(NSString *)arg1 withCompletionHandler:(void (^)(_Bool))arg2;
- (void)isFeedbackEnabledForBundleURL:(NSURL *)arg1 withCompletionHandler:(void (^)(_Bool))arg2;
- (void)isFeedbackEnabledForBundleID:(NSString *)arg1 withCompletionHandler:(void (^)(_Bool))arg2;
- (void)getLaunchInfoForVersion:(ASDBetaAppVersion *)arg1 withCompletionHandler:(void (^)(ASDBetaAppLaunchInfo *, NSError *))arg2;
- (void)getLaunchInfoForBundleURL:(NSURL *)arg1 withCompletionHandler:(void (^)(ASDBetaAppLaunchInfo *, NSError *))arg2;
- (void)getLaunchInfoForBundleID:(NSString *)arg1 withCompletionHandler:(void (^)(ASDBetaAppLaunchInfo *, NSError *))arg2;
- (void)getFeedbackMetadataForBundleURL:(NSURL *)arg1 withCompletionHandler:(void (^)(ASDBetaAppFeedbackMetadata *, NSError *))arg2;
- (void)getFeedbackMetadataForBundleID:(NSString *)arg1 withCompletionHandler:(void (^)(ASDBetaAppFeedbackMetadata *, NSError *))arg2;
- (void)getEmailAddressForBundleURL:(NSURL *)arg1 withCompletionHandler:(void (^)(NSString *))arg2;
- (void)getEmailAddressForBundleID:(NSString *)arg1 withCompletionHandler:(void (^)(NSString *))arg2;
- (void)getDisplayNamesForBundleURL:(NSURL *)arg1 withCompletionHandler:(void (^)(ASDBetaAppDisplayNames *))arg2;
- (void)getDisplayNamesForBundleID:(NSString *)arg1 withCompletionHandler:(void (^)(ASDBetaAppDisplayNames *))arg2;
@end
