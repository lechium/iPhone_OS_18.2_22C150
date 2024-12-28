//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSPersistentContainer;
@protocol STDeviceInformationPrimitives, STOrganizationControllerConfigurationAdapter;

@interface STConcreteCoreDataTransformer : NSObject
{
    id <STOrganizationControllerConfigurationAdapter> _organizationControllerConfigurationAdapter;	// 8 = 0x8
    id <STDeviceInformationPrimitives> _deviceInformationPrimitives;	// 16 = 0x10
    NSPersistentContainer *_persistentContainer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000018258
@property(readonly) NSPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
@property(readonly) id <STDeviceInformationPrimitives> deviceInformationPrimitives; // @synthesize deviceInformationPrimitives=_deviceInformationPrimitives;
@property(readonly) id <STOrganizationControllerConfigurationAdapter> organizationControllerConfigurationAdapter; // @synthesize organizationControllerConfigurationAdapter=_organizationControllerConfigurationAdapter;
@property(readonly, copy) NSDictionary *deviceStateObservationFiltersByTriggerPredicate;
@property(readonly, copy) NSDictionary *configurationObservationFiltersByTriggerPredicate;
- (id)updateDatabaseWithFamilyMembers:(id)arg1;	// IMP=0x001000000001815d
- (id)handleDeviceStateChange:(id)arg1;	// IMP=0x00100000000180af
- (id)deviceStateChangeForLocalDevice;	// IMP=0x0010000000018025
- (id)deviceStateChangeForCoreDataChanges:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000017f72
- (id)handleOnDemandDowntimeToggleForUserID:(id)arg1;	// IMP=0x0010000000017e62
- (id)handleSetupConfiguration:(id)arg1;	// IMP=0x0010000000017d52
- (id)handleConfigurationChange:(id)arg1;	// IMP=0x0010000000017c4c
- (id)setupConfigurationFromSettingsConfigurationChange:(id)arg1 familyProvider:(id)arg2;	// IMP=0x0010000000017ba9
- (id)downtimeConfigurationForUserID:(id)arg1;	// IMP=0x0010000000017b1c
- (id)communicationConfigurationForUserID:(id)arg1;	// IMP=0x0010000000017a8f
- (id)communicationConfigurationForLocalUser;	// IMP=0x0010000000017a2c
- (id)configurationChangesOfType:(long long)arg1 userID:(id)arg2;	// IMP=0x001000000001799c
- (id)configurationChangeForRelatedConfigurationChange:(id)arg1;	// IMP=0x001000000001790f
- (id)configurationChangeForCoreDataChange:(id)arg1 error:(id *)arg2;	// IMP=0x001000000001787f
- (id)initWithOrganizationControllerConfigurationAdapter:(id)arg1 deviceInformationPrimitives:(id)arg2 persistentContainer:(id)arg3;	// IMP=0x00100000000177b9

@end
