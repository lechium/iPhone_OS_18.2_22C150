//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC6HomeUI17OAuthLoginManager : NSObject
{
    MISSING_TYPE *authURL;	// 0 = 0x0
    MISSING_TYPE *presentingContext;	// 0 = 0x0
    MISSING_TYPE *authSession;	// 0 = 0x0
    MISSING_TYPE *uuid;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000000107010
- (id)init;	// IMP=0x0000000000106fb0
- (id)processRedirectURL:(id)arg1;	// IMP=0x0000000000106360
- (void)startAuthenticationWithPresentationContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000106240
- (void)startSessionWithAuthURL:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000105470
- (id)initWithAuthURL:(id)arg1 presentingContext:(id)arg2;	// IMP=0x00000000001053a0

@end

