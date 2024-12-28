//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAuthorizationUserResponse, AKClient, AKCredentialRequestContext, NSDate, NSString;

@interface AKAuthorizationSession : NSObject
{
    NSString *_sessionID;	// 8 = 0x8
    AKCredentialRequestContext *_context;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
    NSString *;	// 32 = 0x20
    NSDate *_requestTime;	// 40 = 0x28
    AKAuthorizationUserResponse *_userResponse;	// 48 = 0x30
    AKClient *_client;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000003b28a
@property(retain, nonatomic) AKClient *client; // @synthesize client=_client;
@property(retain, nonatomic) AKAuthorizationUserResponse *userResponse; // @synthesize userResponse=_userResponse;
@property(retain, nonatomic) NSDate *requestTime; // @synthesize requestTime=_requestTime;
@property(retain, nonatomic) NSString *clientBundleID; // @synthesize clientBundleID=_clientBundleID;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) AKCredentialRequestContext *context; // @synthesize context=_context;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (id)description;	// IMP=0x001000000003b152

@end
