//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FileProvider/NSObject-Protocol.h>

@class FPSpotlightCollector, NSArray, NSError, NSPredicate;

@protocol FPSpotlightCollectorObserving <NSObject>
- (unsigned long long)maximumNumberOfItems;
- (NSPredicate *)itemPredicateForCollector:(FPSpotlightCollector *)arg1;
- (void)collector:(FPSpotlightCollector *)arg1 didUpdateItemsOrigin:(unsigned long long)arg2;
- (void)collector:(FPSpotlightCollector *)arg1 didEncounterError:(NSError *)arg2;
- (void)collector:(FPSpotlightCollector *)arg1 didRemoveItemIDs:(NSArray *)arg2;
- (void)collector:(FPSpotlightCollector *)arg1 didUpdateItems:(NSArray *)arg2;
- (void)collector:(FPSpotlightCollector *)arg1 didGatherItems:(NSArray *)arg2;
@end

