//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface HMDCharacteristicThresholdRangeEventModel
{
}

+ (id)eventModelWithDictionary:(id)arg1 home:(id)arg2 eventTriggerUUID:(id)arg3 message:(id)arg4 checkForSupport:(_Bool)arg5;	// IMP=0x00100000009c56b1
+ (id)properties;	// IMP=0x00100000009c564e
+ (Class)cd_entityClass;	// IMP=0x0010000000d65d68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSNumber *max; // @dynamic max;
@property(retain, nonatomic) NSNumber *min; // @dynamic min;
@property(readonly) Class superclass;

@end
