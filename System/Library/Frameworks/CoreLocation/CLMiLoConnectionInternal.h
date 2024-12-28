//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLMiLoConnection, NSUUID;
@protocol CLMiLoConnectionDelegate, OS_dispatch_queue;

@interface CLMiLoConnectionInternal : NSObject
{
    void *_locationdConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_internalQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 24 = 0x18
    id <CLMiLoConnectionDelegate> _delegate;	// 32 = 0x20
    CLMiLoConnection *_sender;	// 40 = 0x28
    NSUUID *_connectedServiceIdentifier;	// 48 = 0x30
}

+ (_Bool)_isKnownNonActionableMessage:(void *)arg1;	// IMP=0x00600000001766c5
- (void)_createCustomLocationOfInterestAtCurrentLocationWithRequestIdentifier:(id)arg1;	// IMP=0x0000000000185013
- (void)_requestExportDatabaseWithRequestIdentifier:(id)arg1;	// IMP=0x000000000018486e
- (void)_purgeAllMiLoDataWithRequestIdentifier:(id)arg1;	// IMP=0x000000000018427a
- (void)_requestModelLearningWithRequestIdentifier:(id)arg1;	// IMP=0x0000000000183ace
- (void)_stopUpdatingMicroLocationWithRequestIdentifier:(id)arg1;	// IMP=0x0000000000183323
- (void)_startUpdatingMicroLocationWithConfiguration:(id)arg1 withRequestIdentifier:(id)arg2;	// IMP=0x0000000000182b59
- (void)_removeCustomLocationOfInterestFromMonitoringWithIdentifier:(id)arg1 withRequestIdentifier:(id)arg2;	// IMP=0x000000000018238f
- (void)_removeLabels:(id)arg1 withRequestIdentifier:(id)arg2;	// IMP=0x0000000000181b60
- (void)_labelEventsWithStartDate:(id)arg1 endDate:(id)arg2 placeIdentifier:(id)arg3 requestIdentifier:(id)arg4;	// IMP=0x00000000001812f0
- (void)_labelEventWithRequestIdentifier:(id)arg1 placeIdentifier:(id)arg2 observationIdentifier:(id)arg3;	// IMP=0x0000000000180aaf
- (void)_requestObservationWithRequestIdentifier:(id)arg1 placeIdentifier:(id)arg2;	// IMP=0x0000000000180259
- (void)_requestMiLoPredictionWithRequestIdentifier:(id)arg1;	// IMP=0x000000000017fa3f
- (void)_disconnectServiceWithIdentifier:(id)arg1;	// IMP=0x000000000017ef2b
- (void)_connectServiceWithIdentifier:(id)arg1;	// IMP=0x000000000017e595
- (void)_queryMiLoConnectionStatus;	// IMP=0x000000000017dd60
- (void)_queryMyServices;	// IMP=0x000000000017d748
- (void)_deleteServiceWithIdentifier:(id)arg1;	// IMP=0x000000000017d152
- (void)_createServiceWithServiceType:(unsigned long long)arg1 locationTypes:(id)arg2;	// IMP=0x000000000017ca61
- (void)_handleGenericEvent:(id)arg1;	// IMP=0x000000000017c580
- (void)_handleMiLoConnectionStatusEvent:(id)arg1;	// IMP=0x000000000017c0ff
- (void)_handleDebugResponseEvent:(id)arg1;	// IMP=0x000000000017bdde
- (void)_handlePredictionUpdateEvent:(id)arg1;	// IMP=0x000000000017b850
- (void)_handleDaemonEvent:(id)arg1;	// IMP=0x0000000000178bdb
- (void)_notifyClientRecordingMetaInfo:(id)arg1;	// IMP=0x0000000000178b4d
- (void)_notifyClientQueryMiLoConnectionStatusDidFailWithError:(id)arg1;	// IMP=0x0000000000178abf
- (void)_notifyClientOfGenericEventResponse:(id)arg1;	// IMP=0x00000000001789d1
- (void)_notifyClientDidExportDatabaseWithResponse:(id)arg1;	// IMP=0x00000000001788b9
- (void)_notifyClientDidCompleteClientRequest:(id)arg1 withError:(id)arg2;	// IMP=0x0000000000178819
- (void)_notifyClientDisconnectServiceDidFailWithError:(id)arg1 serviceIdentifier:(id)arg2;	// IMP=0x0000000000178779
- (void)_notifyClientQueryServiceDidFailWithError:(id)arg1;	// IMP=0x00000000001786eb
- (void)_notifyClientDidUpdatePrediction:(id)arg1;	// IMP=0x000000000017865d
- (void)_notifyClientConnectServiceDidFailWithServiceIdentifier:(id)arg1 withError:(id)arg2;	// IMP=0x00000000001785bd
- (void)_notifyClientDidFindMyServicesWithServiceDescriptors:(id)arg1;	// IMP=0x000000000017852f
- (void)_notifyClientDidDeleteServiceWithServiceIdentifier:(id)arg1;	// IMP=0x00000000001784a1
- (void)_notifyClientDeleteServiceDidFailWithServiceIdentifier:(id)arg1 withError:(id)arg2;	// IMP=0x0000000000178401
- (void)_notifyClientCreateServiceDidFailWithError:(id)arg1;	// IMP=0x0000000000178373
- (void)_notifyClientDidCreateServiceWithServiceIdentifier:(id)arg1;	// IMP=0x00000000001782e5
- (void)_notifyClientDidUpdateServiceStatus:(id)arg1;	// IMP=0x0000000000178257
- (void)_notifyClientDidUpdateMiLoConnectionStatus:(id)arg1;	// IMP=0x00000000001781c9
- (void)_unregisterForMiLoConnectionStatusEvents;	// IMP=0x00000000001780be
- (void)_registerForMiLoConnectionStatusEvents;	// IMP=0x0000000000177ca0
- (void)_unregisterForMiLoGenericEvents;	// IMP=0x0000000000177b95
- (void)_registerForMiLoGenericEvents;	// IMP=0x000000000017787e
- (void)_unregisterForMiLoDebugResponseEvents;	// IMP=0x0000000000177773
- (void)_registerForMiLoDebugResponseEvents;	// IMP=0x000000000017745c
- (void)_unsetHandlerForMiLoPredictionEvents;	// IMP=0x0000000000177351
- (void)_setHandlerForMiLoPredictionEvents;	// IMP=0x000000000017703a
- (void)_unregisterForMiloServiceEvents;	// IMP=0x0000000000176e3b
- (void)_registerForMiLoServiceEvents;	// IMP=0x00000000001769d2
- (void)_teardown;	// IMP=0x000000000017684f
- (void)dealloc;	// IMP=0x000000000017680c
- (void)_invalidateLocationClient;	// IMP=0x0000000000176715
- (id)initWithInfo:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;	// IMP=0x0000000000175e14

@end
