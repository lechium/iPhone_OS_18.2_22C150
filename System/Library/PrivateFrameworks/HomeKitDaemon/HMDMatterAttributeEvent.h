//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface HMDMatterAttributeEvent
{
    id _eventValue;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000787908
+ (id)logCategory;	// IMP=0x00100000007878d8
- (void).cxx_destruct;	// IMP=0x00000000007874ef
@property(retain, nonatomic) id eventValue; // @synthesize eventValue=_eventValue;
- (id)analyticsTriggerEventData;	// IMP=0x0000000000787411
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x000000000078740b
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x0000000000787113
- (id)modelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x0000000000786f80
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000786ec1
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000786e0d
- (_Bool)isCompatibleWithEvent:(id)arg1;	// IMP=0x0000000000786dde
- (id)createPayload;	// IMP=0x0000000000786d07
- (id)dumpState;	// IMP=0x0000000000786c27
- (_Bool)_compareEventValue:(id)arg1;	// IMP=0x0000000000786a49
- (_Bool)_evaluateNewValue:(id)arg1;	// IMP=0x0000000000786887
- (void)_handleUpdateRequest:(id)arg1;	// IMP=0x00000000007867d3
- (id)emptyModelObject;	// IMP=0x000000000078671b
- (id)description;	// IMP=0x000000000078666c
- (id)initWithModel:(id)arg1 home:(id)arg2;	// IMP=0x00000000007865dd

@end
