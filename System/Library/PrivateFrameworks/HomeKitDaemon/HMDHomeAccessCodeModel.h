//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDHomeAccessCodeModel
{
}

+ (id)modelUUIDForHomeUUID:(id)arg1 accessCodeValue:(id)arg2;	// IMP=0x00100000009e898d
+ (id)properties;	// IMP=0x00100000009e895d
+ (Class)cd_entityClass;	// IMP=0x0010000000c493ab
+ (id)cd_parentReferenceName;	// IMP=0x0010000000c4939e
- (id)initWithHomeUUID:(id)arg1 value:(id)arg2 label:(id)arg3;	// IMP=0x00000000009e8850
- (id)cd_generateValueForProperty:(id)arg1 managedObjectField:(id)arg2 context:(id)arg3;	// IMP=0x0000000000c4920b
- (id)cd_generateValueForModelObjectFromManagedObject:(id)arg1 modelObjectField:(id)arg2 modelFieldInfo:(id)arg3;	// IMP=0x0000000000c4912e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain) NSUUID *hh2ModelID; // @dynamic hh2ModelID;
@property(copy) NSString *label; // @dynamic label;
@property(readonly) Class superclass;
@property(copy) NSString *value; // @dynamic value;

@end

