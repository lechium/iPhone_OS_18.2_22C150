//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDDurationEvent
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSNumber *_duration;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000eb5a80
+ (id)logCategory;	// IMP=0x0010000000eb5a50
- (void).cxx_destruct;	// IMP=0x0000000000eb56a1
- (id)analyticsTriggerEventData;	// IMP=0x0000000000eb5627
- (id)_nextTimerDate;	// IMP=0x0000000000eb5419
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x0000000000eb5413
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x0000000000eb5134
- (id)modelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x0000000000eb4fec
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000eb4f51
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000eb4eb6
- (_Bool)isCompatbileWithEvent:(id)arg1;	// IMP=0x0000000000eb4e87
@property(copy) NSNumber *duration; // @synthesize duration=_duration;
- (void)_handleUpdateRequest:(id)arg1;	// IMP=0x0000000000eb4ba2
- (id)emptyModelObject;	// IMP=0x0000000000eb4aea
- (id)createPayload;	// IMP=0x0000000000eb4a16
@property(readonly, copy) NSString *description;
- (id)initWithModel:(id)arg1 home:(id)arg2;	// IMP=0x0000000000eb48c9

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

