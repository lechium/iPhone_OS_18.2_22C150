//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/SwiftNativeNSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC13HomeKitDaemon36DefaultUserActivityReportCoordinator : SwiftNativeNSObject
{
    MISSING_TYPE *$defaultActor;	// 4277009103 = 0xfeedfacf
    MISSING_TYPE *homeUUID;	// 0 = 0x0
    MISSING_TYPE *messenger;	// 0 = 0x0
    MISSING_TYPE *dateProvider;	// 0 = 0x0
    MISSING_TYPE *backgroundTaskManager;	// 0 = 0x0
    MISSING_TYPE *periodicUpdateInterval;	// 0 = 0x0
    MISSING_TYPE *periodicUpdateTimerIdentifier;	// 0 = 0x0
    MISSING_TYPE *isCoordinating;	// 0 = 0x0
    MISSING_TYPE *detectorsByContributorType;	// 0 = 0x0
    MISSING_TYPE *currentReports;	// 0 = 0x0
    MISSING_TYPE *logger;	// 0 = 0x0
}

- (id)init;	// IMP=0x00000000001307e0
- (void)sendCoordinatedReportsForReason:(unsigned long long)arg1;	// IMP=0x000000000012e380
- (void)configureWithDetectors:(id)arg1;	// IMP=0x000000000012e060
- (void)handleBackgroundTaskManagerTimerFiredWithNotification:(id)arg1;	// IMP=0x0000000000133730
- (void)handleStateChangeForDetectorOfType:(unsigned long long)arg1 withReason:(unsigned long long)arg2;	// IMP=0x00000000001357a0

@end

