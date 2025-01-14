//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet;

__attribute__((visibility("hidden")))
@interface SKUISettingsObjectStore : NSObject
{
    NSMutableOrderedSet *_allObjects;	// 8 = 0x8
    _Bool _dirty;	// 16 = 0x10
    NSMutableOrderedSet *_visibleObjects;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000025fd2d
- (void)_updateVisibleOrder;	// IMP=0x000000000025fb83
- (id)description;	// IMP=0x000000000025f8f4
- (id)visibleObjectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000025f8b9
- (void)revealObject:(id)arg1;	// IMP=0x000000000025f852
- (void)removeObject:(id)arg1;	// IMP=0x000000000025f7f3
- (_Bool)objectIsVisible:(id)arg1;	// IMP=0x000000000025f7cc
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000025f7b6
- (unsigned long long)numberOfVisibleObjects;	// IMP=0x000000000025f7a0
- (unsigned long long)numberOfObjects;	// IMP=0x000000000025f78a
- (unsigned long long)indexOfVisibleObject:(id)arg1;	// IMP=0x000000000025f735
- (unsigned long long)indexOfObject:(id)arg1;	// IMP=0x000000000025f71f
- (void)hideObject:(id)arg1;	// IMP=0x000000000025f709
- (void)enumerateVisibleObjects:(CDUnknownBlockType)arg1;	// IMP=0x000000000025f6bb
- (void)enumerateObjects:(CDUnknownBlockType)arg1;	// IMP=0x000000000025f6a5
- (_Bool)containsObject:(id)arg1;	// IMP=0x000000000025f67e
- (void)addObject:(id)arg1 hidden:(_Bool)arg2;	// IMP=0x000000000025f624
- (id)allObjects;	// IMP=0x000000000025f606
- (id)init;	// IMP=0x000000000025f54a

@end

