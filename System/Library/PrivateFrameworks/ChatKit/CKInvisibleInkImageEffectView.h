//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKInvisibleInkEffectView.h"

@class CAEmitterLayer, CALayer, NSString;

__attribute__((visibility("hidden")))
@interface CKInvisibleInkImageEffectView : CKInvisibleInkEffectView
{
    CALayer *_blurredImageLayer;	// 8 = 0x8
    CALayer *_blurredImageContainerLayer;	// 16 = 0x10
    CALayer *_drawEmitterContainerLayer;	// 24 = 0x18
    CAEmitterLayer *_drawEmitterLayer;	// 32 = 0x20
    CALayer *_dustEmitterContainerLayer;	// 40 = 0x28
    CAEmitterLayer *_dustEmitterLayer;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000005efc45
@property(retain, nonatomic) CAEmitterLayer *dustEmitterLayer; // @synthesize dustEmitterLayer=_dustEmitterLayer;
@property(retain, nonatomic) CALayer *dustEmitterContainerLayer; // @synthesize dustEmitterContainerLayer=_dustEmitterContainerLayer;
@property(retain, nonatomic) CAEmitterLayer *drawEmitterLayer; // @synthesize drawEmitterLayer=_drawEmitterLayer;
@property(retain, nonatomic) CALayer *drawEmitterContainerLayer; // @synthesize drawEmitterContainerLayer=_drawEmitterContainerLayer;
@property(retain, nonatomic) CALayer *blurredImageContainerLayer; // @synthesize blurredImageContainerLayer=_blurredImageContainerLayer;
@property(retain, nonatomic) CALayer *blurredImageLayer; // @synthesize blurredImageLayer=_blurredImageLayer;
- (void)setPaused:(_Bool)arg1;	// IMP=0x00000000005ef988
- (void)setSuspended:(_Bool)arg1;	// IMP=0x00000000005ef2a8
- (void)reset;	// IMP=0x00000000005ef0c3
- (void)endEmittersForTouchesCancelled:(id)arg1;	// IMP=0x00000000005ef05a
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000005ef048
- (void)endEmittersForTouchesEnded:(id)arg1;	// IMP=0x00000000005eefdf
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000005eefcd
- (void)moveEmittersForTouchesMoved:(id)arg1;	// IMP=0x00000000005eef42
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000005eeeca
- (void)moveEmittersForTouchesBegan:(id)arg1;	// IMP=0x00000000005eed61
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000005eed4f
- (void)moveEmittersWithTouches:(id)arg1;	// IMP=0x00000000005eea78
- (void)endDustEmitterFingerEffects;	// IMP=0x00000000005ee9c9
- (void)setRandomAttractorsEnabled:(_Bool)arg1;	// IMP=0x00000000005ee899
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x00000000005ee881
- (void)endDrawEmitterEffects;	// IMP=0x00000000005ee797
- (void)disableBlending;	// IMP=0x00000000005ee665
- (void)enableBlending;	// IMP=0x00000000005ee540
- (void)layoutSubviews;	// IMP=0x00000000005ee0a2
- (void)setImage:(id)arg1;	// IMP=0x00000000005edfa9
- (void)addDustRandomEmitterAnimationsWithSize:(struct CGSize)arg1;	// IMP=0x00000000005eda89
- (void)setupDustEmitter;	// IMP=0x00000000005ed2ae
- (void)setupDrawEmitter;	// IMP=0x00000000005ecc7a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000005ec7eb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

