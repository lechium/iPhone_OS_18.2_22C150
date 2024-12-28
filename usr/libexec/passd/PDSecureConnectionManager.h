//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHTTPURLResponse, NSMutableData, NSString, NSURLRequest, NSURLSession, NSURLSessionTask;

@interface PDSecureConnectionManager : NSObject
{
    NSURLSession *_urlSession;	// 8 = 0x8
    NSURLSessionTask *_task;	// 16 = 0x10
    NSMutableData *_data;	// 24 = 0x18
    NSHTTPURLResponse *_response;	// 32 = 0x20
    _Bool _started;	// 40 = 0x28
    _Bool _canceled;	// 41 = 0x29
    CDUnknownBlockType _successHandler;	// 48 = 0x30
    CDUnknownBlockType _failureHandler;	// 56 = 0x38
    NSURLRequest *_request;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000001fa3e3
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(copy) CDUnknownBlockType failureHandler; // @synthesize failureHandler=_failureHandler;
@property(copy) CDUnknownBlockType successHandler; // @synthesize successHandler=_successHandler;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x00100000001f9d25
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000001f9bba
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x00100000001f9b92
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;	// IMP=0x00100000001f9b00
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001f9894
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;	// IMP=0x00100000001f97dd
- (void)_sendFailure:(id)arg1;	// IMP=0x00100000001f96d5
- (void)_sendSuccess;	// IMP=0x00100000001f9609
- (void)cancel;	// IMP=0x00100000001f95e7
- (void)start;	// IMP=0x00100000001f94ab

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
