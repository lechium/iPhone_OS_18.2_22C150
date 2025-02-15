//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CLPedestrianFenceStatus : NSObject
{
    float _radius;	// 8 = 0x8
    float _radialDisplacement;	// 12 = 0xc
    double _duration;	// 16 = 0x10
}

@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) float radialDisplacement; // @synthesize radialDisplacement=_radialDisplacement;
@property(nonatomic) float radius; // @synthesize radius=_radius;
- (id)description;	// IMP=0x00100000010306dd
- (id)initWithRadius:(float)arg1 radialDisplacement:(float)arg2 duration:(double)arg3;	// IMP=0x001000000103067c

@end

