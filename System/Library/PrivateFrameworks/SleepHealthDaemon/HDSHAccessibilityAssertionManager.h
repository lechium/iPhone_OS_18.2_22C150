//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDAssertion, HDProfile, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HDSHAccessibilityAssertionManager : NSObject
{
    HDAssertion *_accessibilityAssertion;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    HDProfile *_profile;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000065d8
- (void)dealloc;	// IMP=0x000000000000651d
- (void)_queue_takeAccessibilityAssertion;	// IMP=0x00000000000062ee
- (void)contentProtectionStateChanged:(long long)arg1 previousState:(long long)arg2;	// IMP=0x00000000000061ed
@property(readonly, nonatomic) HDAssertion *accessibilityAssertion;
- (void)invalidateAccessibilityAssertion;	// IMP=0x0000000000005f63
- (void)stopObservingContentProtectionState;	// IMP=0x0000000000005e24
- (void)beginObservingContentProtectionState;	// IMP=0x0000000000005cde
- (void)_restoreContentProtectionObservingState;	// IMP=0x0000000000005b95
@property(nonatomic) _Bool shouldBeObservingContentProtectionState;
- (void)profileDidBecomeReady:(id)arg1;	// IMP=0x0000000000005764
- (id)initWithProfile:(id)arg1;	// IMP=0x00000000000056a6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
