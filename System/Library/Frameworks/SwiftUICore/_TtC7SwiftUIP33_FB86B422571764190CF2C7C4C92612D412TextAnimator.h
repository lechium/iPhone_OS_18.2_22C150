//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDictionary, NSString;
@protocol _NSTextAnimation, _NSTextAnimatorStateSnapshot;

@interface _TtC7SwiftUIP33_FB86B422571764190CF2C7C4C92612D412TextAnimator : NSObject
{
    MISSING_TYPE *controller;	// 8 = 0x8
    MISSING_TYPE *textAnimation;	// 16 = 0x10
    MISSING_TYPE *variant;	// 24 = 0x18
    MISSING_TYPE *notify;	// 32 = 0x20
    MISSING_TYPE *_phase;	// 48 = 0x30
    MISSING_TYPE *_configuration;	// 64 = 0x40
    MISSING_TYPE *state;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000002300f0
- (id)init;	// IMP=0x0000000000230090
@property(nonatomic) long long state; // @synthesize state;
- (void)cancel;	// IMP=0x0000000000231140
@property(nonatomic, readonly) double nextAnimationTriggerDelay;
@property(nonatomic, retain) id <_NSTextAnimatorStateSnapshot> stateSnapshot;
@property(nonatomic, copy) NSDictionary *configuration;
@property(nonatomic, readonly) NSString *fromPhase;
@property(nonatomic, copy) NSString *toPhase;
@property(nonatomic, readonly) double duration;
@property(nonatomic, readonly) id <_NSTextAnimation> animation;
- (void)invalidate;	// IMP=0x0000000000230730
- (void)resume;	// IMP=0x0000000000230690
- (void)pause;	// IMP=0x00000000002305b0
- (void)startWithDuration:(double)arg1;	// IMP=0x00000000002304d0
- (void)start;	// IMP=0x0000000000230320

@end
