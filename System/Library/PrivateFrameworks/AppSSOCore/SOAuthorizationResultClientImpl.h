//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SOAuthorizationResultClientImpl : NSObject
{
    CDUnknownBlockType _authorizationHandleResponseCompletion;	// 8 = 0x8
    CDUnknownBlockType _authorizationHandleCredentialCompletion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001084a
@property(copy) CDUnknownBlockType authorizationHandleCredentialCompletion; // @synthesize authorizationHandleCredentialCompletion=_authorizationHandleCredentialCompletion;
@property(copy) CDUnknownBlockType authorizationHandleResponseCompletion; // @synthesize authorizationHandleResponseCompletion=_authorizationHandleResponseCompletion;
- (void)authorization:(id)arg1 didCompleteWithHTTPAuthorizationHeaders:(id)arg2;	// IMP=0x00000000000105f7
- (void)authorization:(id)arg1 didCompleteWithHTTPResponse:(id)arg2 httpBody:(id)arg3;	// IMP=0x00000000000103a4
- (void)authorization:(id)arg1 didCompleteWithError:(id)arg2;	// IMP=0x00000000000101e8
- (void)authorizationDidComplete:(id)arg1;	// IMP=0x00000000000100e3
- (void)authorizationDidCancel:(id)arg1;	// IMP=0x000000000000ffde
- (void)authorizationDidNotHandle:(id)arg1;	// IMP=0x000000000000fea9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
