//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC12FMNetworking13FMNHttpClient : NSObject
{
    MISSING_TYPE *authenticationChallengeHandler;	// 8 = 0x8
    MISSING_TYPE *bundleIdentifierFallback;	// 24 = 0x18
    MISSING_TYPE *httpSuccessCodeMin;	// 40 = 0x28
    MISSING_TYPE *httpSuccessCodeMax;	// 48 = 0x30
    MISSING_TYPE *credential;	// 56 = 0x38
    MISSING_TYPE *urlSessionFactory;	// 96 = 0x60
    MISSING_TYPE *statusCodeHandlers;	// 104 = 0x68
    MISSING_TYPE *statusCodeHandlerQueue;	// 112 = 0x70
    MISSING_TYPE *session;	// 120 = 0x78
    MISSING_TYPE *sessionLock;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x00000000000253a0
- (id)init;	// IMP=0x00000000000280b0
- (void)dealloc;	// IMP=0x0000000000025310
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000283d0

@end
