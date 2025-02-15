//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class HFItem, HFItemManager, HFItemManagerDelegateUpdateRequest, HMHome, NAFuture, NSArray, NSDictionary, NSIndexPath, NSIndexSet, NSSet;

@protocol HFItemManagerDelegate <NSObject>

@optional
- (void)itemManager:(HFItemManager *)arg1 didMoveSection:(long long)arg2 toSection:(long long)arg3;
- (void)itemManager:(HFItemManager *)arg1 didInsertSections:(NSIndexSet *)arg2;
- (void)itemManager:(HFItemManager *)arg1 didRemoveSections:(NSIndexSet *)arg2;
- (void)itemManager:(HFItemManager *)arg1 didMoveItem:(HFItem *)arg2 fromIndexPath:(NSIndexPath *)arg3 toIndexPath:(NSIndexPath *)arg4;
- (void)itemManager:(HFItemManager *)arg1 didInsertItem:(HFItem *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)itemManager:(HFItemManager *)arg1 didRemoveItem:(HFItem *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)itemManager:(HFItemManager *)arg1 performUpdateRequest:(HFItemManagerDelegateUpdateRequest *)arg2;
- (void)itemManagerDidFinishUpdate:(HFItemManager *)arg1;
- (void)itemManager:(HFItemManager *)arg1 didUpdateItemModules:(NSArray *)arg2;
- (void)itemManager:(HFItemManager *)arg1 didChangeSourceItem:(HFItem *)arg2;
- (void)itemManager:(HFItemManager *)arg1 didChangeHome:(HMHome *)arg2;
- (void)itemManager:(HFItemManager *)arg1 didUpdateResultsForSourceItem:(HFItem *)arg2;
- (void)itemManager:(HFItemManager *)arg1 didChangeOverallLoadingState:(unsigned long long)arg2;
- (void)itemManager:(HFItemManager *)arg1 didUpdateResultsForItem:(HFItem *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (NAFuture *)itemManager:(HFItemManager *)arg1 futureToUpdateItems:(NSSet *)arg2 itemUpdateOptions:(NSDictionary *)arg3;
@end

