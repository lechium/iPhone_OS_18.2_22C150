//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface APCacheableObjectWrapper
{
    id _object;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000141bcb
- (void).cxx_destruct;	// IMP=0x0020000000141ec4
@property(readonly, nonatomic) id object; // @synthesize object=_object;
- (long long)garbageCollect;	// IMP=0x0010000000141d84
- (_Bool)canBeGarbageCollected;	// IMP=0x0010000000141d7c
- (id)initWithObject:(id)arg1 identifier:(id)arg2;	// IMP=0x0010000000141d1a
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000141c6e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000141bd3

@end
