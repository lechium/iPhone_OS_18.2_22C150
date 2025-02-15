//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariShared/WBSHistoryLoaderDelegate-Protocol.h>

@class NSArray, NSString, WBSHistoryDeletionPlan, WBSHistoryItem;
@protocol WBSHistoryStore;

@protocol WBSHistoryStoreDelegate <WBSHistoryLoaderDelegate>
- (WBSHistoryItem *)historyStore:(id <WBSHistoryStore>)arg1 itemForURLString:(NSString *)arg2 createIfNeeded:(_Bool)arg3;
- (void)historyStoreWasCleared:(id <WBSHistoryStore>)arg1;
- (void)historyStore:(id <WBSHistoryStore>)arg1 didRemoveHostnames:(NSArray *)arg2;
- (void)historyStore:(id <WBSHistoryStore>)arg1 didRemoveHighLevelDomains:(NSArray *)arg2;
- (void)historyStore:(id <WBSHistoryStore>)arg1 didRemoveVisits:(NSArray *)arg2;
- (void)historyStore:(id <WBSHistoryStore>)arg1 didRemoveItems:(NSArray *)arg2;
- (void)historyStore:(id <WBSHistoryStore>)arg1 didAddVisits:(NSArray *)arg2;
- (void)historyStoreDidFailDatabaseIntegrityCheck:(id <WBSHistoryStore>)arg1;
- (_Bool)historyStoreShouldCheckDatabaseIntegrity:(id <WBSHistoryStore>)arg1;
- (void)historyStore:(id <WBSHistoryStore>)arg1 didPrepareToDeleteWithDeletionPlan:(WBSHistoryDeletionPlan *)arg2;

@optional
- (_Bool)historyStoreShouldScheduleMaintenance:(id <WBSHistoryStore>)arg1;
@end

