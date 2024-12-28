//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

@class NSArray, NSObject, NSString, NSTimer, PSSpecifier, STDeviceBedtime, STUIUser;
@protocol STRootViewModelCoordinator;

__attribute__((visibility("hidden")))
@interface STDeviceBedtimeListController : PSListController
{
    _Bool _canAskForMoreTime;	// 184 = 0xb8
    NSObject<STRootViewModelCoordinator> *_coordinator;	// 192 = 0xc0
    STDeviceBedtime *_bedtime;	// 200 = 0xc8
    STUIUser *_affectedUser;	// 208 = 0xd0
    NSArray *_orderedWeekdayIndexes;	// 216 = 0xd8
    NSArray *_orderedLocalizedWeekdayNames;	// 224 = 0xe0
    PSSpecifier *_deviceBedtimeSpecifier;	// 232 = 0xe8
    PSSpecifier *_downTimeGroupSpecifier;	// 240 = 0xf0
    PSSpecifier *_scheduledSwitchSpecifier;	// 248 = 0xf8
    PSSpecifier *_scheduleSwitchGroupSpecifier;	// 256 = 0x100
    PSSpecifier *_scheduleTypeGroupSpecifier;	// 264 = 0x108
    PSSpecifier *_informativeTextGroupSpecifier;	// 272 = 0x110
    PSSpecifier *_everyDaySpecifier;	// 280 = 0x118
    PSSpecifier *_customizeDaysSpecifier;	// 288 = 0x120
    PSSpecifier *_timeGroupSpecifier;	// 296 = 0x128
    PSSpecifier *_dailyScheduleSpecifier;	// 304 = 0x130
    NSArray *_weekdaySpecifiers;	// 312 = 0x138
    PSSpecifier *_atBedtimeGroupSpecifier;	// 320 = 0x140
    PSSpecifier *_atBedtimeSpecifier;	// 328 = 0x148
    NSTimer *_downtimeScheduleRefreshTimer;	// 336 = 0x150
}

