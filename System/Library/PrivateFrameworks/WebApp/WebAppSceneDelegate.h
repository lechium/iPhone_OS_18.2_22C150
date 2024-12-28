//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIResponder.h>

@class NSString, UIWindow, WebAppEligibilityViewController, WebAppViewController;

__attribute__((visibility("hidden")))
@interface WebAppSceneDelegate : UIResponder
{
    WebAppViewController *_webApp;	// 8 = 0x8
    UIWindow *_window;	// 16 = 0x10
    _Bool _wasSuspendedUnderLock;	// 24 = 0x18
    _Bool _sceneHasEverEnteredForeground;	// 25 = 0x19
    WebAppEligibilityViewController *_eligibilityViewController;	// 32 = 0x20
    _Bool _shouldLoadWebApp;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000038c8
- (void)_tearDownWindowAndWebApp;	// IMP=0x0000000000003818
- (void)sceneWillEnterForeground:(id)arg1;	// IMP=0x00000000000036ed
- (void)sceneDidEnterBackground:(id)arg1;	// IMP=0x00000000000036bc
- (void)sceneDidBecomeActive:(id)arg1;	// IMP=0x00000000000036b6
- (void)sceneDidDisconnect:(id)arg1;	// IMP=0x00000000000036a4
- (void)scene:(id)arg1 openURLContexts:(id)arg2;	// IMP=0x0000000000003487
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;	// IMP=0x000000000000324e
- (void)connectWebClipIdentifier:(id)arg1 toScene:(id)arg2 forWebPush:(_Bool)arg3;	// IMP=0x0000000000002fb6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIWindow",?,&,N


@end
