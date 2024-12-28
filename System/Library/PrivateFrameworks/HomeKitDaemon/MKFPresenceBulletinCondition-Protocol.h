//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFBulletinCondition-Protocol.h>
#import <HomeKitDaemon/MKFPresenceBulletinConditionPublicExtensions-Protocol.h>

@class MKFPresenceBulletinConditionDatabaseID, NSArray, NSNumber, NSUUID;
@protocol MKFGuest, MKFHome, MKFUser;

@protocol MKFPresenceBulletinCondition <MKFBulletinCondition, MKFPresenceBulletinConditionPublicExtensions>
@property(readonly) id <MKFHome> home;
@property(readonly, copy, nonatomic) MKFPresenceBulletinConditionDatabaseID *databaseID;
@property(readonly, retain, nonatomic) NSArray *guests;
@property(readonly, retain, nonatomic) NSArray *users;
@property(copy, nonatomic) NSNumber *presenceEventUserType;
@property(copy, nonatomic) NSNumber *presenceEventType;
- (void)removeGuestsObject:(id <MKFGuest>)arg1;
- (void)addGuestsObject:(id <MKFGuest>)arg1;
- (id <MKFGuest>)findGuestsRelationWithModelID:(NSUUID *)arg1;
- (id <MKFGuest>)materializeOrCreateGuestsRelationWithModelID:(NSUUID *)arg1 createdNew:(_Bool *)arg2;
- (void)removeUsersObject:(id <MKFUser>)arg1;
- (void)addUsersObject:(id <MKFUser>)arg1;
- (id <MKFUser>)findUsersRelationWithModelID:(NSUUID *)arg1;
- (id <MKFUser>)materializeOrCreateUsersRelationWithModelID:(NSUUID *)arg1 createdNew:(_Bool *)arg2;
@end
