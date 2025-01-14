//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OITSUIntegerKeyDictionary;

__attribute__((visibility("hidden")))
@interface EDKeyedCollection
{
    OITSUIntegerKeyDictionary *mMap;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003a3b13
- (id)objectWithKey:(long long)arg1;	// IMP=0x0000000000134607
- (void)removeAllObjects;	// IMP=0x00000000003a3ac9
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000023fcec
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x00000000003a3a36
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000001247d0
- (unsigned long long)addObject:(id)arg1;	// IMP=0x0000000000115156
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000225b38
- (_Bool)isOverwritingKeyOK;	// IMP=0x00000000003a3ba6
- (void)removeFromMap:(id)arg1;	// IMP=0x000000000023fd90
- (void)insertIntoMap:(id)arg1;	// IMP=0x000000000011527e
- (_Bool)isObjectInMap:(id)arg1;	// IMP=0x00000000003a3b26

@end

