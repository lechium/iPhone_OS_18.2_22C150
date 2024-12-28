//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSProcessHandle, MusicUIServiceCarDisplayBrowsableContentViewController, NSString, RBSAssertion, UIWindow;
@protocol MusicUIServiceAppEnvironmentDelegate;

@interface MusicUIServiceAppEnvironment : NSObject
{
    _Bool _appMustBeRunning;	// 8 = 0x8
    _Bool _launchRequested;	// 9 = 0x9
    id <MusicUIServiceAppEnvironmentDelegate> _delegate;	// 16 = 0x10
    NSString *_applicationIdentifier;	// 24 = 0x18
    UIWindow *_window;	// 32 = 0x20
    RBSAssertion *_processAssertion;	// 40 = 0x28
    BSProcessHandle *_appHandle;	// 48 = 0x30
    MusicUIServiceCarDisplayBrowsableContentViewController *_contentViewController;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000000442b
@property(retain, nonatomic) MusicUIServiceCarDisplayBrowsableContentViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(retain, nonatomic) BSProcessHandle *appHandle; // @synthesize appHandle=_appHandle;
@property(retain, nonatomic) RBSAssertion *processAssertion; // @synthesize processAssertion=_processAssertion;
@property(nonatomic) _Bool launchRequested; // @synthesize launchRequested=_launchRequested;
@property(nonatomic) _Bool appMustBeRunning; // @synthesize appMustBeRunning=_appMustBeRunning;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(readonly, copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(nonatomic) __weak id <MusicUIServiceAppEnvironmentDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_launchTargetAppIfNecessary;	// IMP=0x0010000000003c10
- (void)_launchTargetApp;	// IMP=0x0010000000003b98
- (void)_switchToNowPlaying;	// IMP=0x0010000000003aeb
- (void)scene:(id)arg1 openURLContexts:(id)arg2;	// IMP=0x00100000000039fe
- (void)sceneDidEnterBackground:(id)arg1;	// IMP=0x0010000000003995
- (void)sceneWillEnterForeground:(id)arg1;	// IMP=0x0010000000003962
- (void)sceneWillResignActive:(id)arg1;	// IMP=0x0010000000003923
- (void)sceneDidBecomeActive:(id)arg1;	// IMP=0x001000000000386f
- (void)sceneDidDisconnect:(id)arg1;	// IMP=0x00100000000037d5
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;	// IMP=0x00100000000036da
- (void)dealloc;	// IMP=0x001000000000366f
- (void)setScene:(id)arg1;	// IMP=0x00100000000034d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
