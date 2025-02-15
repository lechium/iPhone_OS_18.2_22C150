//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDEventTriggerExecutionSession, HMPresenceEventActivation, NSArray, NSDictionary, NSObject, NSString, NSUUID;
@protocol HMDFeaturesDataSource, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDPresenceEvent
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _currentStatus;	// 12 = 0xc
    NSString *_presenceType;	// 16 = 0x10
    HMPresenceEventActivation *_activation;	// 24 = 0x18
    NSDictionary *_users;	// 32 = 0x20
    NSArray *_userUUIDs;	// 40 = 0x28
    HMDEventTriggerExecutionSession *_executionSession;	// 48 = 0x30
    id <HMDFeaturesDataSource> _featuresDataSource;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000004b54b3
+ (id)logCategory;	// IMP=0x00100000004b5483
- (void).cxx_destruct;	// IMP=0x00000000004b443a
@property(readonly) id <HMDFeaturesDataSource> featuresDataSource; // @synthesize featuresDataSource=_featuresDataSource;
@property __weak HMDEventTriggerExecutionSession *executionSession; // @synthesize executionSession=_executionSession;
@property _Bool currentStatus; // @synthesize currentStatus=_currentStatus;
@property(copy) NSArray *userUUIDs; // @synthesize userUUIDs=_userUUIDs;
@property(copy) NSDictionary *users; // @synthesize users=_users;
@property(retain, nonatomic) HMPresenceEventActivation *activation; // @synthesize activation=_activation;
@property(retain) NSString *presenceType; // @synthesize presenceType=_presenceType;
- (id)analyticsPresenceEventData;	// IMP=0x00000000004b4256
- (id)analyticsTriggerEventData;	// IMP=0x00000000004b4189
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x00000000004b4183
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x00000000004b3b0c
- (id)modelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x00000000004b3910
- (id)_presenceTypeForClient;	// IMP=0x00000000004b3745
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004b3246
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004b2d95
- (void)_addUser:(id)arg1;	// IMP=0x00000000004b2bd7
- (void)_removeAllUsers;	// IMP=0x00000000004b2b4d
- (void)_updateUsers:(id)arg1 home:(id)arg2;	// IMP=0x00000000004b2824
- (void)_handleUpdateRequest:(id)arg1;	// IMP=0x00000000004b240c
- (_Bool)compatibleWithUser:(id)arg1;	// IMP=0x00000000004b1fdc
- (_Bool)evaluateWithHomePresence:(id)arg1;	// IMP=0x00000000004b1f13
- (_Bool)_evaluateWithHomePresence:(id)arg1 presenceType:(id)arg2 users:(id)arg3;	// IMP=0x00000000004b1d2d
- (_Bool)evaluateWithUserPresence:(id)arg1 presenceType:(id)arg2;	// IMP=0x00000000004b1a31
- (_Bool)evaluateWithHomePresenceUpdate:(id)arg1 presenceType:(id)arg2;	// IMP=0x00000000004b1847
- (void)didEndExecutionSession:(id)arg1;	// IMP=0x00000000004b178f
- (_Bool)isCompatibleWithEvent:(id)arg1;	// IMP=0x00000000004b1760
- (void)_evaluatePresenceEventForHomePresenceUpdate:(id)arg1;	// IMP=0x00000000004b062e
- (void)_handleHomePresenceUpdate:(id)arg1;	// IMP=0x00000000004b0576
- (_Bool)_activate:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000004b037e
- (_Bool)isActive;	// IMP=0x00000000004b0360
- (void)_handlePrivilegeUpdate:(id)arg1;	// IMP=0x00000000004b0297
- (void)_registerForMessages;	// IMP=0x00000000004b01a9
@property(readonly, nonatomic) unsigned long long activationGranularity;
- (id)thisUser;	// IMP=0x00000000004b00da
- (id)emptyModelObject;	// IMP=0x00000000004b0022
- (id)createClientPayload;	// IMP=0x00000000004afea0
- (id)createDaemonPayload;	// IMP=0x00000000004afd25
- (id)createPresenceEventPayload:(_Bool)arg1;	// IMP=0x00000000004afcf3
- (id)createPayload;	// IMP=0x00000000004afce1
- (void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3 delegate:(id)arg4;	// IMP=0x00000000004afbb2
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000004af851
- (id)initWithModel:(id)arg1 home:(id)arg2 featuresDataSource:(id)arg3;	// IMP=0x00000000004af632
- (id)initWithModel:(id)arg1 home:(id)arg2;	// IMP=0x00000000004af5ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSObject<OS_dispatch_queue>",?,R,N

@property(readonly, nonatomic) NSUUID *messageTargetUUID;
@property(readonly) Class superclass;

@end

