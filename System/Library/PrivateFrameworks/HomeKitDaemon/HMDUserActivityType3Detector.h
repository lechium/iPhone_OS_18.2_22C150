//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDBackgroundTaskManager, HMDUserActivityType3FocusListener, HMDUserActivityType3ScheduleListener, HMFPreferences, NSString;

__attribute__((visibility("hidden")))
@interface HMDUserActivityType3Detector
{
    HMDUserActivityType3FocusListener *_focusListener;	// 8 = 0x8
    HMDUserActivityType3ScheduleListener *_scheduleListener;	// 16 = 0x10
    unsigned long long _state;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
    HMDBackgroundTaskManager *_backgroundTaskManager;	// 40 = 0x28
    HMFPreferences *_preferences;	// 48 = 0x30
}

+ (unsigned long long)contributorType;	// IMP=0x0010000000f24902
- (void).cxx_destruct;	// IMP=0x0000000000f246f2
@property(nonatomic) __weak HMFPreferences *preferences; // @synthesize preferences=_preferences;
@property(readonly, nonatomic) HMDBackgroundTaskManager *backgroundTaskManager; // @synthesize backgroundTaskManager=_backgroundTaskManager;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) HMDUserActivityType3ScheduleListener *scheduleListener; // @synthesize scheduleListener=_scheduleListener;
@property(readonly, nonatomic) HMDUserActivityType3FocusListener *focusListener; // @synthesize focusListener=_focusListener;
- (void)updateLatestReportWithReason:(unsigned long long)arg1;	// IMP=0x0000000000f244f5
- (void)evaluateAndUpdateLatestReport;	// IMP=0x0000000000f244b9
- (void)evaluateAndSetInitialReport;	// IMP=0x0000000000f24486
- (void)submitLogEventWithOldState:(unsigned long long)arg1 logReason:(unsigned long long)arg2;	// IMP=0x0000000000f243ca
- (_Bool)_updateState:(unsigned long long)arg1;	// IMP=0x0000000000f2429e
- (void)focusDidTrigger;	// IMP=0x0000000000f241a3
- (_Bool)shouldIgnoreFocus:(id)arg1;	// IMP=0x0000000000f24183
- (void)userDidUpdateSchedule;	// IMP=0x0000000000f2409c
- (void)scheduleStateDidAutomaticallyUpdate;	// IMP=0x0000000000f23fb5
- (_Bool)shouldIgnoreSchedule:(id)arg1;	// IMP=0x0000000000f23f5d
- (long long)transitionIntervalInSeconds;	// IMP=0x0000000000f23eba
- (void)handleTimerFiredNotification:(id)arg1;	// IMP=0x0000000000f23de8
- (_Bool)_moveToTransitionalStateWithTransitionInterval:(double)arg1;	// IMP=0x0000000000f23bee
- (_Bool)_updateStateWithTransitionTime:(id)arg1;	// IMP=0x0000000000f23a91
- (_Bool)_updateStateWithFocus:(id)arg1;	// IMP=0x0000000000f239c0
- (_Bool)_updateStateWithSchedule:(id)arg1;	// IMP=0x0000000000f238cd
- (_Bool)evaluate;	// IMP=0x0000000000f235ff
- (void)configureWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000f2339e
- (id)initWithIdentifier:(id)arg1 dataSource:(id)arg2 focusListener:(id)arg3 scheduleListener:(id)arg4 backgroundTaskManager:(id)arg5 preferences:(id)arg6;	// IMP=0x0000000000f23279
- (id)initWithDataSource:(id)arg1;	// IMP=0x0000000000f2310f

@end
