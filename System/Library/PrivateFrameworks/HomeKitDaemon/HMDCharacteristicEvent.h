//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface HMDCharacteristicEvent
{
    id _eventValue;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000c64842
+ (id)logCategory;	// IMP=0x0010000000c64812
- (void).cxx_destruct;	// IMP=0x0000000000c643b8
@property(retain, nonatomic) id eventValue; // @synthesize eventValue=_eventValue;
- (id)analyticsTriggerEventData;	// IMP=0x0000000000c642da
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x0000000000c642d4
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x0000000000c63fdc
- (id)modelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x0000000000c63de9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000c63d2d
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000c63b4a
- (_Bool)isCompatibleWithEvent:(id)arg1;	// IMP=0x0000000000c63b1b
- (id)createPayload;	// IMP=0x0000000000c63a47
- (id)dumpState;	// IMP=0x0000000000c637f5
- (_Bool)_compareEventValue:(id)arg1;	// IMP=0x0000000000c635f4
- (_Bool)_evaluateNewValue:(id)arg1;	// IMP=0x0000000000c6326c
- (void)_handleUpdateRequest:(id)arg1;	// IMP=0x0000000000c62fa1
- (id)emptyModelObject;	// IMP=0x0000000000c62ee9
- (id)description;	// IMP=0x0000000000c62e3a
- (id)initWithModel:(id)arg1 home:(id)arg2;	// IMP=0x0000000000c62dab

@end

