//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UISegmentedControlCacheKey : NSObject
{
    struct CGSize _size;	// 8 = 0x8
    double _cornerRadius;	// 24 = 0x18
    double _scale;	// 32 = 0x20
    unsigned long long _state;	// 40 = 0x28
    struct CGColor *_primaryColor;	// 48 = 0x30
}

- (void)dealloc;	// IMP=0x00000000009569da
- (_Bool)isEqualToCacheKey:(id)arg1;	// IMP=0x0000000000956947
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000009568e0
- (unsigned long long)hash;	// IMP=0x00000000009567fb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000009567f0
- (id)initWithCornerRadius:(double)arg1 capSize:(struct CGSize)arg2 scale:(double)arg3 state:(unsigned long long)arg4 primaryColor:(struct CGColor *)arg5;	// IMP=0x0000000000956756
- (id)initWithSize:(int)arg1 scale:(double)arg2 primaryColor:(struct CGColor *)arg3 background:(_Bool)arg4;	// IMP=0x00000000009566c9

@end
