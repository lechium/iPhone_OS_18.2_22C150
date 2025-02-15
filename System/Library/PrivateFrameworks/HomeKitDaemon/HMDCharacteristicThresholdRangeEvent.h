//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCharacteristicThresholdRangeEvent
{
    NSNumber *_min;	// 8 = 0x8
    NSNumber *_max;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000009c5aee
+ (id)logCategory;	// IMP=0x00100000009c5abe
- (void).cxx_destruct;	// IMP=0x00000000009c561d
@property(retain, nonatomic) NSNumber *max; // @synthesize max=_max;
@property(retain, nonatomic) NSNumber *min; // @synthesize min=_min;
- (id)analyticsTriggerEventData;	// IMP=0x00000000009c54de
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x00000000009c54d8
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x00000000009c51b9
- (id)modelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x00000000009c4f98
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000009c4ec4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000009c4dd5
- (_Bool)isCompatibleWithEvent:(id)arg1;	// IMP=0x00000000009c4da6
- (_Bool)_evaluateNewValue:(id)arg1;	// IMP=0x00000000009c4973
- (_Bool)_isValueInRange:(id)arg1;	// IMP=0x00000000009c4810
- (void)_handleUpdateRequest:(id)arg1;	// IMP=0x00000000009c4585
- (id)emptyModelObject;	// IMP=0x00000000009c44cd
- (id)createPayload;	// IMP=0x00000000009c436f
@property(readonly, copy) NSString *description;
- (id)initWithModel:(id)arg1 home:(id)arg2;	// IMP=0x00000000009c41d9

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

