//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface BKAccelerometerClientUIApp
{
    long long _lastOrientation;	// 16 = 0x10
}

- (void)handleOrientationEvent:(long long)arg1 orientationLocked:(_Bool)arg2;	// IMP=0x002000000007ab1c
- (void)_queue_invalidate;	// IMP=0x001000000007aaed
- (void)setWantsAccelerometerEvents:(_Bool)arg1;	// IMP=0x001000000007aa85
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x001000000007aa15
- (id)initWithPid:(int)arg1 sendRight:(id)arg2 queue:(id)arg3;	// IMP=0x001000000007a9b8

@end

