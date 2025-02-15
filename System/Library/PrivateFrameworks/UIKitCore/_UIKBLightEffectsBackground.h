//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIKBInputBackdropView.h"

@class NSArray, NSLayoutConstraint, NSMutableArray, UIKBBackdropView, UILayoutGuide, UIView, _UIGradientView;

__attribute__((visibility("hidden")))
@interface _UIKBLightEffectsBackground : UIKBInputBackdropView
{
    _Bool _clientBackdropInUse;	// 384 = 0x180
    _Bool _isUsingAnimatedBackdrop;	// 385 = 0x181
    _Bool _isAnimating;	// 386 = 0x182
    _Bool _useLightConfigEffects;	// 387 = 0x183
    UILayoutGuide *_fullBackdropLayoutGuide;	// 392 = 0x188
    UILayoutGuide *_assistantLayoutGuide;	// 400 = 0x190
    UIView *_fullBackdropMaskView;	// 408 = 0x198
    UIView *_assistantBarMaskView;	// 416 = 0x1a0
    _UIGradientView *_backdropGradientMaskView;	// 424 = 0x1a8
    UIView *_behindFullBackdropView;	// 432 = 0x1b0
    UIView *_behindAssistantView;	// 440 = 0x1b8
    UIView *_mirroredShadowView;	// 448 = 0x1c0
    UIView *_mirroredLightBorderView;	// 456 = 0x1c8
    UILayoutGuide *_aboveKeyboardLayoutGuide;	// 464 = 0x1d0
    NSLayoutConstraint *_minimumAboveKeyboardHeightConstraint;	// 472 = 0x1d8
    UIView *_backdropClippingView;	// 480 = 0x1e0
    NSArray *_backdropClippingConstraints;	// 488 = 0x1e8
    NSMutableArray *_lightSourceConstraints;	// 496 = 0x1f0
    UIKBBackdropView *_transitionStartBackdropView;	// 504 = 0x1f8
    long long _clippingStyle;	// 512 = 0x200
}

- (void).cxx_destruct;	// IMP=0x0000000001021318
@property(nonatomic) _Bool useLightConfigEffects; // @synthesize useLightConfigEffects=_useLightConfigEffects;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) _Bool isUsingAnimatedBackdrop; // @synthesize isUsingAnimatedBackdrop=_isUsingAnimatedBackdrop;
@property(nonatomic) long long clippingStyle; // @synthesize clippingStyle=_clippingStyle;
@property(retain, nonatomic) UIKBBackdropView *transitionStartBackdropView; // @synthesize transitionStartBackdropView=_transitionStartBackdropView;
@property(retain, nonatomic) NSMutableArray *lightSourceConstraints; // @synthesize lightSourceConstraints=_lightSourceConstraints;
@property(retain, nonatomic) NSArray *backdropClippingConstraints; // @synthesize backdropClippingConstraints=_backdropClippingConstraints;
@property(retain, nonatomic) UIView *backdropClippingView; // @synthesize backdropClippingView=_backdropClippingView;
@property(retain, nonatomic) NSLayoutConstraint *minimumAboveKeyboardHeightConstraint; // @synthesize minimumAboveKeyboardHeightConstraint=_minimumAboveKeyboardHeightConstraint;
@property(retain, nonatomic) UILayoutGuide *aboveKeyboardLayoutGuide; // @synthesize aboveKeyboardLayoutGuide=_aboveKeyboardLayoutGuide;
@property(retain, nonatomic) UIView *mirroredLightBorderView; // @synthesize mirroredLightBorderView=_mirroredLightBorderView;
@property(retain, nonatomic) UIView *mirroredShadowView; // @synthesize mirroredShadowView=_mirroredShadowView;
@property(retain, nonatomic) UIView *behindAssistantView; // @synthesize behindAssistantView=_behindAssistantView;
@property(retain, nonatomic) UIView *behindFullBackdropView; // @synthesize behindFullBackdropView=_behindFullBackdropView;
@property(retain, nonatomic) _UIGradientView *backdropGradientMaskView; // @synthesize backdropGradientMaskView=_backdropGradientMaskView;
@property(retain, nonatomic) UIView *assistantBarMaskView; // @synthesize assistantBarMaskView=_assistantBarMaskView;
@property(retain, nonatomic) UIView *fullBackdropMaskView; // @synthesize fullBackdropMaskView=_fullBackdropMaskView;
@property(retain, nonatomic) UILayoutGuide *assistantLayoutGuide; // @synthesize assistantLayoutGuide=_assistantLayoutGuide;
@property(retain, nonatomic) UILayoutGuide *fullBackdropLayoutGuide; // @synthesize fullBackdropLayoutGuide=_fullBackdropLayoutGuide;
@property(nonatomic) _Bool clientBackdropInUse; // @synthesize clientBackdropInUse=_clientBackdropInUse;
- (void)layoutSubviews;	// IMP=0x0000000001020d65
- (void)updateConstraints;	// IMP=0x0000000001020caf
- (void)maskEffectsBackdrop;	// IMP=0x00000000010204bc
- (void)layoutInputBackdropToFullWithRect:(struct CGRect)arg1;	// IMP=0x000000000101fd55
- (void)useMaskedKeyplaneBackdrop:(id)arg1 assistantBackdrop:(id)arg2;	// IMP=0x000000000101edad
- (void)addLightSourceViews;	// IMP=0x000000000101e6fa
- (void)showShadowEffects:(_Bool)arg1;	// IMP=0x000000000101da40
- (void)changeClippingStyle:(long long)arg1;	// IMP=0x000000000101d170
- (void)addLayoutGuidesIfNeeded;	// IMP=0x000000000101c6de
- (id)layerForPositionMatchMove;	// IMP=0x000000000101c66a
- (id)extraBackdropViewForConfig:(id)arg1;	// IMP=0x000000000101c267
- (id)bringupWaveEffectViewForDisplayScale:(double)arg1;	// IMP=0x000000000101bcff
- (void)completeTransitionToRenderConfig:(id)arg1;	// IMP=0x000000000101bc65
- (void)animatedTransitionToRenderConfig:(id)arg1;	// IMP=0x000000000101bbc6
- (void)updateAlphaForAnimationStart:(_Bool)arg1;	// IMP=0x000000000101ba88
- (_Bool)shouldShowWaveView;	// IMP=0x000000000101ba78
- (void)performTransitionToRenderConfig:(id)arg1 fromRenderConfig:(id)arg2 alongsideAnimations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000101b234
- (void)removeAnimatedBackdropEffects;	// IMP=0x000000000101b005
- (void)_setRenderConfig:(id)arg1;	// IMP=0x000000000101aeba
- (void)updateEffectsForLightKeyboard:(_Bool)arg1 forceUpdate:(_Bool)arg2;	// IMP=0x000000000101ad00
- (void)_addContentEffectsForConfig:(id)arg1;	// IMP=0x000000000101aa12
- (void)transitionToStyle:(long long)arg1 isSplit:(_Bool)arg2;	// IMP=0x000000000101a920
- (_Bool)isClientBackdropInUse;	// IMP=0x000000000101a8ef
- (_Bool)shouldShowBackdrop;	// IMP=0x000000000101a88a
- (_Bool)supportsLightEffects;	// IMP=0x000000000101a882
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000101a7c2

@end

