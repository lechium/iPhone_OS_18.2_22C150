//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SQLiteComparisonPredicate
{
    long long _comparisonType;	// 16 = 0x10
    id _value;	// 24 = 0x18
}

+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparisonType:(long long)arg3;	// IMP=0x0020000000205f89
+ (id)predicateWithProperty:(id)arg1 equalToValue:(id)arg2;	// IMP=0x0010000000205f71
+ (id)predicateWithProperty:(id)arg1 equalToLongLong:(long long)arg2;	// IMP=0x0010000000205eea
- (void).cxx_destruct;	// IMP=0x00200000002064df
@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) long long comparisonType; // @synthesize comparisonType=_comparisonType;
- (id)SQLForEntityClass:(Class)arg1;	// IMP=0x0010000000206402
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000002062c8
- (unsigned long long)hash;	// IMP=0x001000000020623c
- (id)description;	// IMP=0x0010000000206152
- (void)applyBinding:(id)arg1 atIndex:(inout int *)arg2;	// IMP=0x0010000000206087
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000020607c

@end

