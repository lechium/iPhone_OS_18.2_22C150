//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBSScene, NSHashTable, NSString, NSXPCConnection, UIInputWindowController, UIView, _UIAssertionController, _UIKeyboardChangedInformation, _UIKeyboardUIInformation, _UIRemoteKeyboardsEventObserver;
@protocol _UIKBArbiterClientKeyboardChangeDelegate, _UIKeyboardUIStateDelegate;

__attribute__((visibility("hidden")))
@interface _UIKeyboardArbiterClient : NSObject
{
    int _ignoreLayoutSubviews;	// 8 = 0x8
    int _externalSuppression;	// 12 = 0xc
    NSHashTable *_windowControllers;	// 16 = 0x10
    int _recursionCheck;	// 24 = 0x18
    _UIAssertionController *_assertionController;	// 32 = 0x20
    _Bool _shouldFence;	// 40 = 0x28
    _Bool _snapshotting;	// 41 = 0x29
    _Bool _handlingRemoteEvent;	// 42 = 0x2a
    _Bool _disableBecomeFirstResponder;	// 43 = 0x2b
    _Bool _expectingInitialState;	// 44 = 0x2c
    _Bool _avoidDisableKeyboard;	// 45 = 0x2d
    _Bool _currentInputDestination;	// 46 = 0x2e
    _Bool _keyboardUIHost;	// 47 = 0x2f
    _Bool _expectedSuppression;	// 48 = 0x30
    _Bool _enqueuedWillEnterForegroundActions;	// 49 = 0x31
    _Bool _windowEnabled;	// 50 = 0x32
    _Bool _updatingHeight;	// 51 = 0x33
    _Bool _didSignalKeyboardChangedForCurrentKeyboard;	// 52 = 0x34
    _Bool _deactivatedByControlCenter;	// 53 = 0x35
    _Bool _deactivatedBySystemGesture;	// 54 = 0x36
    _Bool _handlingKeyboardTransition;	// 55 = 0x37
    _UIKeyboardChangedInformation *_currentClientState;	// 56 = 0x38
    _UIKeyboardUIInformation *_currentUIState;	// 64 = 0x40
    id <_UIKeyboardUIStateDelegate> _kbUIStateDelegate;	// 72 = 0x48
    UIInputWindowController *_inputWindowRootViewController;	// 80 = 0x50
    long long _lastEventSource;	// 88 = 0x58
    id <_UIKBArbiterClientKeyboardChangeDelegate> _changeInfoDelegate;	// 96 = 0x60
    NSXPCConnection *_connection;	// 104 = 0x68
    UIView *_keyboardSnapshot;	// 112 = 0x70
    _UIKeyboardChangedInformation *_backupState;	// 120 = 0x78
    long long _keyboardSource;	// 128 = 0x80
    unsigned long long _hostedCount;	// 136 = 0x88
    _UIRemoteKeyboardsEventObserver *_eventObserver;	// 144 = 0x90
    FBSScene *_requiredScene;	// 152 = 0x98
    double _heightForRemoteIAVPlaceholderIfNecessary;	// 160 = 0xa0
}

