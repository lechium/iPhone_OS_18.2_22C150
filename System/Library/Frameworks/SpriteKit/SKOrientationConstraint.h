//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKConstraint.h"

@class SKNode, SKRange;

__attribute__((visibility("hidden")))
@interface SKOrientationConstraint : SKConstraint
{
    SKNode *_node;	// 24 = 0x18
    SKRange *_offset;	// 32 = 0x20
    struct CGPoint _point;	// 40 = 0x28
}

+ (id)constraintOrientingToPoint:(struct CGPoint)arg1 offset:(id)arg2;	// IMP=0x006000000007e790
+ (id)constraintOrientingToNode:(id)arg1 offset:(id)arg2;	// IMP=0x006000000007e6ec
+ (id)constraintOrientingToPoint:(struct CGPoint)arg1 inNode:(id)arg2 offset:(id)arg3;	// IMP=0x006000000007e63c
+ (_Bool)supportsSecureCoding;	// IMP=0x006000000007dea0
- (void).cxx_destruct;	// IMP=0x000000000007e8d7
@property(copy) SKRange *offset; // @synthesize offset=_offset;
@property struct CGPoint point; // @synthesize point=_point;
@property __weak SKNode *node; // @synthesize node=_node;
- (_Bool)isEqualToOrientationConstraint:(id)arg1;	// IMP=0x000000000007e317
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007e226
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007e10b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007df9d
- (id)initWithNode:(id)arg1 point:(struct CGPoint)arg2 offset:(id)arg3;	// IMP=0x000000000007dea8

@end

