//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DynamicAssociatedDomainPattern
{
}

+ (id)_propertySetters;	// IMP=0x0040000000164eb9
+ (id)_propertyValuesFor:(id)arg1;	// IMP=0x0010000000164e2e
+ (id)_predicateForDomainPID:(long long)arg1;	// IMP=0x0010000000164dbd
+ (void)deletePatternsForDomainPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000164d24
+ (id)_objectsWithQuery:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000164b55
+ (id)patternsForDomainPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000164aa5
+ (void)insertPatterns:(id)arg1 forDomainPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000016492c
+ (id)databaseTable;	// IMP=0x0010000000164841
- (id)initWithPattern:(id)arg1 forDomainPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x004000000016484e

@end

