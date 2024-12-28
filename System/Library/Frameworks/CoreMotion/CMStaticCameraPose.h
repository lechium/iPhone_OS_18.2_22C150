//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CMStaticCameraPose : NSObject
{
    _Bool _isStatic;	// 8 = 0x8
    float _portraitAngleDeg;	// 12 = 0xc
    float _portraitUpsideDownAngleDeg;	// 16 = 0x10
    float _landscapeLeftAngleDeg;	// 20 = 0x14
    float _landscapeRightAngleDeg;	// 24 = 0x18
    float _faceUpAngleDeg;	// 28 = 0x1c
    float _faceDownAngleDeg;	// 32 = 0x20
    double _timeInStaticState;	// 40 = 0x28
    double _timeInMovingState;	// 48 = 0x30
}

@property(nonatomic) float faceDownAngleDeg; // @synthesize faceDownAngleDeg=_faceDownAngleDeg;
@property(nonatomic) float faceUpAngleDeg; // @synthesize faceUpAngleDeg=_faceUpAngleDeg;
@property(nonatomic) float landscapeRightAngleDeg; // @synthesize landscapeRightAngleDeg=_landscapeRightAngleDeg;
@property(nonatomic) float landscapeLeftAngleDeg; // @synthesize landscapeLeftAngleDeg=_landscapeLeftAngleDeg;
@property(nonatomic) float portraitUpsideDownAngleDeg; // @synthesize portraitUpsideDownAngleDeg=_portraitUpsideDownAngleDeg;
@property(nonatomic) float portraitAngleDeg; // @synthesize portraitAngleDeg=_portraitAngleDeg;
@property(nonatomic) double timeInMovingState; // @synthesize timeInMovingState=_timeInMovingState;
@property(nonatomic) double timeInStaticState; // @synthesize timeInStaticState=_timeInStaticState;
@property(nonatomic) _Bool isStatic; // @synthesize isStatic=_isStatic;
- (id)description;	// IMP=0x0000000000286829
- (id)initWithIsStatic:(_Bool)arg1 timeInStaticState:(double)arg2 timeInMovingState:(double)arg3 portraitAngle:(float)arg4 portraitUpsideDownAngle:(float)arg5 landscapeLeftAngle:(float)arg6 landscapeRightAngle:(float)arg7 faceUpAngle:(float)arg8 faceDownAngle:(float)arg9;	// IMP=0x0000000000286776

@end
