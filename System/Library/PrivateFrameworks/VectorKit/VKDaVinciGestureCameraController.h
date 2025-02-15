//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VKDaVinciGestureCameraController
{
    void *_cameraManager;	// 176 = 0xb0
    double _beganDoublePanPitch;	// 184 = 0xb8
    double _currentDoublePanPitch;	// 192 = 0xc0
    _Bool _isPitchIncreasing;	// 200 = 0xc8
}

- (void)updateWithTimestamp:(double)arg1 withContext:(void *)arg2;	// IMP=0x0000000000b15ad0
- (_Bool)isPitchIncreasing;	// IMP=0x0000000000b15ab0
- (void)endPitch:(struct CGPoint)arg1;	// IMP=0x0000000000b15a30
- (void)updatePitch:(struct CGPoint)arg1 degrees:(double)arg2;	// IMP=0x0000000000b15750
- (void)updatePitch:(struct CGPoint)arg1 translation:(double)arg2;	// IMP=0x0000000000b15470
- (void)beginPitch:(struct CGPoint)arg1;	// IMP=0x0000000000b15320
- (void)endRotate:(struct CGPoint)arg1;	// IMP=0x0000000000b152a0
- (void)updateRotate:(double)arg1 atScreenPoint:(struct CGPoint)arg2;	// IMP=0x0000000000b15200
- (void)beginRotate:(struct CGPoint)arg1;	// IMP=0x0000000000b15160
- (void)endPan:(struct CGPoint)arg1;	// IMP=0x0000000000b150e0
- (void)updatePan:(struct CGPoint)arg1 lastScreenPoint:(struct CGPoint)arg2;	// IMP=0x0000000000b15060
- (void)beginPan:(struct CGPoint)arg1;	// IMP=0x0000000000b14fc0
- (void)endZoom:(struct CGPoint)arg1;	// IMP=0x0000000000b14f40
- (void)updateZoom:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;	// IMP=0x0000000000b14e80
- (void)beginZoom:(struct CGPoint)arg1;	// IMP=0x0000000000b14dd0
- (id)initWithCameraController:(id)arg1 cameraManager:(void *)arg2;	// IMP=0x0000000000b14d80

@end

