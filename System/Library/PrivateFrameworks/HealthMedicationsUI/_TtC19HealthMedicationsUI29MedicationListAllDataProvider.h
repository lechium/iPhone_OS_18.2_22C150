//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthToolbox/WDSampleListDataProvider.h>

@class MISSING_TYPE, NSPredicate;

@interface _TtC19HealthMedicationsUI29MedicationListAllDataProvider : WDSampleListDataProvider
{
    MISSING_TYPE *medication;	// 8 = 0x8
    MISSING_TYPE *predicate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001e7170
- (id)init;	// IMP=0x00000000001e7110
- (id)detailSectionForSample:(id)arg1;	// IMP=0x00000000001e6fb0
- (id)viewControllerForItemAtIndexPath:(id)arg1;	// IMP=0x00000000001e6f20
- (id)sampleTypes;	// IMP=0x00000000001e6c20
- (id)textForObject:(id)arg1;	// IMP=0x00000000001e6b80
@property(nonatomic, retain) NSPredicate *defaultQueryPredicate;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2;	// IMP=0x00000000001e6720

@end

