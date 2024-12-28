//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDAV/NSObject-Protocol.h>

@class AKAppleIDSession, CoreDAVTask, NSData, NSDictionary, NSError, NSObject, NSSet, NSString, NSURL, NSURLAuthenticationChallenge, NSURLProtectionSpace, NSURLSessionTask;
@protocol CoreDAVClientCertificateInfoProvider, CoreDAVOAuthInfoProvider, OS_dispatch_queue;

@protocol CoreDAVAccountInfoProvider <NSObject>
- (_Bool)shouldFailAllTasks;
- (_Bool)handleCertificateError:(NSError *)arg1;
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(void (^)(int))arg1;
- (NSString *)userAgentHeader;
- (NSSet *)serverComplianceClasses;
- (NSString *)accountID;
- (NSURL *)principalURL;
- (NSData *)identityPersist;
- (NSString *)password;
- (NSString *)user;
- (NSString *)serverRoot;
- (long long)port;
- (NSString *)host;
- (NSString *)scheme;

@optional
- (AKAppleIDSession *)getAppleIDSession;
- (void)webLoginRequestedAtURL:(NSURL *)arg1 reasonString:(NSString *)arg2 inQueue:(NSObject<OS_dispatch_queue> *)arg3 completionBlock:(void (^)(int))arg4;
- (NSString *)clientToken;
- (void)clientTokenRequestedByServer;
- (_Bool)shouldCompressRequests;
- (_Bool)shouldUseOpportunisticSockets;
- (struct __CFURLStorageSession *)copyStorageSession;
- (void)noteTimeSpentInNetworking:(double)arg1;
- (void)noteFailedProtocolRequest;
- (void)noteFailedNetworkRequest;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(long long)arg1;
- (void)noteTimeSpentInNetworking:(double)arg1 forTask:(CoreDAVTask *)arg2;
- (void)noteFailedProtocolRequestForTask:(CoreDAVTask *)arg1;
- (void)noteFailedNetworkRequestForTask:(CoreDAVTask *)arg1;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(long long)arg1 forTask:(CoreDAVTask *)arg2;
- (_Bool)renewCredential;
- (_Bool)shouldTryRenewingCredential;
- (_Bool)shouldTurnModalOnBadPassword;
- (_Bool)shouldSendClientInfoHeaderForURL:(NSURL *)arg1;
- (_Bool)shouldHandleHTTPCookiesForURL:(NSURL *)arg1;
- (void)noteHomeSetOnDifferentHost:(NSURL *)arg1;
- (_Bool)handleShouldUseCredentialStorage;
- (_Bool)shouldRetryUnauthorizedTask:(NSURLSessionTask *)arg1;
- (_Bool)handleAuthenticateAgainstProtectionSpace:(NSURLProtectionSpace *)arg1;
- (_Bool)handleTrustChallenge:(NSURLAuthenticationChallenge *)arg1 completionHandler:(void (^)(long long, NSURLCredential *))arg2;
- (id <CoreDAVOAuthInfoProvider>)oauthInfoProvider;
- (id <CoreDAVClientCertificateInfoProvider>)clientCertificateInfoProvider;
- (NSDictionary *)customConnectionProperties;
- (NSDictionary *)additionalHeaderValues;
@end
