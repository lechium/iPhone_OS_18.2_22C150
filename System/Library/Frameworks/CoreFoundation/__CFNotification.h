//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface __CFNotification : NSObject
{
    id _name;	// 8 = 0x8
    id _object;	// 16 = 0x10
    id _userInfo;	// 24 = 0x18
    _Bool _fouSemantics;	// 32 = 0x20
}

- (void)dealloc;	// IMP=0x000000000005c8a8
- (id)initWithName:(struct __CFString *)arg1 object:(const void *)arg2 userInfo:(struct __CFDictionary *)arg3 foundation:(_Bool)arg4;	// IMP=0x000000000005c80c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005c806
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005c6e8
- (unsigned long long)hash;	// IMP=0x000000000005c6bd
- (id)userInfo;	// IMP=0x000000000005c6b8
- (id)object;	// IMP=0x000000000005c6b3
- (id)name;	// IMP=0x000000000005c6ae

@end

