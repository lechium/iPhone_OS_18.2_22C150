//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UISegmentedControlFontCacheKey : NSObject
{
    NSString *_styleProviderName;	// 8 = 0x8
    int _size;	// 16 = 0x10
    _Bool _selected;	// 20 = 0x14
    _Bool _bold;	// 21 = 0x15
}

- (void).cxx_destruct;	// IMP=0x00000000009566b9
- (_Bool)isEqualToCacheKey:(id)arg1;	// IMP=0x00000000009565d1
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000095656a
- (unsigned long long)hash;	// IMP=0x0000000000956535
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000095652a
- (id)initWithStyleProvider:(id)arg1 size:(int)arg2 selected:(_Bool)arg3 bold:(_Bool)arg4;	// IMP=0x000000000095648e

@end
