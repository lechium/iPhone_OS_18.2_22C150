//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMFPreferences, NSString;
@protocol HMDFeaturesDataSource, HMMLogEventSubmitting;

__attribute__((visibility("hidden")))
@interface HMDCameraRecordingManagerDependencyFactory : HMFObject
{
}

- (id)createRecordingSessionRetryContextWithWorkQueue:(id)arg1;	// IMP=0x0000000000b9572f
- (id)createTimerWithTimeInterval:(double)arg1;	// IMP=0x0000000000b956f2
- (id)createBulkSendSessionReaderWithWorkQueue:(id)arg1 session:(id)arg2 readTimeout:(double)arg3 logIdentifier:(id)arg4;	// IMP=0x0000000000b95658
- (id)createBulkSendSessionInitiatorWithWorkQueue:(id)arg1 accessory:(id)arg2;	// IMP=0x0000000000b955e6
- (id)createSessionNotificationTrigger:(id)arg1 workQueue:(id)arg2;	// IMP=0x0000000000b95574
- (id)createRecordingSessionWithWorkQueue:(id)arg1 camera:(id)arg2 hapAccessory:(id)arg3 home:(id)arg4 localZone:(id)arg5 configuredFragmentDuration:(double)arg6 timelineManager:(id)arg7;	// IMP=0x0000000000b9547c
- (id)createLoadBalancingAttemptWithLocalResponseTimeout:(double)arg1 logIdentifier:(id)arg2;	// IMP=0x0000000000b9541d
- (id)createTimelineManagerWithWorkQueue:(id)arg1 fragmentDuration:(double)arg2 fragmentCreationReferenceDate:(id)arg3 logIdentifier:(id)arg4;	// IMP=0x0000000000b95383
- (id)createSettingsControl:(id)arg1 accessory:(id)arg2 managementService:(id)arg3;	// IMP=0x0000000000b952f3
@property(readonly) id <HMMLogEventSubmitting> logEventSubmitter;
@property(readonly) HMFPreferences *preferences;
@property(readonly) id <HMDFeaturesDataSource> featuresDataSource;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
