//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SharedDataMigration : NSObject
{
}

+ (void)migrateTabDatabaseIfNeeded;	// IMP=0x008000000011cd0f
+ (_Bool)migrateThumbnails;	// IMP=0x008000000011cc9b
+ (_Bool)migrateRecentSearches;	// IMP=0x008000000011cc2a
+ (void)migratePersistentStorageDefaults;	// IMP=0x008000000011cafc
+ (_Bool)_migrateCacheFileFromSubpath:(id)arg1 toSubpath:(id)arg2 ensureIsDirectory:(_Bool)arg3;	// IMP=0x008000000011c651
+ (id)_userCachesDirectoryPath;	// IMP=0x008000000011c5df

@end

