//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFRoomDatabaseID, NSArray, NSDate, NSSet, NSString, NSUUID;
@protocol MKFApplicationData, MKFHome;

__attribute__((visibility("hidden")))
@interface _MKFRoom
{
}

+ (id)backingModelProtocol;	// IMP=0x0010000000626ecd
+ (id)homeRelation;	// IMP=0x0010000000626e9d
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x0010000000626e84
+ (id)fetchRequest;	// IMP=0x0010000000365e82
+ (Class)cd_modelClass;	// IMP=0x00100000009e6b9e
@property(readonly, retain, nonatomic) NSArray *zones;
- (id)materializeOrCreateApplicationDataRelation:(_Bool *)arg1;	// IMP=0x0000000000626fb2
@property(readonly, retain, nonatomic) NSArray *accessories;
- (id)castIfRoom;	// IMP=0x0000000000626f52
@property(readonly, copy, nonatomic) MKFRoomDatabaseID *databaseID;
- (_Bool)shouldIncludeForRestrictedGuestWithContext:(id)arg1;	// IMP=0x0000000000a1946a

// Remaining properties
@property(retain, nonatomic) NSSet *accessories_; // @dynamic accessories_;
@property(retain, nonatomic) id <MKFApplicationData> applicationData; // @dynamic applicationData;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *hmd_modelID;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSUUID",?,R,C,N

@property(readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSUUID",?,R,C,N

@property(readonly, retain, nonatomic) id <MKFHome> home; // @dynamic home;
@property(readonly, retain, nonatomic) id <MKFHome> homeDefault; // @dynamic homeDefault;
@property(readonly, copy, nonatomic) NSUUID *modelID; // @dynamic modelID;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDate *writerTimestamp; // @dynamic writerTimestamp;
@property(retain, nonatomic) NSSet *zones_; // @dynamic zones_;

@end
