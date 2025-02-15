//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFNotificationRegistrationMediaPropertyDatabaseID, NSDate, NSNumber, NSString, NSUUID;
@protocol MKFAccessory, MKFGuest, MKFHome, MKFUser;

__attribute__((visibility("hidden")))
@interface _MKFNotificationRegistrationMediaProperty
{
}

+ (id)backingModelProtocol;	// IMP=0x0010000000b8f2da
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x0010000000b8f226
+ (id)fetchRequest;	// IMP=0x00100000004aaa78
@property(readonly) id <MKFHome> home;
- (id)castIfNotificationRegistrationMediaProperty;	// IMP=0x0000000000b8f1cd
@property(readonly, copy, nonatomic) MKFNotificationRegistrationMediaPropertyDatabaseID *databaseID;
- (_Bool)validateForInsertOrUpdate:(id *)arg1;	// IMP=0x0000000000b8f0fb

// Remaining properties
@property(retain, nonatomic) id <MKFAccessory> accessory; // @dynamic accessory;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *deviceIdsDestination;
@property(copy, nonatomic) NSNumber *enabled;
@property(retain, nonatomic) id <MKFGuest> guest;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSDate *lastModified;
@property(copy, nonatomic) NSUUID *mediaProfileIdentifier; // @dynamic mediaProfileIdentifier;
@property(copy, nonatomic) NSString *mediaProperty; // @dynamic mediaProperty;
@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(readonly) Class superclass;
@property(readonly, retain, nonatomic) id <MKFUser> user;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end

