//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSCountedSet, _DKChangeSet;
@protocol _DKSyncCoordinator;

@protocol _DKSyncCoordinatorEventNotificationDelegate

@optional
- (void)syncCoordinator:(id <_DKSyncCoordinator>)arg1 didApplyRemoteDeletionChangeSet:(_DKChangeSet *)arg2;
- (void)syncCoordinator:(id <_DKSyncCoordinator>)arg1 didApplyRemoteAdditionChangeSet:(_DKChangeSet *)arg2;
- (void)syncCoordinator:(id <_DKSyncCoordinator>)arg1 didDeleteRemoteEventsWithCount:(unsigned long long)arg2;
- (void)syncCoordinator:(id <_DKSyncCoordinator>)arg1 didAddRemoteEventsWithStreamNameCounts:(NSCountedSet *)arg2 events:(NSArray *)arg3;
- (void)syncCoordinator:(id <_DKSyncCoordinator>)arg1 didCreateDeletionChangeSet:(_DKChangeSet *)arg2;
- (void)syncCoordinator:(id <_DKSyncCoordinator>)arg1 didCreateAdditionChangeSet:(_DKChangeSet *)arg2;
- (void)syncCoordinator:(id <_DKSyncCoordinator>)arg1 didInsertLocalDeletionEventsWithCount:(unsigned long long)arg2;
- (void)syncCoordinator:(id <_DKSyncCoordinator>)arg1 didInsertLocalAdditionEventsWithStreamNameCounts:(NSCountedSet *)arg2;
@end

