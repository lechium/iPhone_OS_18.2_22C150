//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSInvocation.h>

@interface NSInvocation (GKProxyHelpers)
+ (id)_gkInvocationWithBlock:(id)arg1;	// IMP=0x00500000000b7154
- (void)_gkInvokeOnceWithTarget:(id)arg1;	// IMP=0x00100000000b7086
- (void)_gkInvokeOnce;	// IMP=0x00100000000b7058
- (void)_gkClearTarget;	// IMP=0x00100000000b7020
- (void)_gkPrepareForCallWithError:(id)arg1;	// IMP=0x00100000000b6f5f
- (void)_gkCallbackWithError:(id)arg1 queue:(id)arg2;	// IMP=0x00100000000b6ebb
- (id)_gkReplyHandlerInvocation;	// IMP=0x00100000000b6e20
- (void)_gkClearCopiedArguments;	// IMP=0x00100000000b6c79
- (void)_gkCopyArguments;	// IMP=0x00100000000b6a1b
- (_Bool)_gkHasReplyBlock;	// IMP=0x00100000000b71b9
@end

