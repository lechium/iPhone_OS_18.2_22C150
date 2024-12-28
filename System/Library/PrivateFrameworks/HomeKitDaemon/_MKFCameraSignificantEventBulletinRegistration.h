//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFCameraSignificantEventBulletinRegistrationDatabaseID, NSArray, NSDate, NSNumber, NSString, NSUUID;
@protocol MKFAccessory, MKFGuest, MKFHome, MKFUser;

__attribute__((visibility("hidden")))
@interface _MKFCameraSignificantEventBulletinRegistration
{
}

+ (id)backingModelProtocol;	// IMP=0x0010000000716d76
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x0010000000716cc2
+ (id)fetchRequest;	// IMP=0x0010000000d51a72
@property(readonly) id <MKFHome> home;
- (id)castIfCameraSignificantEventBulletinRegistration;	// IMP=0x0000000000716c69
@property(readonly, copy, nonatomic) MKFCameraSignificantEventBulletinRegistrationDatabaseID *databaseID;
- (_Bool)validateForInsertOrUpdate:(id *)arg1;	// IMP=0x0000000000716b97

// Remaining properties
@property(retain, nonatomic) id <MKFAccessory> accessory; // @dynamic accessory;
@property(readonly, retain, nonatomic) NSArray *conditions;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *deviceIdsDestination;
@property(copy, nonatomic) NSUUID *deviceIdsIdentifier;
@property(retain, nonatomic) id <MKFGuest> guest;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(copy, nonatomic) NSNumber *notificationModes; // @dynamic notificationModes;
@property(copy, nonatomic) NSNumber *personFamiliarityOptions; // @dynamic personFamiliarityOptions;
@property(copy, nonatomic) NSNumber *significantEventTypes; // @dynamic significantEventTypes;
@property(readonly) Class superclass;
@property(readonly, retain, nonatomic) id <MKFUser> user;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end
