//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VFX/JSExport-Protocol.h>

@class CAAnimation, NSArray, NSString, VFXMaterialProperty;

@protocol VFXCameraJSExport <JSExport>
+ (id)camera;
@property(nonatomic) unsigned long long categoryBitMask;
@property(readonly, nonatomic) VFXMaterialProperty *colorGrading;
@property(nonatomic) float whiteBalanceTint;
@property(nonatomic) float whiteBalanceTemperature;
@property(nonatomic) float grainIsColored;
@property(nonatomic) float grainScale;
@property(nonatomic) float grainIntensity;
@property(nonatomic) float contrast;
@property(nonatomic) float saturation;
@property(nonatomic) float colorFringeIntensity;
@property(nonatomic) float colorFringeStrength;
@property(nonatomic) float vignettingRadius;
@property(nonatomic) float vignettingSoftness;
@property(nonatomic) float vignettingAnamorphic;
@property(nonatomic) float vignettingIntensity;
@property(nonatomic) float bloomBlurRadius;
@property(nonatomic) float bloomIntensity;
@property(nonatomic) unsigned long long bloomIterationSpread;
@property(nonatomic) unsigned long long bloomIterationCount;
@property(nonatomic) float bloomSaturation;
@property(nonatomic) float bloomContrast;
@property(retain, nonatomic) NSArray *bloomColorFilter;
@property(nonatomic) _Bool bloomUseHighQuality;
@property(nonatomic) float bloomThresholdSmoothness;
@property(nonatomic) float bloomThreshold;
@property(nonatomic) float maximumExposure;
@property(nonatomic) float minimumExposure;
@property(nonatomic) float exposureAdaptationDarkeningSpeedFactor;
@property(nonatomic) float exposureAdaptationBrighteningSpeedFactor;
@property(nonatomic) _Bool wantsExposureAdaptation;
@property(nonatomic) float whitePoint;
@property(nonatomic) float averageGray;
@property(nonatomic) float exposureOffset;
@property(nonatomic) _Bool wantsHDR;
@property(nonatomic) float screenSpaceAmbientOcclusionNormalThreshold;
@property(nonatomic) float screenSpaceAmbientOcclusionDepthThreshold;
@property(nonatomic) float screenSpaceAmbientOcclusionBias;
@property(nonatomic) float screenSpaceAmbientOcclusionRadius;
@property(nonatomic) float screenSpaceAmbientOcclusionIntensity;
@property(nonatomic) float motionBlurIntensity;
@property(nonatomic) long long apertureBladeCount;
@property(nonatomic) float fStop;
@property(nonatomic) long long focalBlurSampleCount;
@property(nonatomic) float focusDistance;
@property(retain, nonatomic) NSArray *projectionTransform;
@property(nonatomic) float orthographicScale;
@property(nonatomic) _Bool usesOrthographicProjection;
@property(nonatomic) _Bool automaticallyAdjustsZRange;
@property(nonatomic) float zFar;
@property(nonatomic) float zNear;
@property(nonatomic) float sensorHeight;
@property(nonatomic) float focalLength;
@property(nonatomic) long long fillMode;
@property(nonatomic) float fieldOfView;
@property(copy, nonatomic) NSString *name;
- (id)valueForKeyPath:(NSString *)arg1;
- (id)valueForKey:(NSString *)arg1;
- (void)setValue:(id)arg1 forKey:(NSString *)arg2;
- (void)setValue:(id)arg1 forKeyPath:(NSString *)arg2;
- (id)copy;
- (void)resumeAnimationForKey:(NSString *)arg1;
- (void)pauseAnimationForKey:(NSString *)arg1;
- (CAAnimation *)animationForKey:(NSString *)arg1;
- (NSArray *)animationKeys;
- (void)removeAnimationForKey:(NSString *)arg1;
- (void)removeAllAnimations;
- (void)addAnimation:(CAAnimation *)arg1 forKey:(NSString *)arg2;
@end
