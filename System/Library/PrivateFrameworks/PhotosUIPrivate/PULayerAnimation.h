//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUAnimationGroup.h"

@class CAAnimation, CALayer, NSString;

__attribute__((visibility("hidden")))
@interface PULayerAnimation : PUAnimationGroup
{
    float _speed;	// 8 = 0x8
    double _timeOffset;	// 16 = 0x10
    double _beginTime;	// 24 = 0x18
    _Bool _isAnimationRunning;	// 32 = 0x20
    CALayer *_layer;	// 40 = 0x28
    NSString *_key;	// 48 = 0x30
    CAAnimation *__animation;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000036dbee
@property(retain, nonatomic, setter=_setAnimation:) CAAnimation *_animation; // @synthesize _animation=__animation;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, nonatomic) CALayer *layer; // @synthesize layer=_layer;
@property(readonly, copy) NSString *description;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x000000000036da4a
- (void)animationDidStart:(id)arg1;	// IMP=0x000000000036d9e6
- (void)_updateLayerAnimation;	// IMP=0x000000000036d88f
- (void)finishImmediately;	// IMP=0x000000000036d7ae
- (void)setSpeed:(float)arg1 timeOffset:(double)arg2 beginTime:(double)arg3;	// IMP=0x000000000036d605
- (_Bool)isReadyToComplete;	// IMP=0x000000000036d4ff
- (id)initWithLayer:(id)arg1 key:(id)arg2;	// IMP=0x000000000036d2b5
- (id)init;	// IMP=0x000000000036d29f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

