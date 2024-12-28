//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMessageTransport.h>

@class HMDProcessInfo, HMDXPCMessageCountTracker, HMDXPCMessageSendPolicyParameters, HMDXPCRequestTracker, NSDictionary, NSObject, NSString;
@protocol HMDXPCClientConnectionDelegate, HMDXPCConnection, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDXPCClientConnection : HMFMessageTransport
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _entitledForAPIAccess;	// 12 = 0xc
    _Bool _entitledForBackgroundMode;	// 13 = 0xd
    _Bool _entitledForCameraClipsAccess;	// 14 = 0xe
    _Bool _entitledForMultiUserSetupAccess;	// 15 = 0xf
    _Bool _entitledForPersonManagerAccess;	// 16 = 0x10
    _Bool _entitledForWalletKeyAccess;	// 17 = 0x11
    _Bool _hasExternallyManagedActivation;	// 18 = 0x12
    id <HMDXPCClientConnectionDelegate> _delegate;	// 24 = 0x18
    HMDXPCMessageSendPolicyParameters *_sendPolicyParameters;	// 32 = 0x20
    NSDictionary *_userInfo;	// 40 = 0x28
    HMDProcessInfo *_processInfo;	// 48 = 0x30
    NSString *_clientIdentifier;	// 56 = 0x38
    NSString *_logIdentifier;	// 64 = 0x40
    id <HMDXPCConnection> _xpcConnection;	// 72 = 0x48
    unsigned long long _entitlements;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_queue;	// 88 = 0x58
    HMDXPCMessageCountTracker *_messageCountTracker;	// 96 = 0x60
    HMDXPCRequestTracker *_requestTracker;	// 104 = 0x68
    unsigned long long _state;	// 112 = 0x70
}

