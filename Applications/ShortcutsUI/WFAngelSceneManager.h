//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SBSUIRemoteAlertScene, UIWindow;

@interface WFAngelSceneManager : NSObject
{
    int _displayStatusNotifyToken;	// 8 = 0x8
    CDUnknownBlockType _windowActivationCompletionHandler;	// 16 = 0x10
    SBSUIRemoteAlertScene *_activeScene;	// 24 = 0x18
    UIWindow *_activeWindow;	// 32 = 0x20
    CDUnknownBlockType _cancellationHandler;	// 40 = 0x28
}

+ (id)sharedManager;	// IMP=0x002000000000381e
- (void).cxx_destruct;	// IMP=0x002000000000355f
@property(copy, nonatomic) CDUnknownBlockType cancellationHandler; // @synthesize cancellationHandler=_cancellationHandler;
@property(nonatomic) int displayStatusNotifyToken; // @synthesize displayStatusNotifyToken=_displayStatusNotifyToken;
@property(retain, nonatomic) UIWindow *activeWindow; // @synthesize activeWindow=_activeWindow;
@property(retain, nonatomic) SBSUIRemoteAlertScene *activeScene; // @synthesize activeScene=_activeScene;
@property(copy, nonatomic) CDUnknownBlockType windowActivationCompletionHandler; // @synthesize windowActivationCompletionHandler=_windowActivationCompletionHandler;
- (void)sceneDidDisconnect:(id)arg1;	// IMP=0x00100000000033dd
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;	// IMP=0x0010000000003129
- (void)remoteAlertScene:(id)arg1 handleButtonActions:(id)arg2;	// IMP=0x0010000000002f9c
- (void)requestSceneDeactivation;	// IMP=0x0010000000002e8e
- (void)getWindowWithCancellationHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000002c0a
- (void)dealloc;	// IMP=0x0010000000002bc5
- (id)init;	// IMP=0x0010000000002b70

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

