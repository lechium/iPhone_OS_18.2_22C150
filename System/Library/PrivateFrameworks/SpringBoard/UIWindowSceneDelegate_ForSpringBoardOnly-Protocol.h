//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/UIWindowSceneDelegate-Protocol.h>

@class UIWindow, UIWindowScene;

@protocol UIWindowSceneDelegate_ForSpringBoardOnly <UIWindowSceneDelegate>

@optional
- (void)_windowScene:(UIWindowScene *)arg1 window:(UIWindow *)arg2 didUpdateSupportedInterfaceOrientations:(unsigned long long)arg3 preferredOrientation:(long long)arg4;
- (void)_windowScene:(UIWindowScene *)arg1 window:(UIWindow *)arg2 didUpdateSupportedInterfaceOrientations:(unsigned long long)arg3;
- (double)_windowScene:(UIWindowScene *)arg1 levelForWindow:(UIWindow *)arg2 preferredLevel:(double)arg3;
- (void)_windowScene:(UIWindowScene *)arg1 windowWillBecomeHidden:(UIWindow *)arg2;
- (void)_windowScene:(UIWindowScene *)arg1 windowDidBecomeVisible:(UIWindow *)arg2;
- (void)_windowScene:(UIWindowScene *)arg1 windowWillBecomeVisible:(UIWindow *)arg2;
- (void)_windowScene:(UIWindowScene *)arg1 windowWillDetach:(UIWindow *)arg2;
- (void)_windowScene:(UIWindowScene *)arg1 windowWillAttach:(UIWindow *)arg2;
@end

