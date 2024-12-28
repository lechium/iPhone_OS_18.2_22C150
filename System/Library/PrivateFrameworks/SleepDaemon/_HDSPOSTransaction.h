//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_source, OS_os_transaction;

__attribute__((visibility("hidden")))
@interface _HDSPOSTransaction : NSObject
{
    struct os_unfair_lock_s _transactionLock;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    unsigned long long _signpost_id;	// 24 = 0x18
    NSObject<OS_os_transaction> *_transaction;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_timer;	// 40 = 0x28
}

+ (id)assertionWithIdentifier:(id)arg1 timeout:(double)arg2;	// IMP=0x001000000005b70d
+ (id)assertionWithIdentifier:(id)arg1;	// IMP=0x001000000005b6f3
- (void).cxx_destruct;	// IMP=0x000000000005be5f
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) struct os_unfair_lock_s transactionLock; // @synthesize transactionLock=_transactionLock;
@property(readonly, nonatomic) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(readonly, nonatomic) unsigned long long signpost_id; // @synthesize signpost_id=_signpost_id;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000005be1c
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000005bdcc
- (id)succinctDescriptionBuilder;	// IMP=0x000000000005bd4f
- (id)succinctDescription;	// IMP=0x000000000005bcff
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000000005bcaf
- (void)_locked_release;	// IMP=0x000000000005bbca
- (void)releaseAssertion;	// IMP=0x000000000005bb68
- (void)_withLock:(CDUnknownBlockType)arg1;	// IMP=0x000000000005bb2a
- (id)initWithIdentifier:(id)arg1 timeout:(double)arg2;	// IMP=0x000000000005b770

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
