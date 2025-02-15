//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSData, NSError, NSHTTPURLResponse, NSString, NSURL, NSURLAuthenticationChallenge, NSURLRequest, NSURLResponse, WKDownload;

@protocol WKDownloadDelegate <NSObject>
- (void)download:(WKDownload *)arg1 decideDestinationUsingResponse:(NSURLResponse *)arg2 suggestedFilename:(NSString *)arg3 completionHandler:(void (^)(NSURL *))arg4;

@optional
- (void)download:(WKDownload *)arg1 didReceiveFinalURL:(NSURL *)arg2;
- (void)download:(WKDownload *)arg1 didReceivePlaceholderURL:(NSURL *)arg2 completionHandler:(void (^)(void))arg3;
- (void)download:(WKDownload *)arg1 decidePlaceholderPolicy:(void (^)(long long, NSURL *))arg2;
- (void)download:(WKDownload *)arg1 didFailWithError:(NSError *)arg2 resumeData:(NSData *)arg3;
- (void)downloadDidFinish:(WKDownload *)arg1;
- (void)download:(WKDownload *)arg1 didReceiveAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2 completionHandler:(void (^)(long long, NSURLCredential *))arg3;
- (void)download:(WKDownload *)arg1 willPerformHTTPRedirection:(NSHTTPURLResponse *)arg2 newRequest:(NSURLRequest *)arg3 decisionHandler:(void (^)(long long))arg4;
@end

