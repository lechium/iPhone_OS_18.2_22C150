//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIShadowViewImageCacheKey : NSObject
{
    double _scale;	// 8 = 0x8
    double _size;	// 16 = 0x10
    unsigned long long _options;	// 24 = 0x18
}

- (_Bool)isEqualToCacheKey:(id)arg1;	// IMP=0x0000000000d6c321
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d6c2ba
- (unsigned long long)hash;	// IMP=0x0000000000d6c265
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d6c25a
- (id)initWithSize:(double)arg1 scale:(double)arg2 options:(unsigned long long)arg3;	// IMP=0x0000000000d6c1ff

@end
