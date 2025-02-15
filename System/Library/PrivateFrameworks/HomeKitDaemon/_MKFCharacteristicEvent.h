//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFCharacteristicEventPrivateExtensions-Protocol.h>

@class MKFCharacteristicEventDatabaseID, NSDate, NSNumber, NSString, NSUUID;
@protocol MKFEventTrigger, MKFHome, MKFService;

__attribute__((visibility("hidden")))
@interface _MKFCharacteristicEvent <MKFCharacteristicEventPrivateExtensions>
{
}

+ (id)backingModelProtocol;	// IMP=0x0010000000f1a9ab
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x0010000000f1a8f7
+ (Class)cd_modelClass;	// IMP=0x00100000001acb95
+ (id)fetchRequest;	// IMP=0x0010000000365e62
@property(readonly) id <MKFHome> home;
- (id)castIfCharacteristicEvent;	// IMP=0x0000000000f1a89e
@property(readonly, copy, nonatomic) MKFCharacteristicEventDatabaseID *databaseID;
- (_Bool)validateForInsertOrUpdate:(id *)arg1;	// IMP=0x0000000000f1a7cc

// Remaining properties
@property(copy, nonatomic) NSNumber *characteristicID; // @dynamic characteristicID;
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
@property(retain, nonatomic) id <MKFService> service; // @dynamic service;
@property(readonly) Class superclass;
@property(readonly, retain, nonatomic) id <MKFEventTrigger> trigger;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end

