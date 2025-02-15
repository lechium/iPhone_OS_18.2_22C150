//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDProfile, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HDMedicationTimeZoneManager : NSObject
{
    HDProfile *_profile;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    CDUnknownBlockType _unitTestingAuthorizedToFireTimeZoneNotificationHandler;	// 24 = 0x18
    CDUnknownBlockType _unitTestingOperationDetectionHandler;	// 32 = 0x20
    CDUnknownBlockType _unitTestingNotificationFiringHandler;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000042428
@property(copy, nonatomic) CDUnknownBlockType unitTestingNotificationFiringHandler; // @synthesize unitTestingNotificationFiringHandler=_unitTestingNotificationFiringHandler;
@property(copy, nonatomic) CDUnknownBlockType unitTestingOperationDetectionHandler; // @synthesize unitTestingOperationDetectionHandler=_unitTestingOperationDetectionHandler;
@property(copy, nonatomic) CDUnknownBlockType unitTestingAuthorizedToFireTimeZoneNotificationHandler; // @synthesize unitTestingAuthorizedToFireTimeZoneNotificationHandler=_unitTestingAuthorizedToFireTimeZoneNotificationHandler;
- (void)unitTesting_triggerTimeZoneChange;	// IMP=0x00000000000423cb
- (void)scheduleManagerDidRescheduleMedications:(id)arg1;	// IMP=0x00000000000423c5
- (void)scheduleManager:(id)arg1 didPruneScheduleItems:(id)arg2;	// IMP=0x00000000000423bf
- (void)scheduleManager:(id)arg1 didAddOrModifySchedules:(id)arg2;	// IMP=0x0000000000042302
- (void)profileDidBecomeReady:(id)arg1;	// IMP=0x0000000000042271
- (id)_mostRecentTimeZoneOffsetWithProfile:(id)arg1;	// IMP=0x00000000000421ea
- (_Bool)_updateTimeZoneExperienceAsEnabled:(_Bool)arg1 transaction:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000041d06
- (_Bool)_updateTimeZoneOffsetOffset:(id)arg1 transaction:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000041c25
- (_Bool)_isAuthorizedToFireTimeZoneNotificationWithProfile:(id)arg1;	// IMP=0x00000000000419a8
- (void)handleTimeZoneChange;	// IMP=0x000000000004169d
- (id)initWithProfile:(id)arg1;	// IMP=0x0000000000041578

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

