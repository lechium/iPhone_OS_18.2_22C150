//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OnBoardingKit/OBTableWelcomeController.h>

@class MISSING_TYPE;

@interface _TtC15HealthRecordsUI39SignedClinicalDataPreviewViewController : OBTableWelcomeController
{
    MISSING_TYPE *handler;	// 8 = 0x8
    MISSING_TYPE *addToHealthButton;	// 16 = 0x10
    MISSING_TYPE *$__lazy_storage_$_gmtDateFormatter;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002bec20
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 adoptTableViewScrollView:(_Bool)arg4;	// IMP=0x00000000002beba0
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 adoptTableViewScrollView:(_Bool)arg4;	// IMP=0x00000000002bea90
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3;	// IMP=0x00000000002be950
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3;	// IMP=0x00000000002be850
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x00000000002be740
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x00000000002be730
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00000000002be710
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x00000000002be680
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x00000000002be650
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00000000002be530
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000002be3a0
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000002bdd90
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000002bdcf0
- (void)dismissAnimated:(id)arg1;	// IMP=0x00000000002bdc00
- (void)learnMoreButtonTapped:(id)arg1;	// IMP=0x00000000002bdb80
- (void)dismissPreview;	// IMP=0x00000000002bd240
- (void)addRecords;	// IMP=0x00000000002bd0b0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000002bce30
- (void)viewDidLoad;	// IMP=0x00000000002bc9e0

@end
