//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore, CloudBookmarkAccountPropertiesStore, CloudBookmarkStore, CloudBookmarkSyncMigrationConverter;
@protocol CloudBookmarkDatabaseCoordinating;

@interface CloudBookmarkSyncMigrationCoordinator : NSObject
{
    ACAccountStore *_accountStore;	// 8 = 0x8
    CloudBookmarkSyncMigrationConverter *_migrationConverter;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
    _Bool _isMigrating;	// 32 = 0x20
    CloudBookmarkAccountPropertiesStore *_accountPropertiesStore;	// 40 = 0x28
    CloudBookmarkStore *_bookmarkStore;	// 48 = 0x30
    id <CloudBookmarkDatabaseCoordinating> _databaseCoordinator;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000086a6a
@property(readonly, nonatomic) id <CloudBookmarkDatabaseCoordinating> databaseCoordinator; // @synthesize databaseCoordinator=_databaseCoordinator;
@property(readonly, nonatomic) CloudBookmarkStore *bookmarkStore; // @synthesize bookmarkStore=_bookmarkStore;
@property(readonly, nonatomic) CloudBookmarkAccountPropertiesStore *accountPropertiesStore; // @synthesize accountPropertiesStore=_accountPropertiesStore;
- (void)resetToNonMigratedStateInOperationGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008681b
- (void)_didFinishMigrationWithError:(id)arg1;	// IMP=0x001000000008653c
- (void)_beginMigrationAsPrimaryMigrator:(_Bool)arg1 inOperationGroup:(id)arg2;	// IMP=0x0010000000086298
- (void)beginMigratingAsPrimaryMigrator:(_Bool)arg1 inOperationGroup:(id)arg2 willBeginMigrationHandler:(CDUnknownBlockType)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000085d78
@property(nonatomic) long long localMigrationState;
- (id)initWithBookmarkStore:(id)arg1 databaseCoordinator:(id)arg2 accountStore:(id)arg3;	// IMP=0x0010000000085b8c
- (id)init;	// IMP=0x0010000000085b7e

@end

