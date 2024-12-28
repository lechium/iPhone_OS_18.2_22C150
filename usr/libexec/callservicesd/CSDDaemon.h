//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CHManager, CPApplicationPolicyManager, CSDAudioController, CSDCallStateController, CSDCallStateMonitor, CSDConversationProviderManager, CSDConversationProviderManagerXPCServer, CSDDeviceLockStateObserver, CSDDualSIMRingtoneHelper, CSDHandoffAudioController, CSDOrientationMonitor, CSDPowerAssertionManager, CSDProximityController, CSDProximitySensorObserver, CSDRaiseToAnswerController, CSDRelayClientController, CSDRelayCommonController, CSDRelayHostController, CSDRelayMessagingController, CSDStatusBarManager, CSDUserNotificationController, CSDVoIPApplicationController, CSDVoiceOverObserver, NSMutableArray, NSString, TUUserConfiguration, _TtC13callservicesd19CSDAnalyticsManager;
@protocol OS_dispatch_queue, TUFeatureFlags;

@interface CSDDaemon : NSObject
{
    id <TUFeatureFlags> _featureFlags;	// 8 = 0x8
    CSDConversationProviderManagerXPCServer *_conversationProviderManagerXPCServer;	// 16 = 0x10
    CSDConversationProviderManager *_conversationProviderManager;	// 24 = 0x18
    CHManager *_chManager;	// 32 = 0x20
    CSDCallStateController *_callStateController;	// 40 = 0x28
    CSDCallStateMonitor *_callStateMonitor;	// 48 = 0x30
    CSDRelayMessagingController *_relayMessagingController;	// 56 = 0x38
    CSDRelayClientController *_relayClientController;	// 64 = 0x40
    CSDRelayHostController *_relayHostController;	// 72 = 0x48
    CSDRelayCommonController *_relayCommonController;	// 80 = 0x50
    CSDVoIPApplicationController *_voipApplicationController;	// 88 = 0x58
    TUUserConfiguration *_userConfiguration;	// 96 = 0x60
    CSDUserNotificationController *_userNotificationController;	// 104 = 0x68
    CSDVoiceOverObserver *_voiceOverObserver;	// 112 = 0x70
    NSMutableArray *_signalHandlerDispatchSources;	// 120 = 0x78
    CSDDeviceLockStateObserver *_deviceLockStateObserver;	// 128 = 0x80
    CSDOrientationMonitor *_orientationMonitor;	// 136 = 0x88
    CSDProximityController *_proximityController;	// 144 = 0x90
    CSDProximitySensorObserver *_proximitySensorObserver;	// 152 = 0x98
    CSDRaiseToAnswerController *_raiseToAnswerController;	// 160 = 0xa0
    CSDPowerAssertionManager *_powerAssertionManager;	// 168 = 0xa8
    CSDAudioController *_audioController;	// 176 = 0xb0
    CSDHandoffAudioController *_handoffAudioController;	// 184 = 0xb8
    CSDStatusBarManager *_statusBarManager;	// 192 = 0xc0
    NSObject<OS_dispatch_queue> *_queue;	// 200 = 0xc8
    CPApplicationPolicyManager *_applicationPolicyManager;	// 208 = 0xd0
    CSDDualSIMRingtoneHelper *_dualSIMRingtoneHelper;	// 216 = 0xd8
    _TtC13callservicesd19CSDAnalyticsManager *_analyticsManager;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x00200000000b4f11
@property(retain, nonatomic) _TtC13callservicesd19CSDAnalyticsManager *analyticsManager; // @synthesize analyticsManager=_analyticsManager;
@property(retain, nonatomic) CSDDualSIMRingtoneHelper *dualSIMRingtoneHelper; // @synthesize dualSIMRingtoneHelper=_dualSIMRingtoneHelper;
@property(retain, nonatomic) CPApplicationPolicyManager *applicationPolicyManager; // @synthesize applicationPolicyManager=_applicationPolicyManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) CSDStatusBarManager *statusBarManager; // @synthesize statusBarManager=_statusBarManager;
@property(retain, nonatomic) CSDHandoffAudioController *handoffAudioController; // @synthesize handoffAudioController=_handoffAudioController;
@property(retain, nonatomic) CSDAudioController *audioController; // @synthesize audioController=_audioController;
@property(retain, nonatomic) CSDPowerAssertionManager *powerAssertionManager; // @synthesize powerAssertionManager=_powerAssertionManager;
@property(retain, nonatomic) CSDRaiseToAnswerController *raiseToAnswerController; // @synthesize raiseToAnswerController=_raiseToAnswerController;
@property(retain, nonatomic) CSDProximitySensorObserver *proximitySensorObserver; // @synthesize proximitySensorObserver=_proximitySensorObserver;
@property(retain, nonatomic) CSDProximityController *proximityController; // @synthesize proximityController=_proximityController;
@property(retain, nonatomic) CSDOrientationMonitor *orientationMonitor; // @synthesize orientationMonitor=_orientationMonitor;
@property(retain, nonatomic) CSDDeviceLockStateObserver *deviceLockStateObserver; // @synthesize deviceLockStateObserver=_deviceLockStateObserver;
@property(retain, nonatomic) NSMutableArray *signalHandlerDispatchSources; // @synthesize signalHandlerDispatchSources=_signalHandlerDispatchSources;
@property(retain, nonatomic) CSDVoiceOverObserver *voiceOverObserver; // @synthesize voiceOverObserver=_voiceOverObserver;
@property(retain, nonatomic) CSDUserNotificationController *userNotificationController; // @synthesize userNotificationController=_userNotificationController;
@property(retain, nonatomic) TUUserConfiguration *userConfiguration; // @synthesize userConfiguration=_userConfiguration;
@property(retain, nonatomic) CSDVoIPApplicationController *voipApplicationController; // @synthesize voipApplicationController=_voipApplicationController;
@property(retain, nonatomic) CSDRelayCommonController *relayCommonController; // @synthesize relayCommonController=_relayCommonController;
@property(retain, nonatomic) CSDRelayHostController *relayHostController; // @synthesize relayHostController=_relayHostController;
@property(retain, nonatomic) CSDRelayClientController *relayClientController; // @synthesize relayClientController=_relayClientController;
@property(retain, nonatomic) CSDRelayMessagingController *relayMessagingController; // @synthesize relayMessagingController=_relayMessagingController;
@property(retain, nonatomic) CSDCallStateMonitor *callStateMonitor; // @synthesize callStateMonitor=_callStateMonitor;
@property(retain, nonatomic) CSDCallStateController *callStateController; // @synthesize callStateController=_callStateController;
@property(retain, nonatomic) CHManager *chManager; // @synthesize chManager=_chManager;
@property(readonly, nonatomic) CSDConversationProviderManager *conversationProviderManager; // @synthesize conversationProviderManager=_conversationProviderManager;
@property(readonly, nonatomic) CSDConversationProviderManagerXPCServer *conversationProviderManagerXPCServer; // @synthesize conversationProviderManagerXPCServer=_conversationProviderManagerXPCServer;
@property(retain, nonatomic) id <TUFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
- (void)propertiesDidChangeForConfiguration:(id)arg1;	// IMP=0x00100000000b4b6b
- (void)_setUpSandbox;	// IMP=0x00100000000b4b50
- (id)_setUpTemporaryDirectory;	// IMP=0x00100000000b49e4
- (void)_setUpLanguageChangeListener;	// IMP=0x00100000000b491c
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

- (void)_observeSignal:(int)arg1 usingHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b4659
- (void)dealloc;	// IMP=0x00100000000b44d7
- (id)init;	// IMP=0x00100000000b295c

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
