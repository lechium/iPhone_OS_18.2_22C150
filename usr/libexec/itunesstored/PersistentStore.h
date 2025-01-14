//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectModel, NSPersistentStoreCoordinator, NSString, NSURL, PersistentStoreConfiguration;

@interface PersistentStore : NSObject
{
    PersistentStoreConfiguration *_configuration;	// 8 = 0x8
    NSManagedObjectModel *_model;	// 16 = 0x10
    NSPersistentStoreCoordinator *_storeCoordinator;	// 24 = 0x18
    NSString *_threadContextKey;	// 32 = 0x20
    NSString *_threadCountKey;	// 40 = 0x28
}

- (id)_newLegacyManagedObjectModel;	// IMP=0x0020000000094f1a
- (_Bool)_loadStoreCoordinatorWithIntegrityCheck:(_Bool)arg1 error:(id *)arg2;	// IMP=0x0010000000094d98
- (id)_baseFilePath;	// IMP=0x0010000000094d58
- (id)managedObjectModel;	// IMP=0x0010000000094a3a
- (_Bool)loadStoreCoordinatorWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x001000000009427c
- (_Bool)resetStore:(id *)arg1;	// IMP=0x0010000000093efc
- (_Bool)performLightweightMigration:(id *)arg1;	// IMP=0x00100000000937e7
@property(readonly) NSURL *modelFileURL;
- (void)endThreadContextSession;	// IMP=0x0010000000093669
@property(readonly) NSURL *databaseFileURL;
@property(readonly) PersistentStoreConfiguration *configuration;
- (void)checkIntegrityWithInitializationBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000009327f
- (id)beginThreadContextSession;	// IMP=0x001000000009312c
- (void)dealloc;	// IMP=0x00100000000930cd
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000092f84
- (id)init;	// IMP=0x0010000000092f6e

@end

