//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSAuthenticateRequest, AMSDialogRequest, AMSEngagementRequest, AMSURLSession, MISSING_TYPE, NSURLSessionTask;

@interface _TtC9storekitd7Request : NSObject
{
    MISSING_TYPE *client;	// 8 = 0x8
    MISSING_TYPE *bagKey;	// 16 = 0x10
    MISSING_TYPE *dialogContext;	// 24 = 0x18
    MISSING_TYPE *logKey;	// 32 = 0x20
    MISSING_TYPE *method;	// 48 = 0x30
    MISSING_TYPE *parameters;	// 56 = 0x38
    MISSING_TYPE *accountRequirement;	// 64 = 0x40
    MISSING_TYPE *useBiometrics;	// 65 = 0x41
}

- (void).cxx_destruct;	// IMP=0x0040000000177c6a
- (id)init;	// IMP=0x0010000000177c34
- (void)AMSURLSession:(AMSURLSession *)arg1 task:(NSURLSessionTask *)arg2 handleEngagementRequest:(AMSEngagementRequest *)arg3 completion:(void (^)(AMSEngagementResult *, NSError *))arg4;	// IMP=0x0010000000177aac
- (void)AMSURLSession:(AMSURLSession *)arg1 task:(NSURLSessionTask *)arg2 handleDialogRequest:(AMSDialogRequest *)arg3 completion:(void (^)(AMSDialogResult *, NSError *))arg4;	// IMP=0x0010000000176ec3
- (void)AMSURLSession:(AMSURLSession *)arg1 task:(NSURLSessionTask *)arg2 handleAuthenticateRequest:(AMSAuthenticateRequest *)arg3 completion:(void (^)(AMSAuthenticateResult *, NSError *))arg4;	// IMP=0x001000000017641d

@end
