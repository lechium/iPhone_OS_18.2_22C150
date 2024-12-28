//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FaceIdLightweightLeadingView, FaceIdLightweightTrailingView, LAUIPearlGlyphViewAutoLayoutWrapper, NSArray, NSLayoutConstraint, NSString, TransitionViewController, UIBlurEffect, UILabel, UIVibrancyEffect, UIView, UIVisualEffectView;

@interface FaceIdToastViewController
{
    UIView *_toastView;	// 8 = 0x8
    _Bool _toastBackdropEnabled;	// 16 = 0x10
    UIBlurEffect *_blurEffect;	// 24 = 0x18
    UIVibrancyEffect *_vibrancyEffect;	// 32 = 0x20
    UIVisualEffectView *_backdropView;	// 40 = 0x28
    UIVisualEffectView *_overlayEffectView;	// 48 = 0x30
    UIView *_lightweightBackdropView;	// 56 = 0x38
    struct CGSize _toastViewSize;	// 64 = 0x40
    NSLayoutConstraint *_toastViewWidthAnchor;	// 80 = 0x50
    NSLayoutConstraint *_toastViewHeightAnchor;	// 88 = 0x58
    NSLayoutConstraint *_lightweightViewWidthAnchor;	// 96 = 0x60
    NSLayoutConstraint *_lightweightViewHeightAnchor;	// 104 = 0x68
    NSLayoutConstraint *_lightweightLeadingWidthAnchor;	// 112 = 0x70
    NSLayoutConstraint *_lightweightLeadingHeightAnchor;	// 120 = 0x78
    NSLayoutConstraint *_lightweightLeadingLeadingAnchor;	// 128 = 0x80
    NSLayoutConstraint *_lightweightLeadingCenterYAnchor;	// 136 = 0x88
    NSLayoutConstraint *_lightweightTrailingWidthAnchor;	// 144 = 0x90
    NSLayoutConstraint *_lightweightTrailingHeightAnchor;	// 152 = 0x98
    NSLayoutConstraint *_lightweightTrailingTrailingAnchor;	// 160 = 0xa0
    NSLayoutConstraint *_lightweightTrailingCenterYAnchor;	// 168 = 0xa8
    UILabel *_glyphLabel;	// 176 = 0xb0
    LAUIPearlGlyphViewAutoLayoutWrapper *_glyphWrapper;	// 184 = 0xb8
    UIView *_glyphWrapperParent;	// 192 = 0xc0
    long long _glyphState;	// 200 = 0xc8
    NSArray *_glyphConstraints;	// 208 = 0xd0
    long long _interfaceOrientation;	// 216 = 0xd8
    _Bool _shakeOnAppeared;	// 224 = 0xe0
    FaceIdLightweightLeadingView *_lightweightLeadingView;	// 232 = 0xe8
    FaceIdLightweightTrailingView *_lightweightTrailingView;	// 240 = 0xf0
    _Bool _iPad;	// 248 = 0xf8
    unsigned int _instanceId;	// 252 = 0xfc
    NSString *_titleText;	// 256 = 0x100
    long long _lightweightUIMode;	// 264 = 0x108
    TransitionViewController *_presentingTransitionViewController;	// 272 = 0x110
}

+ (unsigned int)newInstanceId;	// IMP=0x004000000001e126
- (void).cxx_destruct;	// IMP=0x00200000000213b7
@property(readonly, nonatomic) __weak TransitionViewController *presentingTransitionViewController; // @synthesize presentingTransitionViewController=_presentingTransitionViewController;
@property(readonly, nonatomic) unsigned int instanceId; // @synthesize instanceId=_instanceId;
@property(nonatomic) _Bool toastBackdropEnabled; // @synthesize toastBackdropEnabled=_toastBackdropEnabled;
@property(readonly, nonatomic) long long lightweightUIMode; // @synthesize lightweightUIMode=_lightweightUIMode;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(readonly, nonatomic) _Bool lightweightUI;
- (void)_setBackdropEnabled:(_Bool)arg1;	// IMP=0x0010000000021236
- (void)_setBackdropEnabled:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000021119
- (void)shake;	// IMP=0x00100000000210ca
- (void)_adjustToastSizeForAccessibilityIfNeeded;	// IMP=0x0010000000020f8a
- (void)_dispatchTapBlock:(id)arg1;	// IMP=0x0010000000020f32
- (long long)_lightweightJindoExpansion;	// IMP=0x0010000000020f27
- (id)_updateConstraint:(id)arg1 ofView:(id)arg2 anchor1:(id)arg3 anchor2:(id)arg4 constant:(double)arg5;	// IMP=0x0010000000020d72
- (void)_updateLightweightContentSize;	// IMP=0x0010000000020b58
- (void)_updateLightweightConstraints;	// IMP=0x0010000000020604
- (void)_updateLightweightConstraintsWithCoordinatedAnimations;	// IMP=0x00100000000205f2
- (struct CGVector)_lightweightJindoContentShiftOnLeading:(_Bool)arg1;	// IMP=0x001000000002052f
- (_Bool)_isCollapsingFromFullExpansion;	// IMP=0x0010000000020527
- (_Bool)_isEarlyExpansion;	// IMP=0x001000000002051f
- (struct CGSize)_lightweightJindoContentSizeForExpansion:(long long)arg1;	// IMP=0x00100000000204dd
- (struct CGSize)_lightweightJindoContainerSize;	// IMP=0x0010000000020494
- (void)_setupLightweightViews;	// IMP=0x001000000002037f
- (void)_setupGlyphLabel;	// IMP=0x001000000001ff69
- (void)_setupGlyphWrapper:(_Bool)arg1;	// IMP=0x001000000001fa0a
- (void)_anchorToastViewToView:(id)arg1;	// IMP=0x001000000001f75b
- (id)_backdropRenderingHintColor;	// IMP=0x001000000001f6e9
- (void)_setupToastBackdropAndVibrancyView;	// IMP=0x001000000001f51b
- (id)_toastViewContraints;	// IMP=0x001000000001f1c6
- (void)_setupToastView;	// IMP=0x001000000001f026
- (void)_setupSubviews;	// IMP=0x001000000001ef94
- (_Bool)_canShowWhileLocked;	// IMP=0x001000000001ef8c
- (int)_preferredStatusBarVisibility;	// IMP=0x000000000001ef84
- (void)_shrinkAndRevokeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000001ef72
- (void)_setTransformScale:(_Bool)arg1;	// IMP=0x001000000001eecc
- (void)setGlyphState:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x001000000001ee55
- (double)_remainingMinDisplayTime;	// IMP=0x001000000001ed60
- (void)dismissWithDelay:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001e8da
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x001000000001e87c
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x001000000001e67d
- (void)_toastAnimationFadeIn:(_Bool)arg1 finished:(_Bool)arg2;	// IMP=0x001000000001e486
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000001e215
- (void)viewDidLoad;	// IMP=0x001000000001e13a
- (id)description;	// IMP=0x001000000001e0a5
- (id)initWithGlyph:(id)arg1 presentingController:(id)arg2 title:(id)arg3 lightweightUIMode:(long long)arg4;	// IMP=0x001000000001deaa

@end
