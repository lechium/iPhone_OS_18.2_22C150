//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDMediaDestinationControllerStagedDestinationIdentifierCommittedEvent, NSString, NSUUID;
@protocol HMDMediaDestinationControllerMetricsEventDispatcherDataSource, HMMLogEventSubmitting;

__attribute__((visibility("hidden")))
@interface HMDMediaDestinationControllerMetricsEventDispatcher : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    id <HMDMediaDestinationControllerMetricsEventDispatcherDataSource> _dataSource;	// 16 = 0x10
    NSUUID *_identifier;	// 24 = 0x18
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 32 = 0x20
    HMDMediaDestinationControllerStagedDestinationIdentifierCommittedEvent *_trackedStagedDestinationIdentifierEvent;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x00100000005b746a
- (void).cxx_destruct;	// IMP=0x00000000005b7419
@property(retain) HMDMediaDestinationControllerStagedDestinationIdentifierCommittedEvent *trackedStagedDestinationIdentifierEvent; // @synthesize trackedStagedDestinationIdentifierEvent=_trackedStagedDestinationIdentifierEvent;
@property(readonly) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly) NSUUID *identifier; // @synthesize identifier=_identifier;
@property __weak id <HMDMediaDestinationControllerMetricsEventDispatcherDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)logIdentifier;	// IMP=0x00000000005b7349
- (void)runDailyTask;	// IMP=0x00000000005b7337
- (id)dataSourceIsTriggeredOnControllerDevice;	// IMP=0x00000000005b71f3
- (id)dataSourceDestinationTypeWithIdentifier:(id)arg1;	// IMP=0x00000000005b7086
- (id)dataSourceCurrentDestinationType;	// IMP=0x00000000005b6f01
- (id)dataSourceCurrentUser;	// IMP=0x00000000005b6dbf
- (id)dataSourceCurrentUserPrivilege;	// IMP=0x00000000005b6d4a
- (void)submitDailySetDestinationEvent;	// IMP=0x00000000005b6a70
- (void)submitStagedDestinationIdentifierCommittedEventWithCommittedDestinationIdentifier:(id)arg1;	// IMP=0x00000000005b67cf
- (void)startStagedDestinationIdentifierCommittedEventWithStagedDestinationIdentifier:(id)arg1;	// IMP=0x00000000005b6627
- (void)submitFailureEventWithEventErrorCode:(unsigned long long)arg1 error:(id)arg2;	// IMP=0x00000000005b647c
- (void)submitTransactionUpdatedDestinationEventWithDestinationIdentifier:(id)arg1 existingDestinationIdentifier:(id)arg2;	// IMP=0x00000000005b6337
- (void)submitReceivedUpdateDestinationRequestMessageEventWithDestinationIdentifier:(id)arg1 existingDestinationIdentifier:(id)arg2;	// IMP=0x00000000005b61f2
- (id)initWithIdentifier:(id)arg1 logEventSubmitter:(id)arg2 dataSource:(id)arg3;	// IMP=0x00000000005b612b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
