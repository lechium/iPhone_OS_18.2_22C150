//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, STUsageDetailsViewModel;
@protocol STRootViewModelCoordinator;

__attribute__((visibility("hidden")))
@interface STCategoryDetailsGroupSpecifierProvider
{
    STUsageDetailsViewModel *_usageDetailsViewModel;	// 8 = 0x8
    NSObject<STRootViewModelCoordinator> *_coordinator;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002db3a
@property(readonly, nonatomic) NSObject<STRootViewModelCoordinator> *coordinator; // @synthesize coordinator=_coordinator;
@property(readonly, nonatomic) STUsageDetailsViewModel *usageDetailsViewModel; // @synthesize usageDetailsViewModel=_usageDetailsViewModel;
- (void)showMostUsedDetailListController:(id)arg1;	// IMP=0x000000000002d9d3
- (id)totalUsageDescription:(id)arg1;	// IMP=0x000000000002d8d2
- (id)initWithCategoryUsageItem:(id)arg1 coordinator:(id)arg2;	// IMP=0x000000000002d139

@end

