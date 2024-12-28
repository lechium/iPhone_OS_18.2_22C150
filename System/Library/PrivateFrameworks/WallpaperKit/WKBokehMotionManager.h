//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CMMotionManager, WKBokehInfiniteImpulseResponseFilter;

__attribute__((visibility("hidden")))
@interface WKBokehMotionManager : NSObject
{
    double _x;	// 8 = 0x8
    double _y;	// 16 = 0x10
    double _z;	// 24 = 0x18
    struct {
        double x;
        double y;
        double z;
        double w;
    } _attitude;	// 32 = 0x20
    double _roll;	// 64 = 0x40
    double _pitch;	// 72 = 0x48
    double _yaw;	// 80 = 0x50
    double _coefficient;	// 88 = 0x58
    double _threshold;	// 96 = 0x60
    unsigned long long _referenceFrame;	// 104 = 0x68
    CMMotionManager *_motionManager;	// 112 = 0x70
    _Bool _motionManagerPaused;	// 120 = 0x78
    WKBokehInfiniteImpulseResponseFilter *_motionFilterX;	// 128 = 0x80
    WKBokehInfiniteImpulseResponseFilter *_motionFilterY;	// 136 = 0x88
    WKBokehInfiniteImpulseResponseFilter *_motionFilterZ;	// 144 = 0x90
    WKBokehInfiniteImpulseResponseFilter *_motionFilterAX;	// 152 = 0x98
    WKBokehInfiniteImpulseResponseFilter *_motionFilterAY;	// 160 = 0xa0
    WKBokehInfiniteImpulseResponseFilter *_motionFilterAZ;	// 168 = 0xa8
    WKBokehInfiniteImpulseResponseFilter *_motionFilterAW;	// 176 = 0xb0
    WKBokehInfiniteImpulseResponseFilter *_motionFilterRoll;	// 184 = 0xb8
    WKBokehInfiniteImpulseResponseFilter *_motionFilterPitch;	// 192 = 0xc0
    WKBokehInfiniteImpulseResponseFilter *_motionFilterYaw;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x0000000000026fb8
- (id)init;	// IMP=0x000000000002659a

@end
