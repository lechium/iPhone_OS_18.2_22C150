//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABAllContactsPredicate : CNPredicate
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000e2fa4
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e3066
- (id)cn_ABQSLPredicateForAddressBook:(void *)arg1 fetchRequest:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000e304d
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 error:(struct __CFError **)arg5;	// IMP=0x00000000000e3022
- (_Bool)cn_supportsEncodedFetching;	// IMP=0x00000000000e301a
- (_Bool)cn_supportsNativeBatchFetch;	// IMP=0x00000000000e3012
- (_Bool)cn_supportsNativeSorting;	// IMP=0x00000000000e300a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e2fdb
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e2fac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

