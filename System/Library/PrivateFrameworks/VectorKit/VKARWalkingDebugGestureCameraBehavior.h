//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VKARWalkingCameraController;

__attribute__((visibility("hidden")))
@interface VKARWalkingDebugGestureCameraBehavior
{
    VKARWalkingCameraController *_controller;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x0000000001069240
- (void)updateRotate:(double)arg1 atScreenPoint:(struct CGPoint)arg2;	// IMP=0x0000000001069120
- (void)updateZoom:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;	// IMP=0x0000000001069110
- (void)updatePan:(struct CGPoint)arg1 lastScreenPoint:(struct CGPoint)arg2;	// IMP=0x0000000001068f80
- (id)initWithCameraController:(id)arg1;	// IMP=0x0000000001068ef0

@end

