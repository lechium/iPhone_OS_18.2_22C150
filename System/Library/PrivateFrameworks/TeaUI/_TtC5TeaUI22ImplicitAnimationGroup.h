//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC5TeaUI22ImplicitAnimationGroup : NSObject
{
    MISSING_TYPE *animators;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000158b0d
- (id)init;	// IMP=0x0000000000158ad7
- (void)finishAnimationAtPosition:(long long)arg1;	// IMP=0x0000000000159489
- (void)stopAnimation:(_Bool)arg1;	// IMP=0x0000000000159383
- (void)pauseAnimation;	// IMP=0x0000000000159261
- (void)startAnimationAfterDelay:(double)arg1;	// IMP=0x000000000015914c
- (void)startAnimation;	// IMP=0x0000000000159033
@property(nonatomic) double fractionComplete;
@property(nonatomic) _Bool reversed;
- (_Bool)isReversed;	// IMP=0x0000000000158d27
- (_Bool)isRunning;	// IMP=0x0000000000158c17
@property(nonatomic, readonly) long long state;
- (void)continueAnimationWithTimingParameters:(id)arg1 durationFactor:(double)arg2;	// IMP=0x0000000000159a35
- (void)addCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000015997c

// Remaining properties
@property(nonatomic, readonly) _Bool running;

@end

