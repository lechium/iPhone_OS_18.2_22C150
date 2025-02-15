//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/PLJournalEntryPayload-Protocol.h>

@class NSArray, NSDictionary, NSManagedObject, NSManagedObjectContext, NSManagedObjectModel, NSPredicate, NSSet, NSString;
@protocol PLJournalEntryPayloadInsertAdapter><PLJournalEntryPayloadUpdateAdapter;

@protocol PLManagedObjectJournalEntryPayloadClass <PLJournalEntryPayload>
+ (NSPredicate *)fetchPredicateInContext:(NSManagedObjectContext *)arg1;
+ (id <PLJournalEntryPayloadInsertAdapter><PLJournalEntryPayloadUpdateAdapter>)payloadAdapterForManagedObject:(NSManagedObject *)arg1;
+ (NSArray *)relationshipKeyPathsForPrefetching;
+ (NSArray *)snapshotSortDescriptors;
+ (_Bool)shouldPersistForChangedKeys:(NSSet *)arg1 entityName:(NSString *)arg2;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (NSSet *)additionalEntityNames;
+ (NSString *)entityName;
+ (_Bool)isValidForPersistenceWithObjectDictionary:(NSDictionary *)arg1 additionalEntityName:(NSString *)arg2;
+ (void)populateValidationPropertiesFromManagedObjectModel:(NSManagedObjectModel *)arg1;
+ (void)validatePayloadPropertiesForManagedObjectModel:(NSManagedObjectModel *)arg1;
+ (NSDictionary *)persistedPropertyNamesForEntityNames;
+ (NSDictionary *)modelProperties;
@end

