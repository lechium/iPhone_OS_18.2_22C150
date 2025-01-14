//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSString, _DKCompatibility, _DKSyncHistory, _DKSyncPeer;

@protocol _DKSyncLocalKnowledgeStorage
- (_Bool)deleteEventsWithEventIDs:(NSArray *)arg1 error:(id *)arg2;
- (_Bool)saveEvents:(NSArray *)arg1 error:(id *)arg2;
- (_DKSyncHistory *)deletionsSyncHistoryForPeer:(_DKSyncPeer *)arg1 transportName:(NSString *)arg2 error:(id *)arg3;
- (_DKSyncHistory *)additionsSyncHistoryForPeer:(_DKSyncPeer *)arg1 transportName:(NSString *)arg2 error:(id *)arg3;
- (void)setLastSyncDownDeletionDate:(NSDate *)arg1 previousDate:(NSDate *)arg2 forPeer:(_DKSyncPeer *)arg3 transportName:(NSString *)arg4 error:(id *)arg5;
- (NSDate *)lastSyncDownDeletionDateForPeer:(_DKSyncPeer *)arg1 transportName:(NSString *)arg2 error:(id *)arg3;
- (_Bool)saveSyncedDownWindows:(NSArray *)arg1 peer:(_DKSyncPeer *)arg2 transportName:(NSString *)arg3 error:(id *)arg4;
- (NSArray *)sortedSyncDownWindowsOverlappingBetweenDate:(NSDate *)arg1 andDate:(NSDate *)arg2 peer:(_DKSyncPeer *)arg3 error:(id *)arg4;
- (NSArray *)tombstonesSinceDate:(NSDate *)arg1 streamNames:(NSArray *)arg2 limit:(unsigned long long)arg3 endDate:(id *)arg4 error:(id *)arg5;
- (NSArray *)sortedEventsFromSyncWindows:(NSArray *)arg1 streamNames:(NSArray *)arg2 compatibility:(_DKCompatibility *)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 error:(id *)arg6;
- (NSArray *)sortedEventsFromSyncWindows:(NSArray *)arg1 streamNames:(NSArray *)arg2 limit:(unsigned long long)arg3 fetchOrder:(long long)arg4 error:(id *)arg5;
@end

