//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface GreymatterQueueInput
{
    _Bool _onGreymatterQueue;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000000c194
@property(nonatomic) _Bool onGreymatterQueue; // @synthesize onGreymatterQueue=_onGreymatterQueue;
- (id)description;	// IMP=0x001000000000c0c9
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000bf5a
- (unsigned long long)hash;	// IMP=0x001000000000bf0c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000000bea9
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000000be2f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000000bda9
- (id)initOnQueue:(id)arg1 status:(unsigned long long)arg2 process:(id)arg3;	// IMP=0x001000000000bc35

@end
