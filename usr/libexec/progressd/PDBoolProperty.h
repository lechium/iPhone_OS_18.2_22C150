//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PDBoolProperty
{
    _Bool _value;	// 16 = 0x10
}

+ (id)valueSQLType;	// IMP=0x0000000000197a50
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x00100000001977dd
+ (id)entityName;	// IMP=0x00100000001977d0
- (void)bindTo:(id)arg1;	// IMP=0x00200000001979af
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x0010000000197915

@end
