//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIResponder.h>

@class FACircleStateController, FamilyRootViewController, NSString, UIWindow;

@interface UISceneDelegate : UIResponder
{
    FACircleStateController *_currentFamilyCircleStateController;	// 8 = 0x8
    FamilyRootViewController *rootViewController;	// 16 = 0x10
    UIWindow *_window;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000003309
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (id)_currentSceneSession;	// IMP=0x0010000000003036
- (void)_destroyCurrentSceneSession;	// IMP=0x0010000000002f12
- (_Bool)_handleFamilyURLComponents:(id)arg1 eventType:(id)arg2;	// IMP=0x0010000000002b1c
- (_Bool)_handleFamilyURL:(id)arg1;	// IMP=0x0010000000002806
- (void)sceneDidEnterBackground:(id)arg1;	// IMP=0x00100000000027aa
- (void)sceneWillEnterForeground:(id)arg1;	// IMP=0x001000000000274e
- (void)sceneWillResignActive:(id)arg1;	// IMP=0x00100000000026f2
- (void)sceneDidBecomeActive:(id)arg1;	// IMP=0x0010000000002696
- (void)sceneDidDisconnect:(id)arg1;	// IMP=0x001000000000263a
- (void)scene:(id)arg1 openURLContexts:(id)arg2;	// IMP=0x0010000000002523
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;	// IMP=0x0010000000002266

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

