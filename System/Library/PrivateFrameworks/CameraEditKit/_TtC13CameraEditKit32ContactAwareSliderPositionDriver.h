//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC13CameraEditKit32ContactAwareSliderPositionDriver : NSObject
{
    MISSING_TYPE *distanceTraveled;	// 8 = 0x8
    MISSING_TYPE *distanceToDecelerate;	// 16 = 0x10
    MISSING_TYPE *samples;	// 24 = 0x18
    MISSING_TYPE *deadZoneSample;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000049740
- (id)init;	// IMP=0x00000000000496f0
- (void)contactEndedWithAction:(id)arg1;	// IMP=0x0000000000049390
- (void)contactUpdatedWithAction:(id)arg1;	// IMP=0x0000000000049160
- (void)contactBeganWithAction:(id)arg1;	// IMP=0x0000000000048cb0
@property(nonatomic, readonly) double velocity;
@property(nonatomic) double distanceToDecelerate; // @synthesize distanceToDecelerate;
@property(nonatomic) double distanceTraveled; // @synthesize distanceTraveled;

@end
