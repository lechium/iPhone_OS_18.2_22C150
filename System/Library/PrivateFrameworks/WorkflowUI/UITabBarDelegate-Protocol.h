//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class NSArray, UITabBar, UITabBarItem;

@protocol UITabBarDelegate <NSObject>

@optional
- (void)tabBar:(UITabBar *)arg1 didEndCustomizingItems:(NSArray *)arg2 changed:(_Bool)arg3;
- (void)tabBar:(UITabBar *)arg1 willEndCustomizingItems:(NSArray *)arg2 changed:(_Bool)arg3;
- (void)tabBar:(UITabBar *)arg1 didBeginCustomizingItems:(NSArray *)arg2;
- (void)tabBar:(UITabBar *)arg1 willBeginCustomizingItems:(NSArray *)arg2;
- (void)tabBar:(UITabBar *)arg1 didSelectItem:(UITabBarItem *)arg2;
@end
