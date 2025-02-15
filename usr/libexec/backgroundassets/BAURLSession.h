//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSLock, NSString, NSURLRequest, NSURLSession, NSURLSessionDownloadTask, _BAURLSessionDelegate;

@interface BAURLSession : NSObject
{
    CDUnknownBlockType _challengeBlock;	// 8 = 0x8
    CDUnknownBlockType _redirectResponseBlock;	// 16 = 0x10
    _Bool _useUniqueFileName;	// 24 = 0x18
    _Bool _inBackground;	// 25 = 0x19
    double _initialConnectivityTimeout;	// 32 = 0x20
    NSLock *_connectionLock;	// 40 = 0x28
    NSURLSession *_urlSession;	// 48 = 0x30
    NSURLSessionDownloadTask *_downloadTask;	// 56 = 0x38
    _BAURLSessionDelegate *_baURLSessionDelegate;	// 64 = 0x40
    NSData *_resumeData;	// 72 = 0x48
    NSURLRequest *_urlRequest;	// 80 = 0x50
    NSString *_destinationDirectory;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00200000000127c9
@property _Bool inBackground; // @synthesize inBackground=_inBackground;
@property(retain, nonatomic) NSString *destinationDirectory; // @synthesize destinationDirectory=_destinationDirectory;
@property(retain, nonatomic) NSURLRequest *urlRequest; // @synthesize urlRequest=_urlRequest;
@property(retain) NSData *resumeData; // @synthesize resumeData=_resumeData;
@property(retain) _BAURLSessionDelegate *baURLSessionDelegate; // @synthesize baURLSessionDelegate=_baURLSessionDelegate;
@property(retain) NSURLSessionDownloadTask *downloadTask; // @synthesize downloadTask=_downloadTask;
@property(retain) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(retain) NSLock *connectionLock; // @synthesize connectionLock=_connectionLock;
@property(nonatomic) double initialConnectivityTimeout; // @synthesize initialConnectivityTimeout=_initialConnectivityTimeout;
@property(nonatomic) _Bool useUniqueFileName; // @synthesize useUniqueFileName=_useUniqueFileName;
- (void)startAsyncDownloadNotifyingOnQueue:(id)arg1 sessionConfiguration:(id)arg2 bytesReceivedHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000011d04
- (void)cancel;	// IMP=0x0010000000011b2f
- (void)invalidate;	// IMP=0x0010000000011a83
- (id)_initWithURLRequest:(id)arg1 withResumeData:(id)arg2 withDestinationDirectory:(id)arg3 inBackground:(_Bool)arg4 withAuthenticationHandler:(CDUnknownBlockType)arg5 withRedirectResponseHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000001162f
- (id)initWithResumeData:(id)arg1 withDestinationDirectory:(id)arg2 inBackground:(_Bool)arg3 withAuthenticationHandler:(CDUnknownBlockType)arg4 withRedirectResponseHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000011606
- (id)initWithURLRequest:(id)arg1 withDestinationDirectory:(id)arg2 inBackground:(_Bool)arg3 withAuthenticationHandler:(CDUnknownBlockType)arg4 withRedirectResponseHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000115e0
- (id)initWithURLRequest:(id)arg1 withDestinationDirectory:(id)arg2 inBackground:(_Bool)arg3 withAuthenticationHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000115bd
- (id)initWithURLRequest:(id)arg1 withDestinationDirectory:(id)arg2 inBackground:(_Bool)arg3;	// IMP=0x0010000000011597
- (id)init;	// IMP=0x0010000000011589

@end

