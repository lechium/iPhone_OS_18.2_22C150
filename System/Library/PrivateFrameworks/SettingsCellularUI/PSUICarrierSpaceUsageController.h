//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

__attribute__((visibility("hidden")))
@interface PSUICarrierSpaceUsageController : PSListController
{
}

- (id)getLogger;	// IMP=0x000000000001d432
- (id)remainingCreditDescription:(id)arg1;	// IMP=0x000000000001d3d8
- (_Bool)shouldShowRemainingCredit:(id)arg1;	// IMP=0x000000000001d38d
- (id)messagesDescription:(id)arg1;	// IMP=0x000000000001cf56
- (_Bool)shouldShowOnlyRemainingMessages:(id)arg1;	// IMP=0x000000000001ce64
- (_Bool)shouldShowMessages:(id)arg1;	// IMP=0x000000000001cd3f
- (id)callsDescription:(id)arg1;	// IMP=0x000000000001c908
- (_Bool)shouldShowOnlyRemainingCalls:(id)arg1;	// IMP=0x000000000001c816
- (_Bool)shouldShowCalls:(id)arg1;	// IMP=0x000000000001c6f1
- (id)dataUsageDescription:(id)arg1;	// IMP=0x000000000001c666
- (_Bool)shouldShowOnlyRemainingData:(id)arg1;	// IMP=0x000000000001c574
- (_Bool)shouldShowData:(id)arg1;	// IMP=0x000000000001c44f
- (_Bool)shouldShowPlanSection:(id)arg1;	// IMP=0x000000000001c3c1
- (id)usageGraphSpecifierForSection:(id)arg1;	// IMP=0x000000000001ba74
- (id)specifiers;	// IMP=0x000000000001a254
- (_Bool)hasMultiplePlansOfSameTypeForNetworkUsageLabel:(id)arg1;	// IMP=0x0000000000019da0
- (_Bool)hasMultiplePlansOfTheSameTypeInTheSameSectionCategory;	// IMP=0x0000000000019942
- (_Bool)hasMultipleDevicesOfTheSameType;	// IMP=0x00000000000194d2
- (id)planCategorySectionLabelForPlanMetrics:(id)arg1;	// IMP=0x0000000000019363
- (id)deviceTypeSectionLabelForAccountMetrics:(id)arg1;	// IMP=0x000000000001918f
- (id)usageSections;	// IMP=0x0000000000018479
- (id)usageCategories;	// IMP=0x0000000000018099
- (id)barGraphColors;	// IMP=0x0000000000017ea2
- (_Bool)shouldReloadSpecifiersOnResume;	// IMP=0x0000000000017e9a
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000017cfa
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000017c17
- (void)carrierSpaceChanged;	// IMP=0x0000000000017b58
- (void)simStatusChanged;	// IMP=0x0000000000017a24

@end
