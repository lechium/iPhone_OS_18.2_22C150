//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface _TtC13SleepHealthUI32ScheduleOccurrenceViewController
{
    MISSING_TYPE *model;	// 16 = 0x10
    MISSING_TYPE *alarmPreviewPlayer;	// 24 = 0x18
    MISSING_TYPE *alarmConfigurationObserver;	// 32 = 0x20
    MISSING_TYPE *modelEditObserver;	// 40 = 0x28
    MISSING_TYPE *significantTimeChangeObserver;	// 48 = 0x30
    MISSING_TYPE *localeChangeObserver;	// 56 = 0x38
    MISSING_TYPE *sleepDurationGoalObserver;	// 64 = 0x40
    MISSING_TYPE *scheduleChangeObserver;	// 72 = 0x48
    MISSING_TYPE *validScheduleRangeObserver;	// 80 = 0x50
    MISSING_TYPE *willResignActiveObserver;	// 88 = 0x58
    MISSING_TYPE *sleepScheduleProvider;	// 96 = 0x60
    MISSING_TYPE *delegate;	// 136 = 0x88
    MISSING_TYPE *allowsDeletion;	// 152 = 0x98
    MISSING_TYPE *hasFinishedNotifyingDelegate;	// 153 = 0x99
    MISSING_TYPE *modelHasChanged;	// 154 = 0x9a
    MISSING_TYPE *dataSource;	// 160 = 0xa0
    MISSING_TYPE *isIn24HourTime;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x0000000000006f00
- (double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2;	// IMP=0x0000000000006d10
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x0000000000006ca0
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x0000000000006c30
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x0000000000006bb0
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x0000000000006b30
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000000000067d0
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000006710
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x0000000000005f70
- (void)restoreUserActivityState:(id)arg1;	// IMP=0x0000000000005f10
- (void)handleAppWillResignActive;	// IMP=0x0000000000005de0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000005c10
- (void)viewDidLoad;	// IMP=0x00000000000057f0
- (void)cancelButtonPressed;	// IMP=0x0000000000007710
- (void)handleLocaleDidChange;	// IMP=0x0000000000007630
- (void)handleSignificantTimeChange;	// IMP=0x0000000000007410
- (void)scheduleDayPickerDidChange:(id)arg1;	// IMP=0x0000000000007c00
- (void)sleepScheduleComponentsEditViewEditingDidEnd:(id)arg1;	// IMP=0x0000000000007bb0
- (void)sleepScheduleComponentsEditViewEditingDidChange:(id)arg1;	// IMP=0x0000000000007a00
- (void)scheduleOccurrenceAlarmVolumeEditingDidEnd:(id)arg1;	// IMP=0x00000000000085d0
- (void)switchCellValueChanged:(id)arg1 value:(_Bool)arg2;	// IMP=0x00000000000086b0
- (void)tonePickerViewController:(id)arg1 didDismissVibrationPickerViewController:(id)arg2;	// IMP=0x00000000000088f0
- (void)tonePickerViewController:(id)arg1 willPresentVibrationPickerViewController:(id)arg2;	// IMP=0x0000000000008830
- (void)tonePickerViewController:(id)arg1 selectedToneWithIdentifier:(id)arg2;	// IMP=0x00000000000087d0
- (void)vibrationPickerViewController:(id)arg1 selectedVibrationWithIdentifier:(id)arg2;	// IMP=0x0000000000008940
- (void)saveButtonPressed;	// IMP=0x0000000000009360

@end
