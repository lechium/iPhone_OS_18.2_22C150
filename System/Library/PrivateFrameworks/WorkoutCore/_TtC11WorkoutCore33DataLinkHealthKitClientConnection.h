//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC11WorkoutCore33DataLinkHealthKitClientConnection : NSObject
{
    MISSING_TYPE *store;	// 8 = 0x8
    MISSING_TYPE *session;	// 16 = 0x10
    MISSING_TYPE *metricsUpdater;	// 24 = 0x18
    MISSING_TYPE *notificationHandler;	// 40 = 0x28
    MISSING_TYPE *presenceHandler;	// 56 = 0x38
    MISSING_TYPE *deltaMetricsPublisher;	// 72 = 0x48
    MISSING_TYPE *knownSequences;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000153220
- (id)init;	// IMP=0x00000000001531d0
- (void)workoutSession:(id)arg1 didDisconnectFromRemoteDeviceWithError:(id)arg2;	// IMP=0x0000000000153de0
- (void)workoutSession:(id)arg1 didReceiveDataFromRemoteWorkoutSession:(id)arg2;	// IMP=0x0000000000153d60
- (void)workoutSession:(id)arg1 didReceiveDataFromRemoteDevice:(id)arg2;	// IMP=0x0000000000153c10
- (void)workoutSession:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000000153610
- (void)workoutSession:(id)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3 date:(id)arg4;	// IMP=0x00000000001535a0

@end

