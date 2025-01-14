//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface APSDefaultConnectionRetryStateManager : NSObject
{
    MISSING_TYPE *defaults;	// 8 = 0x8
    MISSING_TYPE *currentPhase;	// 16 = 0x10
    MISSING_TYPE *remainingPhases;	// 48 = 0x30
    MISSING_TYPE *timeRemainingInPhase;	// 56 = 0x38
    MISSING_TYPE *remainingPresences;	// 72 = 0x48
    MISSING_TYPE *retryPhases;	// 88 = 0x58
    MISSING_TYPE *connectionAttemptTime;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00400000000cf3c0
- (void)notePresenceFailure;	// IMP=0x00100000000cf180
- (void)notePresenceSuccess;	// IMP=0x00100000000cefb0
- (void)noteConnectionAttemptFailed;	// IMP=0x00100000000ceea0
- (void)noteConnectionEstablished;	// IMP=0x00100000000ced90
- (void)noteConnectionAttemptStart;	// IMP=0x00100000000ced20
- (id)init;	// IMP=0x00100000000ce370
@property(nonatomic, readonly) _Bool shouldDelayNextReconnect;
@property(nonatomic, readonly) double currentDelay;

@end

