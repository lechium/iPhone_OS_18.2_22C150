//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC25LocalAuthenticationCoreUI21LACUIRatchetViewModel : NSObject
{
    MISSING_TYPE *configuration;	// 8 = 0x8
    MISSING_TYPE *isInvalidated;	// 25 = 0x19
    MISSING_TYPE *state;	// 3 = 0x3
    MISSING_TYPE *isRunning;	// 198 = 0xc6
    MISSING_TYPE *$__lazy_storage_$_stateSubject;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_learnMoreSubject;	// 0 = 0x0
    MISSING_TYPE *options;	// 0 = 0x0
    MISSING_TYPE *contextProvider;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_ratchetIdentifier;	// 0 = 0x0
    MISSING_TYPE *ratchetManager;	// 34603141 = 0x2100085
    MISSING_TYPE *$__lazy_storage_$_context;	// 0 = 0x0
    MISSING_TYPE *tasks;	// 0 = 0x0
    MISSING_TYPE *uiContinuation;	// 0 = 0x0
    MISSING_TYPE *expirationDate;	// 0 = 0x0
    MISSING_TYPE *gracePeriodExpirationDate;	// 0 = 0x0
    MISSING_TYPE *isStrictModeEnabled;	// 0 = 0x0
}

+ (id)mapError:(id)arg1;	// IMP=0x0010000000019aa0
- (void).cxx_destruct;	// IMP=0x00000000000170d0
- (id)init;	// IMP=0x0000000000019b50
- (void)stopWithReason:(id)arg1 invalidate:(_Bool)arg2;	// IMP=0x00000000000189d0
- (void)start;	// IMP=0x0000000000018840
- (void)dealloc;	// IMP=0x00000000000170b0
@property(nonatomic) _Bool isInvalidated; // @synthesize isInvalidated;
- (void)ratchetStateDidChange:(id)arg1;	// IMP=0x000000000001a730

@end

