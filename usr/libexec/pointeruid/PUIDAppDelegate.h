//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString, PUIDPointerController, PUIDPointerEventStreamController, UIWindow;
@protocol BSInvalidatable;

@interface PUIDAppDelegate : NSObject
{
    NSMutableSet *_displaysThatFinishedSceneCreation;	// 8 = 0x8
    id <BSInvalidatable> _servicesBootstrapExtension;	// 16 = 0x10
    PUIDPointerController *_pointerController;	// 24 = 0x18
    PUIDPointerEventStreamController *_pointerEventStreamController;	// 32 = 0x20
    NSMutableDictionary *_sceneBagForDisplay;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000001d7cd
- (void)_setEventFetchThreadPriorityWhenPossible;	// IMP=0x001000000001d717
- (void)_pointerUIServiceDidFinishSceneCreationWithSceneBag:(id)arg1;	// IMP=0x001000000001d4cd
- (void)sceneDidDisconnect:(id)arg1;	// IMP=0x001000000001d315
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;	// IMP=0x001000000001d30f
- (void)scene:(id)arg1 didUpdateWithDiff:(id)arg2 transitionContext:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000001d23c
- (void)handleEvent:(id)arg1;	// IMP=0x001000000001d226
- (void)applicationDidCreateFBSScene:(id)arg1;	// IMP=0x001000000001cc85
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x001000000001cc7d
- (id)init;	// IMP=0x001000000001cb97

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

