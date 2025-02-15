//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDHomeKitVersion, HMDRPIdentity, HMFProductInfo, NSArray, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDDeviceModel
{
}

+ (id)properties;	// IMP=0x0010000000a4e89a
+ (id)schemaHashRoot;	// IMP=0x0010000000a4e879
+ (Class)cd_entityClass;	// IMP=0x0010000000c78a9b
+ (id)cd_parentReferenceName;	// IMP=0x0010000000c78a8e
- (_Bool)diff:(id)arg1 differingFields:(id *)arg2;	// IMP=0x0000000000a4e6a6
@property(readonly, nonatomic) NSArray *deviceHandles;
- (id)cd_childrenExcluding:(id)arg1 fromContext:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000c78a1a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSArray *handles; // @dynamic handles;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSUUID *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) HMFProductInfo *productInfo; // @dynamic productInfo;
@property(copy, nonatomic) HMDRPIdentity *rpIdentity; // @dynamic rpIdentity;
@property(readonly) Class superclass;
@property(copy, nonatomic) HMDHomeKitVersion *version; // @dynamic version;

@end

