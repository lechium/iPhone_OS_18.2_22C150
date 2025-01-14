//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFEvent-Protocol.h>
#import <HomeKitDaemon/MKFLocationEventPublicExtensions-Protocol.h>

@class CLRegion, MKFLocationEventDatabaseID, NSArray;
@protocol MKFHome, MKFUser;

@protocol MKFLocationEvent <MKFEvent, MKFLocationEventPublicExtensions>
@property(readonly) id <MKFHome> home;
@property(readonly, copy, nonatomic) MKFLocationEventDatabaseID *databaseID;
@property(retain, nonatomic) id <MKFUser> user;
@property(retain, nonatomic) CLRegion *region;
- (void)removeUserObject:(id <MKFUser>)arg1;
- (void)addUserObject:(id <MKFUser>)arg1;
- (_Bool)synchronizeUserRelationWith:(NSArray *)arg1;
@end

