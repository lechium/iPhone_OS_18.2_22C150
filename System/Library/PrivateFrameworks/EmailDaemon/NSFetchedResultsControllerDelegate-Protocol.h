//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EmailDaemon/NSObject-Protocol.h>

@class NSDiffableDataSourceSnapshot, NSFetchedResultsController, NSIndexPath, NSOrderedCollectionDifference, NSString;
@protocol NSFetchedResultsSectionInfo;

@protocol NSFetchedResultsControllerDelegate <NSObject>

@optional
- (NSString *)controller:(NSFetchedResultsController *)arg1 sectionIndexTitleForSectionName:(NSString *)arg2;
- (void)controllerDidChangeContent:(NSFetchedResultsController *)arg1;
- (void)controllerWillChangeContent:(NSFetchedResultsController *)arg1;
- (void)controller:(NSFetchedResultsController *)arg1 didChangeSection:(id <NSFetchedResultsSectionInfo>)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4;
- (void)controller:(NSFetchedResultsController *)arg1 didChangeObject:(id)arg2 atIndexPath:(NSIndexPath *)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(NSIndexPath *)arg5;
- (void)controller:(NSFetchedResultsController *)arg1 didChangeContentWithDifference:(NSOrderedCollectionDifference *)arg2;
- (void)controller:(NSFetchedResultsController *)arg1 didChangeContentWithSnapshot:(NSDiffableDataSourceSnapshot *)arg2;
@end

