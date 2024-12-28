//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKOverlayRoomViewController.h"

@class HKChartSummaryTrendModel, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface HKOverlayRoomPhysicalEffortViewController : HKOverlayRoomViewController
{
    NSNumber *_preferredOverlayIndex;	// 8 = 0x8
    NSString *_quantityTypeIdentifier;	// 16 = 0x10
    long long _preferredOverlay;	// 24 = 0x18
    HKChartSummaryTrendModel *_trendModel;	// 32 = 0x20
}

+ (id)createInteractiveChartViewControllerForTypeIdentifier:(id)arg1 chartFactory:(id)arg2 applicationItems:(id)arg3 displayDate:(id)arg4 preferredOverlay:(long long)arg5 restorationUserActivity:(id)arg6 trendModel:(id)arg7 factorDisplayTypes:(id)arg8 additionalChartOptions:(unsigned long long)arg9;	// IMP=0x001000000035dead
- (void).cxx_destruct;	// IMP=0x000000000035eb62
@property(readonly, nonatomic) HKChartSummaryTrendModel *trendModel; // @synthesize trendModel=_trendModel;
- (id)createViewControllerForMode:(long long)arg1 displayDate:(id)arg2 applicationItems:(id)arg3;	// IMP=0x000000000035ea1b
- (id)preferredInitialOverlayIndex;	// IMP=0x000000000035ea06
- (id)createChartOverlayViewController;	// IMP=0x000000000035e904
- (id)contextSectionContainersForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3;	// IMP=0x000000000035e325
- (id)primaryDisplayTypeWithApplicationItems:(id)arg1;	// IMP=0x000000000035e272
- (_Bool)supportsShowAllFilters;	// IMP=0x000000000035e237
- (id)controllerTitleWithApplicationItems:(id)arg1;	// IMP=0x000000000035e1d8
- (id)getChartSummaryTrendModelToModify;	// IMP=0x000000000035e1c6
- (void)viewDidLoad;	// IMP=0x000000000035e197
- (id)initWithDisplayDate:(id)arg1 applicationItems:(id)arg2 mode:(long long)arg3 identifier:(id)arg4 preferredOverlay:(long long)arg5 trendModel:(id)arg6 factorDisplayTypes:(id)arg7;	// IMP=0x000000000035dfe4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
