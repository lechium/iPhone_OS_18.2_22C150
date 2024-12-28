//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLRegion, MKFLocationEventDatabaseID, NSDate, NSNumber, NSString, NSUUID;
@protocol MKFEventTrigger, MKFHome, MKFUser;

__attribute__((visibility("hidden")))
@interface _MKFLocationEvent
{
}

+ (id)backingModelProtocol;	// IMP=0x0010000000524b02
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x0010000000524a4e
+ (Class)cd_modelClass;	// IMP=0x00100000003d0798
+ (id)fetchRequest;	// IMP=0x0010000000afb5f6
- (void)removeUserObject:(id)arg1;	// IMP=0x0000000000524bdd
- (void)addUserObject:(id)arg1;	// IMP=0x0000000000524bc1
- (_Bool)synchronizeUserRelationWith:(id)arg1;	// IMP=0x0000000000524ba2
@property(readonly) id <MKFHome> home;
- (id)castIfLocationEvent;	// IMP=0x0000000000524b49
@property(readonly, copy, nonatomic) MKFLocationEventDatabaseID *databaseID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSNumber *endEvent;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *hmd_modelID;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSUUID",?,R,C,N

@property(readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSUUID",?,R,C,N

@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(retain, nonatomic) CLRegion *region; // @dynamic region;
@property(readonly) Class superclass;
@property(readonly, retain, nonatomic) id <MKFEventTrigger> trigger;
@property(retain, nonatomic) id <MKFUser> user; // @dynamic user;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end
