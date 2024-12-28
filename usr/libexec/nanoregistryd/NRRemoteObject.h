//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSService, NSMapTable, NSMutableDictionary, NSPointerArray, NSSet, NSString;
@protocol NRRemoteObjectDelegate, OS_dispatch_queue;

@interface NRRemoteObject : NSObject
{
    NSMutableDictionary *_idsSendIDToCompletionHandler;	// 8 = 0x8
    NSMutableDictionary *_idsSendIDToResponseHandler;	// 16 = 0x10
    NSMutableDictionary *_idsSendIDToTimer;	// 24 = 0x18
    NSString *_serviceName;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_idsQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 48 = 0x30
    NSMutableDictionary *_idsRequestMessageTypeToSelector;	// 56 = 0x38
    _Bool _isIDSConnected;	// 64 = 0x40
    _Bool _wasIDSConnected;	// 65 = 0x41
    _Bool _isIDSNearby;	// 66 = 0x42
    _Bool _wasIDSNearby;	// 67 = 0x43
    _Bool _hasAccounts;	// 68 = 0x44
    _Bool _paired;	// 69 = 0x45
    _Bool _alwaysConnected;	// 70 = 0x46
    _Bool _isIncomingMessageDeliveryQueueSuspended;	// 71 = 0x47
    id <NRRemoteObjectDelegate> _delegate;	// 72 = 0x48
    NSPointerArray *_connectivityObservers;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_clientQueue;	// 88 = 0x58
    IDSService *_service;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_incomingMessageDeliveryQueue;	// 104 = 0x68
    NSMapTable *_shortcutMessages;	// 112 = 0x70
}

