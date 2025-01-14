//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFMediaPlaybackActionDatabaseID, MPPlaybackArchive, NSArray, NSDate, NSNumber, NSSet, NSString, NSUUID;
@protocol MKFActionSet, MKFHome;

__attribute__((visibility("hidden")))
@interface _MKFMediaPlaybackAction
{
}

+ (id)backingModelProtocol;	// IMP=0x00100000003c7332
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x00100000003c727e
+ (id)fetchRequest;	// IMP=0x001000000096dbb4
+ (Class)cd_modelClass;	// IMP=0x0010000000e9a75b
- (void)removeAccessoriesObject:(id)arg1;	// IMP=0x00000000003c7445
- (void)addAccessoriesObject:(id)arg1;	// IMP=0x00000000003c7429
@property(readonly, retain, nonatomic) NSArray *accessories;
@property(readonly) id <MKFHome> home;
- (id)castIfMediaPlaybackAction;	// IMP=0x00000000003c7379
@property(readonly, copy, nonatomic) MKFMediaPlaybackActionDatabaseID *databaseID;

// Remaining properties
@property(retain, nonatomic) NSSet *accessories_; // @dynamic accessories_;
@property(readonly, retain, nonatomic) id <MKFActionSet> actionSet;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(retain, nonatomic) MPPlaybackArchive *encodedPlaybackArchive; // @dynamic encodedPlaybackArchive;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *hmd_modelID;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSUUID",?,R,C,N

@property(readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSUUID",?,R,C,N

@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(copy, nonatomic) NSNumber *state; // @dynamic state;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSNumber *volume; // @dynamic volume;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end

