//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SYDPlistToCoreDataMigrator : NSObject
{
}

+ (id)knownDaemons;	// IMP=0x0040000000029dfb
+ (void);	// IMP=0x00100000000299a9
+ (void)addPlistURLsAndStoreIdentifiersForKnownDaemonsToDictionary:(id)arg1 uncontainerizedSyncedPreferencesDirectoryURL:(id)arg2;	// IMP=0x00100000000297b4
+ (void)addPlistURLsAndStoreIdentifiersForBundleRecord:(id)arg1 toDictionary:(id)arg2 uncontainerizedSyncedPreferencesDirectoryURL:(id)arg3;	// IMP=0x001000000002942c
+ (id)allPossibleStorePlistURLsWithLibraryDirectoryURL:(id)arg1;	// IMP=0x0010000000029123
+ (_Bool)isSharedIPad;	// IMP=0x001000000002911b
+ (_Bool)shouldUseTransactionForPlistAtURL:(id)arg1;	// IMP=0x0010000000028f57
+ (_Bool)shouldIncrementFailureCountForError:(id)arg1;	// IMP=0x0010000000028f13
+ (_Bool)shouldStopMigrationAfterError:(id)arg1;	// IMP=0x0010000000028ecb
+ (id)keyValueStorePlistFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000028b66
+ (_Bool)migratePlist:(id)arg1 forStoreWithIdentifier:(id)arg2 toCoreDataStore:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000282f7
+ (_Bool)migrateAllPlistsToCoreDataStore:(id)arg1 deleteMigratedPlists:(_Bool)arg2 libraryDirectoryURL:(id)arg3 error:(id *)arg4;	// IMP=0x001000000002775e
+ (_Bool)migrateAllPlistsIfNecessaryToCoreDataStore:(id)arg1 deleteMigratedPlists:(_Bool)arg2 libraryDirectoryURL:(id)arg3 error:(id *)arg4;	// IMP=0x001000000002711a
+ (_Bool)migrateAllPlistsIfNecessaryToCoreDataStore:(id)arg1 deleteMigratedPlists:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0010000000026fd8

@end

