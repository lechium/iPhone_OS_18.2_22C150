//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CFNetwork/NSObject-Protocol.h>

@class NSURLRequest, NSURLSession, NSURLSessionConfiguration, NSURLSessionDataTask, NSURLSessionUploadTask;

@protocol __NSURLSessionTaskGroupForConfiguration <NSObject>
@property(readonly) __weak NSURLSession *_groupSession;
@property(readonly) __weak NSURLSessionConfiguration *_groupConfiguration;
- (NSURLSessionUploadTask *)uploadTaskWithStreamedRequest:(NSURLRequest *)arg1;
- (NSURLSessionDataTask *)dataTaskWithRequest:(NSURLRequest *)arg1 completionHandler:(void (^)(NSData *, NSURLResponse *, NSError *))arg2;
- (NSURLSessionDataTask *)dataTaskWithRequest:(NSURLRequest *)arg1;
@end

