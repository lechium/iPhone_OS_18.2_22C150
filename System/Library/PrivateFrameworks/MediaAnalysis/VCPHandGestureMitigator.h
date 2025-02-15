//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPHandGestureMitigator : NSObject
{
    int _rotationInDegrees;	// 8 = 0x8
    float _minHandSize;	// 12 = 0xc
}

+ (float)getMinTiltingThumbAngle;	// IMP=0x0060000000259af7
+ (float)getMinTiltingAngle;	// IMP=0x0060000000259ae9
+ (float)getGestureTypeConsistencyLookBackDuration;	// IMP=0x0060000000259adb
+ (float)getHandMotionLookBackDuration;	// IMP=0x0060000000259acd
+ (float)getPalmScaleChangeThreshold;	// IMP=0x0060000000259abf
+ (float)getPalmMoveDistanceThreshold;	// IMP=0x0060000000259ab1
+ (float)getFaceExtensionRatio;	// IMP=0x0060000000259aa3
+ (float)getMinHandFaceRatio;	// IMP=0x0060000000259a95
@property float minHandSize; // @synthesize minHandSize=_minHandSize;
@property int rotationInDegrees; // @synthesize rotationInDegrees=_rotationInDegrees;
- (int)mitigate:(id)arg1 rightHand:(id)arg2 featureProvider:(id)arg3 faceRects:(id)arg4 faceYaws:(id)arg5;	// IMP=0x000000000025e832
- (int)mitigateHand:(id)arg1 handKey:(id)arg2 pairedHand:(id)arg3 featureProvider:(id)arg4 faceRects:(id)arg5 faceYaws:(id)arg6;	// IMP=0x000000000025d65f
- (_Bool)handInMitigationQuadrant:(id)arg1 withFace:(struct CGRect)arg2;	// IMP=0x000000000025d287
- (void)adjustGestureForHand:(id)arg1 withFaceYaw:(id)arg2;	// IMP=0x000000000025d066
- (void)adjustGestureForHand:(id)arg1 withFace:(struct CGRect)arg2;	// IMP=0x000000000025ce2b
- (_Bool)handTouchFace:(id)arg1 andFace:(struct CGRect)arg2 rotationInDegrees:(int)arg3;	// IMP=0x000000000025c5e2
- (_Bool)handPalmFacingCamera:(id)arg1 rotationInDegrees:(int)arg2 useTips:(_Bool)arg3;	// IMP=0x000000000025c250
- (_Bool)mitigateWithFingerOpennessForHand:(id)arg1;	// IMP=0x000000000025be72
- (_Bool)mitigateWithFingerTiltingForHand:(id)arg1;	// IMP=0x000000000025bc22
- (_Bool)checkHandGestureGlobalMotion:(id)arg1 forHand:(id)arg2;	// IMP=0x000000000025b450
- (_Bool)checkHandGestureTemporalInconsistency:(id)arg1 forHand:(id)arg2;	// IMP=0x000000000025b16f
- (_Bool)handsTooClose:(id)arg1 pairedHand:(id)arg2;	// IMP=0x000000000025abc8
- (_Bool)handsOverlap:(id)arg1 pairedHand:(id)arg2;	// IMP=0x000000000025a3ac
- (_Bool)checkHandHoldObject:(id)arg1 forHand:(id)arg2;	// IMP=0x000000000025a270
- (_Bool)checkHandGestureJitter:(id)arg1 forHand:(id)arg2;	// IMP=0x0000000000259b34
- (id)init;	// IMP=0x0000000000259b05

@end

