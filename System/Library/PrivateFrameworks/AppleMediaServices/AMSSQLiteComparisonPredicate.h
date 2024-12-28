//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface AMSSQLiteComparisonPredicate
{
    long long _comparisonType;	// 16 = 0x10
    id _value;	// 24 = 0x18
}

+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparisonType:(long long)arg3;	// IMP=0x00100000004dfc57
+ (id)predicateWithProperty:(id)arg1 equalToValue:(id)arg2;	// IMP=0x00100000004dfc3f
+ (id)predicateWithProperty:(id)arg1 equalToLongLong:(long long)arg2;	// IMP=0x00100000004dfbb8
- (void).cxx_destruct;	// IMP=0x00000000004e00cd
@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) long long comparisonType; // @synthesize comparisonType=_comparisonType;
- (id)_comparisonTypeString;	// IMP=0x00000000004e007e
- (id)SQLForEntityClass:(Class)arg1;	// IMP=0x00000000004dffbe
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004dfe84
- (unsigned long long)hash;	// IMP=0x00000000004dfdf8
- (void)applyBinding:(id)arg1 atIndex:(inout int *)arg2;	// IMP=0x00000000004dfd55
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004dfd4a

@end
