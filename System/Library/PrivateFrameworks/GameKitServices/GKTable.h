//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GKTable : NSObject
{
    struct _gktableitem {
        unsigned int _field1;
        id _field2;
        double _field3;
        double _field4;
    } *_items;	// 8 = 0x8
    unsigned long long _count;	// 16 = 0x10
    unsigned long long _size;	// 24 = 0x18
    struct _opaque_pthread_mutex_t _lock;	// 32 = 0x20
}

@property(readonly) unsigned long long count; // @synthesize count=_count;
- (void)print;	// IMP=0x000000000003d870
- (void)unlock;	// IMP=0x000000000003d802
- (void)lock;	// IMP=0x000000000003d794
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;	// IMP=0x000000000003d701
- (void)makeObjectsPerformSelector:(SEL)arg1;	// IMP=0x000000000003d676
- (void)removeAllObjects;	// IMP=0x000000000003d5c2
- (void)removeObjectForKey:(unsigned int)arg1;	// IMP=0x000000000003d3e3
- (void)touchObjectForKey:(unsigned int)arg1;	// IMP=0x000000000003d36d
- (void)touchObject:(id)arg1;	// IMP=0x000000000003d2dc
- (void)setObject:(id)arg1 forKey:(unsigned int)arg2;	// IMP=0x000000000003cec7
- (id)allObjects;	// IMP=0x000000000003ce22
- (id)objectForKey:(unsigned int)arg1;	// IMP=0x000000000003cd99
- (void)dealloc;	// IMP=0x000000000003cd49
- (id)initWithSize:(unsigned long long)arg1;	// IMP=0x000000000003cc18
- (id)init;	// IMP=0x000000000003cc01

@end
