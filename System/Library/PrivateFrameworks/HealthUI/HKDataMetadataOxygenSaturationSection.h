//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKDataMetadataSection.h"

@class HKDataMetadataSimpleTableViewCell, HKDisplayTypeController, HKHealthStore, HKQuantitySample, HKSample, HKUnitPreferenceController, NSString;
@protocol HKDataMetadataSubsampleDelegate;

__attribute__((visibility("hidden")))
@interface HKDataMetadataOxygenSaturationSection : HKDataMetadataSection
{
    HKSample *_sample;	// 8 = 0x8
    HKHealthStore *_healthStore;	// 16 = 0x10
    HKDisplayTypeController *_displayTypeController;	// 24 = 0x18
    HKUnitPreferenceController *_unitController;	// 32 = 0x20
    id <HKDataMetadataSubsampleDelegate> _subsampleDelegate;	// 40 = 0x28
    HKDataMetadataSimpleTableViewCell *_cell;	// 48 = 0x30
    HKQuantitySample *_heartRateSample;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000b9ea9
- (id)heartRateFromSample:(id)arg1;	// IMP=0x00000000000b9e11
- (id)displayNameForSampleType:(id)arg1 displayTypeController:(id)arg2;	// IMP=0x00000000000b9d87
- (void)queryForData;	// IMP=0x00000000000b999c
- (id)formattedHeartRateFromSample:(id)arg1;	// IMP=0x00000000000b97f5
- (id)unitController;	// IMP=0x00000000000b97e0
- (id)displayTypeController;	// IMP=0x00000000000b97cb
@property(readonly, nonatomic) HKHealthStore *healthStore;
- (void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000000b965b
- (id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2;	// IMP=0x00000000000b9334
- (unsigned long long)numberOfRowsInSection;	// IMP=0x00000000000b9329
- (id)sectionTitle;	// IMP=0x00000000000b92b6
- (id)initWithSample:(id)arg1 healthStore:(id)arg2 displayTypeController:(id)arg3 unitController:(id)arg4 subsampleDelegate:(id)arg5;	// IMP=0x00000000000b9198

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
