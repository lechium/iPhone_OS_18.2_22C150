//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTSettings.h>

@class MISSING_TYPE, SUIAFluidBehaviorSettings, SUIAShockwaveRadialMaskSettings;

__attribute__((visibility("hidden")))
@interface _TtC20SystemUIAnimationKit25ScanwavePrototypeSettings : PTSettings
{
    MISSING_TYPE *outroDelay;	// 8 = 0x8
    MISSING_TYPE *completionTimeout;	// 16 = 0x10
    MISSING_TYPE *circleMaskInitialRadialMask;	// 24 = 0x18
    MISSING_TYPE *circleMaskFinalRadialMask;	// 32 = 0x20
    MISSING_TYPE *circleMaskPositionAnimationSettings;	// 40 = 0x28
    MISSING_TYPE *circleMaskPositionYNormalizedDistance;	// 48 = 0x30
    MISSING_TYPE *circleMaskScaleAnimationSettings;	// 56 = 0x38
    MISSING_TYPE *circleMaskScaleFactor;	// 64 = 0x40
    MISSING_TYPE *circleMaskInitialIntensity;	// 72 = 0x48
    MISSING_TYPE *circleMaskFinalIntensity;	// 80 = 0x50
    MISSING_TYPE *circleMaskIntensityAnimationSettings;	// 88 = 0x58
    MISSING_TYPE *sourceImageScaleIntroAnimationSettings;	// 96 = 0x60
    MISSING_TYPE *sourceImageScaleOutroAnimationSettings;	// 104 = 0x68
    MISSING_TYPE *sourceImageScaleFactor;	// 112 = 0x70
    MISSING_TYPE *sourceImageColorBrightnessIntroAnimationSettings;	// 120 = 0x78
    MISSING_TYPE *sourceImageColorBrightnessOutroAnimationSettings;	// 128 = 0x80
    MISSING_TYPE *sourceImageColorBrightnessAmount;	// 136 = 0x88
    MISSING_TYPE *depthImageColorBrightnessAmount;	// 144 = 0x90
    MISSING_TYPE *depthImageColorContrastAmount;	// 152 = 0x98
    MISSING_TYPE *depthDistanceFieldInitialOffset;	// 160 = 0xa0
    MISSING_TYPE *depthDistanceFieldFinalOffset;	// 168 = 0xa8
    MISSING_TYPE *depthDistanceFieldOffsetAnimationSettings;	// 176 = 0xb0
    MISSING_TYPE *depthDistanceFieldSharpness;	// 184 = 0xb8
    MISSING_TYPE *depthDistanceFieldLineWidth;	// 192 = 0xc0
    MISSING_TYPE *fillLightColorSaturateAmount;	// 200 = 0xc8
    MISSING_TYPE *fillLightColorBrightnessAmount;	// 208 = 0xd0
    MISSING_TYPE *inverseBlurRadius;	// 216 = 0xd8
    MISSING_TYPE *inverseBlurRadiusIntroAnimationSettings;	// 224 = 0xe0
    MISSING_TYPE *inverseBlurRadiusOutroAnimationSettings;	// 232 = 0xe8
    MISSING_TYPE *inverseBlurOutroDelay;	// 240 = 0xf0
    MISSING_TYPE *chromaticAberrationMagnitudeX;	// 248 = 0xf8
    MISSING_TYPE *chromaticAberrationMagnitudeY;	// 256 = 0x100
    MISSING_TYPE *chromaticAberrationColorSaturateAmount;	// 264 = 0x108
    MISSING_TYPE *meshTransformMeshIntroAnimationSettings;	// 272 = 0x110
    MISSING_TYPE *meshTransformMeshOutroAnimationSettings;	// 280 = 0x118
    MISSING_TYPE *meshTransformPositionAnimationSettings;	// 288 = 0x120
}

