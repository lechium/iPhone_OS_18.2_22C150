//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC31_AuthenticationServices_SwiftUI26WebAuthenticationOperation : NSOperation
{
    MISSING_TYPE *authenticationCompletionHandler;	// 8 = 0x8
    MISSING_TYPE *presentationAnchorProvider;	// 24 = 0x18
    MISSING_TYPE *requestContext;	// 0 = 0x0
    MISSING_TYPE *stateStorage;	// 0 = 0x0
    MISSING_TYPE *authenticationSession;	// 0 = 0x0
    MISSING_TYPE *presentationContextProvider;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000000000b080
- (id)init;	// IMP=0x000000000000b020
- (_Bool)isFinished;	// IMP=0x000000000000ab60
- (_Bool)isExecuting;	// IMP=0x000000000000aaa0
- (_Bool)isAsynchronous;	// IMP=0x000000000000aa90
- (void)cancel;	// IMP=0x000000000000aa60
- (void)start;	// IMP=0x000000000000a7d0

// Remaining properties
@property(nonatomic, readonly) _Bool asynchronous;
@property(nonatomic, readonly) _Bool executing;
@property(nonatomic, readonly) _Bool finished;

@end

