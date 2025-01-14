//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EQKitBox : NSObject
{
}

- (id)description;	// IMP=0x00000000000582c7
- (id)hitTest:(struct CGPoint)arg1;	// IMP=0x000000000005829e
- (_Bool)containsPoint:(struct CGPoint)arg1;	// IMP=0x0000000000058218
- (_Bool)appendOpticalAlignToSpec:(void *)arg1 offset:(struct CGPoint)arg2;	// IMP=0x0000000000058210
- (_Bool)p_getTransform:(struct CGAffineTransform *)arg1 fromDescendant:(id)arg2;	// IMP=0x0000000000058204
- (struct CGAffineTransform)transformFromDescendant:(id)arg1;	// IMP=0x00000000000581be
- (void)renderIntoContext:(id)arg1 offset:(struct CGPoint)arg2;	// IMP=0x0000000000057dd1
@property(readonly, nonatomic) struct CGRect erasableBounds;
@property(readonly, nonatomic) double layoutVSize;
@property(readonly, nonatomic) double layoutDepth;
@property(readonly, nonatomic) double layoutHeight;
@property(readonly, nonatomic) double vsize;
@property(readonly, nonatomic) double opticalAlignWidth;
@property(readonly, nonatomic) double width;
@property(readonly, nonatomic) double depth;
@property(readonly, nonatomic) double height;
@property(readonly, nonatomic) struct CGColor *color;
- (unsigned long long)hash;	// IMP=0x0000000000057c28
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000057c1c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000057be3
- (struct CGRect)boundsWithRoot:(id)arg1;	// IMP=0x0000000000057ad4
- (id)containedBoxes;	// IMP=0x0000000000057acc
- (_Bool)canContainBoxes;	// IMP=0x0000000000057ac4

@end

