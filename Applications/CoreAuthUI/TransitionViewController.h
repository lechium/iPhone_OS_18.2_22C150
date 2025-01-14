//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class LACachedExternalizedContext, MISSING_TYPE, NSDictionary, NSString, _TtC10CoreAuthUI19TransitionViewModel;
@protocol LABackoffCounter, LARemoteUIHost, LAUIMechanism;

@interface TransitionViewController : SBUIRemoteAlertServiceViewController
{
    TransitionViewController *_childController;	// 8 = 0x8
    long long _resetUiEvent;	// 16 = 0x10
    _Bool _allowsLandscape;	// 24 = 0x18
    _Bool _hideStatusBar;	// 25 = 0x19
    _Bool _hasRequestedReset;	// 26 = 0x1a
    long long _presentationMode;	// 32 = 0x20
    _TtC10CoreAuthUI19TransitionViewModel *_viewModel;	// 40 = 0x28
    _Bool _callerNameOverride;	// 48 = 0x30
    _Bool _awaitingDissappear;	// 49 = 0x31
    _Bool _disappeared;	// 50 = 0x32
    _Bool _appeared;	// 51 = 0x33
    unsigned int _instanceId;	// 52 = 0x34
    id <LAUIMechanism> _mechanism;	// 56 = 0x38
    id <LARemoteUIHost> _remoteUIHost;	// 64 = 0x40
    long long _policy;	// 72 = 0x48
    NSDictionary *_options;	// 80 = 0x50
    id <LABackoffCounter> _backoffCounter;	// 88 = 0x58
    NSString *_callerName;	// 96 = 0x60
    NSString *_callerBundleId;	// 104 = 0x68
    LACachedExternalizedContext *_cachedExternalizedContext;	// 112 = 0x70
    NSDictionary *_internalInfo;	// 120 = 0x78
    NSString *_authenticationTitle;	// 128 = 0x80
    MISSING_TYPE *_authenticationSubtitle;	// 136 = 0x88
    CDUnknownBlockType _disappearedNotification;	// 144 = 0x90
    CDUnknownBlockType _appearedNotification;	// 152 = 0x98
}

+ (id)rootController;	// IMP=0x0020000000012b03
+ (unsigned int)newTaskId;	// IMP=0x0010000000010ec8
+ (unsigned int)newInstanceId;	// IMP=0x0010000000010eb4
+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x001000000000f6f0
- (void).cxx_destruct;	// IMP=0x00200000000152dc
@property(readonly, nonatomic) unsigned int instanceId; // @synthesize instanceId=_instanceId;
@property(copy, nonatomic) CDUnknownBlockType appearedNotification; // @synthesize appearedNotification=_appearedNotification;
// Preceding property had unknown attributes: ?
// Original attribute string: T@?,?,C,N,V_appearedNotification

@property(copy, nonatomic) CDUnknownBlockType disappearedNotification; // @synthesize disappearedNotification=_disappearedNotification;
// Preceding property had unknown attributes: ?
// Original attribute string: T@?,?,C,N,V_disappearedNotification

@property(nonatomic) _Bool appeared; // @synthesize appeared=_appeared;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,V_appeared

@property(nonatomic) _Bool disappeared; // @synthesize disappeared=_disappeared;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,V_disappeared

@property(nonatomic) _Bool awaitingDissappear; // @synthesize awaitingDissappear=_awaitingDissappear;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,V_awaitingDissappear

@property(retain, nonatomic) NSString *authenticationSubtitle; // @synthesize authenticationSubtitle=_authenticationSubtitle;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,&,N,V_authenticationSubtitle

@property(retain, nonatomic) NSString *authenticationTitle; // @synthesize authenticationTitle=_authenticationTitle;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,&,N,V_authenticationTitle

@property(readonly, nonatomic) NSDictionary *internalInfo; // @synthesize internalInfo=_internalInfo;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSDictionary",?,R,N,V_internalInfo

@property(readonly, nonatomic) LACachedExternalizedContext *cachedExternalizedContext; // @synthesize cachedExternalizedContext=_cachedExternalizedContext;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"LACachedExternalizedContext",?,R,N,V_cachedExternalizedContext

@property(readonly, nonatomic) NSString *callerBundleId; // @synthesize callerBundleId=_callerBundleId;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,N,V_callerBundleId

@property(readonly, nonatomic) _Bool callerNameOverride; // @synthesize callerNameOverride=_callerNameOverride;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N,V_callerNameOverride

@property(readonly, nonatomic) NSString *callerName; // @synthesize callerName=_callerName;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,N,V_callerName

@property(retain, nonatomic) id <LABackoffCounter> backoffCounter; // @synthesize backoffCounter=_backoffCounter;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<LABackoffCounter>",?,&,N,V_backoffCounter

@property(readonly, nonatomic) NSDictionary *options; // @synthesize options=_options;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSDictionary",?,R,N,V_options

@property(readonly, nonatomic) long long policy; // @synthesize policy=_policy;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,R,N,V_policy

@property(readonly, nonatomic) id <LARemoteUIHost> remoteUIHost; // @synthesize remoteUIHost=_remoteUIHost;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<LARemoteUIHost>",?,R,N,V_remoteUIHost

@property(readonly, nonatomic) id <LAUIMechanism> mechanism; // @synthesize mechanism=_mechanism;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<LAUIMechanism>",?,R,N,V_mechanism

