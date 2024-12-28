//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKOverlayRoomViewController.h"

@class HKChartSummaryTrendModel, NSMutableArray, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface HKOverlayRoomRespiratoryRateViewController : HKOverlayRoomViewController
{
    NSNumber *_preferredOverlayIndex;	// 8 = 0x8
    long long _preferredOverlay;	// 16 = 0x10
    NSMutableArray *_contextDelegates;	// 24 = 0x18
    HKChartSummaryTrendModel *_trendModel;	// 32 = 0x20
}

+ (id)createInteractiveChartViewControllerForTypeIdentifier:(id)arg1 chartFactory:(id)arg2 applicationItems:(id)arg3 displayDate:(id)arg4 preferredOverlay:(long long)arg5 restorationUserActivity:(id)arg6 trendModel:(id)arg7 factorDisplayTypes:(id)arg8 additionalChartOptions:(unsigned long long)arg9;	// IMP=0x00100000001ee5ec
- (void).cxx_destruct;	// IMP=0x00000000001efc21
@property(retain, nonatomic) HKChartSummaryTrendModel *trendModel; // @synthesize trendModel=_trendModel;
@property(retain, nonatomic) NSMutableArray *contextDelegates; // @synthesize contextDelegates=_contextDelegates;
@property(readonly, nonatomic) long long preferredOverlay; // @synthesize preferredOverlay=_preferredOverlay;
- (CDUnknownBlockType)_buildGranularAverageDataSourceTitleFromTimeScope;	// IMP=0x00000000001ef939
- (id)_buildRespiratoryRateAverageDataSourceWithUnitController:(id)arg1 displayType:(id)arg2 healthStore:(id)arg3;	// IMP=0x00000000001ef6ae
- (id)createViewControllerForMode:(long long)arg1 displayDate:(id)arg2 applicationItems:(id)arg3;	// IMP=0x00000000001ef589
- (id)preferredInitialOverlayIndex;	// IMP=0x00000000001ef574
- (long long)_initialPillForPreference:(long long)arg1;	// IMP=0x00000000001ef4a0
- (id)createChartOverlayViewController;	// IMP=0x00000000001ef39e
- (id)contextSectionContainersForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3;	// IMP=0x00000000001ee9c7
- (id)primaryDisplayTypeWithApplicationItems:(id)arg1;	// IMP=0x00000000001ee915
- (id)controllerTitleWithApplicationItems:(id)arg1;	// IMP=0x00000000001ee8b6
- (id)getChartSummaryTrendModelToModify;	// IMP=0x00000000001ee8a4
- (id)initWithDisplayDate:(id)arg1 applicationItems:(id)arg2 mode:(long long)arg3 preferredOverlay:(long long)arg4 trendModel:(id)arg5 factorDisplayTypes:(id)arg6;	// IMP=0x00000000001ee6fa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
