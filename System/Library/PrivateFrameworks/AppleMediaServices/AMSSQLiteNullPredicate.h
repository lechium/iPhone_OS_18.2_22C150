//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface AMSSQLiteNullPredicate
{
    _Bool _matchesNull;	// 16 = 0x10
}

+ (id)isNullPredicateWithProperty:(id)arg1;	// IMP=0x00100000004e09ca
+ (id)isNotNullPredicateWithProperty:(id)arg1;	// IMP=0x00100000004e0950
@property(readonly, nonatomic) _Bool matchesNull; // @synthesize matchesNull=_matchesNull;
- (id)SQLForEntityClass:(Class)arg1;	// IMP=0x00000000004e0ae1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004e0a4f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004e0a44

@end

