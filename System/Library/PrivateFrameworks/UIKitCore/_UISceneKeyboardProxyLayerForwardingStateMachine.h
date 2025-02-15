//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString, UIWindow;
@protocol _UISceneKeyboardProxyLayerForwardingHostingEnvironment, _UISceneKeyboardProxyLayerForwardingPresentationEnvironment;

__attribute__((visibility("hidden")))
@interface _UISceneKeyboardProxyLayerForwardingStateMachine : NSObject
{
    id <_UISceneKeyboardProxyLayerForwardingPresentationEnvironment> _presentationEnvironment;	// 8 = 0x8
    id <_UISceneKeyboardProxyLayerForwardingHostingEnvironment> _hostingEnvironment;	// 16 = 0x10
    unsigned long long _state;	// 24 = 0x18
    id _windowDidMoveToSceneNotificationToken;	// 32 = 0x20
    UIWindow *_hostingWindow;	// 40 = 0x28
    NSSet *_keyboardLayersTracked;	// 48 = 0x30
    NSSet *_keyboardLayersAddedToHostingEnvironment;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000995a19
- (id)_newProxyLayers;	// IMP=0x000000000099554b
- (void)_removeLayers:(id)arg1 fromEnvironment:(id)arg2;	// IMP=0x0000000000995403
- (void)_addLayers:(id)arg1 toEnvironment:(id)arg2;	// IMP=0x00000000009952bb
- (void)_setState:(unsigned long long)arg1;	// IMP=0x0000000000994ee2
- (void)_noteHostedInWindow:(id)arg1;	// IMP=0x000000000099482b
- (id)hostingEnvironmentForWindow:(id)arg1;	// IMP=0x0000000000994527
- (void)window:(id)arg1 changedFromLevel:(double)arg2 toLevel:(double)arg3;	// IMP=0x0000000000994313
- (void)hostingEnvironmentDidInvalidate:(id)arg1;	// IMP=0x00000000009942ff
- (void)presentationEnvironmentDidInvalidate:(id)arg1;	// IMP=0x0000000000994243
- (void)presentationEnvironmentDidUpdateKeyboardLayers:(id)arg1;	// IMP=0x00000000009941f4
- (void)presentationEnvironment:(id)arg1 didMoveToWindow:(id)arg2;	// IMP=0x00000000009941df
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000009940de
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000099408e
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000993f80
- (id)succinctDescription;	// IMP=0x0000000000993f30
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
- (unsigned long long)_state;	// IMP=0x0000000000993f00
- (void)noteKeyboardLayersBeingTracked:(id)arg1;	// IMP=0x0000000000993bfa
- (void)dealloc;	// IMP=0x0000000000993ac5
- (id)initWithPresentationEnvironment:(id)arg1;	// IMP=0x0000000000993918

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

