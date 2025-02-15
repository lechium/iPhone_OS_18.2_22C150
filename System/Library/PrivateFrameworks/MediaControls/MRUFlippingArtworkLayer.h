//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class CAFilter, CATransformLayer;

__attribute__((visibility("hidden")))
@interface MRUFlippingArtworkLayer : CALayer
{
    _Bool _playing;	// 8 = 0x8
    _Bool _dimsWhenPaused;	// 9 = 0x9
    double _artworkCornerRadius;	// 16 = 0x10
    struct CGImage *_placeholderImage;	// 24 = 0x18
    struct CGColor *_placeholderImageTintColor;	// 32 = 0x20
    long long _artworkStyle;	// 40 = 0x28
    CATransformLayer *_rotatorLayer;	// 48 = 0x30
    CALayer *_frontLayer;	// 56 = 0x38
    CALayer *_backLayer;	// 64 = 0x40
    CALayer *_frontPlaceholderLayer;	// 72 = 0x48
    CALayer *_backPlaceholderLayer;	// 80 = 0x50
    CALayer *_frontGlowLayer;	// 88 = 0x58
    CALayer *_backGlowLayer;	// 96 = 0x60
    CALayer *_frontLegibilityLayer;	// 104 = 0x68
    CALayer *_backLegibilityLayer;	// 112 = 0x70
    CAFilter *_frontBlurFilter;	// 120 = 0x78
    CAFilter *_backBlurFilter;	// 128 = 0x80
    CDStruct_aa6b5db3 _state;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00000000000e3118
@property(nonatomic) CDStruct_aa6b5db3 state; // @synthesize state=_state;
@property(retain, nonatomic) CAFilter *backBlurFilter; // @synthesize backBlurFilter=_backBlurFilter;
@property(retain, nonatomic) CAFilter *frontBlurFilter; // @synthesize frontBlurFilter=_frontBlurFilter;
@property(retain, nonatomic) CALayer *backLegibilityLayer; // @synthesize backLegibilityLayer=_backLegibilityLayer;
@property(retain, nonatomic) CALayer *frontLegibilityLayer; // @synthesize frontLegibilityLayer=_frontLegibilityLayer;
@property(retain, nonatomic) CALayer *backGlowLayer; // @synthesize backGlowLayer=_backGlowLayer;
@property(retain, nonatomic) CALayer *frontGlowLayer; // @synthesize frontGlowLayer=_frontGlowLayer;
@property(retain, nonatomic) CALayer *backPlaceholderLayer; // @synthesize backPlaceholderLayer=_backPlaceholderLayer;
@property(retain, nonatomic) CALayer *frontPlaceholderLayer; // @synthesize frontPlaceholderLayer=_frontPlaceholderLayer;
@property(retain, nonatomic) CALayer *backLayer; // @synthesize backLayer=_backLayer;
@property(retain, nonatomic) CALayer *frontLayer; // @synthesize frontLayer=_frontLayer;
@property(retain, nonatomic) CATransformLayer *rotatorLayer; // @synthesize rotatorLayer=_rotatorLayer;
@property(nonatomic) long long artworkStyle; // @synthesize artworkStyle=_artworkStyle;
@property(nonatomic) struct CGColor *placeholderImageTintColor; // @synthesize placeholderImageTintColor=_placeholderImageTintColor;
@property(nonatomic) struct CGImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(nonatomic) _Bool dimsWhenPaused; // @synthesize dimsWhenPaused=_dimsWhenPaused;
@property(nonatomic) _Bool playing; // @synthesize playing=_playing;
@property(nonatomic) double artworkCornerRadius; // @synthesize artworkCornerRadius=_artworkCornerRadius;
- (id)makeAnimation:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 duration:(double)arg4;	// IMP=0x00000000000e2de2
- (id)makeSpringAnimation:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3;	// IMP=0x00000000000e2caa
- (id)makeDynamicIslandLegibilityFilter;	// IMP=0x00000000000e2bbf
- (id)makeLegibilityLayer;	// IMP=0x00000000000e2a7a
- (id)makeBlurFilter;	// IMP=0x00000000000e29f6
- (CDStruct_aa6b5db3)nextState;	// IMP=0x00000000000e2926
- (id)glowLayerForState:(CDStruct_aa6b5db3)arg1;	// IMP=0x00000000000e28ad
- (id)placeholderLayerForState:(CDStruct_aa6b5db3)arg1;	// IMP=0x00000000000e2834
- (id)imageLayerForState:(CDStruct_aa6b5db3)arg1;	// IMP=0x00000000000e27bb
- (void)updateOpacity;	// IMP=0x00000000000e261f
- (void)updateScale;	// IMP=0x00000000000e24ef
- (void)updateStateWithPreviousState:(CDStruct_aa6b5db3)arg1 transitionDirection:(long long)arg2;	// IMP=0x00000000000e1fe8
- (_Bool)isLayerForStateGlowing:(CDStruct_aa6b5db3)arg1;	// IMP=0x00000000000e1efd
- (void)updateGlowForState:(CDStruct_aa6b5db3)arg1 reverse:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x00000000000e1c75
- (void)animateGlowForState:(CDStruct_aa6b5db3)arg1 reverse:(_Bool)arg2;	// IMP=0x00000000000e1bb8
- (void)setImage:(struct CGImage *)arg1 toLayer:(id)arg2;	// IMP=0x00000000000e1b15
- (void)setState:(CDStruct_aa6b5db3)arg1 transitionDirection:(long long)arg2;	// IMP=0x00000000000e1909
- (void)updateArtworkStyle;	// IMP=0x00000000000e1717
- (void)updatePlaceholderFrame;	// IMP=0x00000000000e1440
- (void)transitionToImage:(struct CGImage *)arg1;	// IMP=0x00000000000e121e
- (void)transitionToImage:(struct CGImage *)arg1 transitionDirection:(long long)arg2;	// IMP=0x00000000000e0e63
- (void)setImageToCurrentLayer:(struct CGImage *)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000e0c34
- (void)setContentsScale:(double)arg1;	// IMP=0x00000000000e0b1f
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00000000000e09cc
- (id)init;	// IMP=0x00000000000e02f4

@end

