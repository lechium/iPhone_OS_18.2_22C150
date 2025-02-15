//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CARSettingsCellSpecifier, CARSettingsGroupCellSpecifier, CARSettingsSwitchCellSpecifier, NSArray;

@interface CARColorFiltersPanel
{
    CARSettingsCellSpecifier *_cellSpecifier;	// 8 = 0x8
    CARSettingsSwitchCellSpecifier *_colorFilterSwitchSpecifier;	// 16 = 0x10
    CARSettingsGroupCellSpecifier *_colorFilterPickerGroupSpecifier;	// 24 = 0x18
    CARSettingsGroupCellSpecifier *_colorFilterIntensityPickerGroupSpecifier;	// 32 = 0x20
    NSArray *_colorFilters;	// 40 = 0x28
}

+ (id)intensities;	// IMP=0x004000000002bdc7
+ (id)colorBlindnessTypes;	// IMP=0x001000000002bbe3
+ (id)colorFilters;	// IMP=0x001000000002b9e4
- (void).cxx_destruct;	// IMP=0x002000000002c306
@property(retain, nonatomic) NSArray *colorFilters; // @synthesize colorFilters=_colorFilters;
@property(retain, nonatomic) CARSettingsGroupCellSpecifier *colorFilterIntensityPickerGroupSpecifier; // @synthesize colorFilterIntensityPickerGroupSpecifier=_colorFilterIntensityPickerGroupSpecifier;
@property(retain, nonatomic) CARSettingsGroupCellSpecifier *colorFilterPickerGroupSpecifier; // @synthesize colorFilterPickerGroupSpecifier=_colorFilterPickerGroupSpecifier;
@property(retain, nonatomic) CARSettingsSwitchCellSpecifier *colorFilterSwitchSpecifier; // @synthesize colorFilterSwitchSpecifier=_colorFilterSwitchSpecifier;
- (long long)_getColorFiltersIntensityPerVehiclePrefForIndex:(unsigned long long)arg1;	// IMP=0x001000000002c24e
- (id)_getColorFilterTypePerVehiclePrefForIndex:(unsigned long long)arg1;	// IMP=0x001000000002c22a
- (id)getColorFiltersIntensityPerVehiclePreferenceDict;	// IMP=0x001000000002c063
- (long long)getColorFiltersPerVehiclePreferenceType;	// IMP=0x001000000002c03f
- (void)_updateSpecifiers;	// IMP=0x001000000002bea5
- (unsigned long long)getColorFiltersIntensityPreferenceTypeForIndex:(unsigned long long)arg1;	// IMP=0x001000000002b974
- (unsigned long long)getColorFiltersPreferenceType;	// IMP=0x001000000002b928
- (_Bool)getColorFiltersPreferenceIsOn;	// IMP=0x001000000002b8e0
- (void)setColorFiltersIntensityPreference;	// IMP=0x001000000002b5ca
- (void)setColorFiltersPreference;	// IMP=0x001000000002b386
- (void)setColorFiltersPreference:(_Bool)arg1;	// IMP=0x001000000002b20e
- (void)setDomainOverride;	// IMP=0x001000000002b1fd
- (_Bool)isSupportedCarPlayFilterType:(unsigned long long)arg1;	// IMP=0x001000000002b1e3
- (unsigned long long)selectedFilterIndexForType:(unsigned long long)arg1;	// IMP=0x001000000002b1c4
- (void)setSelectedFilterForType:(unsigned long long)arg1;	// IMP=0x001000000002b0c9
- (double)selectedFilterIntensity;	// IMP=0x001000000002b056
- (_Bool)colorFiltersSwitchIsOn;	// IMP=0x001000000002afe8
- (id)specifierSections;	// IMP=0x001000000002ad74
- (id)cellSpecifier;	// IMP=0x001000000002abc9
- (id)initWithPanelController:(id)arg1;	// IMP=0x001000000002a277

@end

