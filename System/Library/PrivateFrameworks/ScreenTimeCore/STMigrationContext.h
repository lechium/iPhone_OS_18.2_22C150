//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface STMigrationContext : NSObject
{
    NSMutableDictionary *_uniqueIdentifierToCloudObjectID;	// 8 = 0x8
    NSMutableDictionary *_uniqueIdentifierToLocalObjectID;	// 16 = 0x10
    NSMutableSet *_deletedObjectIDs;	// 24 = 0x18
    NSMutableSet *_filledObjectIDs;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000072150
- (id)deleteCloudObjectWithUniqueIdentifier:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;	// IMP=0x000000000007204d
- (_Bool)deleteLocalObjectWithUniqueIdentifier:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000071f4b
- (id)updateCloudObjectWithUniqueIdentifier:(id)arg1 dictionary:(id)arg2 managedObjectContext:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000071ac4
- (_Bool)initializeCachesWithManagedObjectContext:(id)arg1 withCloudStore:(id)arg2 andLocalStore:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000070fb3
- (id)init;	// IMP=0x0000000000070f10

@end
