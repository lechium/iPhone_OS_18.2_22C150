//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActivityUIServices/_UISceneComponentProviding-Protocol.h>

@class UIScene, UIScreen;
@protocol _UISceneUIWindowHosting;

@protocol _UIWindowHostingSceneComponentProviding <_UISceneComponentProviding>

@optional
- (void)_windowHostingScene:(UIScene<_UISceneUIWindowHosting> *)arg1 didMoveFromScreen:(UIScreen *)arg2 toScreen:(UIScreen *)arg3;
- (void)_windowHostingScene:(UIScene<_UISceneUIWindowHosting> *)arg1 willMoveFromScreen:(UIScreen *)arg2 toScreen:(UIScreen *)arg3;
@end

