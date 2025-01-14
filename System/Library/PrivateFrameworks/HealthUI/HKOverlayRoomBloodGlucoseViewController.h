//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKOverlayRoomViewController.h"

@class HKChartCache, HKChartSummaryTrendModel, NSMutableArray, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface HKOverlayRoomBloodGlucoseViewController : HKOverlayRoomViewController
{
    NSNumber *_preferredOverlayIndex;	// 8 = 0x8
    HKChartSummaryTrendModel *_trendModel;	// 16 = 0x10
    long long _preferredOverlay;	// 24 = 0x18
    NSMutableArray *_contextDelegates;	// 32 = 0x20
    HKChartCache *_percentInRangeChartCache;	// 40 = 0x28
}

+ (id)_buildPercentInRangeChartCacheWithApplicationItems:(id)arg1;	// IMP=0x0010000000066b1b
+ (id)createInteractiveChartViewControllerForTypeIdentifier:(id)arg1 chartFactory:(id)arg2 applicationItems:(id)arg3 displayDate:(id)arg4 preferredOverlay:(long long)arg5 restorationUserActivity:(id)arg6 trendModel:(id)arg7 factorDisplayTypes:(id)arg8 additionalChartOptions:(unsigned long long)arg9;	// IMP=0x00100000000645bc
- (void).cxx_destruct;	// IMP=0x0000000000067312
@property(retain, nonatomic) HKChartCache *percentInRangeChartCache; // @synthesize percentInRangeChartCache=_percentInRangeChartCache;
@property(retain, nonatomic) NSMutableArray *contextDelegates; // @synthesize contextDelegates=_contextDelegates;
@property(readonly, nonatomic) long long preferredOverlay; // @synthesize preferredOverlay=_preferredOverlay;
- (id)chartOverlayVersion;	// IMP=0x000000000006722c
- (CDUnknownBlockType)_buildGranularAverageDataSourceTitleFromTimeScope;	// IMP=0x000000000006701a
- (id)_buildBloodGlucoseAverageDataSourceWithUnitController:(id)arg1 displayType:(id)arg2 healthStore:(id)arg3;	// IMP=0x0000000000066d8f
- (id)_buildPercentInRangeStackedBarSeriesForClassification:(long long)arg1;	// IMP=0x0000000000066753
- (id)_buildPercentInRangeDisplayTypeWithApplicationItems:(id)arg1 classification:(long long)arg2;	// IMP=0x000000000006660f
- (id)_buildEuglycemicRangeStringWithApplicationItems:(id)arg1;	// IMP=0x00000000000662d7
- (id)_buildPercentInRangeOverlayContextSectionWithApplicationItems:(id)arg1 overlayChartController:(id)arg2;	// IMP=0x0000000000065917
- (id)getChartSummaryTrendModelToModify;	// IMP=0x0000000000065902
- (id)createChartOverlayViewController;	// IMP=0x0000000000065819
- (id)createViewControllerForMode:(long long)arg1 displayDate:(id)arg2 applicationItems:(id)arg3;	// IMP=0x000000000006570b
- (id)preferredInitialOverlayIndex;	// IMP=0x00000000000656f6
- (long long)_initialPillForPreference:(long long)arg1;	// IMP=0x000000000006568b
- (_Bool)_isEnhancedChartingEnabledWithHealthStore:(id)arg1;	// IMP=0x0000000000065533
- (id)contextSectionContainersForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3;	// IMP=0x00000000000649b1
- (id)primaryDisplayTypeWithApplicationItems:(id)arg1;	// IMP=0x00000000000648ff
- (id)controllerTitleWithApplicationItems:(id)arg1;	// IMP=0x00000000000648a0
- (id)initWithDisplayDate:(id)arg1 applicationItems:(id)arg2 mode:(long long)arg3 preferredOverlay:(long long)arg4 trendModel:(id)arg5 factorDisplayTypes:(id)arg6;	// IMP=0x00000000000646ca

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

