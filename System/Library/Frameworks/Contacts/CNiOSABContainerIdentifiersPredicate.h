//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABContainerIdentifiersPredicate : CNPredicate
{
    NSArray *_identifiers;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000f623d
- (void).cxx_destruct;	// IMP=0x00000000000f65a9
@property(readonly, copy, nonatomic) NSArray *identifiers; // @synthesize identifiers=_identifiers;
@property(readonly, copy) NSString *description;
- (_Bool)includesDisabledContainers;	// IMP=0x00000000000f64c8
- (struct __CFArray *)cn_copyContainersInAddressBook:(void *)arg1 error:(struct __CFError **)arg2;	// IMP=0x00000000000f63dd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000f6360
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f6245
- (id)initWithIdentifiers:(id)arg1;	// IMP=0x00000000000f6174

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
