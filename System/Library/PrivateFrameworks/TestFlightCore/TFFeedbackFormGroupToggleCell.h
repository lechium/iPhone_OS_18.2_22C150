//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TFFeedbackEntryGroupToggle, UISwitch;

__attribute__((visibility("hidden")))
@interface TFFeedbackFormGroupToggleCell
{
    UISwitch *_toggleSwitch;	// 8 = 0x8
    TFFeedbackEntryGroupToggle *_groupToggleEntry;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000f70c
@property(retain, nonatomic) TFFeedbackEntryGroupToggle *groupToggleEntry; // @synthesize groupToggleEntry=_groupToggleEntry;
@property(readonly, nonatomic) UISwitch *toggleSwitch; // @synthesize toggleSwitch=_toggleSwitch;
- (void)didUpdateToggleSwitchValue:(id)arg1;	// IMP=0x000000000000f604
- (void)setDisplayedDataGroupInclusionBool:(_Bool)arg1;	// IMP=0x000000000000f5ba
- (unsigned long long)displayableDataType;	// IMP=0x000000000000f5af
- (void)applyContentsOfEntry:(id)arg1;	// IMP=0x000000000000f4d9
- (void)prepareForReuse;	// IMP=0x000000000000f496
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000000f3d7

@end

