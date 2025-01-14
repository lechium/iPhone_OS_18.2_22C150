//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKSQLiteCacheTable.h>

@interface CKDIdentityCacheTable : CKSQLiteCacheTable
{
}

+ (Class)entryClass;	// IMP=0x008000000008493a
+ (id)dbProperties;	// IMP=0x008000000008492d
- (id)cachedIdentityForLookupInfo:(id)arg1 container:(id)arg2;	// IMP=0x0000000000084dfe
- (id)insertUserIdentity:(id)arg1 forLookupInfo:(id)arg2 container:(id)arg3;	// IMP=0x0000000000084c26
- (void)deleteUserIdentityForLookupInfo:(id)arg1 container:(id)arg2;	// IMP=0x0000000000084b86
- (id)predicateForMatchingLookupInfoInContainer;	// IMP=0x0000000000084b64
- (id)valuesDictionaryForLookupInfo:(id)arg1 container:(id)arg2;	// IMP=0x0000000000084a0e
- (id)objectClassesForProperty:(id)arg1;	// IMP=0x000000000008494b

@end

