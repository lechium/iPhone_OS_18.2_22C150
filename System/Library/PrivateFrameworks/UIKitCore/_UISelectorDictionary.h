//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable, _UISelectorSet;

__attribute__((visibility("hidden")))
@interface _UISelectorDictionary : NSObject
{
    NSMapTable *_map;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000a7a328
- (id)description;	// IMP=0x0000000000a7a312
- (unsigned long long)hash;	// IMP=0x0000000000a7a2fc
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a7a2a5
- (void)enumerateSelectorsAndObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000a7a206
- (void)removeObjectsForSelectors:(id)arg1;	// IMP=0x0000000000a7a19b
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x0000000000a7a130
- (void)removeObjectForSelector:(SEL)arg1;	// IMP=0x0000000000a7a11f
- (void)setObject:(id)arg1 forSelector:(SEL)arg2;	// IMP=0x0000000000a7a10e
- (id)objectForSelector:(SEL)arg1;	// IMP=0x0000000000a7a0fd
@property(readonly, nonatomic) NSArray *allObjects;
@property(readonly, nonatomic) _UISelectorSet *allSelectors;
@property(readonly, nonatomic) unsigned long long count;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a79fd4
- (id)initWithMapping:(CDUnknownBlockType)arg1 objects:(id)arg2;	// IMP=0x0000000000a79e55
- (id)init;	// IMP=0x0000000000a79d28
- (id)initWithMap:(id)arg1;	// IMP=0x0000000000a79cbd

@end

