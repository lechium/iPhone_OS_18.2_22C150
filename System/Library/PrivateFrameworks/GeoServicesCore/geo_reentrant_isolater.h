//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface geo_reentrant_isolater : NSObject
{
    char *_name;	// 8 = 0x8
    struct os_unfair_recursive_lock_s _lock;	// 16 = 0x10
}

- (id)debugDescription;	// IMP=0x00000000000039b3
- (id)description;	// IMP=0x000000000000393e
- (void)dealloc;	// IMP=0x00000000000038ff
- (id)initWithName:(const char *)arg1;	// IMP=0x000000000000389e

@end
