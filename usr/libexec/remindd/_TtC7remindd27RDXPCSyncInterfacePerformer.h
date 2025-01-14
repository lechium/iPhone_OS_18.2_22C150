//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC7remindd27RDXPCSyncInterfacePerformer : NSObject
{
    MISSING_TYPE *queue;	// 8 = 0x8
    MISSING_TYPE *storeController;	// 16 = 0x10
    MISSING_TYPE *cloudKitThrottler;	// 24 = 0x18
    MISSING_TYPE *discretionaryCloudKitThrottler;	// 32 = 0x20
    MISSING_TYPE *dataAccessThrottler;	// 40 = 0x28
    MISSING_TYPE *dataAccessRequestsWriter;	// 48 = 0x30
    MISSING_TYPE *storeProvider;	// 56 = 0x38
    MISSING_TYPE *clientIdentity;	// 72 = 0x48
    MISSING_TYPE *clientConnection;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x004000000015e1e0
- (id)init;	// IMP=0x001000000015e180
- (void)observeCloudKitNetworkActivityChanges;	// IMP=0x001000000015e150
- (void)fetchServerRecordFor:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000015dda0
- (void)setMigrationStateToDidChooseToMigrate:(_Bool)arg1 didFinishMigration:(_Bool)arg2 createZoneAccountIfFinishMigration:(_Bool)arg3 accountID:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000015d570
- (void)fetchUserRecordWithAccountID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000015c170
- (void)debugDownloadMigrationCacheWithAccountID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000015b2a0
- (void)migrateICloudCalDavToCloudKitWithAccountID:(id)arg1 disableCache:(_Bool)arg2 userInitiated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000015a230
- (void)deleteApplicationDataFromCloudKitWithAccountID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000158a30
- (void)syncDataAccessAccountsWithAccountIDs:(id)arg1 bypassThrottler:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000156f00
- (void)restartCloudKitSyncWithReason:(id)arg1 bypassThrottler:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000156590
- (void)syncCloudKitWithReason:(id)arg1 discretionary:(_Bool)arg2 bypassThrottler:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000155560

@end

