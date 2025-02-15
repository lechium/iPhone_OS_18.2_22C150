//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKOverlayRoomViewController.h"

@class HKChartSummaryTrendModel, NSMutableArray, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface HKOverlayRoomWalkingViewController : HKOverlayRoomViewController
{
    NSNumber *_preferredOverlayIndex;	// 8 = 0x8
    NSString *_quantityTypeIdentifier;	// 16 = 0x10
    NSMutableArray *_contextDelegates;	// 24 = 0x18
    long long _preferredOverlay;	// 32 = 0x20
    HKChartSummaryTrendModel *_trendModel;	// 40 = 0x28
}

+ (id)createInteractiveChartViewControllerForTypeIdentifier:(id)arg1 chartFactory:(id)arg2 applicationItems:(id)arg3 displayDate:(id)arg4 preferredOverlay:(long long)arg5 restorationUserActivity:(id)arg6 trendModel:(id)arg7 factorDisplayTypes:(id)arg8 additionalChartOptions:(unsigned long long)arg9;	// IMP=0x001000000014ab6c
- (void).cxx_destruct;	// IMP=0x000000000014c2fb
@property(readonly, nonatomic) HKChartSummaryTrendModel *trendModel; // @synthesize trendModel=_trendModel;
- (CDUnknownBlockType)_buildGranularAverageDataSourceTitleFromTimeScope;	// IMP=0x000000000014c05b
- (CDUnknownBlockType)_buildAverageDataSourceTitleFromTimeScope;	// IMP=0x000000000014bfdb
- (id)_buildWalkingAverageDataSourceWithUnitController:(id)arg1 displayType:(id)arg2 healthStore:(id)arg3;	// IMP=0x000000000014bcf8
- (id)createViewControllerForMode:(long long)arg1 displayDate:(id)arg2 applicationItems:(id)arg3;	// IMP=0x000000000014bbc2
- (id)preferredInitialOverlayIndex;	// IMP=0x000000000014bbad
- (id)createChartOverlayViewController;	// IMP=0x000000000014baab
- (id)contextSectionContainersForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3;	// IMP=0x000000000014b1f4
- (id)primaryDisplayTypeWithApplicationItems:(id)arg1;	// IMP=0x000000000014b141
- (id)showAllFiltersButtonTitle;	// IMP=0x000000000014b0ce
- (id)controllerTitleWithApplicationItems:(id)arg1;	// IMP=0x000000000014aeb3
- (id)getChartSummaryTrendModelToModify;	// IMP=0x000000000014aea1
- (void)viewDidLoad;	// IMP=0x000000000014ae72
- (id)initWithDisplayDate:(id)arg1 applicationItems:(id)arg2 mode:(long long)arg3 identifier:(id)arg4 preferredOverlay:(long long)arg5 trendModel:(id)arg6 factorDisplayTypes:(id)arg7;	// IMP=0x000000000014ac9f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

