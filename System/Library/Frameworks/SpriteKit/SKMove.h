//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKAction.h"

__attribute__((visibility("hidden")))
@interface SKMove : SKAction
{
    struct SKCMove *_mycaction;	// 8 = 0x8
}

+ (id)moveByY:(double)arg1 duration:(double)arg2;	// IMP=0x006000000003d7a7
+ (id)moveToY:(double)arg1 duration:(double)arg2;	// IMP=0x006000000003d70c
+ (id)moveByX:(double)arg1 duration:(double)arg2;	// IMP=0x006000000003d66a
+ (id)moveToX:(double)arg1 duration:(double)arg2;	// IMP=0x006000000003d5cf
+ (id)moveToX:(double)arg1 y:(double)arg2 duration:(double)arg3;	// IMP=0x006000000003d53d
+ (id)moveTo:(struct CGPoint)arg1 duration:(double)arg2;	// IMP=0x006000000003d524
+ (id)moveByX:(double)arg1 y:(double)arg2 duration:(double)arg3;	// IMP=0x006000000003d48c
+ (id)moveBy:(struct CGPoint)arg1 duration:(double)arg2;	// IMP=0x006000000003d473
+ (_Bool)supportsSecureCoding;	// IMP=0x006000000003ca02
- (id)reversedAction;	// IMP=0x000000000003d8d5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003d849
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003d077
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003cb11
- (id)init;	// IMP=0x000000000003ca0a

@end
