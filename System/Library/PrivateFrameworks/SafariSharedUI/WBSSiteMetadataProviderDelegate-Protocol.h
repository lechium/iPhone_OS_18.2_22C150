//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariSharedUI/NSObject-Protocol.h>

@class NSObject, NSSet, WBSSiteMetadataRequest, WBSSiteMetadataResponse, WKWebView, WKWebViewConfiguration;
@protocol NSFastEnumeration, OS_dispatch_queue, WBSSiteMetadataProvider;

@protocol WBSSiteMetadataProviderDelegate <NSObject>
- (void)siteMetadataProvider:(id <WBSSiteMetadataProvider>)arg1 didFinishUsingWebView:(WKWebView *)arg2;
- (void)siteMetadataProvider:(id <WBSSiteMetadataProvider>)arg1 getWebViewOfSize:(struct CGSize)arg2 withConfiguration:(WKWebViewConfiguration *)arg3 completionHandler:(void (^)(WKWebView *))arg4;
- (void)siteMetadataProvider:(id <WBSSiteMetadataProvider>)arg1 cacheData:(id)arg2 forRequest:(WBSSiteMetadataRequest *)arg3;
- (void)siteMetadataProvider:(id <WBSSiteMetadataProvider>)arg1 didFinishCachingDataWithToken:(id)arg2;
- (void)siteMetadataProvider:(id <WBSSiteMetadataProvider>)arg1 cancelRequestsWithTokens:(id <NSFastEnumeration>)arg2;
- (id)siteMetadataProvider:(id <WBSSiteMetadataProvider>)arg1 registerOneTimeSubrequest:(WBSSiteMetadataRequest *)arg2 forRequests:(NSSet *)arg3 queue:(NSObject<OS_dispatch_queue> *)arg4 responseHandler:(void (^)(WBSSiteMetadataResponse *))arg5;
- (id)siteMetadataProvider:(id <WBSSiteMetadataProvider>)arg1 registerSubrequest:(WBSSiteMetadataRequest *)arg2 forRequests:(NSSet *)arg3 queue:(NSObject<OS_dispatch_queue> *)arg4 responseHandler:(void (^)(WBSSiteMetadataResponse *))arg5;
- (void)siteMetadataProvider:(id <WBSSiteMetadataProvider>)arg1 didReceiveResponse:(WBSSiteMetadataResponse *)arg2 forRequest:(WBSSiteMetadataRequest *)arg3 beginOperationUsingBlock:(NSOperation * (^)(void))arg4;
- (void)siteMetadataProvider:(id <WBSSiteMetadataProvider>)arg1 didReceiveResponse:(WBSSiteMetadataResponse *)arg2 ofType:(long long)arg3 didReceiveNewData:(_Bool)arg4 forRequests:(NSSet *)arg5;
- (void)siteMetadataProvider:(id <WBSSiteMetadataProvider>)arg1 didReceiveResponse:(WBSSiteMetadataResponse *)arg2 ofType:(long long)arg3 didReceiveNewData:(_Bool)arg4 forRequest:(WBSSiteMetadataRequest *)arg5;
@end
