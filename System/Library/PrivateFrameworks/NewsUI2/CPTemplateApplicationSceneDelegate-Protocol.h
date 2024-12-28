//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsUI2/UISceneDelegate-Protocol.h>

@class CPInterfaceController, CPManeuver, CPNavigationAlert, CPTemplateApplicationScene, CPWindow;

@protocol CPTemplateApplicationSceneDelegate <UISceneDelegate>

@optional
- (void)contentStyleDidChange:(long long)arg1;
- (void)templateApplicationScene:(CPTemplateApplicationScene *)arg1 didSelectManeuver:(CPManeuver *)arg2;
- (void)templateApplicationScene:(CPTemplateApplicationScene *)arg1 didSelectNavigationAlert:(CPNavigationAlert *)arg2;
- (void)templateApplicationScene:(CPTemplateApplicationScene *)arg1 didDisconnectInterfaceController:(CPInterfaceController *)arg2;
- (void)templateApplicationScene:(CPTemplateApplicationScene *)arg1 didDisconnectInterfaceController:(CPInterfaceController *)arg2 fromWindow:(CPWindow *)arg3;
- (void)templateApplicationScene:(CPTemplateApplicationScene *)arg1 didConnectInterfaceController:(CPInterfaceController *)arg2;
- (void)templateApplicationScene:(CPTemplateApplicationScene *)arg1 didConnectInterfaceController:(CPInterfaceController *)arg2 toWindow:(CPWindow *)arg3;
@end
