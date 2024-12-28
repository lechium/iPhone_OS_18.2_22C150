//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSClientXPCConnection, CSManualDuckingHandler, NSString;
@protocol CSAudioSessionProviding;

@interface CSAudioSessionProvidingProxy : NSObject
{
    id <CSAudioSessionProviding> _audioSessionProvider;	// 8 = 0x8
    CSClientXPCConnection *_xpcConnection;	// 16 = 0x10
    unsigned long long _streamClientType;	// 24 = 0x18
    CSManualDuckingHandler *_manualDuckingHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000f9367
@property(retain, nonatomic) CSManualDuckingHandler *manualDuckingHandler; // @synthesize manualDuckingHandler=_manualDuckingHandler;
@property(nonatomic) unsigned long long streamClientType; // @synthesize streamClientType=_streamClientType;
@property(nonatomic) __weak CSClientXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain, nonatomic) id <CSAudioSessionProviding> audioSessionProvider; // @synthesize audioSessionProvider=_audioSessionProvider;
- (void)_sendDelegateMessageToClient:(id)arg1;	// IMP=0x00100000000f91ff
- (void)audioSessionProvider:(id)arg1 didChangeContext:(_Bool)arg2;	// IMP=0x00100000000f9151
- (void)audioSessionProvider:(id)arg1 providerInvalidated:(_Bool)arg2;	// IMP=0x00100000000f9056
- (void)audioSessionProvider:(id)arg1 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(id)arg2;	// IMP=0x00100000000f8f72
- (void)audioSessionProvider:(id)arg1 didReceiveAudioSessionMediaServicesWereLostNotificationWithUserInfo:(id)arg2;	// IMP=0x00100000000f8e8e
- (void)audioSessionProvider:(id)arg1 didReceiveAudioSessionRouteChangeNotificationWithUserInfo:(id)arg2;	// IMP=0x00100000000f8daa
- (void)audioSessionProvider:(id)arg1 didReceiveAudioSessionInterruptionNotificationWithUserInfo:(id)arg2;	// IMP=0x00100000000f8cc6
- (void)audioSessionProvider:(id)arg1 didSetAudioSessionActive:(_Bool)arg2;	// IMP=0x00100000000f8c0a
- (void)audioSessionProvider:(id)arg1 willSetAudioSessionActive:(_Bool)arg2;	// IMP=0x00100000000f8b4e
- (void)audioSessionProviderEndInterruption:(id)arg1;	// IMP=0x00100000000f8aba
- (void)audioSessionProviderBeginInterruption:(id)arg1 withContext:(id)arg2;	// IMP=0x00100000000f89d6
- (void)audioSessionProviderBeginInterruption:(id)arg1;	// IMP=0x00100000000f8942
- (void)_sendReplyMessageWithResult:(_Bool)arg1 error:(id)arg2 event:(id)arg3 client:(id)arg4;	// IMP=0x00100000000f884e
- (void)_handleSessionProvidingRequestTypeEnableSmartRoutingConsideration:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00100000000f8723
- (void)_handleSessionProvidingRequestTypeEnableMiniDucking:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00100000000f85f8
- (void)_handleSessionProvidingRequestTypeDuckDefaultOutputAudioDevice:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00100000000f84d1
- (void)_handleSessionProvidingRequestTypeDuckAudioDevice:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00100000000f8395
- (void)_handleSessionProvidingRequestTypeSetDuckOthersOption:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00100000000f827c
- (void)_handleSessionProvidingRequestTypeDeactivateMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00100000000f8007
- (void)_handleSessionProvidingRequestTypeActivateMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00100000000f7cee
- (void)_handleSessionProvidingRequestTypePrewarmMessage:(id)arg1 client:(id)arg2;	// IMP=0x00100000000f7b20
- (void)handleXPCMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00100000000f7906
- (void)dealloc;	// IMP=0x00100000000f7862
- (void)CSClientXPCConnectionReceivedClientError:(id)arg1 clientError:(id)arg2 client:(id)arg3;	// IMP=0x00100000000f76ed
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x00100000000f7685

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
