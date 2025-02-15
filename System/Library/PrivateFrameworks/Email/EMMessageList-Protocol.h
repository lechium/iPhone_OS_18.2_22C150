//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Email/EMCollection-Protocol.h>

@class EFFuture, EMMessage, EMThread, NSArray, NSPredicate, NSSet;
@protocol EMCollectionItemID;

@protocol EMMessageList <EMCollection>
@property(readonly, copy, nonatomic) NSPredicate *filterPredicate;
@property(readonly, copy) NSSet *expandedThreadItemIDs;
@property(readonly, nonatomic) _Bool isThreaded;
- (void)invalidateCacheForItemIDs:(NSArray *)arg1;
- (id <EMCollectionItemID>)itemIDOfFirstMessageListItemMatchingPredicate:(NSPredicate *)arg1;
- (id <EMCollectionItemID>)itemIDOfMessageListItemWithDisplayMessage:(EMMessage *)arg1;
- (NSArray *)messageListItemsForItemIDs:(NSArray *)arg1 ifAvailable:(_Bool)arg2;
- (NSArray *)messageListItemsForItemIDs:(NSArray *)arg1;
- (EFFuture *)messageListItemForItemID:(id <EMCollectionItemID>)arg1 ifAvailable:(_Bool)arg2;
- (EFFuture *)messageListItemForItemID:(id <EMCollectionItemID>)arg1;
- (void)clearRecentlyCollapsedThread;
- (_Bool)recentlyCollapsedThreadContainsItemID:(id <EMCollectionItemID>)arg1;
- (_Bool)anyExpandedThreadContainsItemID:(id <EMCollectionItemID>)arg1;
- (void)collapseThread:(EMThread *)arg1;
- (void)expandThread:(EMThread *)arg1;
- (void)expandThreadsFromThreadItemIDs:(NSArray *)arg1;
- (id)unfilteredMessageList;
- (id)filteredMessageListWithPredicate:(NSPredicate *)arg1 ignoredMessagesPredicate:(NSPredicate *)arg2 userFiltered:(_Bool)arg3;
@end