- (void).cxx_destruct;	// IMP=0x0000000000061b12
@property(retain, nonatomic) NSTimer *downtimeScheduleRefreshTimer; // @synthesize downtimeScheduleRefreshTimer=_downtimeScheduleRefreshTimer;
@property(retain, nonatomic) PSSpecifier *atBedtimeSpecifier; // @synthesize atBedtimeSpecifier=_atBedtimeSpecifier;
@property(retain, nonatomic) PSSpecifier *atBedtimeGroupSpecifier; // @synthesize atBedtimeGroupSpecifier=_atBedtimeGroupSpecifier;
@property(retain) NSArray *weekdaySpecifiers; // @synthesize weekdaySpecifiers=_weekdaySpecifiers;
@property(retain, nonatomic) PSSpecifier *dailyScheduleSpecifier; // @synthesize dailyScheduleSpecifier=_dailyScheduleSpecifier;
@property(retain, nonatomic) PSSpecifier *timeGroupSpecifier; // @synthesize timeGroupSpecifier=_timeGroupSpecifier;
@property(retain) PSSpecifier *customizeDaysSpecifier; // @synthesize customizeDaysSpecifier=_customizeDaysSpecifier;
@property(retain) PSSpecifier *everyDaySpecifier; // @synthesize everyDaySpecifier=_everyDaySpecifier;
@property(retain, nonatomic) PSSpecifier *informativeTextGroupSpecifier; // @synthesize informativeTextGroupSpecifier=_informativeTextGroupSpecifier;
@property(retain, nonatomic) PSSpecifier *scheduleTypeGroupSpecifier; // @synthesize scheduleTypeGroupSpecifier=_scheduleTypeGroupSpecifier;
@property(retain, nonatomic) PSSpecifier *scheduleSwitchGroupSpecifier; // @synthesize scheduleSwitchGroupSpecifier=_scheduleSwitchGroupSpecifier;
@property(retain, nonatomic) PSSpecifier *scheduledSwitchSpecifier; // @synthesize scheduledSwitchSpecifier=_scheduledSwitchSpecifier;
@property(retain, nonatomic) PSSpecifier *downTimeGroupSpecifier; // @synthesize downTimeGroupSpecifier=_downTimeGroupSpecifier;
@property(retain, nonatomic) PSSpecifier *deviceBedtimeSpecifier; // @synthesize deviceBedtimeSpecifier=_deviceBedtimeSpecifier;
@property(readonly) NSArray *orderedLocalizedWeekdayNames; // @synthesize orderedLocalizedWeekdayNames=_orderedLocalizedWeekdayNames;
@property(readonly) NSArray *orderedWeekdayIndexes; // @synthesize orderedWeekdayIndexes=_orderedWeekdayIndexes;
@property(nonatomic) _Bool canAskForMoreTime; // @synthesize canAskForMoreTime=_canAskForMoreTime;
@property(retain, nonatomic) STUIUser *affectedUser; // @synthesize affectedUser=_affectedUser;
@property(copy, nonatomic) STDeviceBedtime *bedtime; // @synthesize bedtime=_bedtime;
@property(retain, nonatomic) NSObject<STRootViewModelCoordinator> *coordinator; // @synthesize coordinator=_coordinator;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000000006167d
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000061223
- (id)atDowntimeFooterText;	// IMP=0x0000000000060fc8
- (id)askForMoreTime:(id)arg1;	// IMP=0x0000000000060f58
- (void)setAskForMoreTime:(id)arg1 specifier:(id)arg2;	// IMP=0x0000000000060ee5
- (id)timeFooterText;	// IMP=0x0000000000060cfd
- (void)_showCustomizeDailyScheduleListController:(id)arg1;	// IMP=0x0000000000060979
- (id)_customScheduleTime:(id)arg1;	// IMP=0x0000000000060740
- (void)_showEditSimpleScheduleListController:(id)arg1;	// IMP=0x00000000000605a4
- (id)_simpleScheduleTime:(id)arg1;	// IMP=0x000000000006048d
- (void)_actuallyToggleDowntimeEnabled;	// IMP=0x0000000000060352
- (void)_toggleDowntimeEnabled;	// IMP=0x00000000000600ae
- (id)_createDefaultCustomScheduleFromSimpleSchedule:(id)arg1;	// IMP=0x000000000005fdf6
- (id)deviceBedtimeEnabled:(id)arg1;	// IMP=0x000000000005fd86
- (void)setDeviceBedtimeEnabled:(id)arg1 specifier:(id)arg2;	// IMP=0x000000000005fc80
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000005fafa
- (void)dealloc;	// IMP=0x000000000005f9a4
- (void)customizeDailyScheduleListController:(id)arg1 didSaveDailySchedule:(id)arg2 forWeekdayIndex:(unsigned long long)arg3;	// IMP=0x000000000005f59c
- (void)customizeDailyScheduleListControllerDidCancel:(id)arg1;	// IMP=0x000000000005f583
- (void)simpleScheduleListController:(id)arg1 didSaveSimpleSchedule:(id)arg2;	// IMP=0x000000000005f4eb
- (void)simpleScheduleListControllerDidCancel:(id)arg1;	// IMP=0x000000000005f4d2
- (void)_saveDowntimeAndReloadSpecifiers:(_Bool)arg1;	// IMP=0x000000000005f20d
- (id)_deviceBedtimeSpecifierWithBedtime:(id)arg1 downtimeGroupSpecifier:(id)arg2;	// IMP=0x000000000005edd3
- (id)specifiers;	// IMP=0x000000000005de55
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000005dc1b
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000005db82
- (_Bool)canBeShownFromSuspendedState;	// IMP=0x000000000005db7a
- (void)scheduleDowntimeRefreshIfNeeded;	// IMP=0x000000000005d994
- (void)scheduleDowntimeRefreshAndReloadSpecifiers;	// IMP=0x000000000005d966
- (id)init;	// IMP=0x000000000005d622

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
