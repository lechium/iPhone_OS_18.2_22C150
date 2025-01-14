//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFHomePersonManagerSettingDatabaseID, NSDate, NSString, NSUUID;
@protocol MKFHome;

__attribute__((visibility("hidden")))
@interface _MKFHomePersonManagerSetting
{
}

+ (id)backingModelProtocol;	// IMP=0x001000000021b478
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x001000000021b45f
+ (id)fetchRequest;	// IMP=0x0010000000406290
+ (Class)cd_modelClass;	// IMP=0x00100000008175f5
- (id)castIfHomePersonManagerSetting;	// IMP=0x000000000021b4bf
@property(readonly, copy, nonatomic) MKFHomePersonManagerSettingDatabaseID *databaseID;

// Remaining properties
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

@property(readonly, retain, nonatomic) id <MKFHome> home;
@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDate *writerTimestamp;
@property(copy, nonatomic) NSUUID *zoneUUID; // @dynamic zoneUUID;

@end

