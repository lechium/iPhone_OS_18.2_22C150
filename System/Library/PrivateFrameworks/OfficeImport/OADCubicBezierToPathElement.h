//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface OADCubicBezierToPathElement
{
    struct OADAdjustPoint mControlPoint1;	// 8 = 0x8
    struct OADAdjustPoint mControlPoint2;	// 24 = 0x18
    struct OADAdjustPoint mToPoint;	// 40 = 0x28
    _Bool mRelative;	// 56 = 0x38
}

- (void)setRelative:(_Bool)arg1;	// IMP=0x000000000015e0aa
- (_Bool)relative;	// IMP=0x0000000000318b03
- (struct OADAdjustPoint)toPoint;	// IMP=0x000000000015e219
- (struct OADAdjustPoint)controlPoint2;	// IMP=0x000000000015e245
- (struct OADAdjustPoint)controlPoint1;	// IMP=0x000000000015e22f
- (id)initWithControlPoint1:(struct OADAdjustPoint)arg1 controlPoint2:(struct OADAdjustPoint)arg2 toPoint:(struct OADAdjustPoint)arg3;	// IMP=0x000000000015e02a

@end
