//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface GKCloudKitMultiplayer : NSObject
{
}

+ (void)deleteInviteRecordWithRecordID:(id)arg1 fromDatabase:(id)arg2;	// IMP=0x00400000000c8b31
+ (void)searchAndSaveIdentityForRecord:(id)arg1 database:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c7bd8
+ (id)lastSevenDigits:(id)arg1;	// IMP=0x00100000000c7b65
+ (id)formattedContact:(id)arg1;	// IMP=0x00100000000c79eb
+ (void)getAssociatedAccountsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c77a7
+ (id)msgServiceQueue;	// IMP=0x00100000000c7750
+ (void)generateAndStoreInviteBulletinForRecord:(id)arg1 database:(id)arg2;	// IMP=0x00100000000c6ea8
+ (id)packFakeTurnBasedBulletinWithZoneData:(id)arg1;	// IMP=0x00100000000c691c
+ (id)packFakeRealTimeBulletinWithZoneData:(id)arg1;	// IMP=0x00100000000c5b86
+ (void)acceptShareMetadata:(id)arg1 retryCount:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c544b
+ (void)handleLegacyShareMetadata:(id)arg1 needsAccept:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c4c50
+ (void)handleCloudKitShareMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c4610
+ (MISSING_TYPE *)bundleIDsForContainerName:handler: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000c3fc5
+ (id)databaseForZoneID:(id)arg1;	// IMP=0x00100000000c3f79
+ (_Bool)isOwnZoneID:(id)arg1;	// IMP=0x00100000000c3e59
+ (void)primaryPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c3b0d
+ (void)updateUserWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c3aa4
+ (id)sessionCache;	// IMP=0x00100000000c3a4f

@end
