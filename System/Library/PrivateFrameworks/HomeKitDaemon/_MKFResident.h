//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMFPairingIdentity, MKFResidentDatabaseID, NSData, NSDate, NSNumber, NSString, NSUUID;
@protocol MKFAppleMediaAccessory, MKFDevice, MKFHome;

__attribute__((visibility("hidden")))
@interface _MKFResident
{
}

+ (id)backingModelProtocol;	// IMP=0x001000000077ddef
+ (id)homeRelation;	// IMP=0x001000000077ddbf
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x001000000077dd0b
+ (id)fetchRequest;	// IMP=0x0010000000999563
- (id)castIfResident;	// IMP=0x000000000077de74
@property(readonly, copy, nonatomic) MKFResidentDatabaseID *databaseID;

// Remaining properties
@property(retain, nonatomic) id <MKFAppleMediaAccessory> appleMediaAccessory; // @dynamic appleMediaAccessory;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(retain, nonatomic) id <MKFDevice> device; // @dynamic device;
@property(retain, nonatomic) NSData *deviceIRKData; // @dynamic deviceIRKData;
@property(readonly) unsigned long long hash;
@property(readonly, retain, nonatomic) id <MKFHome> home; // @dynamic home;
@property(copy, nonatomic) NSString *idsDestination; // @dynamic idsDestination;
@property(copy, nonatomic) NSUUID *idsIdentifier; // @dynamic idsIdentifier;
@property(readonly, copy, nonatomic) NSUUID *modelID; // @dynamic modelID;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) HMFPairingIdentity *pairingIdentity; // @dynamic pairingIdentity;
@property(copy, nonatomic) NSNumber *reachable; // @dynamic reachable;
@property(retain, nonatomic) NSData *residentCapabilities; // @dynamic residentCapabilities;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDate *writerTimestamp; // @dynamic writerTimestamp;

@end

