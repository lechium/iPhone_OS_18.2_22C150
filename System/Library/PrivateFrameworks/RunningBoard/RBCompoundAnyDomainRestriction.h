//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "RBDomainRestriction.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface RBCompoundAnyDomainRestriction : RBDomainRestriction
{
    NSArray *_restrictions;	// 8 = 0x8
}

+ (id)domainRestrictionForDictionary:(id)arg1 withError:(id *)arg2;	// IMP=0x006000000007b0c8
- (void).cxx_destruct;	// IMP=0x000000000007bcac
- (id)description;	// IMP=0x000000000007bc28
- (unsigned long long)hash;	// IMP=0x000000000007bc0b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007bb86
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007bb7b
- (id)allEntitlements;	// IMP=0x000000000007b9ae
- (_Bool)allowsContext:(id)arg1 withError:(id *)arg2;	// IMP=0x000000000007b44c
- (id)_initWithRestrictions:(id)arg1;	// IMP=0x000000000007b037

@end
