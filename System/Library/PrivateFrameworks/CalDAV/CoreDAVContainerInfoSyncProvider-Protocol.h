//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CalDAV/CoreDAVTaskGroupDelegate-Protocol.h>

@class CoreDAVContainerInfoSyncTaskGroup, NSArray, NSError, NSString;

@protocol CoreDAVContainerInfoSyncProvider <CoreDAVTaskGroupDelegate>
- (void)containerInfoSyncTask:(CoreDAVContainerInfoSyncTaskGroup *)arg1 completedWithNewSyncToken:(NSString *)arg2 error:(NSError *)arg3;
- (void)containerInfoSyncTask:(CoreDAVContainerInfoSyncTaskGroup *)arg1 retrievedAddedOrModifiedContainers:(NSArray *)arg2 removedContainerURLs:(NSArray *)arg3;
@end

