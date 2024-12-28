//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CSDIDSTransport, NSNumber, NSString;
@protocol CSDIDSDualSessionDelegate, CSDIDSDualSessionProvider;

@interface CSDIDSDualSession
{
    _Bool _initiator;	// 8 = 0x8
    _Bool _hasStartedConnecting;	// 9 = 0x9
    _Bool _hasConnected;	// 10 = 0xa
    int _endedReason;	// 12 = 0xc
    int _state;	// 16 = 0x10
    id <CSDIDSDualSessionDelegate> _delegate;	// 24 = 0x18
    NSNumber *_remoteProtocolVersionNumber;	// 32 = 0x20
    id <CSDIDSDualSessionProvider> _sessionProvider;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000bc313
@property(readonly, nonatomic) id <CSDIDSDualSessionProvider> sessionProvider; // @synthesize sessionProvider=_sessionProvider;
@property(retain, nonatomic) NSNumber *remoteProtocolVersionNumber; // @synthesize remoteProtocolVersionNumber=_remoteProtocolVersionNumber;
@property(nonatomic) _Bool hasConnected; // @synthesize hasConnected=_hasConnected;
@property(nonatomic) _Bool hasStartedConnecting; // @synthesize hasStartedConnecting=_hasStartedConnecting;
@property(nonatomic) int state; // @synthesize state=_state;
@property(readonly, nonatomic, getter=isInitiator) _Bool initiator; // @synthesize initiator=_initiator;
@property(nonatomic) int endedReason; // @synthesize endedReason=_endedReason;
@property(nonatomic) __weak id <CSDIDSDualSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sessionProvider:(id)arg1 receivedSessionMessageFromID:(id)arg2 withData:(id)arg3;	// IMP=0x00100000000bc122
- (void)sessionProvider:(id)arg1 receivedInvitationDeclineFromID:(id)arg2 withData:(id)arg3;	// IMP=0x00100000000bc014
- (void)sessionProvider:(id)arg1 receivedInvitationCancelFromID:(id)arg2 withData:(id)arg3;	// IMP=0x00100000000bbf06
- (void)sessionProvider:(id)arg1 receivedInvitationAcceptFromID:(id)arg2 withData:(id)arg3;	// IMP=0x00100000000bbdf8
- (void)sessionProvider:(id)arg1 endedWithReason:(unsigned int)arg2 error:(id)arg3;	// IMP=0x00100000000bb8e9
- (void)sessionProvider:(id)arg1 invitationSentToPushTokens:(id)arg2 shouldBreakBeforeMake:(_Bool)arg3;	// IMP=0x00100000000bb79e
- (void)sessionProviderStarted:(id)arg1;	// IMP=0x00100000000bb61c
- (void)end;	// IMP=0x00100000000bb542
- (void)reconnectSession;	// IMP=0x00100000000bb47a
- (void)_declineInvitationWithData:(id)arg1 alwaysSendData:(_Bool)arg2;	// IMP=0x00100000000bb2e0
- (void)declineInvitation;	// IMP=0x00100000000bb23e
- (void)_cancelInvitationWithData:(id)arg1 reason:(int)arg2 alwaysSendData:(_Bool)arg3;	// IMP=0x00100000000baf9a
- (void)cancelInvitation;	// IMP=0x00100000000baef5
- (void)_acceptInvitationWithData:(id)arg1 alwaysSendData:(_Bool)arg2;	// IMP=0x00100000000bad5b
- (void)acceptInvitation;	// IMP=0x00100000000bacb9
- (void)_sendInvitationWithData:(id)arg1 declineOnError:(_Bool)arg2 alwaysSendData:(_Bool)arg3;	// IMP=0x00100000000bab26
- (void)sendInvitation;	// IMP=0x00100000000baa81
- (void)sendData:(id)arg1;	// IMP=0x00100000000ba8d9
@property(nonatomic) double invitationTimeout;
@property(readonly, nonatomic) CSDIDSTransport *transport;
- (void)setReceiverProtocolVersion:(int)arg1;	// IMP=0x00100000000ba56d
@property(readonly, nonatomic) int remoteProtocolVersion;
@property(readonly, nonatomic) long long underlyingErrorCode;
- (id)propertiesDescription;	// IMP=0x00100000000ba351
- (id)initAsReceiverWithSessionProvider:(id)arg1 remoteProtocolVersion:(int)arg2;	// IMP=0x00100000000ba2cd
- (id)initAsInitiatorWithSessionProvider:(id)arg1;	// IMP=0x00100000000ba2b3
- (id)initWithSessionProvider:(id)arg1 isInitiator:(_Bool)arg2 remoteProtocolVersion:(id)arg3;	// IMP=0x00100000000ba1b6
- (id)init;	// IMP=0x00100000000ba12c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
