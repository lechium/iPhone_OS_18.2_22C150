//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDAppleMediaAccessoryPowerActionModel
{
}

+ (id)properties;	// IMP=0x0010000000d947d3
+ (Class)cd_entityClass;	// IMP=0x0010000000c6ac3c
- (void)loadModelWithActionInformation:(id)arg1;	// IMP=0x0000000000d946f9
- (id)cd_generateValueForProperty:(id)arg1 managedObjectField:(id)arg2 context:(id)arg3;	// IMP=0x0000000000c6aae5
- (id)cd_generateValueForModelObjectFromManagedObject:(id)arg1 modelObjectField:(id)arg2 modelFieldInfo:(id)arg3;	// IMP=0x0000000000c6a9ce

// Remaining properties
@property(retain, nonatomic) NSUUID *accessoryUUID; // @dynamic accessoryUUID;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSNumber *targetSleepWakeState; // @dynamic targetSleepWakeState;

@end
