//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIBarAppearanceData : NSObject
{
    _Bool _immutable;	// 8 = 0x8
}

+ (id)decodeFromCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x00100000003d5079
- (id)markReadOnly;	// IMP=0x00000000003d512c
- (void)assertMutable:(SEL)arg1;	// IMP=0x00000000003d50b8
- (id)replicate;	// IMP=0x00000000003d509e
- (_Bool)checkEqualTo:(id)arg1;	// IMP=0x00000000003d5096
- (long long)hashInto:(long long)arg1;	// IMP=0x00000000003d508d
- (void)describeInto:(id)arg1;	// IMP=0x00000000003d5087
- (void)encodeToCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x00000000003d5081
- (id)description;	// IMP=0x00000000003d4fd7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003d4f67
- (unsigned long long)hash;	// IMP=0x00000000003d4f53
- (id)writableInstance;	// IMP=0x00000000003d4f23
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003d4efb

@end

