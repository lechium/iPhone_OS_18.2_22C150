//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC18MobileTimerSupport25StopwatchSessionsProvider : _TtCs12_SwiftObject
{
    MISSING_TYPE *$defaultActor;	// 4277009103 = 0xfeedfacf
    MISSING_TYPE *activities;	// 112 = 0x70
    MISSING_TYPE *sessionsManager;	// 120 = 0x78
}

- (void)didResumeLapTimerForStopwatch:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;	// IMP=0x00000000000301e0
- (void)didResetLapTimerForStopwatch:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;	// IMP=0x000000000002fc40
- (void)didLapLapTimerForStopwatch:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;	// IMP=0x00000000000301d0
- (void)didPauseLapTimerForStopwatch:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;	// IMP=0x000000000002f910
- (void)didStartLapTimerForStopwatch:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;	// IMP=0x000000000002f7b0
- (void)didClearAllLapsForStopwatch:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;	// IMP=0x00000000000301c0
- (void)didAddLap:(id)arg1 forStopwatch:(id)arg2 source:(id)arg3;	// IMP=0x000000000002f4f0
- (void)didDeleteStopwatch:(id)arg1 source:(id)arg2;	// IMP=0x000000000002f4e0
- (void)didUpdateStopwatch:(id)arg1 source:(id)arg2;	// IMP=0x000000000002f4d0
- (void)didCreateStopWatch:(id)arg1 source:(id)arg2;	// IMP=0x000000000002f4c0

@end
