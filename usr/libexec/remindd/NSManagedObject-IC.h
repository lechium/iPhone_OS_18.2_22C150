//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@interface NSManagedObject (IC)
+ (id)ic_dictionariesMatchingPredicate:(id)arg1 propertiesToFetch:(id)arg2 context:(id)arg3;	// IMP=0x0020000000059273
+ (id)ic_objectIDsMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x001000000005925c
+ (id)ic_objectIDsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 context:(id)arg3;	// IMP=0x001000000005922c
+ (id)ic_objectsMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x0010000000059215
+ (id)ic_objectsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 propertiesToFetch:(id)arg3 relationshipKeyPathsForPrefetching:(id)arg4 context:(id)arg5;	// IMP=0x00100000000591e8
+ (id)ic_objectsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 context:(id)arg3;	// IMP=0x00100000000591c3
+ (id)ic_resultsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 resultType:(unsigned long long)arg3 fetchBatchSize:(unsigned long long)arg4 propertiesToFetch:(id)arg5 relationshipKeyPathsForPrefetching:(id)arg6 context:(id)arg7;	// IMP=0x00100000000591b1
+ (id)ic_permanentObjectIDsFromObjects:(id)arg1;	// IMP=0x00100000000588a6
+ (id)ic_objectIDsFromObjects:(id)arg1;	// IMP=0x00100000000586f4
+ (id)ic_objectsFromObjectIDs:(id)arg1 context:(id)arg2;	// IMP=0x00100000000586da
+ (id)ic_objectsFromObjectIDs:(id)arg1 propertiesToFetch:(id)arg2 relationshipKeyPathsForPrefetching:(id)arg3 context:(id)arg4;	// IMP=0x00100000000586c8
+ (id)ic_objectFromObjectID:(id)arg1 context:(id)arg2;	// IMP=0x0010000000058537
+ (id)_ic_resultsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 resultType:(unsigned long long)arg3 fetchBatchSize:(unsigned long long)arg4 propertiesToFetch:(id)arg5 relationshipKeyPathsForPrefetching:(id)arg6 context:(id)arg7;	// IMP=0x0010000000060204
+ (id)_ic_objectsFromObjectIDs:(id)arg1 propertiesToFetch:(id)arg2 relationshipKeyPathsForPrefetching:(id)arg3 context:(id)arg4;	// IMP=0x001000000005ffb1
- (id)ic_postNotificationOnMainThreadAfterSaveWithName:(id)arg1;	// IMP=0x0010000000058e0a
- (void)ic_postNotificationOnMainThreadWithName:(id)arg1;	// IMP=0x0010000000058bf0
- (id)ic_permanentObjectID;	// IMP=0x0010000000058bc2
- (_Bool)ic_obtainPermanentObjectIDIfNecessary;	// IMP=0x0010000000058a5c
@end
