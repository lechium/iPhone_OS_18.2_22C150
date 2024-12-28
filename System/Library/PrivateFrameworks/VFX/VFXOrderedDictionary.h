//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface VFXOrderedDictionary : NSObject
{
    NSMutableArray *_keys;	// 8 = 0x8
    NSMutableDictionary *_keyValues;	// 16 = 0x10
}

- (id)description;	// IMP=0x0000000000165d92
- (id)copy;	// IMP=0x0000000000165d5d
- (void)_setupFrom:(id)arg1;	// IMP=0x0000000000165d01
- (id)keys;	// IMP=0x0000000000165cf7
- (id)dictionary;	// IMP=0x0000000000165ced
- (id)allValues;	// IMP=0x0000000000165cd7
- (unsigned long long)count;	// IMP=0x0000000000165cc1
- (void)applyBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000165b7c
- (void)applyFunction:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2;	// IMP=0x0000000000165a33
- (id)allKeys;	// IMP=0x0000000000165a15
- (void)removeAllObjects;	// IMP=0x00000000001659ea
- (void)removeObjectForKey:(id)arg1;	// IMP=0x0000000000165953
- (id)objectAtIndex:(long long)arg1;	// IMP=0x000000000016591e
- (id)objectForKey:(id)arg1;	// IMP=0x0000000000165908
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000165877
- (id)valueForKey:(id)arg1;	// IMP=0x0000000000165865
- (void)setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000165853
- (void)dealloc;	// IMP=0x0000000000165809

@end
