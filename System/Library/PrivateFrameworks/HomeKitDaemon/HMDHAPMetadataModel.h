//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface HMDHAPMetadataModel
{
}

+ (id)allowedTypes;	// IMP=0x00100000003e13fe
+ (id)modelWithDictionary:(id)arg1;	// IMP=0x00100000003e11a8
+ (id)metadataModelObjectUUID;	// IMP=0x00100000003e1178
+ (id)properties;	// IMP=0x00100000003e1148
+ (Class)cd_entityClass;	// IMP=0x001000000038a821
+ (id)cd_parentReferenceName;	// IMP=0x001000000038a814
- (id)metadataDictionary;	// IMP=0x00000000003e0fbf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSData *legacyCloudData; // @dynamic legacyCloudData;
@property(retain, nonatomic) NSData *legacyIDSData; // @dynamic legacyIDSData;
@property(retain, nonatomic) NSNumber *metadataVersion; // @dynamic metadataVersion;
@property(retain, nonatomic) NSDictionary *rawPlist; // @dynamic rawPlist;
@property(retain, nonatomic) NSNumber *schemaVersion; // @dynamic schemaVersion;
@property(readonly) Class superclass;

@end
