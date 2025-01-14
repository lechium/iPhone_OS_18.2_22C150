//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSService, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface PDURLSessionProxyService : NSObject
{
    IDSService *_idsService;	// 8 = 0x8
    NSMutableDictionary *_outstandingReplies;	// 16 = 0x10
    NSMutableDictionary *_outstandingMessages;	// 24 = 0x18
    NSString *_startupMessageIdentifier;	// 32 = 0x20
    NSMutableDictionary *_outgoingSequenceNumbersByPriority;	// 40 = 0x28
    NSMutableDictionary *_incomingSequenceNumbersByPriority;	// 48 = 0x30
    NSMutableSet *_receivedLaunchUUIDs;	// 56 = 0x38
    NSString *_currentRemoteLaunchUUID;	// 64 = 0x40
    _Bool _prefersInfraWiFi;	// 72 = 0x48
    _Bool _startupMessageFailed;	// 73 = 0x49
    _Bool _haveReceivedLegacyStartupMessage;	// 74 = 0x4a
    _Bool _haveReceivedMessage;	// 75 = 0x4b
    _Bool _connected;	// 76 = 0x4c
    NSObject<OS_dispatch_queue> *_queue;	// 80 = 0x50
    NSString *_launchUUID;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0020000000009e79
@property(retain) NSString *launchUUID; // @synthesize launchUUID=_launchUUID;
@property(getter=isConnected) _Bool connected; // @synthesize connected=_connected;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)service:(id)arg1 didSwitchActivePairedDevice:(id)arg2 acknowledgementBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000009c34
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;	// IMP=0x0010000000009ae4
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;	// IMP=0x0010000000009ad2
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x0010000000009ac0
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x0010000000009801
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0010000000008d34
- (void)_onqueue_messageWithIdentifier:(id)arg1 didSendWithSuccess:(_Bool)arg2 error:(id)arg3;	// IMP=0x0010000000008b76
- (void)_onqueue_handleReceivedReply:(id)arg1 forIdentifier:(id)arg2 ofType:(unsigned short)arg3 withError:(id)arg4;	// IMP=0x0010000000008a07
- (void)_onqueue_handleFailedMessageSend:(id)arg1 ofType:(unsigned short)arg2;	// IMP=0x0010000000008971
- (void)_onqueue_handleReceivedMessage:(id)arg1 ofType:(unsigned short)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000088c5
- (void)sendProtobufMessage:(id)arg1 ofType:(unsigned short)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000008801
- (void)_onqueue_sendMessage:(id)arg1 ofType:(unsigned short)arg2 responseIdentifier:(id)arg3 forSourceApplication:(id)arg4 withUrgency:(_Bool)arg5 withIDSMessageTimeout:(long long)arg6 withReply:(CDUnknownBlockType)arg7;	// IMP=0x0010000000007b00
- (_Bool)verifyAndUpdateIncomingSequenceNumber:(unsigned long long)arg1 forPriority:(long long)arg2;	// IMP=0x001000000000792a
- (unsigned long long)bumpAndReturnOutgoingSequenceNumberForPriority:(long long)arg1;	// IMP=0x00100000000077fc
- (id)_onqueue_loggableDescriptionForMessage:(id)arg1;	// IMP=0x00100000000077f4
- (long long)_onqueue_IDSTimoutForMessage:(id)arg1;	// IMP=0x00100000000077e9
- (id)_onqueue_sourceApplicationForMessage:(id)arg1;	// IMP=0x00100000000077e1
- (long long)_onqueue_priorityForMessage:(id)arg1 ofType:(unsigned short)arg2 isReply:(_Bool)arg3;	// IMP=0x00100000000077d6
- (void)_onqueue_setPrefersInfraWiFi:(_Bool)arg1;	// IMP=0x0010000000007678
- (void)_onqueue_receivedNewLaunchUUID:(id)arg1 isStartupMessage:(_Bool)arg2;	// IMP=0x0010000000007672
- (void)_onqueue_remoteDeviceStartedUp;	// IMP=0x001000000000765c
- (void)_onqueue_devicesDisconnected;	// IMP=0x0010000000007656
- (void)_onqueue_devicesConnected;	// IMP=0x0010000000007650
- (void)_onqueue_updateDeviceState;	// IMP=0x00100000000072e5
- (id)defaultPairedDevice;	// IMP=0x0010000000007151
- (void)withWorkQueue:(CDUnknownBlockType)arg1;	// IMP=0x0010000000007140
- (void)_onqueue_sendStartupMessage;	// IMP=0x0010000000006ce6
- (void)devicesDidUnpair:(id)arg1;	// IMP=0x0010000000006bae
- (void)start;	// IMP=0x0010000000006b63
- (id)init;	// IMP=0x00100000000069c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

