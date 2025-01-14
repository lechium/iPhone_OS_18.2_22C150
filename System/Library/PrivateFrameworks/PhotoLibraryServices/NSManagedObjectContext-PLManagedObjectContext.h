//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObjectContext.h>

@interface NSManagedObjectContext (PLManagedObjectContext)
+ (_Bool)shouldHavePhotoLibrary;	// IMP=0x00800000001fee17
- (_Bool)pl_executeBatchUpdateRequest:(id)arg1 withBatchSize:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00100000001fe561
- (id)pl_resultWithError:(id *)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00100000001fe437
- (id)deleteObjectsWithIncrementalSave:(id)arg1;	// IMP=0x00100000001fe3dc
- (id)enumerateWithIncrementalSaveUsingObjects:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001fe3c5
- (id)enumerateWithIncrementalSaveUsingObjects:(id)arg1 shouldRefreshAfterSave:(_Bool)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000001fdfa9
- (id)enumerateObjectsFromFetchRequest:(id)arg1 usingDefaultBatchSizeWithBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001fdf8f
- (id)enumerateObjectsFromFetchRequest:(id)arg1 count:(unsigned long long *)arg2 usingDefaultBatchSizeWithBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000001fdf74
- (id)enumerateObjectsFromFetchRequest:(id)arg1 batchSize:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000001fdc01
- (id)enumerateObjectsFromFetchRequest:(id)arg1 count:(unsigned long long *)arg2 batchSize:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x00100000001fdae2
- (id)pl_graphCache;	// IMP=0x00100000001fda0b
- (id)pathManager;	// IMP=0x00100000001fd8b4
- (void)pl_performBlockAndWait:(CDUnknownBlockType)arg1;	// IMP=0x00100000001fd849
- (id)photoLibrary;	// IMP=0x00100000001fd841
- (_Bool)isUserInterfaceContext;	// IMP=0x00100000001fd839
- (void)pl_refresh;	// IMP=0x00100000001fd6a0
@end

