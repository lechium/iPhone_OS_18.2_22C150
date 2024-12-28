//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTSettings.h>

@interface WFBannerGestureSettings : PTSettings
{
    _Bool _fixedEndTranslationUpEnabled;	// 8 = 0x8
    _Bool _alphaOutEnabled;	// 9 = 0x9
    _Bool _squeezeEnabled;	// 10 = 0xa
    _Bool _trackingBlurEnabled;	// 11 = 0xb
    _Bool _rubberBandingEnabled;	// 12 = 0xc
    _Bool _horizontalTrackingEnabled;	// 13 = 0xd
    _Bool _testUnregisteredVelocityEdgeCase;	// 14 = 0xe
    double _poofResponse;	// 16 = 0x10
    double _poofScaleUp;	// 24 = 0x18
    double _poofScaleDown;	// 32 = 0x20
    double _poofThrowDistanceUp;	// 40 = 0x28
    double _poofThrowDistanceDown;	// 48 = 0x30
    double _fixedEndTranslationUp;	// 56 = 0x38
    double _poofAlphaResponse;	// 64 = 0x40
    double _poofAlphaDelay;	// 72 = 0x48
    double _trackingResponse;	// 80 = 0x50
    double _trackingDampingRatio;	// 88 = 0x58
    double _trackingSqueezeFactor;	// 96 = 0x60
    double _poofBlurRadius;	// 104 = 0x68
    double _poofBlurResponse;	// 112 = 0x70
    double _poofBlurDelay;	// 120 = 0x78
    double _topLimit;	// 128 = 0x80
    double _bottomLimit;	// 136 = 0x88
    double _blurTopLimit;	// 144 = 0x90
    double _blurBottomLimit;	// 152 = 0x98
    double _topRubberBandRange;	// 160 = 0xa0
    double _bottomRubberBandRange;	// 168 = 0xa8
    double _horizontalTrackingFriction;	// 176 = 0xb0
    double _scrollDismissalActivationLeniency;	// 184 = 0xb8
    double _squeeze_up;	// 192 = 0xc0
    double _poof_scale_multiplier_y;	// 200 = 0xc8
    double _trackingScale;	// 208 = 0xd0
    double _phase1_response;	// 216 = 0xd8
    double _phase1_impulse;	// 224 = 0xe0
    double _phase1_impulse_unregisteredVelocity;	// 232 = 0xe8
    double _phase1_artificialInitialOffset;	// 240 = 0xf0
    double _phase1_initialScale;	// 248 = 0xf8
    double _phase1_initialBlurRadius;	// 256 = 0x100
    double _phase1_phaseDuration;	// 264 = 0x108
}

+ (id)settingsControllerModule;	// IMP=0x004000000000c1f2
@property(nonatomic) double phase1_phaseDuration; // @synthesize phase1_phaseDuration=_phase1_phaseDuration;
@property(nonatomic) double phase1_initialBlurRadius; // @synthesize phase1_initialBlurRadius=_phase1_initialBlurRadius;
@property(nonatomic) double phase1_initialScale; // @synthesize phase1_initialScale=_phase1_initialScale;
@property(nonatomic) double phase1_artificialInitialOffset; // @synthesize phase1_artificialInitialOffset=_phase1_artificialInitialOffset;
@property(nonatomic) double phase1_impulse_unregisteredVelocity; // @synthesize phase1_impulse_unregisteredVelocity=_phase1_impulse_unregisteredVelocity;
@property(nonatomic) double phase1_impulse; // @synthesize phase1_impulse=_phase1_impulse;
@property(nonatomic) double phase1_response; // @synthesize phase1_response=_phase1_response;
@property(nonatomic) _Bool testUnregisteredVelocityEdgeCase; // @synthesize testUnregisteredVelocityEdgeCase=_testUnregisteredVelocityEdgeCase;
@property(nonatomic) double trackingScale; // @synthesize trackingScale=_trackingScale;
@property(nonatomic) double poof_scale_multiplier_y; // @synthesize poof_scale_multiplier_y=_poof_scale_multiplier_y;
@property(nonatomic) double squeeze_up; // @synthesize squeeze_up=_squeeze_up;
@property(nonatomic) double scrollDismissalActivationLeniency; // @synthesize scrollDismissalActivationLeniency=_scrollDismissalActivationLeniency;
@property(nonatomic) double horizontalTrackingFriction; // @synthesize horizontalTrackingFriction=_horizontalTrackingFriction;
@property(nonatomic) _Bool horizontalTrackingEnabled; // @synthesize horizontalTrackingEnabled=_horizontalTrackingEnabled;
@property(nonatomic) double bottomRubberBandRange; // @synthesize bottomRubberBandRange=_bottomRubberBandRange;
@property(nonatomic) double topRubberBandRange; // @synthesize topRubberBandRange=_topRubberBandRange;
@property(nonatomic) _Bool rubberBandingEnabled; // @synthesize rubberBandingEnabled=_rubberBandingEnabled;
@property(nonatomic) double blurBottomLimit; // @synthesize blurBottomLimit=_blurBottomLimit;
@property(nonatomic) double blurTopLimit; // @synthesize blurTopLimit=_blurTopLimit;
@property(nonatomic) _Bool trackingBlurEnabled; // @synthesize trackingBlurEnabled=_trackingBlurEnabled;
@property(nonatomic) double bottomLimit; // @synthesize bottomLimit=_bottomLimit;
@property(nonatomic) double topLimit; // @synthesize topLimit=_topLimit;
@property(nonatomic) double poofBlurDelay; // @synthesize poofBlurDelay=_poofBlurDelay;
@property(nonatomic) double poofBlurResponse; // @synthesize poofBlurResponse=_poofBlurResponse;
- (void);	// IMP=0x001000000000be90
@property(nonatomic) double poofBlurRadius; // @synthesize poofBlurRadius=_poofBlurRadius;
@property(nonatomic) double trackingSqueezeFactor; // @synthesize trackingSqueezeFactor=_trackingSqueezeFactor;
@property(nonatomic) _Bool squeezeEnabled; // @synthesize squeezeEnabled=_squeezeEnabled;
@property(nonatomic) double trackingDampingRatio; // @synthesize trackingDampingRatio=_trackingDampingRatio;
@property(nonatomic) double trackingResponse; // @synthesize trackingResponse=_trackingResponse;
@property(nonatomic) double poofAlphaDelay; // @synthesize poofAlphaDelay=_poofAlphaDelay;
@property(nonatomic) double poofAlphaResponse; // @synthesize poofAlphaResponse=_poofAlphaResponse;
@property(nonatomic) _Bool alphaOutEnabled; // @synthesize alphaOutEnabled=_alphaOutEnabled;
@property(nonatomic) double fixedEndTranslationUp; // @synthesize fixedEndTranslationUp=_fixedEndTranslationUp;
@property(nonatomic) _Bool fixedEndTranslationUpEnabled; // @synthesize fixedEndTranslationUpEnabled=_fixedEndTranslationUpEnabled;
@property(nonatomic) double poofThrowDistanceDown; // @synthesize poofThrowDistanceDown=_poofThrowDistanceDown;
@property(nonatomic) double poofThrowDistanceUp; // @synthesize poofThrowDistanceUp=_poofThrowDistanceUp;
@property(nonatomic) double poofScaleDown; // @synthesize poofScaleDown=_poofScaleDown;
@property(nonatomic) double poofScaleUp; // @synthesize poofScaleUp=_poofScaleUp;
@property(nonatomic) double poofResponse; // @synthesize poofResponse=_poofResponse;
- (void)setDefaultValues;	// IMP=0x001000000000b93b

@end
