//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray, NSUUID, _UIActivityUserDefaultsViewController;

@protocol _UIActivityUserDefaultsViewControllerDelegate <NSObject>
- (void)userDefaultsViewController:(_UIActivityUserDefaultsViewController *)arg1 didSelectActivityWithIdentifier:(NSUUID *)arg2 activityCategory:(long long)arg3 disabled:(_Bool)arg4;
- (void)userDefaultsViewController:(_UIActivityUserDefaultsViewController *)arg1 didUpdateFavoritesProxies:(NSArray *)arg2 activityCategory:(long long)arg3;
- (void)userDefaultsViewController:(_UIActivityUserDefaultsViewController *)arg1 didFavoriteActivity:(_Bool)arg2 withIdentifier:(NSUUID *)arg3 activityCategory:(long long)arg4;
- (void)userDefaultsViewController:(_UIActivityUserDefaultsViewController *)arg1 didToggleActivityWithIdentifier:(NSUUID *)arg2 activityCategory:(long long)arg3;
@end
