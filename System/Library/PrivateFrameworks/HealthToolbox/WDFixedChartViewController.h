//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKTableViewController.h>

@class HKDataMetadataDetailSection, HKInteractiveChartViewController, HKValueRange, NSString;

__attribute__((visibility("hidden")))
@interface WDFixedChartViewController : HKTableViewController
{
    HKValueRange *_fixedRange;	// 8 = 0x8
    HKInteractiveChartViewController *_chartController;	// 16 = 0x10
    HKDataMetadataDetailSection *_metadataSection;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000018d63
@property(readonly, nonatomic) HKDataMetadataDetailSection *metadataSection; // @synthesize metadataSection=_metadataSection;
@property(readonly, nonatomic) HKInteractiveChartViewController *chartController; // @synthesize chartController=_chartController;
@property(readonly, nonatomic) HKValueRange *fixedRange; // @synthesize fixedRange=_fixedRange;
- (id)applyTransitionActivity:(id)arg1;	// IMP=0x0000000000018d27
- (void)applyChangeActivity:(id)arg1;	// IMP=0x0000000000018d21
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x0000000000018d13
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x0000000000018d0b
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000018d03
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000018c44
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000018c39
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000018c0f
- (id)cellForChart;	// IMP=0x0000000000018b49
- (void)viewDidLoad;	// IMP=0x0000000000018a04
- (id)initWithInteractiveChartViewController:(id)arg1 sessionSample:(id)arg2 profile:(id)arg3 title:(id)arg4;	// IMP=0x00000000000188a2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
