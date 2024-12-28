//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, SQLiteQuery;

@interface SQLiteContainsPredicate
{
    _Bool _negative;	// 24 = 0x18
    SQLiteQuery *_query;	// 32 = 0x20
    NSString *_queryProperty;	// 40 = 0x28
    id _values;	// 48 = 0x30
}

+ (id)doesNotContainPredicateWithProperty:(id)arg1 values:(id)arg2;	// IMP=0x002000000006d4b3
+ (id)containsPredicateWithProperty:(id)arg1 query:(id)arg2 queryProperty:(id)arg3;	// IMP=0x001000000006d3c2
+ (id)containsPredicateWithProperty:(id)arg1 values:(id)arg2;	// IMP=0x001000000006d301
- (void).cxx_destruct;	// IMP=0x002000000006db2e
@property(readonly, nonatomic) NSArray *values; // @synthesize values=_values;
@property(readonly, nonatomic) NSString *queryProperty; // @synthesize queryProperty=_queryProperty;
@property(readonly, nonatomic) SQLiteQuery *query; // @synthesize query=_query;
@property(readonly, nonatomic, getter=isNegative) _Bool negative; // @synthesize negative=_negative;
- (id)SQLForEntityClass:(Class)arg1;	// IMP=0x001000000006d922
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000006d719
- (void)applyBinding:(id)arg1 atIndex:(inout int *)arg2;	// IMP=0x001000000006d57f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000006d574

@end
