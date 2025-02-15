//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSMutableArray, NSString, NSXPCConnection, NSXPCListener;
@protocol UMSideEffectsProviding;

@interface UMXPCServer : NSObject
{
    _Bool _currentlyBroadcastingWillSwitchToUser;	// 8 = 0x8
    _Bool _didRegisterStakeholder;	// 9 = 0x9
    _Bool _didBroadcastWillSwitchToUser;	// 10 = 0xa
    _Bool _didSendTasks;	// 11 = 0xb
    _Bool _didBroadcastUploadContent;	// 12 = 0xc
    _Bool _didRegisterPersonaCalbackStakeholder;	// 13 = 0xd
    unsigned int _interruptionRetryCount;	// 16 = 0x10
    NSObject<UMSideEffectsProviding> *_se;	// 24 = 0x18
    id _stakeholder;	// 32 = 0x20
    unsigned long long _stakeholderType;	// 40 = 0x28
    NSString *_machServiceName;	// 48 = 0x30
    unsigned long long _unregistrationStatus;	// 56 = 0x38
    NSString *_unregistrationReason;	// 64 = 0x40
    NSDictionary *_personaSpec;	// 72 = 0x48
    NSData *_passcodeData;	// 80 = 0x50
    NSData *_contextData;	// 88 = 0x58
    NSDictionary *_preferencesDict;	// 96 = 0x60
    NSDictionary *_personaProfileDict;	// 104 = 0x68
    NSDictionary *_provisionDict;	// 112 = 0x70
    CDUnknownBlockType _provisionCompletionHandler;	// 120 = 0x78
    CDUnknownBlockType _registrationCompletionHandler;	// 128 = 0x80
    CDUnknownBlockType _switchCompletionHandler;	// 136 = 0x88
    CDUnknownBlockType _suspendQuotasCompletionHandler;	// 144 = 0x90
    CDUnknownBlockType _directSwitchCompletionHandler;	// 152 = 0x98
    CDUnknownBlockType _logoutToLoginSessionCompletionHandler;	// 160 = 0xa0
    CDUnknownBlockType _loginUICheckinSessionCompletionHandler;	// 168 = 0xa8
    CDUnknownBlockType _uploadContentCompletionHandler;	// 176 = 0xb0
    CDUnknownBlockType _willSwitchCompletionHandler;	// 184 = 0xb8
    NSMutableArray *_switchBlockingTasks;	// 192 = 0xc0
    NSMutableArray *_syncTasks;	// 200 = 0xc8
    CDUnknownBlockType _bubblePopHandler;	// 208 = 0xd0
    unsigned long long _willSwitchToUserAddedTaskCount;	// 216 = 0xd8
    NSXPCConnection *_xpcConnection;	// 224 = 0xe0
    NSXPCConnection *_syncConnection;	// 232 = 0xe8
    NSXPCListener *_xpcListener;	// 240 = 0xf0
    id _personaStakeholder;	// 248 = 0xf8
    CDUnknownBlockType _personaRegistrationCompletionHandler;	// 256 = 0x100
    id _personaUpdateCallbackStakeholder;	// 264 = 0x108
}

- (void).cxx_destruct;	// IMP=0x0000000000010bdd
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000000e24d
- (void)personaUpdateCallbackForMachServiceCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e067
- (void)personaListDidUpdateCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000de81
- (void)bubbleDidPop;	// IMP=0x000000000000dd0c
- (void)uploadContentWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000d9f5
- (void)deviceLoginSessionStateDidUpdate;	// IMP=0x000000000000d9ac
- (void)userSwitchTaskListDidUpdate;	// IMP=0x000000000000d3a0
- (void)readyToSwitchToLoginSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000d1fe
- (void)readyToSwitchToUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000cfc7
- (void)willSwitchToUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000ccda
- (void)userInteractionIsEnabled;	// IMP=0x000000000000ab09
- (void)resumeSync;	// IMP=0x000000000000945a
- (void)terminateSyncWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000935d
- (void)resumeQuotas;	// IMP=0x00000000000092d2
- (void)suspendQuotasWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000091d5
- (void)loginUICheckInWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000090d8
- (void)directSwitchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 preferences:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000008ead
- (void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 preferences:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000008ba6
- (void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000008b84
- (void)logoutToLoginSessionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008a87
- (void)switchToLoginUserWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008973
- (void)switchToLoginUserWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000895c
- (void)unregisterStakeHolder:(id)arg1 status:(unsigned long long)arg2 reason:(id)arg3;	// IMP=0x000000000000871c
- (void)registerUserSyncStakeholder:(id)arg1 withMachServiceName:(id)arg2;	// IMP=0x0000000000008469
- (void)registerCriticalUserSwitchStakeHolder:(id)arg1;	// IMP=0x0000000000008387
- (void)registerUserSwitchStakeHolder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000819e
- (void)registerUserSwitchStakeHolder:(id)arg1;	// IMP=0x000000000000818a
- (id)init;	// IMP=0x0000000000007fb6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

