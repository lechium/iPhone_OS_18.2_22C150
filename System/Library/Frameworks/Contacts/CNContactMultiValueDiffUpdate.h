//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNMultiValueDiff, CNMultiValuePropertyDescription;

__attribute__((visibility("hidden")))
@interface CNContactMultiValueDiffUpdate
{
    CNMultiValuePropertyDescription *_property;	// 8 = 0x8
    CNMultiValueDiff *_diff;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000013d057
@property(readonly) CNMultiValueDiff *diff; // @synthesize diff=_diff;
@property(readonly) CNMultiValuePropertyDescription *property; // @synthesize property=_property;
- (id)description;	// IMP=0x000000000013cfe2
- (void)applyToMutableContact:(id)arg1 withIdentifierMap:(id)arg2;	// IMP=0x000000000013cec2
- (id)initWithProperty:(id)arg1 diff:(id)arg2;	// IMP=0x000000000013ce11
- (_Bool)applyToABPerson:(void *)arg1 withPropertiesContext:(id)arg2 logger:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000042bd0

@end