+ (_Bool)messagesShouldHaveValidSender;	// IMP=0x002000000001ebb5
- (void).cxx_destruct;	// IMP=0x0020000000023025
@property(nonatomic) _Bool isIncomingMessageDeliveryQueueSuspended; // @synthesize isIncomingMessageDeliveryQueueSuspended=_isIncomingMessageDeliveryQueueSuspended;
@property(retain, nonatomic) NSMapTable *shortcutMessages; // @synthesize shortcutMessages=_shortcutMessages;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *incomingMessageDeliveryQueue; // @synthesize incomingMessageDeliveryQueue=_incomingMessageDeliveryQueue;
@property(readonly, nonatomic) IDSService *service; // @synthesize service=_service;
@property(nonatomic, getter=isAlwaysConnected) _Bool alwaysConnected; // @synthesize alwaysConnected=_alwaysConnected;
@property(readonly, nonatomic, getter=isPaired) _Bool paired; // @synthesize paired=_paired;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
- (void)service:(id)arg1 didSwitchActivePairedDevice:(id)arg2 acknowledgementBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000022b03
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x00100000000226cd
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x00100000000226c7
- (void)service:(id)arg1 linkedDevicesChanged:(id)arg2;	// IMP=0x00100000000226b5
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;	// IMP=0x00100000000226af
- (void)_fireIDSAvailableDelegateIfNeededWithIDSDevice:(_Bool)arg1;	// IMP=0x00100000000221be
- (void)updateTrafficClassesWithClasses:(id)arg1;	// IMP=0x0010000000022114
- (void)_updateTrafficClassesWithClasses:(id)arg1;	// IMP=0x001000000002210e
- (id)_areAccountsAndDevicesPresent:(id)arg1 andDevices:(id)arg2;	// IMP=0x0010000000021b25
- (id)idsDeviceIdentifierForBTUUID:(id)arg1;	// IMP=0x0010000000021aa5
- (id)deprecatedIDSDeviceIdentifierForBTUUID:(id)arg1;	// IMP=0x0010000000021a35
- (id)_lookupDestinations:(id)arg1;	// IMP=0x001000000002165e
- (void)_queueSendCloudMessage:(id)arg1 type:(unsigned short)arg2 responseToRequest:(id)arg3 withTimeout:(id)arg4 withResponseTimeout:(id)arg5 withDescription:(id)arg6 onlyOneFor:(id)arg7 priority:(long long)arg8 toDestinations:(id)arg9 skipLookup:(_Bool)arg10 didSend:(CDUnknownBlockType)arg11 andResponse:(CDUnknownBlockType)arg12;	// IMP=0x00100000000215f1
- (void)_queueSendMessage:(id)arg1 type:(unsigned short)arg2 requestUUID:(id)arg3 withTimeout:(id)arg4 withResponseTimeout:(id)arg5 withDescription:(id)arg6 onlyOneFor:(id)arg7 priority:(long long)arg8 toIDSBTUUID:(id)arg9 didSend:(CDUnknownBlockType)arg10 andResponse:(CDUnknownBlockType)arg11;	// IMP=0x001000000002091b
- (void)_messageResponseTimeout:(id)arg1;	// IMP=0x00100000000206f8
- (void)_sendCloudMessage:(id)arg1 type:(unsigned short)arg2 responseToRequest:(id)arg3 withTimeout:(id)arg4 withResponseTimeout:(id)arg5 withDescription:(id)arg6 onlyOneFor:(id)arg7 priority:(long long)arg8 toDestinations:(id)arg9 skipLookup:(_Bool)arg10 didSend:(CDUnknownBlockType)arg11 andResponse:(CDUnknownBlockType)arg12;	// IMP=0x001000000002046c
- (void)sendTinkerResponse:(id)arg1 type:(unsigned short)arg2 withRequest:(id)arg3 withTimeout:(id)arg4 withDescription:(id)arg5 onlyOneFor:(id)arg6 priority:(long long)arg7 didSend:(CDUnknownBlockType)arg8;	// IMP=0x001000000002041d
- (void)sendTinkerRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 withResponseTimeout:(id)arg4 withDescription:(id)arg5 onlyOneFor:(id)arg6 priority:(long long)arg7 toDestinations:(id)arg8 didSend:(CDUnknownBlockType)arg9 andResponse:(CDUnknownBlockType)arg10;	// IMP=0x00100000000203d2
- (void)sendCloudResponse:(id)arg1 type:(unsigned short)arg2 withRequest:(id)arg3 withTimeout:(id)arg4 withDescription:(id)arg5 onlyOneFor:(id)arg6 priority:(long long)arg7 didSend:(CDUnknownBlockType)arg8;	// IMP=0x0010000000020383
- (void)sendCloudRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 withResponseTimeout:(id)arg4 withDescription:(id)arg5 onlyOneFor:(id)arg6 priority:(long long)arg7 toDestinations:(id)arg8 didSend:(CDUnknownBlockType)arg9 andResponse:(CDUnknownBlockType)arg10;	// IMP=0x0010000000020338
- (void)_sendMessage:(id)arg1 type:(unsigned short)arg2 requestUUID:(id)arg3 withTimeout:(id)arg4 withResponseTimeout:(id)arg5 withDescription:(id)arg6 onlyOneFor:(id)arg7 priority:(long long)arg8 toIDSBTUUID:(id)arg9 didSend:(CDUnknownBlockType)arg10 andResponse:(CDUnknownBlockType)arg11;	// IMP=0x001000000001ffd6
- (void)sendResponse:(id)arg1 type:(unsigned short)arg2 requestUUID:(id)arg3 withTimeout:(id)arg4 withDescription:(id)arg5 onlyOneFor:(id)arg6 priority:(long long)arg7 didSend:(CDUnknownBlockType)arg8;	// IMP=0x001000000001ff8f
- (void)sendCompanionCloudRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 withResponseTimeout:(id)arg4 withDescription:(id)arg5 onlyOneFor:(id)arg6 priority:(long long)arg7 didSend:(CDUnknownBlockType)arg8 andResponse:(CDUnknownBlockType)arg9;	// IMP=0x001000000001ff89
- (void)sendResponse:(id)arg1 type:(unsigned short)arg2 withRequest:(id)arg3 withTimeout:(id)arg4 withDescription:(id)arg5 onlyOneFor:(id)arg6 priority:(long long)arg7 didSend:(CDUnknownBlockType)arg8;	// IMP=0x001000000001fdc8
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 withResponseTimeout:(id)arg4 withDescription:(id)arg5 onlyOneFor:(id)arg6 priority:(long long)arg7 toIDSBTUUID:(id)arg8 didSend:(CDUnknownBlockType)arg9 andResponse:(CDUnknownBlockType)arg10;	// IMP=0x001000000001fd85
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 withDescription:(id)arg4 toIDSBTUUID:(id)arg5 didSend:(CDUnknownBlockType)arg6;	// IMP=0x000000000001fd45
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 toIDSBTUUID:(id)arg4 didSend:(CDUnknownBlockType)arg5;	// IMP=0x001000000001fd24
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 toIDSBTUUID:(id)arg3 didSend:(CDUnknownBlockType)arg4;	// IMP=0x001000000001fcfc
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 toIDSBTUUID:(id)arg3;	// IMP=0x001000000001fce7
- (void)registerProtobufHandlers;	// IMP=0x001000000001fce1
- (void)setAlwaysProtobufAction:(SEL)arg1 forIncomingResponsesOfType:(unsigned short)arg2;	// IMP=0x001000000001fc69
- (void)setAlwaysProtobufAction:(SEL)arg1 forIncomingRequestsOfType:(unsigned short)arg2;	// IMP=0x001000000001fc02
- (void)setConnectedProtobufAction:(SEL)arg1 forIncomingResponsesOfType:(unsigned short)arg2;	// IMP=0x001000000001fb87
- (void)setConnectedProtobufAction:(SEL)arg1 forIncomingRequestsOfType:(unsigned short)arg2;	// IMP=0x001000000001fb1d
- (void)_storeProtobufAction:(SEL)arg1 messageType:(unsigned short)arg2 messageSendType:(long long)arg3 connectedOnly:(_Bool)arg4;	// IMP=0x001000000001fa3a
- (void)handleIncomingMessage:(id)arg1;	// IMP=0x001000000001ebbd
- (void)invalidate;	// IMP=0x001000000001e163
- (void)dealloc;	// IMP=0x001000000001e123
- (void)_resumeMessageDeliveryQueue;	// IMP=0x001000000001e109
- (void)_suspendMessageDeliveryQueue;	// IMP=0x001000000001e0ef
- (id)initWithServiceName:(id)arg1 isAlwaysConnected:(_Bool)arg2 andClientQueue:(id)arg3 andDelegate:(id)arg4;	// IMP=0x001000000001d919
- (id)initWithServiceName:(id)arg1 andClientQueue:(id)arg2 andDelegate:(id)arg3;	// IMP=0x001000000001d8ff
- (id)initWithServiceName:(id)arg1 andClientQueue:(id)arg2;	// IMP=0x001000000001d8e8
- (id)initWithServiceName:(id)arg1;	// IMP=0x001000000001d7f7
@property(retain, nonatomic) NSPointerArray *connectivityObservers; // @synthesize connectivityObservers=_connectivityObservers;
- (void)removeConnectivityObserver:(id)arg1;	// IMP=0x001000000001d535
- (void)addConnectivityObserver:(id)arg1;	// IMP=0x001000000001d469
@property(nonatomic) __weak id <NRRemoteObjectDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setDefaultPairedDevice:(id)arg1;	// IMP=0x001000000001d2ad
- (id)_rawDefaultPairedDevice;	// IMP=0x001000000001d2a5
- (id)defaultPairedDevice;	// IMP=0x001000000001d29d
- (void)setIsAlwaysConnected:(_Bool)arg1;	// IMP=0x001000000001d297
@property(nonatomic, getter=isDisconnected) _Bool disconnected;
- (void)setHasAccounts:(_Bool)arg1;	// IMP=0x001000000001d283
@property(readonly, nonatomic) _Bool hasAccounts; // @synthesize hasAccounts=_hasAccounts;
- (void)setDeviceUniqueIdentifiers:(id)arg1;	// IMP=0x001000000001d275
@property(readonly, nonatomic) NSSet *deviceUniqueIdentifiers;
- (void)_generateNearbyConnectedDelegateCalls;	// IMP=0x001000000001cd5f
- (void)_setIDSConnected:(_Bool)arg1;	// IMP=0x001000000001cd4a
- (void)_setIDSNearby:(_Bool)arg1;	// IMP=0x001000000001cd35
- (void)setIDSConnected:(_Bool)arg1;	// IMP=0x001000000001cd2f
- (void)setIDSNearby:(_Bool)arg1;	// IMP=0x001000000001cd29
- (_Bool)isIDSConnected;	// IMP=0x001000000001cd21
- (_Bool)isIDSNearby;	// IMP=0x001000000001cd19
- (void)setIsIDSConnectedNotification:(_Bool)arg1;	// IMP=0x001000000001cd13
- (_Bool)isIDSConnectedNotification;	// IMP=0x001000000001cd0b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