+ (id)mainBundleIdentifier;	// IMP=0x00100000009cfa63
+ (id)keyboardClientFBSSceneIdentityStringOrIdentifierFromScene:(id)arg1;	// IMP=0x00100000009cf501
+ (id)serviceName;	// IMP=0x00100000009cb566
+ (id)automaticSharedArbiterClient;	// IMP=0x00100000009cb1f3
+ (_Bool)enabled;	// IMP=0x00100000009cb1be
- (void).cxx_destruct;	// IMP=0x00000000009cfda1
@property(nonatomic) double heightForRemoteIAVPlaceholderIfNecessary; // @synthesize heightForRemoteIAVPlaceholderIfNecessary=_heightForRemoteIAVPlaceholderIfNecessary;
@property(nonatomic) _Bool handlingKeyboardTransition; // @synthesize handlingKeyboardTransition=_handlingKeyboardTransition;
@property(retain, nonatomic) FBSScene *requiredScene; // @synthesize requiredScene=_requiredScene;
@property(nonatomic) _Bool deactivatedBySystemGesture; // @synthesize deactivatedBySystemGesture=_deactivatedBySystemGesture;
@property(nonatomic) _Bool deactivatedByControlCenter; // @synthesize deactivatedByControlCenter=_deactivatedByControlCenter;
@property(retain, nonatomic) _UIRemoteKeyboardsEventObserver *eventObserver; // @synthesize eventObserver=_eventObserver;
@property(nonatomic) unsigned long long hostedCount; // @synthesize hostedCount=_hostedCount;
@property(nonatomic) long long keyboardSource; // @synthesize keyboardSource=_keyboardSource;
@property(retain, nonatomic) _UIKeyboardChangedInformation *backupState; // @synthesize backupState=_backupState;
@property(nonatomic) _Bool didSignalKeyboardChangedForCurrentKeyboard; // @synthesize didSignalKeyboardChangedForCurrentKeyboard=_didSignalKeyboardChangedForCurrentKeyboard;
@property _Bool updatingHeight; // @synthesize updatingHeight=_updatingHeight;
@property(nonatomic) _Bool windowEnabled; // @synthesize windowEnabled=_windowEnabled;
@property(retain, nonatomic) UIView *keyboardSnapshot; // @synthesize keyboardSnapshot=_keyboardSnapshot;
@property(nonatomic) _Bool enqueuedWillEnterForegroundActions; // @synthesize enqueuedWillEnterForegroundActions=_enqueuedWillEnterForegroundActions;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) _Bool expectedSuppression; // @synthesize expectedSuppression=_expectedSuppression;
@property(nonatomic) _Bool keyboardUIHost; // @synthesize keyboardUIHost=_keyboardUIHost;
@property(nonatomic) _Bool currentInputDestination; // @synthesize currentInputDestination=_currentInputDestination;
@property _Bool avoidDisableKeyboard; // @synthesize avoidDisableKeyboard=_avoidDisableKeyboard;
@property _Bool expectingInitialState; // @synthesize expectingInitialState=_expectingInitialState;
@property(nonatomic) _Bool disableBecomeFirstResponder; // @synthesize disableBecomeFirstResponder=_disableBecomeFirstResponder;
@property(nonatomic) __weak id <_UIKBArbiterClientKeyboardChangeDelegate> changeInfoDelegate; // @synthesize changeInfoDelegate=_changeInfoDelegate;
@property(nonatomic) _Bool handlingRemoteEvent; // @synthesize handlingRemoteEvent=_handlingRemoteEvent;
@property(nonatomic) _Bool snapshotting; // @synthesize snapshotting=_snapshotting;
@property(nonatomic) long long lastEventSource; // @synthesize lastEventSource=_lastEventSource;
@property(retain, nonatomic) UIInputWindowController *inputWindowRootViewController; // @synthesize inputWindowRootViewController=_inputWindowRootViewController;
@property(nonatomic) __weak id <_UIKeyboardUIStateDelegate> kbUIStateDelegate; // @synthesize kbUIStateDelegate=_kbUIStateDelegate;
@property(nonatomic) _Bool shouldFence; // @synthesize shouldFence=_shouldFence;
@property(retain, nonatomic) _UIKeyboardUIInformation *currentUIState; // @synthesize currentUIState=_currentUIState;
@property(retain, nonatomic) _UIKeyboardChangedInformation *currentClientState; // @synthesize currentClientState=_currentClientState;
- (id)prepareForHostedWindowWithScene:(id)arg1;	// IMP=0x00000000009cfb14
- (void)finishWithHostedWindow;	// IMP=0x00000000009cfb0e
- (void)removeWindowHostingPID:(int)arg1 callerID:(id)arg2;	// IMP=0x00000000009cfb08
- (void)addWindowHostingPID:(int)arg1 callerID:(id)arg2;	// IMP=0x00000000009cfb02
- (void)setSuppressingKeyboard:(_Bool)arg1 forScene:(id)arg2;	// IMP=0x00000000009cfafc
- (void)peekApplicationEvent:(id)arg1;	// IMP=0x00000000009cfaf6
- (void)willResume:(id)arg1;	// IMP=0x00000000009cf945
- (void)applicationResume:(id)arg1;	// IMP=0x00000000009cf92b
- (void)didSuspend:(id)arg1;	// IMP=0x00000000009cf65f
- (_Bool)allowedToShowKeyboard;	// IMP=0x00000000009cf5a6
- (_Bool)_didHandleKeyboardClientChange:(id)arg1 shouldConsiderSnapshottingKeyboard:(_Bool)arg2 isLocalEvent:(_Bool)arg3;	// IMP=0x00000000009cf2e4
- (_Bool)keyboardClientDidChange:(id)arg1;	// IMP=0x00000000009cf1e2
- (void)_preserveInputViewsForClientChange:(_Bool)arg1 clientInfo:(id)arg2 snapshotIfNecessary:(_Bool)arg3;	// IMP=0x00000000009cf1dc
- (void)queue_keyboardUIDidChange:(id)arg1 onComplete:(CDUnknownBlockType)arg2;	// IMP=0x00000000009cf0fb
- (void)resetSnapshotWithWindowCheck:(_Bool)arg1;	// IMP=0x00000000009cf0f5
- (void)snapsShotKeyboard;	// IMP=0x00000000009cf0ef
- (_Bool)shouldSnapshot;	// IMP=0x00000000009cf03a
- (void)reloadForSnapshotting;	// IMP=0x00000000009cef4e
- (void)sceneUpdated;	// IMP=0x00000000009cef17
- (void)keyboardChangedCompleted;	// IMP=0x00000000009ceeda
- (unsigned long long)localSceneCount;	// IMP=0x00000000009ceecf
- (void)signalToProxyKeyboardChanged:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000009ceebd
- (void)ignoreLayoutNotifications:(CDUnknownBlockType)arg1;	// IMP=0x00000000009ceea1
- (void)controllerDidLayoutSubviews:(id)arg1;	// IMP=0x00000000009cebf4
- (void)_layoutKeyboardViews:(id)arg1;	// IMP=0x00000000009cebee
- (_Bool)shouldAllowInputViewsRestoredForId:(id)arg1;	// IMP=0x00000000009cea2b
- (void)restorePreservedInputViewsIfNecessary;	// IMP=0x00000000009ce9ea
- (void)performOnLocalDistributedControllers:(CDUnknownBlockType)arg1;	// IMP=0x00000000009ce9d8
- (void)performOnDistributedControllers:(CDUnknownBlockType)arg1;	// IMP=0x00000000009ce98c
- (void)_performOnDistributedControllersExceptSelf:(CDUnknownBlockType)arg1;	// IMP=0x00000000009ce8b4
- (void)performOnExistingControllers:(CDUnknownBlockType)arg1;	// IMP=0x00000000009ce711
- (void)performOnControllers:(CDUnknownBlockType)arg1;	// IMP=0x00000000009ce56e
- (void)unregisterController:(id)arg1;	// IMP=0x00000000009ce519
- (void)registerController:(id)arg1;	// IMP=0x00000000009ce480
- (void)cleanSuppression;	// IMP=0x00000000009ce3d9
- (void)updateEventSource:(long long)arg1 options:(unsigned long long)arg2 responder:(id)arg3;	// IMP=0x00000000009ce3c7
- (void)updateEventSource:(long long)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000009ce3b5
- (void)_updateEventSource:(long long)arg1 options:(unsigned long long)arg2 responder:(id)arg3;	// IMP=0x00000000009ce26d
- (void)_updateEventSource:(long long)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000009ce258
- (void)_postInputSourceDidChangeNotificationForResponder:(id)arg1;	// IMP=0x00000000009ce07c
- (void)queue_sceneBecameFocused:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000009ce06a
- (void)queue_getDebugInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000009ce054
- (void)verifyPlacement;	// IMP=0x00000000009ce01f
- (void)setDisableBecomeFirstResponder:(_Bool)arg1 forSuppressionAssertion:(_Bool)arg2 updatePlacement:(_Bool)arg3 wantsAssistant:(_Bool)arg4;	// IMP=0x00000000009cdc18
- (void)setDisableBecomeFirstResponder:(_Bool)arg1 forSuppressionAssertion:(_Bool)arg2 updatePlacement:(_Bool)arg3;	// IMP=0x00000000009cdc03
- (void)setDisableBecomeFirstResponder:(_Bool)arg1 forSuppressionAssertion:(_Bool)arg2;	// IMP=0x00000000009cdbeb
- (void)queue_keyboardTransition:(id)arg1 event:(unsigned long long)arg2 withInfo:(id)arg3 onComplete:(CDUnknownBlockType)arg4;	// IMP=0x00000000009cd364
- (void)queue_keyboardIAVChanged:(double)arg1 onComplete:(CDUnknownBlockType)arg2;	// IMP=0x00000000009cd352
- (void)queue_keyboardChangedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000009cd25c
- (void)_handleKeyboardChanged:(id)arg1 isLocal:(_Bool)arg2 onComplete:(CDUnknownBlockType)arg3;	// IMP=0x00000000009cd145
- (void)queue_keyboardChanged:(id)arg1 onComplete:(CDUnknownBlockType)arg2;	// IMP=0x00000000009cd034
- (void)queue_keyboardSuppressed:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000009ccefc
- (void)queue_setLastEventSource:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000009ccdfa
- (void)didFailArbiterConnection;	// IMP=0x00000000009ccd32
- (void)queue_failedConnection:(id)arg1;	// IMP=0x00000000009ccafe
- (void)queue_endInputSessionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000009cca2f
- (id)existingInputWindowRootViewController;	// IMP=0x00000000009cc9d8
- (void)resignFirstResponderIfNeeded;	// IMP=0x00000000009cc945
- (void)assertionActivationStateChangedToState:(_Bool)arg1 forType:(unsigned long long)arg2;	// IMP=0x00000000009cc91a
- (_Bool)assertionActivationStateForType:(unsigned long long)arg1;	// IMP=0x00000000009cc8fe
- (id)vendEmojiKeyboardPrewarmingAssertionForReason:(id)arg1;	// IMP=0x00000000009cc8d8
- (id)vendKeyboardSuppressionAssertionForReason:(id)arg1 type:(unsigned long long)arg2;	// IMP=0x00000000009cc8b4
- (id)vendKeyboardSuppressionAssertionForReason:(id)arg1;	// IMP=0x00000000009cc8a0
- (_Bool)hasActiveKeyboardSuppressionAssertionsForReason:(id)arg1;	// IMP=0x00000000009cc88a
- (_Bool)isSpotlight:(id)arg1;	// IMP=0x00000000009cc7f8
- (_Bool)remoteKeyboardUndocked:(_Bool)arg1;	// IMP=0x00000000009cc746
@property(readonly) _Bool remoteKeyboardUndocked;
@property(readonly) _Bool keyboardActive;
- (_Bool)hasWindowHostingPID:(int)arg1;	// IMP=0x00000000009cc6f1
- (_Bool)hasWindowHostingCallerID:(id)arg1;	// IMP=0x00000000009cc6e9
- (_Bool)hasAnyHostedViews;	// IMP=0x00000000009cc6a1
- (_Bool)isHostedInAnotherProcess;	// IMP=0x00000000009cc699
- (_Bool)isOnScreenRotating;	// IMP=0x00000000009cc5be
@property(readonly) _Bool keyboardVisible;
- (void)checkState;	// IMP=0x00000000009cc507
- (void)checkConnection;	// IMP=0x00000000009cc4a4
- (void)stopConnection;	// IMP=0x00000000009cc3e9
- (void)syncKeyboardUIChangeInfo:(id)arg1;	// IMP=0x00000000009cc3e3
- (_Bool)_isArbiterClientReadyForWritingToolsToHandleKeyboardTracking;	// IMP=0x00000000009cc3db
- (void)startConnectionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000009cb981
- (void)startConnection;	// IMP=0x00000000009cb96d
- (id)arbiterProxy;	// IMP=0x00000000009cb871
- (id)arbiterConnection;	// IMP=0x00000000009cb6b5
- (void)configureArbiterCommunication:(id)arg1;	// IMP=0x00000000009cb600
- (id)currentHostedPIDs;	// IMP=0x00000000009cb559
- (void)dealloc;	// IMP=0x00000000009cb447
- (id)initWithShouldConnect:(_Bool)arg1;	// IMP=0x00000000009cb2c1
- (id)init;	// IMP=0x00000000009cb2aa
- (void)setPlacement:(id)arg1 quietly:(_Bool)arg2 animated:(_Bool)arg3 generateSplitNotification:(_Bool)arg4;	// IMP=0x00000000009cffe6
- (void)completeTransition:(id)arg1 withInfo:(id)arg2;	// IMP=0x00000000009cff56
- (void)updateTransition:(id)arg1 withInfo:(id)arg2;	// IMP=0x00000000009cfec6
- (void)startTransition:(id)arg1 withInfo:(id)arg2;	// IMP=0x00000000009cfe39

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
