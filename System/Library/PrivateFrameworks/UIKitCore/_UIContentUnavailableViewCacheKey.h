//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIContentUnavailableViewCacheKey : NSObject
{
    unsigned long long _style;	// 8 = 0x8
    struct CGColor *_color;	// 16 = 0x10
}

- (void)dealloc;	// IMP=0x0000000001a70f24
- (_Bool)isEqualToCacheKey:(id)arg1;	// IMP=0x0000000001a70ed9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001a70e72
- (unsigned long long)hash;	// IMP=0x0000000001a70e4c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001a70e41
- (id)initWithStyle:(unsigned long long)arg1 color:(struct CGColor *)arg2;	// IMP=0x0000000001a70de7

@end

