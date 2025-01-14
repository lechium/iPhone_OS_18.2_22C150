//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DVTInstrumentsUtilities/NSObject-Protocol.h>

@class NSArray;

@protocol XRIntKeyedDictionaryImmutable <NSObject>
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)enumerateObjectsAndIntegerKeys:(void (^)(id, unsigned long long, _Bool *))arg1;
- (NSArray *)allKeys;
- (NSArray *)allObjects;
- (id)objectForIntegerKey:(unsigned long long)arg1;
@end

