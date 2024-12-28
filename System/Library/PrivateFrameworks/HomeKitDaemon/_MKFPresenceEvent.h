//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFPresenceEventDatabaseID, NSArray, NSDate, NSNumber, NSSet, NSString, NSUUID;
@protocol MKFEventTrigger, MKFHome;

__attribute__((visibility("hidden")))
@interface _MKFPresenceEvent
{
}

+ (id)backingModelProtocol;	// IMP=0x00100000006049e0
+ (id)homeRelation;	// IMP=0x00100000006049b0
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x00100000006048fc
+ (Class)cd_modelClass;	// IMP=0x00100000003d0143
+ (id)fetchRequest;	// IMP=0x0010000000cdcaa2
- (void)removeGuestsObject:(id)arg1;	// IMP=0x00000000006048e0
- (void)addGuestsObject:(id)arg1;	// IMP=0x00000000006048c4
- (_Bool)synchronizeGuestsRelationWith:(id)arg1;	// IMP=0x00000000006048a5
@property(readonly, retain, nonatomic) NSArray *guests;
- (void)removeUsersObject:(id)arg1;	// IMP=0x0000000000604832
- (void)addUsersObject:(id)arg1;	// IMP=0x0000000000604816
- (_Bool)synchronizeUsersRelationWith:(id)arg1;	// IMP=0x00000000006047f7
@property(readonly, retain, nonatomic) NSArray *users;
@property(readonly) id <MKFHome> home;
- (id)castIfPresenceEvent;	// IMP=0x0000000000604747
@property(readonly, copy, nonatomic) MKFPresenceEventDatabaseID *databaseID;
- (_Bool)validateForInsertOrUpdate:(id *)arg1;	// IMP=0x00000000006045ea

// Remaining properties
@property(copy, nonatomic) NSNumber *activation; // @dynamic activation;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSNumber *endEvent;
@property(retain, nonatomic) NSSet *guests_; // @dynamic guests_;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *hmd_modelID;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSUUID",?,R,C,N

@property(readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSUUID",?,R,C,N

@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(copy, nonatomic) NSString *presenceType; // @dynamic presenceType;
@property(readonly) Class superclass;
@property(readonly, retain, nonatomic) id <MKFEventTrigger> trigger;
@property(retain, nonatomic) NSSet *users_; // @dynamic users_;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end
