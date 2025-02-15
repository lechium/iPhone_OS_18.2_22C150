//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class GKGameCenterViewController, NSString;

@interface GKRemoteAlertViewController : SBUIRemoteAlertServiceViewController
{
    _Bool _needToShowGreenBuddy;	// 8 = 0x8
    GKGameCenterViewController *_gameCenterViewController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000002b6b
@property(nonatomic) _Bool needToShowGreenBuddy; // @synthesize needToShowGreenBuddy=_needToShowGreenBuddy;
@property(retain, nonatomic) GKGameCenterViewController *gameCenterViewController; // @synthesize gameCenterViewController=_gameCenterViewController;
- (void)dismiss;	// IMP=0x00100000000029a5
- (void)invokeDashboardWithHostPID:(int)arg1 game:(id)arg2 byPassPreAuthentication:(_Bool)arg3 deepLink:(id)arg4 launchContext:(id)arg5;	// IMP=0x00100000000026ff
- (void)dismissExistingAndInvokeDashboardWithHostPID:(int)arg1 game:(id)arg2 byPassPreAuthentication:(_Bool)arg3 deepLink:(id)arg4 launchContext:(id)arg5;	// IMP=0x0010000000002546
- (void)showGreenBuddyWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000213e
- (id)deserializeGameFromData:(id)arg1;	// IMP=0x0010000000002033
- (_Bool)contextCanBypassAuthentication:(id)arg1;	// IMP=0x0010000000001fe2
- (void)gameCenterViewControllerDidFinish:(id)arg1;	// IMP=0x0010000000001fd0
- (_Bool)_shouldRemoveViewFromHierarchyOnDisappear;	// IMP=0x0010000000001fc8
- (_Bool)prefersStatusBarHidden;	// IMP=0x0010000000001fc0
- (void)handleButtonActions:(id)arg1;	// IMP=0x0010000000001fae
- (void)prepareForActivationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000194c
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000014c9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

