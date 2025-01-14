//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFMatterAttributeEventDatabaseID, NSDate, NSNumber, NSString, NSUUID;
@protocol MKFEventTrigger, MKFHome, MKFMatterPath;

__attribute__((visibility("hidden")))
@interface _MKFMatterAttributeEvent
{
}

+ (id)backingModelProtocol;	// IMP=0x00100000008777ec
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x0010000000877738
+ (Class)cd_modelClass;	// IMP=0x0010000000717038
+ (id)fetchRequest;	// IMP=0x0010000000b58080
@property(readonly) id <MKFHome> home;
- (id)castIfMatterAttributeEvent;	// IMP=0x0000000000877833
@property(readonly, copy, nonatomic) MKFMatterAttributeEventDatabaseID *databaseID;

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

@property(retain, nonatomic) id <MKFMatterPath> matterPath; // @dynamic matterPath;
@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(readonly) Class superclass;
@property(readonly, retain, nonatomic) id <MKFEventTrigger> trigger;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end

