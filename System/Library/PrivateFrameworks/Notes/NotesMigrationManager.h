//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NotesMigrationManager : NSObject
{
}

- (_Bool)migrateNotesStoreAtURL:(id)arg1 storeType:(id)arg2 options:(id)arg3 sourceModel:(id)arg4 destinationModel:(id)arg5 mappingModel:(id)arg6 error:(id *)arg7;	// IMP=0x00000000000136ca
- (_Bool)migrateNotesStoreAtURL:(id)arg1 storeType:(id)arg2 managedObjectModel:(id)arg3 options:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000012ff5
- (_Bool)areStoreMetadata:(id)arg1 matchingEntityVersionsInModel:(id)arg2;	// IMP=0x0000000000012f56

@end
