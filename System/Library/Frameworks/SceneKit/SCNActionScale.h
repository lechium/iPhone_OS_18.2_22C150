//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SCNAction.h"

__attribute__((visibility("hidden")))
@interface SCNActionScale : SCNAction
{
    struct SCNCActionScale *_mycaction;	// 8 = 0x8
}

+ (id)scaleTo:(double)arg1 duration:(double)arg2;	// IMP=0x00600000002d4224
+ (id)scaleBy:(double)arg1 duration:(double)arg2;	// IMP=0x00600000002d418e
+ (_Bool)supportsSecureCoding;	// IMP=0x00600000002d4186
- (_Bool)isRelative;	// IMP=0x00000000002d444b
- (id)parameters;	// IMP=0x00000000002d43cf
- (id)reversedAction;	// IMP=0x00000000002d4321
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002d4297
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002d4000
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002d3db4
- (id)init;	// IMP=0x00000000002d3cbc

@end
