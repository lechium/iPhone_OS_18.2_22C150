//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSFetchRequest, NSIndexPath, NSManagedObject, NSManagedObjectContext, NSString;
@protocol NSFetchedResultsControllerDelegate;

@protocol MTFetchedResultsControllerProtocol
@property(nonatomic) __weak id <NSFetchedResultsControllerDelegate> delegate;
@property(readonly, nonatomic) NSArray *fetchedObjects;
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property(copy, nonatomic) NSArray *propertyKeys;
@property(readonly, nonatomic) NSFetchRequest *fetchRequest;
- (NSIndexPath *)indexPathForObject:(NSManagedObject *)arg1;
- (NSManagedObject *)objectAtIndexPath:(NSIndexPath *)arg1;
- (_Bool)performFetch:(id *)arg1;
- (id)initWithFetchRequest:(NSFetchRequest *)arg1 managedObjectContext:(NSManagedObjectContext *)arg2 sectionNameKeyPath:(NSString *)arg3 cacheName:(NSString *)arg4;
@end

