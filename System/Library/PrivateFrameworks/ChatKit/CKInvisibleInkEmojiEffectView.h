//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKInvisibleInkEffectView.h"

@class CAEmitterLayer, CALayer, NSString, UITextView;

__attribute__((visibility("hidden")))
@interface CKInvisibleInkEmojiEffectView : CKInvisibleInkEffectView
{
    _Bool _blendingEnabled;	// 8 = 0x8
    UITextView *_textView;	// 16 = 0x10
    CALayer *_emojiContainerLayer;	// 24 = 0x18
    CALayer *_emojiLayer;	// 32 = 0x20
    CAEmitterLayer *_drawEmitterLayer;	// 40 = 0x28
    CALayer *_dustContainerLayer;	// 48 = 0x30
    CAEmitterLayer *_dustEmitterLayer;	// 56 = 0x38
    CALayer *_blurredEmojiLayer;	// 64 = 0x40
    CALayer *_maskLayer;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000001649b
@property(nonatomic) _Bool blendingEnabled; // @synthesize blendingEnabled=_blendingEnabled;
@property(retain, nonatomic) CALayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) CALayer *blurredEmojiLayer; // @synthesize blurredEmojiLayer=_blurredEmojiLayer;
@property(retain, nonatomic) CAEmitterLayer *dustEmitterLayer; // @synthesize dustEmitterLayer=_dustEmitterLayer;
@property(retain, nonatomic) CALayer *dustContainerLayer; // @synthesize dustContainerLayer=_dustContainerLayer;
@property(retain, nonatomic) CAEmitterLayer *drawEmitterLayer; // @synthesize drawEmitterLayer=_drawEmitterLayer;
@property(retain, nonatomic) CALayer *emojiLayer; // @synthesize emojiLayer=_emojiLayer;
@property(retain, nonatomic) CALayer *emojiContainerLayer; // @synthesize emojiContainerLayer=_emojiContainerLayer;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (void)setSuspended:(_Bool)arg1;	// IMP=0x0000000000016267
- (void)setPaused:(_Bool)arg1;	// IMP=0x0000000000015ef5
- (void)endEmittersForTouchesCancelled:(id)arg1;	// IMP=0x0000000000015ee3
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000015ed1
- (void)endEmittersForTouchesEnded:(id)arg1;	// IMP=0x0000000000015ebf
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000015ead
- (void)moveEmittersForTouchesMoved:(id)arg1;	// IMP=0x0000000000015e22
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000015e10
- (void)moveEmittersForTouchesBegan:(id)arg1;	// IMP=0x0000000000015c94
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000015c82
- (void)endTouches;	// IMP=0x0000000000015c19
- (void)endDustEmitterLayerFingerEffects;	// IMP=0x0000000000015b7c
- (void)moveEmittersWithTouches:(id)arg1;	// IMP=0x00000000000158bb
- (void)reset;	// IMP=0x000000000001582c
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x0000000000015814
- (void)endDrawEmitterEffects;	// IMP=0x0000000000015709
- (void)disableBlending;	// IMP=0x0000000000015608
- (void)enableBlending;	// IMP=0x00000000000154e6
- (void)detachFromBalloonView;	// IMP=0x000000000001545a
- (void)attachToBalloonView:(id)arg1;	// IMP=0x00000000000153b2
- (void)displayLayer:(id)arg1;	// IMP=0x0000000000014c3a
- (void)layoutSubviews;	// IMP=0x000000000001471b
- (void)createDrawEmitter;	// IMP=0x00000000000141cc
- (void)createDustEmitter;	// IMP=0x0000000000013ce6
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000135fd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
