//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SwiftUI/UITabBarControllerDelegate-Protocol.h>

@class UITab, UITabBarController, _UITab;
@protocol UIDropSession;

@protocol _UITabBarControllerDelegate_UniquelyiPad <UITabBarControllerDelegate>

@optional
- (void)_uip_tabBarController:(UITabBarController *)arg1 dropSessionDidUpdate:(id <UIDropSession>)arg2 withDestinationTab:(UITab *)arg3;
- (void)_uip_tabBarController:(UITabBarController *)arg1 tab:(_UITab *)arg2 acceptItemsFromDropSession:(id <UIDropSession>)arg3;
- (unsigned long long)_uip_tabBarController:(UITabBarController *)arg1 tab:(_UITab *)arg2 operationForAcceptingItemsFromDropSession:(id <UIDropSession>)arg3;
@end
