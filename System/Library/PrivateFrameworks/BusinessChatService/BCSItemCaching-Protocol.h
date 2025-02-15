//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BCSItem;
@protocol BCSItemIdentifying;

@protocol BCSItemCaching
- (void)deleteExpiredItemsOfType:(long long)arg1;
- (void)deleteItemsOfType:(long long)arg1;
- (void)deleteItemMatching:(id <BCSItemIdentifying>)arg1;
- (void)updateItem:(BCSItem *)arg1 withItemIdentifier:(id <BCSItemIdentifying>)arg2;
- (BCSItem *)itemMatching:(id <BCSItemIdentifying>)arg1;
@end

