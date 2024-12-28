//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DRDispatchTimer, NSMutableDictionary, NSMutableSet, NSString, UIWindow;
@protocol DRPasteAnnouncing;

@interface DRAppDelegate : NSObject
{
    id <DRPasteAnnouncing> _pasteAnnouncer;	// 8 = 0x8
    DRDispatchTimer *_launchWatchdogTimer;	// 16 = 0x10
    NSMutableDictionary *_activatedSceneGroupBySystemShellHostingSpaceIdentifier;	// 24 = 0x18
    NSMutableSet *_systemShellHostingSpaceThatFinishedSceneCreation;	// 32 = 0x20
    NSMutableDictionary *_windowScenesByDisplayIdentifier;	// 40 = 0x28
    NSMutableDictionary *_sceneDelegateByDisplayIdentifier;	// 48 = 0x30
    NSMutableDictionary *_virtualHIDServiceByDisplayIdentifier;	// 56 = 0x38
    NSMutableDictionary *_layoutMonitorByDisplayIdentifier;	// 64 = 0x40
    NSMutableDictionary *_hardwareDisplayIdentifiersBySystemShellHostingSpaceIdentifier;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000004700
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;	// IMP=0x00100000000046fa
- (void)scene:(id)arg1 didUpdateWithDiff:(id)arg2 transitionContext:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000004627
- (void)_sceneDidDisconnect:(id)arg1;	// IMP=0x00100000000042f8
- (void)_sceneWillConnect:(id)arg1;	// IMP=0x0010000000003e2e
- (_Bool)isHostedOnContinuityDisplayForDragSession:(id)arg1;	// IMP=0x0010000000003df3
- (id)_resolvedIdentifierForSystemShellHostingSpaceIdentifier:(id)arg1;	// IMP=0x0010000000003dd3
- (id)_contentViewControllerForInteractionWindow:(id)arg1;	// IMP=0x0010000000003d0f
- (id)displayIdentifierForSceneIdentifier:(id)arg1;	// IMP=0x0010000000003b09
- (id)allDisplayIdentifiers;	// IMP=0x0010000000003af3
- (id)virtualHIDServiceForWindow:(id)arg1;	// IMP=0x0010000000003a6b
- (id)targetViewControllerForSession:(id)arg1;	// IMP=0x00100000000039bb
- (id)sourceViewControllerForSession:(id)arg1;	// IMP=0x0010000000003959
- (id)sourceDisplayIdentifierForDragSession:(id)arg1;	// IMP=0x00100000000038e1
- (id)sourceScreenForDragSession:(id)arg1;	// IMP=0x0010000000003864
- (id)contentWindowForHardwareDisplayIdentifier:(id)arg1;	// IMP=0x00100000000037b8
- (id)hardwareDisplayIdentifierMatchingSystemShellHostingSpaceIdentifier:(id)arg1;	// IMP=0x00100000000037a2
- (id)touchTrackingWindowForHardwareDisplayIdentifier:(id)arg1;	// IMP=0x00100000000036f6
- (id)activatedSceneGroupForSystemShellHostingSpaceIdentifier:(id)arg1;	// IMP=0x001000000000361c
- (void)_setEventFetchThreadPriorityWhenPossible;	// IMP=0x0010000000003546
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0010000000003477
- (id)init;	// IMP=0x00100000000031cd

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
