//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDUserAccessCodeModel
{
}

+ (id)modelUUIDWithUUID:(id)arg1;	// IMP=0x0010000000b4d4d5
+ (id)properties;	// IMP=0x0010000000b4d4a5
+ (Class)cd_entityClass;	// IMP=0x0010000000a5ee0d
+ (id)cd_parentReferenceName;	// IMP=0x0010000000a5ee00
- (id)initWithUserUUID:(id)arg1;	// IMP=0x0000000000b4d6f2
- (void)cd_populateParentRelationshipInContext:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000a5ece9
- (id)cd_generateValueForProperty:(id)arg1 managedObjectField:(id)arg2 context:(id)arg3;	// IMP=0x0000000000a5eb37
- (id)cd_generateValueForModelObjectFromManagedObject:(id)arg1 modelObjectField:(id)arg2 modelFieldInfo:(id)arg3;	// IMP=0x0000000000a5ea5a

// Remaining properties
@property(retain) NSUUID *changedByUserUUID; // @dynamic changedByUserUUID;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain) NSUUID *hh2ModelID; // @dynamic hh2ModelID;
@property(readonly) Class superclass;
@property(copy) NSString *value; // @dynamic value;

@end

