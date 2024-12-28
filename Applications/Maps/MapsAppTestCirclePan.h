//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MapsAppTestCirclePan
{
    CDStruct_071ac149 _circlePoints[4];	// 8 = 0x8
    _Bool _isSubTest;	// 104 = 0x68
    _Bool _requiresPreLoadAnimation;	// 105 = 0x69
    _Bool _altitudeIsRegionSize;	// 106 = 0x6a
    _Bool _useTestNameInResults;	// 107 = 0x6b
    double _pitch;	// 112 = 0x70
    double _yaw;	// 120 = 0x78
    double _animationDuration;	// 128 = 0x80
    long long _iterations;	// 136 = 0x88
    double _circleRadius;	// 144 = 0x90
    CDUnknownBlockType _testFinshdCallback;	// 152 = 0x98
    CDStruct_071ac149 _endPoint;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x0020000000521178
@property(copy, nonatomic) CDUnknownBlockType testFinshdCallback; // @synthesize testFinshdCallback=_testFinshdCallback;
@property(nonatomic) double circleRadius; // @synthesize circleRadius=_circleRadius;
@property(nonatomic) long long iterations; // @synthesize iterations=_iterations;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) double yaw; // @synthesize yaw=_yaw;
@property(nonatomic) double pitch; // @synthesize pitch=_pitch;
@property(nonatomic) _Bool useTestNameInResults; // @synthesize useTestNameInResults=_useTestNameInResults;
@property(nonatomic) _Bool altitudeIsRegionSize; // @synthesize altitudeIsRegionSize=_altitudeIsRegionSize;
@property(nonatomic) CDStruct_071ac149 endPoint; // @synthesize endPoint=_endPoint;
- (void)onFullyDrawn:(id)arg1;	// IMP=0x0010000000520d5b
- (void)addFullyDrawnCallback:(CDUnknownBlockType)arg1;	// IMP=0x0010000000520bfc
- (void)animateCircle:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000005207a5
- (void)circlePanLoadFinished;	// IMP=0x001000000051ffaa
- (_Bool)runTest;	// IMP=0x001000000051fb65
- (id)initWithApplication:(id)arg1 testName:(id)arg2 options:(id)arg3;	// IMP=0x001000000051f668

@end
