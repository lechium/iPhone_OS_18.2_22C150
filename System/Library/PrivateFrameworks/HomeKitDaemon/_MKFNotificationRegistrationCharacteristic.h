//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFNotificationRegistrationCharacteristicDatabaseID, NSDate, NSNumber, NSString, NSUUID;
@protocol MKFCharacteristic, MKFGuest, MKFHome, MKFUser;

__attribute__((visibility("hidden")))
@interface _MKFNotificationRegistrationCharacteristic
{
}

+ (id)backingModelProtocol;	// IMP=0x0010000000f98b08
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x0010000000f98a54
+ (id)fetchRequest;	// IMP=0x00100000007f59b4
@property(readonly) id <MKFHome> home;
- (id)castIfNotificationRegistrationCharacteristic;	// IMP=0x0000000000f98b4f
@property(readonly, copy, nonatomic) MKFNotificationRegistrationCharacteristicDatabaseID *databaseID;

// Remaining properties
@property(retain, nonatomic) id <MKFCharacteristic> characteristic; // @dynamic characteristic;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *deviceIdsDestination;
@property(copy, nonatomic) NSNumber *enabled;
@property(retain, nonatomic) id <MKFGuest> guest;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSDate *lastModified;
@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(copy, nonatomic) NSNumber *notificationThreshold; // @dynamic notificationThreshold;
@property(readonly) Class superclass;
@property(readonly, retain, nonatomic) id <MKFUser> user;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end

