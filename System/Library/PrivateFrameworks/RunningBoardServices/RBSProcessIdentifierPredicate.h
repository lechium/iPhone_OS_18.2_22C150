//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "RBSProcessPredicateImpl.h"

@protocol RBSProcessIdentifier;

__attribute__((visibility("hidden")))
@interface RBSProcessIdentifierPredicate : RBSProcessPredicateImpl
{
    id <RBSProcessIdentifier> _identifier;	// 8 = 0x8
}

+ (_Bool)supportsRBSXPCSecureCoding;	// IMP=0x0060000000039f32
- (void).cxx_destruct;	// IMP=0x000000000003a00d
@property(readonly, nonatomic) id <RBSProcessIdentifier> identifier; // @synthesize identifier=_identifier;
- (id)initWithRBSXPCCoder:(id)arg1;	// IMP=0x0000000000039f64
- (void)encodeWithRBSXPCCoder:(id)arg1;	// IMP=0x0000000000039f3a
- (id)description;	// IMP=0x0000000000039eae
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000039e29
- (unsigned long long)hash;	// IMP=0x0000000000039dd3
- (id)processPredicate;	// IMP=0x0000000000039db7
- (_Bool)matchesProcess:(id)arg1;	// IMP=0x0000000000039d9a
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000039cb1

@end

