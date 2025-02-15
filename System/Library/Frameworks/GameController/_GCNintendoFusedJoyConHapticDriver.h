//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol _GCDriverClientInterface;

__attribute__((visibility("hidden")))
@interface _GCNintendoFusedJoyConHapticDriver : NSObject
{
    id <_GCDriverClientInterface> _leftDriver;	// 8 = 0x8
    id <_GCDriverClientInterface> _rightDriver;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002ec8a
- (void)setHapticMotor:(unsigned long long)arg1 frequency:(float)arg2 amplitude:(float)arg3;	// IMP=0x000000000002ec2a
- (void)enqueueTransient:(id)arg1 hapticMotor:(unsigned long long)arg2;	// IMP=0x000000000002ebb0
- (void)enableHaptics;	// IMP=0x000000000002eb75
- (id)getDriver:(unsigned long long)arg1;	// IMP=0x000000000002eb5d
- (id)initWithDevice:(id)arg1;	// IMP=0x000000000002ea2f

@end

