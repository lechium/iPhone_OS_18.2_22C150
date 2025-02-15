//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDHomePersonManagerSettingsModel
{
}

+ (id)defaultModelForHomeUUID:(id)arg1;	// IMP=0x0010000000d05044
+ (id)modelIDForHomeUUID:(id)arg1;	// IMP=0x0010000000d04f8b
+ (id)properties;	// IMP=0x0010000000d04f5b
+ (Class)cd_entityClass;	// IMP=0x0010000000817606
- (id)createSettings;	// IMP=0x0000000000d04ed7
@property(retain) NSUUID *zoneUUID;
- (id)initWithHomeUUID:(id)arg1;	// IMP=0x0000000000d04d6f
- (id)cd_generateValueForProperty:(id)arg1 managedObjectField:(id)arg2 context:(id)arg3;	// IMP=0x0000000000817472
- (id)cd_generateValueForModelObjectFromManagedObject:(id)arg1 modelObjectField:(id)arg2 modelFieldInfo:(id)arg3;	// IMP=0x000000000081733f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain) NSString *zoneUUIDString; // @dynamic zoneUUIDString;

@end

