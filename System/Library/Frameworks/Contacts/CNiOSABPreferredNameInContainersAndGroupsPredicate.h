//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABPreferredNameInContainersAndGroupsPredicate : CNPredicate
{
    NSArray *_containerIdentifiers;	// 24 = 0x18
    NSArray *_groupIdentifiers;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001228ef
- (void).cxx_destruct;	// IMP=0x0000000000122ea2
@property(readonly, copy, nonatomic) NSArray *groupIdentifiers; // @synthesize groupIdentifiers=_groupIdentifiers;
@property(readonly, copy, nonatomic) NSArray *containerIdentifiers; // @synthesize containerIdentifiers=_containerIdentifiers;
@property(readonly, copy) NSString *description;
- (id)cn_ABQSLPredicateForAddressBook:(void *)arg1 fetchRequest:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000122d6a
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 error:(struct __CFError **)arg5;	// IMP=0x0000000000122b64
- (_Bool)cn_supportsEncodedFetching;	// IMP=0x0000000000122b5c
- (_Bool)cn_supportsNativeBatchFetch;	// IMP=0x0000000000122b54
- (_Bool)cn_supportsNativeSorting;	// IMP=0x0000000000122b4c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000122aad
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001228f7
- (id)initWithContainerIdentifiers:(id)arg1 groupIdentifiers:(id)arg2;	// IMP=0x0000000000122828

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
