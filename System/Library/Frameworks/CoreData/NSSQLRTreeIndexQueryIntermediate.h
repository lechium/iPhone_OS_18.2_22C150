//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSExpression, NSSQLEntity;

__attribute__((visibility("hidden")))
@interface NSSQLRTreeIndexQueryIntermediate
{
    NSSQLEntity *_entity;	// 16 = 0x10
    NSExpression *_indexName;	// 24 = 0x18
    NSArray *_properties;	// 32 = 0x20
    NSArray *_ranges;	// 40 = 0x28
}

- (id)generateSQLStringInContext:(id)arg1;	// IMP=0x000000000017b8ea
- (void)dealloc;	// IMP=0x000000000017b4dc
- (id)initForIndexNamed:(id)arg1 onEntity:(id)arg2 properties:(id)arg3 ranges:(id)arg4 inScope:(id)arg5;	// IMP=0x000000000017b439

@end