+ (id)logCategory;	// IMP=0x00100000005567b9
+ (unsigned long long)entitlementsForConnection:(id)arg1;	// IMP=0x00100000005563f6
- (void).cxx_destruct;	// IMP=0x0000000000555ec1
@property _Bool hasExternallyManagedActivation; // @synthesize hasExternallyManagedActivation=_hasExternallyManagedActivation;
@property unsigned long long state; // @synthesize state=_state;
@property(readonly) HMDXPCRequestTracker *requestTracker; // @synthesize requestTracker=_requestTracker;
@property(readonly) HMDXPCMessageCountTracker *messageCountTracker; // @synthesize messageCountTracker=_messageCountTracker;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic, getter=isEntitledForWalletKeyAccess) _Bool entitledForWalletKeyAccess; // @synthesize entitledForWalletKeyAccess=_entitledForWalletKeyAccess;
@property(readonly, nonatomic, getter=isEntitledForPersonManagerAccess) _Bool entitledForPersonManagerAccess; // @synthesize entitledForPersonManagerAccess=_entitledForPersonManagerAccess;
@property(readonly, nonatomic, getter=isEntitledForMultiUserSetupAccess) _Bool entitledForMultiUserSetupAccess; // @synthesize entitledForMultiUserSetupAccess=_entitledForMultiUserSetupAccess;
@property(readonly, nonatomic, getter=isEntitledForCameraClipsAccess) _Bool entitledForCameraClipsAccess; // @synthesize entitledForCameraClipsAccess=_entitledForCameraClipsAccess;
@property(readonly, nonatomic, getter=isEntitledForBackgroundMode) _Bool entitledForBackgroundMode; // @synthesize entitledForBackgroundMode=_entitledForBackgroundMode;
@property(readonly, nonatomic, getter=isEntitledForAPIAccess) _Bool entitledForAPIAccess; // @synthesize entitledForAPIAccess=_entitledForAPIAccess;
@property(readonly) unsigned long long entitlements; // @synthesize entitlements=_entitlements;
@property(readonly, nonatomic) id <HMDXPCConnection> xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(copy) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property __weak id <HMDXPCClientConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)sendMessage:(id)arg1 error:(id *)arg2;	// IMP=0x000000000055592e
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000555889
- (void)updateUserInfo:(id)arg1;	// IMP=0x000000000055580f
- (void)handleMessage:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000055577a
- (void)handleMessage:(id)arg1;	// IMP=0x00000000005556fe
- (void)_invalidate;	// IMP=0x0000000000555515
- (void)_deactivate;	// IMP=0x0000000000555314
- (void)_activate;	// IMP=0x00000000005550ea
- (void)_start;	// IMP=0x0000000000554ecb
- (void)invalidate;	// IMP=0x0000000000554e78
- (void)deactivate;	// IMP=0x0000000000554e07
- (void)activate;	// IMP=0x0000000000554d96
- (void)_handleMessage:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000554287
- (_Bool)canSendMessage:(id)arg1;	// IMP=0x00000000005535a8
@property(readonly, copy) NSDictionary *stateDump;
- (void)updateSendPolicyParameters:(id)arg1;	// IMP=0x0000000000553252
- (void)initiateRefresh;	// IMP=0x0000000000553004
@property(readonly, nonatomic) NSString *companionAppBundleIdentifier;
@property(readonly, nonatomic) NSString *applicationBundleIdentifier;
@property(copy, nonatomic) HMDXPCMessageSendPolicyParameters *sendPolicyParameters; // @synthesize sendPolicyParameters=_sendPolicyParameters;
- (void)notifyOfExternallyManagedActivation;	// IMP=0x0000000000552e2a
- (void)handleProcessStateDidChange;	// IMP=0x0000000000552c00
@property(retain) HMDProcessInfo *processInfo; // @synthesize processInfo=_processInfo;
@property(readonly, getter=isPlatformBinary) _Bool platformBinary;
@property(readonly, nonatomic) int clientPid;
@property(readonly, copy, nonatomic) NSString *name;
- (id)_displayName;	// IMP=0x00000000005528a6
@property(readonly, nonatomic, getter=isEntitledForHomeLocationFeedbackAccess) _Bool entitledForHomeLocationFeedbackAccess;
- (_Bool)isEntitledForModernMessaging;	// IMP=0x0000000000552874
@property(readonly, nonatomic, getter=isEntitledForAssistantIdentifiers) _Bool entitledForAssistantIdentifiers;
@property(readonly, nonatomic, getter=isEntitledForStateDump) _Bool entitledForStateDump;
@property(readonly, nonatomic, getter=isEntitledForSecureAccess) _Bool entitledForSecureAccess;
@property(readonly, nonatomic, getter=isEntitledForShortcutsAutomationAccess) _Bool entitledForShortcutsAutomationAccess;
@property(readonly, nonatomic, getter=isEntitledToProvideMatterSetupPayload) _Bool entitledToProvideMatterSetupPayload;
@property(readonly, nonatomic, getter=isEntitledToProvideAccessorySetupPayload) _Bool entitledToProvideAccessorySetupPayload;
@property(readonly, nonatomic, getter=isEntitledForHomeLocationAccess) _Bool entitledForHomeLocationAccess;
@property(readonly, nonatomic, getter=isAuthorizedForLocationAccess) _Bool authorizedForLocationAccess;
@property(readonly, getter=isEntitledForSPIAccess) _Bool entitledForSPIAccess;
@property(readonly, nonatomic, getter=isAuthorizedForMicrophoneAccess) _Bool authorizedForMicrophoneAccess;
@property(readonly, nonatomic, getter=isAuthorizedForHomeDataAccess) _Bool authorizedForHomeDataAccess;
@property(readonly, copy) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(readonly, nonatomic) unsigned long long homeManagerOptions;
@property(readonly) Class principalClass;
@property(readonly) unsigned long long inactiveUpdatingLevel;
- (id)clientUUID;	// IMP=0x0000000000552205
@property(readonly, copy) NSString *clientName;
@property(copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic, getter=isActivated) _Bool activated;
- (id)attributeDescriptions;	// IMP=0x0000000000551cd3
- (id)shortDescription;	// IMP=0x0000000000551c1f
- (void)dealloc;	// IMP=0x0000000000551ab8
- (id)initWithConnection:(id)arg1 queue:(id)arg2 messageCountTracker:(id)arg3 requestTracker:(id)arg4;	// IMP=0x00000000005517eb
- (id)initWithConnection:(id)arg1 queue:(id)arg2;	// IMP=0x0000000000551712

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
