//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface OADVectorArcPathElement
{
    struct OADAdjustCoord mLeft;	// 8 = 0x8
    struct OADAdjustCoord mTop;	// 16 = 0x10
    struct OADAdjustCoord mRight;	// 24 = 0x18
    struct OADAdjustCoord mBottom;	// 32 = 0x20
    struct OADAdjustPoint mStartVector;	// 40 = 0x28
    struct OADAdjustPoint mEndVector;	// 56 = 0x38
    _Bool mClockwise;	// 72 = 0x48
    _Bool mConnectedToPrevious;	// 73 = 0x49
}

- (_Bool)connectedToPrevious;	// IMP=0x0000000000318cbb
- (_Bool)clockwise;	// IMP=0x0000000000318cab
- (struct OADAdjustPoint)endVector;	// IMP=0x0000000000318c95
- (struct OADAdjustPoint)startVector;	// IMP=0x0000000000318c7f
- (struct OADAdjustCoord)bottom;	// IMP=0x0000000000318c6e
- (struct OADAdjustCoord)right;	// IMP=0x0000000000318c5d
- (struct OADAdjustCoord)top;	// IMP=0x0000000000318c4c
- (struct OADAdjustCoord)left;	// IMP=0x0000000000318c3b
- (id)initWithLeft:(struct OADAdjustCoord)arg1 top:(struct OADAdjustCoord)arg2 right:(struct OADAdjustCoord)arg3 bottom:(struct OADAdjustCoord)arg4 startVector:(struct OADAdjustPoint)arg5 endVector:(struct OADAdjustPoint)arg6 clockwise:(_Bool)arg7 connectedToPrevious:(_Bool)arg8;	// IMP=0x0000000000161740

@end

