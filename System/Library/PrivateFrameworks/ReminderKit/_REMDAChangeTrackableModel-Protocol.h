//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ReminderKit/NSObject-Protocol.h>

@class NSArray, NSString, REMObjectID;

@protocol _REMDAChangeTrackableModel <NSObject>
+ (id <REMDAChangedIdentifierResult> (^)(id <_REMDAChangeTrackableModel>))rem_DA_deletedKeyFromConcealedModelObjectBlock;
+ (id <REMDAChangedIdentifierResult> (^)(REMChangeTombstone *))rem_DA_deletedKeyFromTombstoneBlock;
+ (NSDictionary * (^)(NSArray *, REMStore *, id *))rem_DA_fetchByObjectIDsBlock;
+ (id <_REMDAChangeTrackableModel> (^)(REMObjectID *, _Bool, REMStore *, id *))rem_DA_fetchByObjectIDBlock;
+ (NSArray *)rem_DA_propertiesAffectingIsConcealed;
+ (_Bool)rem_DA_supportsConcealedObjects;
+ (_Bool)rem_DA_supportsFetching;
@property(readonly, nonatomic) REMObjectID *accountID;
@property(readonly, nonatomic) REMObjectID *objectID;

@optional
@property(readonly, nonatomic) NSString *externalIdentifierForMarkedForDeletionObject;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,N

@end
