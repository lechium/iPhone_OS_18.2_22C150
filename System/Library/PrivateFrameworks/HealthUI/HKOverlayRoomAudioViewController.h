//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKOverlayRoomViewController.h"

@class HKAudioExposureDevicesDataSource, HKChartSummaryTrendModel, NSMutableArray, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface HKOverlayRoomAudioViewController : HKOverlayRoomViewController
{
    NSNumber *_preferredOverlayIndex;	// 8 = 0x8
    _Bool _isShowingUnattenuatedOverlayPill;	// 16 = 0x10
    NSString *_quantityTypeIdentifier;	// 24 = 0x18
    long long _preferredOverlay;	// 32 = 0x20
    NSMutableArray *_contextDelegates;	// 40 = 0x28
    HKAudioExposureDevicesDataSource *_audioExposureDevicesDataSource;	// 48 = 0x30
    HKChartSummaryTrendModel *_trendModel;	// 56 = 0x38
}

+ (id)createInteractiveChartViewControllerForTypeIdentifier:(id)arg1 chartFactory:(id)arg2 applicationItems:(id)arg3 displayDate:(id)arg4 preferredOverlay:(long long)arg5 restorationUserActivity:(id)arg6 trendModel:(id)arg7 factorDisplayTypes:(id)arg8 additionalChartOptions:(unsigned long long)arg9;	// IMP=0x00100000000e6e00
- (void).cxx_destruct;	// IMP=0x00000000000e9fd4
@property(nonatomic) _Bool isShowingUnattenuatedOverlayPill; // @synthesize isShowingUnattenuatedOverlayPill=_isShowingUnattenuatedOverlayPill;
@property(readonly, nonatomic) HKChartSummaryTrendModel *trendModel; // @synthesize trendModel=_trendModel;
@property(retain, nonatomic) HKAudioExposureDevicesDataSource *audioExposureDevicesDataSource; // @synthesize audioExposureDevicesDataSource=_audioExposureDevicesDataSource;
@property(retain, nonatomic) NSMutableArray *contextDelegates; // @synthesize contextDelegates=_contextDelegates;
@property(readonly, nonatomic) long long preferredOverlay; // @synthesize preferredOverlay=_preferredOverlay;
@property(readonly, nonatomic) NSString *quantityTypeIdentifier; // @synthesize quantityTypeIdentifier=_quantityTypeIdentifier;
- (CDUnknownBlockType)_userInfoCreationBlockForLEQ;	// IMP=0x00000000000e9dd8
- (CDUnknownBlockType)_buildGranularAverageDataSourceTitleFromTimeScope;	// IMP=0x00000000000e9b4c
- (CDUnknownBlockType)_buildAverageDataSourceTitleFromTimeScope:(_Bool)arg1;	// IMP=0x00000000000e99fb
- (id)_buildAudioAverageDataSourceWithUnitController:(id)arg1 displayType:(id)arg2 healthStore:(id)arg3 averageOverVisibleRange:(_Bool)arg4 attenuated:(_Bool)arg5;	// IMP=0x00000000000e9882
- (id)_headphonePredicateForDevices:(id)arg1 withName:(id)arg2;	// IMP=0x00000000000e97ee
- (void)_reloadAudioExposureDevices;	// IMP=0x00000000000e9742
- (void)_registerForAudioExposureDeviceUpdates;	// IMP=0x00000000000e96af
- (void)_setupAudioExposureDataSourceIfNeeded;	// IMP=0x00000000000e95b1
- (_Bool)_isAudioExposureDevicesSupported;	// IMP=0x00000000000e959c
- (void)audioExposureDataSourceIsReady:(id)arg1;	// IMP=0x00000000000e958a
- (id)createChartOverlayViewController;	// IMP=0x00000000000e94a1
- (_Bool)_isHeadphoneAudioExposureRoom;	// IMP=0x00000000000e947a
- (_Bool)_isEnvironmentalAudioExposureRoom;	// IMP=0x00000000000e9453
- (id)createViewControllerForMode:(long long)arg1 displayDate:(id)arg2 applicationItems:(id)arg3;	// IMP=0x00000000000e92f0
- (id)preferredInitialOverlayIndex;	// IMP=0x00000000000e92db
- (long long)_initialPillForPreference:(long long)arg1;	// IMP=0x00000000000e9270
- (id)_makeHeadphoneDeviceFiltersUsingContextCreator:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e8e3d
- (void)sampleTypeDateRangeController:(id)arg1 didUpdateDateRanges:(id)arg2;	// IMP=0x00000000000e8dd8
- (_Bool)_shouldShowUnattenuatedOverlayPill;	// IMP=0x00000000000e8c95
- (id)_unattenuatedBaseDisplayTypeForPrimaryDisplayType:(id)arg1 applicationItems:(id)arg2;	// IMP=0x00000000000e8a5f
- (id)contextSectionContainersForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3;	// IMP=0x00000000000e74d2
- (id)primaryDisplayTypeWithApplicationItems:(id)arg1;	// IMP=0x00000000000e741f
- (id)showAllFiltersButtonTitle;	// IMP=0x00000000000e73ac
- (_Bool)supportsShowAllFilters;	// IMP=0x00000000000e733e
- (id)controllerTitleWithApplicationItems:(id)arg1;	// IMP=0x00000000000e7280
- (id)getChartSummaryTrendModelToModify;	// IMP=0x00000000000e726e
- (void)viewDidLoad;	// IMP=0x00000000000e722d
- (id)initWithDisplayDate:(id)arg1 applicationItems:(id)arg2 mode:(long long)arg3 identifier:(id)arg4 preferredOverlay:(long long)arg5 trendModel:(id)arg6 factorDisplayTypes:(id)arg7;	// IMP=0x00000000000e71f8
- (id)initWithDisplayDate:(id)arg1 applicationItems:(id)arg2 mode:(long long)arg3 identifier:(id)arg4 preferredOverlay:(long long)arg5 audioExposureDeviceDataSource:(id)arg6 trendModel:(id)arg7 factorDisplayTypes:(id)arg8;	// IMP=0x00000000000e6f33

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
