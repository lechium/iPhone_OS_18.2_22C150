//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, STAllowanceProgressGroupSpecifierProvider, STDatePickerBar, STDevicePickupsUsageGroupSpecifierProvider, STMostUsedGroupSpecifierProvider, STNoUsageDataView, STNotificationsUsageGroupSpecifierProvider, STScreenTimeUsageGroupSpecifierProvider, STSegmentedControlGroupSpecifierProvider, STTestGroupSpecifierProvider;

__attribute__((visibility("hidden")))
@interface STUsageDetailListController
{
    STTestGroupSpecifierProvider *_testProvider;	// 184 = 0xb8
    STSegmentedControlGroupSpecifierProvider *_segmentedControlProvider;	// 192 = 0xc0
    STScreenTimeUsageGroupSpecifierProvider *_screenTimeProvider;	// 200 = 0xc8
    STAllowanceProgressGroupSpecifierProvider *_allowancesProvider;	// 208 = 0xd0
    STMostUsedGroupSpecifierProvider *_mostUsedProvider;	// 216 = 0xd8
    STNotificationsUsageGroupSpecifierProvider *_notificationsProvider;	// 224 = 0xe0
    STDevicePickupsUsageGroupSpecifierProvider *_pickupsProvider;	// 232 = 0xe8
    STNoUsageDataView *_noUsageDataView;	// 240 = 0xf0
    STDatePickerBar *_datePickerBar;	// 248 = 0xf8
    NSLayoutConstraint *_datePickerTopConstraint;	// 256 = 0x100
    NSLayoutConstraint *_datePickerBottomConstraint;	// 264 = 0x108
}

+ (void)_setSelectedDeviceIdentifier:(id)arg1 coordinator:(id)arg2;	// IMP=0x00600000000c6da9
+ (id)_getUIActionForDevice:(id)arg1 deviceIndentifier:(id)arg2 coordinator:(id)arg3 weakSelf:(id)arg4;	// IMP=0x00600000000c6bae
+ (id)_getDevicesDropDownMenuWithCoordinator:(id)arg1 viewController:(id)arg2;	// IMP=0x00600000000c6675
+ (void)_setSelectedUsageReportType:(unsigned long long)arg1 user:(id)arg2;	// IMP=0x00600000000c6584
+ (void)selectedUsageReportDidChangeFrom:(id)arg1 to:(id)arg2 datePickerBar:(id)arg3 coordinator:(id)arg4;	// IMP=0x00600000000c5b90
- (void).cxx_destruct;	// IMP=0x00000000000c76a5
@property(retain) NSLayoutConstraint *datePickerBottomConstraint; // @synthesize datePickerBottomConstraint=_datePickerBottomConstraint;
@property(retain) NSLayoutConstraint *datePickerTopConstraint; // @synthesize datePickerTopConstraint=_datePickerTopConstraint;
@property(retain) STDatePickerBar *datePickerBar; // @synthesize datePickerBar=_datePickerBar;
@property(retain) STNoUsageDataView *noUsageDataView; // @synthesize noUsageDataView=_noUsageDataView;
@property(retain) STDevicePickupsUsageGroupSpecifierProvider *pickupsProvider; // @synthesize pickupsProvider=_pickupsProvider;
@property(retain) STNotificationsUsageGroupSpecifierProvider *notificationsProvider; // @synthesize notificationsProvider=_notificationsProvider;
@property(retain) STMostUsedGroupSpecifierProvider *mostUsedProvider; // @synthesize mostUsedProvider=_mostUsedProvider;
@property(retain) STAllowanceProgressGroupSpecifierProvider *allowancesProvider; // @synthesize allowancesProvider=_allowancesProvider;
@property(retain) STScreenTimeUsageGroupSpecifierProvider *screenTimeProvider; // @synthesize screenTimeProvider=_screenTimeProvider;
@property(retain) STSegmentedControlGroupSpecifierProvider *segmentedControlProvider; // @synthesize segmentedControlProvider=_segmentedControlProvider;
@property(retain) STTestGroupSpecifierProvider *testProvider; // @synthesize testProvider=_testProvider;
- (void)_reportCoreAnalyticsEventWithUser:(id)arg1 currentDate:(id)arg2 calendar:(id)arg3;	// IMP=0x00000000000c7318
@property(getter=isDatePickerHidden) _Bool datePickerHidden;
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000000c6ed2
- (void)_isCloudSyncEnabledDidChangeFrom:(id)arg1 to:(id)arg2;	// IMP=0x00000000000c5a0e
- (void)_devicesDidChangeFrom:(id)arg1 to:(id)arg2;	// IMP=0x00000000000c5929
- (void)_hasUsageDataDidChange:(_Bool)arg1;	// IMP=0x00000000000c53d3
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000c4df0
- (void)setCoordinator:(id)arg1;	// IMP=0x00000000000c4b16
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000c4957
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000c487f
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000c44f3
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000c4345
- (void)viewDidLoad;	// IMP=0x00000000000c3d10
- (void)dealloc;	// IMP=0x00000000000c3c2e

@end