- (void)viewModelDidReceiveAuthenticationDataWithInternalInfo:(id)arg1 mechanism:(id)arg2;	// IMP=0x0010000000015091
- (void)viewModelDidReceiveMechanismEvent:(long long)arg1 value:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001507f
- (void)viewModelDidReceiveMechanismEvent:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000001506d
- (void)viewModelDidReceiveDismissWasInvalidated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001505b
- (void)showWithController:(long long)arg1 internalInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000015049
- (_Bool)_canShowWhileLocked;	// IMP=0x0010000000015041
- (_Bool)_shouldCancelForApplicationChange;	// IMP=0x0010000000014fef
- (_Bool)_shouldRegisterForApplicationChange;	// IMP=0x0010000000014fa4
- (void)_cancelForApplicationChangeIfNeeded;	// IMP=0x0010000000014ef3
- (id)_sceneSessions;	// IMP=0x0010000000014c21
- (_Bool)_internalBooleanDefaultNamed:(id)arg1;	// IMP=0x0010000000014b38
- (_Bool)_shouldSimulateStaleRootController;	// IMP=0x0010000000014b1f
- (_Bool)_shouldSkipStaleRootControllerRecovery;	// IMP=0x0010000000014b06
- (void)_dismissRootWithReason:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000149de
- (void)_dismissChild:(id)arg1 andRoot:(_Bool)arg2 reason:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000001462b
- (void)noteActivatedWithPresentationMode:(long long)arg1;	// IMP=0x00100000000144aa
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001433d
- (long long)preferredStatusBarStyle;	// IMP=0x00100000000142ec
- (int)_preferredStatusBarVisibility;	// IMP=0x00100000000142c2
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0010000000014246
- (_Bool)processHomeButtonPressed;	// IMP=0x001000000001423e
- (void)handleButtonActions:(id)arg1;	// IMP=0x001000000001415e
- (void)dismissChildWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000013ff7
- (void)_mechanismEvent:(long long)arg1 value:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000013e7a
- (void)mechanismEvent:(long long)arg1 value:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000013d4d
- (void)mechanismEvent:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000013d36
- (void)internalInfoWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000013d19
- (void)_setActivityWatchdog;	// IMP=0x0010000000013bd7
- (void)authMethodWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000013b6a
- (void)externalizedContextWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000013b4d
- (void)uiFailureWithError:(id)arg1;	// IMP=0x0010000000013a68
- (void)uiSuccessWithResult:(id)arg1;	// IMP=0x001000000001398e
- (void)uiFallback;	// IMP=0x0010000000013959
- (void)uiCancelWithError:(id)arg1;	// IMP=0x001000000001388d
- (void)uiCancel;	// IMP=0x0010000000013858
- (void)uiDismissed;	// IMP=0x0010000000013823
- (void)uiContinue;	// IMP=0x001000000001380a
- (void)uiOpenURL:(id)arg1;	// IMP=0x0010000000013703
- (void)uiEvent:(long long)arg1 options:(id)arg2;	// IMP=0x00100000000135f3
- (_Bool)isUiReady;	// IMP=0x00100000000135cc
- (_Bool)isRemoteViewController;	// IMP=0x00100000000135c4
- (_Bool)isFullScreenController;	// IMP=0x00100000000135bc
- (void)_handleIdleExitResponse:(id)arg1 error:(id)arg2;	// IMP=0x0010000000013481
- (void)_checkClearForIdleExit;	// IMP=0x00100000000132a9
- (void)_scheduleIdleExit;	// IMP=0x0010000000012df7
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0010000000012b1c
- (void)idleTimerDisable:(_Bool)arg1;	// IMP=0x0010000000012a9f
- (_Bool)prefersStatusBarHidden;	// IMP=0x0010000000012a6c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000012913
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000000127ec
- (void)viewDidLoad;	// IMP=0x00100000000125da
- (void)requestModalPlacement;	// IMP=0x00100000000125d4
- (_Bool)_shouldHideStatusBarForController:(long long)arg1;	// IMP=0x0010000000012591
- (void)_performOnMainQueueWhenAppeared:(CDUnknownBlockType)arg1;	// IMP=0x0010000000011fe4
- (_Bool)shouldPresentWithAnimation;	// IMP=0x0010000000011fd2
- (void)transitionToController:(long long)arg1 internalInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000011417
- (void)dismissRemoteUIWasInvalidated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000010ef3
- (void)_dismissRemoteUIWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000010edc
- (id)localizedCallerName;	// IMP=0x0010000000010d51
@property(readonly, copy) NSString *description;
- (void)didReceiveAuthenticationData;	// IMP=0x00100000000105af
- (id)initWithInternalInfo:(id)arg1 mechanism:(id)arg2 backoffCounter:(id)arg3 remoteUIHost:(id)arg4 allowsLandscape:(_Bool)arg5;	// IMP=0x001000000001049b
- (id)initWithInternalInfo:(id)arg1 parent:(id)arg2 allowsLandscape:(_Bool)arg3;	// IMP=0x00100000000102bc
- (void)_setupConnection;	// IMP=0x001000000000fca7
- (void)_resetUI;	// IMP=0x001000000000fb78
- (_Bool)_isRootControllerClass;	// IMP=0x001000000000fb2d
- (void)dealloc;	// IMP=0x001000000000fa8f
- (id)init;	// IMP=0x001000000000f6f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

