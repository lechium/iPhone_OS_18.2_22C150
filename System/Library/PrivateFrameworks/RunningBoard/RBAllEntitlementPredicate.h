//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "RBEntitlementPredicate.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface RBAllEntitlementPredicate : RBEntitlementPredicate
{
    NSDictionary *_predicate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000525cb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000525c0
- (id)description;	// IMP=0x000000000005251e
- (id)allEntitlements;	// IMP=0x00000000000523be
- (unsigned long long)count;	// IMP=0x00000000000522b2
- (_Bool)matchesEntitlements:(id)arg1;	// IMP=0x000000000005213a
- (id)initWithDictionary:(id)arg1 forDomain:(id)arg2 attribute:(id)arg3 errors:(id)arg4;	// IMP=0x0000000000051c4f

@end
