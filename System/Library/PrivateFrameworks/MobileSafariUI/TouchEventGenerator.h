//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TouchEventGenerator : NSObject
{
    struct __IOHIDEventSystemClient *_ioSystemClient;	// 8 = 0x8
    struct {
        int identifier;
        struct CGPoint point;
        double pathMajorRadius;
        double pathPressure;
        unsigned char pathProximity;
    } _activePoints[5];	// 16 = 0x10
    unsigned long long _activePointCount;	// 256 = 0x100
}

+ (id)sharedTouchEventGenerator;	// IMP=0x00600000001e2d59
- (void)moveToPoints:(struct CGPoint *)arg1 touchCount:(unsigned long long)arg2 duration:(double)arg3;	// IMP=0x00000000001e358c
- (void)liftUp:(struct CGPoint)arg1;	// IMP=0x00000000001e3575
- (void)liftUp:(struct CGPoint)arg1 touchCount:(unsigned long long)arg2;	// IMP=0x00000000001e34fb
- (void)liftUpAtPoints:(struct CGPoint *)arg1 touchCount:(unsigned long long)arg2;	// IMP=0x00000000001e3453
- (void)touchDown:(struct CGPoint)arg1;	// IMP=0x00000000001e3426
- (void)touchDown:(struct CGPoint)arg1 touchCount:(unsigned long long)arg2;	// IMP=0x00000000001e33ac
- (void)touchDownAtPoints:(struct CGPoint *)arg1 touchCount:(unsigned long long)arg2;	// IMP=0x00000000001e332d
- (void)_updateTouchPoints:(struct CGPoint *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000001e328a
- (_Bool)_sendHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00000000001e3025
- (struct __IOHIDEvent *)_createIOHIDEventType:(int)arg1;	// IMP=0x00000000001e2e07
- (id)init;	// IMP=0x00000000001e2d96

@end

