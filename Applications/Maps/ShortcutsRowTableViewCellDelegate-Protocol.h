//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class MapsFavoriteItem, MapsSuggestionsEntry, UIView;

@protocol ShortcutsRowTableViewCellDelegate <NSObject>
- (void)removeFavoriteShortcut:(MapsFavoriteItem *)arg1;
- (void)editFavoriteShortcut:(MapsFavoriteItem *)arg1;
- (void)shortcutsRowTableViewCell:(UIView *)arg1 openFavorite:(MapsFavoriteItem *)arg2;
- (void)shortcutsRowTableViewCell:(UIView *)arg1 openShortcut:(MapsSuggestionsEntry *)arg2;
- (void)shortcutsRowTableViewCellAddNewShortcut:(UIView *)arg1;
@end

