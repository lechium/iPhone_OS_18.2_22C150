//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOrderedSet;

__attribute__((visibility("hidden")))
@interface CNMultiValueReorderUpdate
{
    NSOrderedSet *_values;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000014dd92
@property(readonly, copy, nonatomic) NSOrderedSet *values; // @synthesize values=_values;
- (id)description;	// IMP=0x000000000014dcef
- (long long)compareIndexOfIdentifier:(id)arg1 toIndexOfIdentifier:(id)arg2;	// IMP=0x000000000014db0e
- (void)applyToMutableMultiValue:(id)arg1 withIdentifierMap:(id)arg2;	// IMP=0x000000000014da1f
- (id)initWithValues:(id)arg1;	// IMP=0x000000000014d97f
- (_Bool)applyToABPerson:(void *)arg1 abmultivalue:(void *)arg2 propertyDescription:(id)arg3 isUnified:(_Bool)arg4 logger:(id)arg5 error:(id *)arg6;	// IMP=0x00000000000f0b1b

@end

