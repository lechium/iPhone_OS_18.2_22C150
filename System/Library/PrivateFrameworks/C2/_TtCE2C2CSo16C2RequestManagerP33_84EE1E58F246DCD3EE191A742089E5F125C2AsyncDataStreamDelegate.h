//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSHTTPURLResponse, NSURLRequest, NSURLResponse, NSURLSession, NSURLSessionDataTask, NSURLSessionTask;

@interface _TtCE2C2CSo16C2RequestManagerP33_84EE1E58F246DCD3EE191A742089E5F125C2AsyncDataStreamDelegate : NSObject
{
    MISSING_TYPE *responseConitnuation;	// 264384 = 0x408c0
    MISSING_TYPE *responseNeeded;	// 0 = 0x0
    MISSING_TYPE *bytesStreamContinuation;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000000003ad68
- (id)init;	// IMP=0x000000000003ad33
- (void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3;	// IMP=0x000000000003ad0b
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x000000000003ac50
- (void)URLSession:(NSURLSession *)arg1 dataTask:(NSURLSessionDataTask *)arg2 didReceiveResponse:(NSURLResponse *)arg3 completionHandler:(void (^)(long long))arg4;	// IMP=0x000000000003a8a2
- (void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(_Bool)arg3;	// IMP=0x000000000003a524
- (void)URLSession:(id)arg1 _taskIsWaitingForConnection:(id)arg2;	// IMP=0x000000000003a51e
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 _willSendRequestForEstablishedConnection:(NSURLRequest *)arg3 completionHandler:(void (^)(NSURLRequest *))arg4;	// IMP=0x000000000003a2bb
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x000000000003a1da
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;	// IMP=0x0000000000039fe7
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 needNewBodyStream:(void (^)(NSInputStream *))arg3;	// IMP=0x0000000000039e0e
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 willPerformHTTPRedirection:(NSHTTPURLResponse *)arg3 newRequest:(NSURLRequest *)arg4 completionHandler:(void (^)(NSURLRequest *))arg5;	// IMP=0x0000000000039939

@end
