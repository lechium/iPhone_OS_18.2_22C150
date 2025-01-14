//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSService, NSMutableArray, NSMutableDictionary, NSString, NSUUID, NSXPCListener;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NSSServer : NSObject
{
    _Bool _fileTransferInProgress;	// 8 = 0x8
    NSMutableDictionary *_logTranferIdentifiers;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_idsQueue;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_vmPressureHandler;	// 32 = 0x20
    NSXPCListener *_listener;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_connectionHandlersQueue;	// 48 = 0x30
    NSMutableArray *_connectionHandlers;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_airplaneModeQueue;	// 64 = 0x40
    NSMutableDictionary *_airplaneModeDeliveryTimers;	// 72 = 0x48
    NSMutableDictionary *_airplaneModeEnabledTracking;	// 80 = 0x50
    NSUUID *_activeDeviceID;	// 88 = 0x58
}

+ (void)tellRadiosPrefsToEnableAirplaneMode:(_Bool)arg1;	// IMP=0x00200000000203ff
+ (double)mirrorAirplaneSendTimeout;	// IMP=0x0010000000020356
+ (void)associateProtobufHandlers:(id)arg1;	// IMP=0x001000000001b9cc
+ (id)getActivePairedDeviceIDFromNanoRegistry;	// IMP=0x001000000001ae84
+ (void)setLaunchNotification:(id)arg1 enabled:(_Bool)arg2;	// IMP=0x001000000001ad42
+ (void)setLaunchNotificationsEnabled:(_Bool)arg1;	// IMP=0x001000000001ad3c
- (void).cxx_destruct;	// IMP=0x0010000000020818
@property(retain, nonatomic) NSUUID *activeDeviceID; // @synthesize activeDeviceID=_activeDeviceID;
@property(retain, nonatomic) NSMutableDictionary *airplaneModeEnabledTracking; // @synthesize airplaneModeEnabledTracking=_airplaneModeEnabledTracking;
@property(retain, nonatomic) NSMutableDictionary *airplaneModeDeliveryTimers; // @synthesize airplaneModeDeliveryTimers=_airplaneModeDeliveryTimers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *airplaneModeQueue; // @synthesize airplaneModeQueue=_airplaneModeQueue;
@property(retain, nonatomic) NSMutableArray *connectionHandlers; // @synthesize connectionHandlers=_connectionHandlers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connectionHandlersQueue; // @synthesize connectionHandlersQueue=_connectionHandlersQueue;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *vmPressureHandler; // @synthesize vmPressureHandler=_vmPressureHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *idsQueue; // @synthesize idsQueue=_idsQueue;
@property(retain, nonatomic) NSMutableDictionary *logTranferIdentifiers; // @synthesize logTranferIdentifiers=_logTranferIdentifiers;
@property(nonatomic) _Bool fileTransferInProgress; // @synthesize fileTransferInProgress=_fileTransferInProgress;
- (void)sendFileTransfer:(id)arg1 progress:(unsigned long long)arg2;	// IMP=0x00100000000205ad
- (void)displayAirplaneModeMirroringUserEducationAlertIfNeeded:(_Bool)arg1;	// IMP=0x00100000000204c0
- (void)failedToMirrorAirplaneMode:(_Bool)arg1;	// IMP=0x00100000000203b5
- (void)handleAirplaneModeMsg:(id)arg1;	// IMP=0x001000000001ff29
- (_Bool)shouldSendAPMMessageToOppositeDevice:(_Bool)arg1;	// IMP=0x001000000001feba
- (_Bool)mirroringAirplaneMode;	// IMP=0x001000000001fe2e
- (void)handleNotifyRemoteDeviceOfUsageAfterSetupRequestMsg:(id)arg1;	// IMP=0x001000000001fbc2
- (void)notifyRemoteDeviceOfUsageAfterSetup:(CDUnknownBlockType)arg1;	// IMP=0x001000000001fa7a
- (void)handleRemotePasscodeLockRequestMsg:(id)arg1;	// IMP=0x001000000001f9d7
- (void)askRemoteDeviceToPasscodeLockWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000001f88f
- (void)enableAirplaneMode:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001f0bc
- (id)acceptConnection:(id)arg1;	// IMP=0x001000000001f0aa
- (void)connectionHandlerLostConnection:(id)arg1;	// IMP=0x001000000001ef58
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000001edec
- (void)checkIfMessageIsForOrphanedLogTransfer:(id)arg1;	// IMP=0x001000000001ede6
- (void)handleIncomingDiagnosticLogFile:(id)arg1 withContext:(id)arg2;	// IMP=0x001000000001ede0
- (_Bool)messageIdentifier:(id)arg1 hasBeenDeliveredWithContext:(id)arg2;	// IMP=0x001000000001edd8
- (_Bool)messageIdentifier:(id)arg1 didSendWithSuccess:(_Bool)arg2 error:(id)arg3;	// IMP=0x001000000001e8b1
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;	// IMP=0x001000000001e78e
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x001000000001e646
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;	// IMP=0x001000000001e41a
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 sentBytes:(long long)arg4 totalBytes:(long long)arg5;	// IMP=0x001000000001e1c0
- (void)cancelOrphanedFileTransfer:(id)arg1;	// IMP=0x001000000001e0ad
- (void)cancelTimerForIdentifier:(id)arg1 timers:(id)arg2 utilityName:(id)arg3;	// IMP=0x001000000001df60
- (_Bool)scheduleTimerForIdentifier:(id)arg1 requests:(id)arg2 timeout:(double)arg3 timeoutHandler:(CDUnknownBlockType)arg4 timers:(id)arg5 utilityName:(id)arg6;	// IMP=0x001000000001d945
- (id)sendLogFileAtUrl:(id)arg1 toDevice:(id)arg2 withOptions:(id)arg3;	// IMP=0x001000000001d64f
- (id)sendProtobuf:(id)arg1 options:(id)arg2 identifier:(id *)arg3;	// IMP=0x001000000001ccb6
- (id)sendResponse:(id)arg1 forRequest:(id)arg2 identifier:(id *)arg3 bypassDuet:(_Bool)arg4;	// IMP=0x001000000001cb86
- (id)sendRequest:(id)arg1 expectsResponse:(_Bool)arg2 replyBlock:(id)arg3 replyDictionary:(id)arg4 sendTimeout:(double)arg5 wantsAcknowledgement:(_Bool)arg6 bypassDuet:(_Bool)arg7;	// IMP=0x001000000001c945
- (id)sendMessage:(id)arg1 identifier:(id *)arg2 sendTimeout:(double)arg3 wantsAcknowledgement:(_Bool)arg4 queueOneIdentifier:(id)arg5 overBluetoothOnly:(_Bool)arg6;	// IMP=0x001000000001c765
- (id)getActivePairedDevice;	// IMP=0x001000000001c6b6
- (id)linkFileForViewing:(id)arg1 metadata:(id)arg2 withError:(id *)arg3;	// IMP=0x001000000001bf43
@property(readonly, nonatomic) _Bool isDefaultPairedDeviceNearby;
@property(readonly, nonatomic) IDSService *idsFileTransferService;
@property(readonly, nonatomic) IDSService *idsService;
- (void)initializeIDS;	// IMP=0x001000000001b98f
- (id)systemBuildVersion;	// IMP=0x001000000001b90a
- (void)handleMemoryPressureEvent;	// IMP=0x001000000001b8ac
- (void)dealloc;	// IMP=0x001000000001b87d
- (_Bool)handleDarwinNotification:(id)arg1;	// IMP=0x001000000001b875
- (void)earlyIvarInitialzation;	// IMP=0x001000000001b7c9
- (id)initTestInstance;	// IMP=0x001000000001b79a
- (id)init;	// IMP=0x001000000001b289
- (void)resetBecauseTheActivePairedDeviceChanged;	// IMP=0x001000000001b283
- (void)_resetIfTheActivePairedDeviceChanges;	// IMP=0x001000000001b18b
- (void)resetIfTheActivePairedDeviceChanges;	// IMP=0x001000000001b12a
- (void)listenToNanoRegistryAndResetIfTheActivePairedDeviceChanges;	// IMP=0x001000000001b048
- (_Bool)activeDeviceIsAltAccount;	// IMP=0x001000000001af5c
- (_Bool)endBridgeLiveActivity;	// IMP=0x0010000000023b00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

