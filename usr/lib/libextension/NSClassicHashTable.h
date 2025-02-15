//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSHashTable.h"

__attribute__((visibility("hidden")))
@interface NSClassicHashTable : NSHashTable
{
    struct {
        CDUnknownFunctionPointerType hash;
        CDUnknownFunctionPointerType isEqual;
        CDUnknownFunctionPointerType retain;
        CDUnknownFunctionPointerType release;
        CDUnknownFunctionPointerType describe;
    } _callBacks;	// 8 = 0x8
    struct __CFBasicHash *_ht;	// 48 = 0x30
}

- (void)getKeys:(const void **)arg1 count:(unsigned long long *)arg2;	// IMP=0x0000000000782d9d
- (id)allObjects;	// IMP=0x0000000000782b99
- (id)description;	// IMP=0x00000000007829a1
- (unsigned long long)count;	// IMP=0x000000000078298c
- (void)removeItem:(const void *)arg1;	// IMP=0x000000000078293f
- (void)insertKnownAbsentItem:(const void *)arg1;	// IMP=0x0000000000782835
- (void)addObject:(id)arg1;	// IMP=0x00000000007827e8
- (void)insertItem:(const void *)arg1;	// IMP=0x000000000078279b
- (void *)getItem:(const void *)arg1;	// IMP=0x000000000078272e
- (id)copy;	// IMP=0x000000000078265e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000782604
- (unsigned long long)hash;	// IMP=0x00000000007825f2
- (void)removeAllItems;	// IMP=0x00000000007825d3
- (void)dealloc;	// IMP=0x000000000078256f
- (id)init;	// IMP=0x0000000000782566

@end