+ (id)settingsControllerModule;	// IMP=0x00600000000377b0
- (void).cxx_destruct;	// IMP=0x0000000000037bf0
- (id)initWithDefaultValues;	// IMP=0x0000000000037ba0
- (void)setDefaultValues;	// IMP=0x00000000000371c0
@property(nonatomic, retain) SUIAFluidBehaviorSettings *meshTransformPositionAnimationSettings; // @synthesize meshTransformPositionAnimationSettings;
@property(nonatomic, retain) SUIAFluidBehaviorSettings *meshTransformMeshOutroAnimationSettings; // @synthesize meshTransformMeshOutroAnimationSettings;
@property(nonatomic, retain) SUIAFluidBehaviorSettings *meshTransformMeshIntroAnimationSettings; // @synthesize meshTransformMeshIntroAnimationSettings;
@property(nonatomic) double chromaticAberrationColorSaturateAmount; // @synthesize chromaticAberrationColorSaturateAmount;
@property(nonatomic) double chromaticAberrationMagnitudeY; // @synthesize chromaticAberrationMagnitudeY;
@property(nonatomic) double chromaticAberrationMagnitudeX; // @synthesize chromaticAberrationMagnitudeX;
@property(nonatomic) double inverseBlurOutroDelay; // @synthesize inverseBlurOutroDelay;
@property(nonatomic, retain) SUIAFluidBehaviorSettings *inverseBlurRadiusOutroAnimationSettings; // @synthesize inverseBlurRadiusOutroAnimationSettings;
@property(nonatomic, retain) SUIAFluidBehaviorSettings *inverseBlurRadiusIntroAnimationSettings; // @synthesize inverseBlurRadiusIntroAnimationSettings;
@property(nonatomic) double inverseBlurRadius; // @synthesize inverseBlurRadius;
@property(nonatomic) double fillLightColorBrightnessAmount; // @synthesize fillLightColorBrightnessAmount;
@property(nonatomic) double fillLightColorSaturateAmount; // @synthesize fillLightColorSaturateAmount;
@property(nonatomic) double depthDistanceFieldLineWidth; // @synthesize depthDistanceFieldLineWidth;
@property(nonatomic) double depthDistanceFieldSharpness; // @synthesize depthDistanceFieldSharpness;
@property(nonatomic, retain) SUIAFluidBehaviorSettings *depthDistanceFieldOffsetAnimationSettings; // @synthesize depthDistanceFieldOffsetAnimationSettings;
@property(nonatomic) double depthDistanceFieldFinalOffset; // @synthesize depthDistanceFieldFinalOffset;
@property(nonatomic) double depthDistanceFieldInitialOffset; // @synthesize depthDistanceFieldInitialOffset;
@property(nonatomic) double depthImageColorContrastAmount; // @synthesize depthImageColorContrastAmount;
@property(nonatomic) double depthImageColorBrightnessAmount; // @synthesize depthImageColorBrightnessAmount;
@property(nonatomic) double sourceImageColorBrightnessAmount; // @synthesize sourceImageColorBrightnessAmount;
@property(nonatomic, retain) SUIAFluidBehaviorSettings *sourceImageColorBrightnessOutroAnimationSettings; // @synthesize sourceImageColorBrightnessOutroAnimationSettings;
@property(nonatomic, retain) SUIAFluidBehaviorSettings *sourceImageColorBrightnessIntroAnimationSettings; // @synthesize sourceImageColorBrightnessIntroAnimationSettings;
@property(nonatomic) double sourceImageScaleFactor; // @synthesize sourceImageScaleFactor;
@property(nonatomic, retain) SUIAFluidBehaviorSettings *sourceImageScaleOutroAnimationSettings; // @synthesize sourceImageScaleOutroAnimationSettings;
@property(nonatomic, retain) SUIAFluidBehaviorSettings *sourceImageScaleIntroAnimationSettings; // @synthesize sourceImageScaleIntroAnimationSettings;
@property(nonatomic, retain) SUIAFluidBehaviorSettings *circleMaskIntensityAnimationSettings; // @synthesize circleMaskIntensityAnimationSettings;
@property(nonatomic) double circleMaskFinalIntensity; // @synthesize circleMaskFinalIntensity;
@property(nonatomic) double circleMaskInitialIntensity; // @synthesize circleMaskInitialIntensity;
@property(nonatomic) double circleMaskScaleFactor; // @synthesize circleMaskScaleFactor;
@property(nonatomic, retain) SUIAFluidBehaviorSettings *circleMaskScaleAnimationSettings; // @synthesize circleMaskScaleAnimationSettings;
@property(nonatomic) double circleMaskPositionYNormalizedDistance; // @synthesize circleMaskPositionYNormalizedDistance;
@property(nonatomic, retain) SUIAFluidBehaviorSettings *circleMaskPositionAnimationSettings; // @synthesize circleMaskPositionAnimationSettings;
@property(nonatomic, retain) SUIAShockwaveRadialMaskSettings *circleMaskFinalRadialMask; // @synthesize circleMaskFinalRadialMask;
@property(nonatomic, retain) SUIAShockwaveRadialMaskSettings *circleMaskInitialRadialMask; // @synthesize circleMaskInitialRadialMask;
@property(nonatomic) double completionTimeout; // @synthesize completionTimeout;
@property(nonatomic) double outroDelay; // @synthesize outroDelay;

@end
