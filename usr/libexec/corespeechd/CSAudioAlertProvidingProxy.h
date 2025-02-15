//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSClientXPCConnection, NSString;
@protocol CSAudioAlertProviding;

@interface CSAudioAlertProvidingProxy : NSObject
{
    id <CSAudioAlertProviding> _audioAlertProvider;	// 8 = 0x8
    CSClientXPCConnection *_xpcConnection;	// 16 = 0x10
    unsigned long long _streamClientType;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000fbdda
@property(nonatomic) unsigned long long streamClientType; // @synthesize streamClientType=_streamClientType;
@property(nonatomic) __weak CSClientXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(nonatomic) __weak id <CSAudioAlertProviding> audioAlertProvider; // @synthesize audioAlertProvider=_audioAlertProvider;
- (void)_sendDelegateMessageToClient:(id)arg1;	// IMP=0x00100000000fbc81
- (void)audioAlertProvidingDidFinishAlertPlayback:(id)arg1 ofType:(long long)arg2 error:(id)arg3;	// IMP=0x00100000000fbadd
- (void)_sendReplyMessageWithResult:(_Bool)arg1 event:(id)arg2 client:(id)arg3;	// IMP=0x00100000000fba7a
- (void)_handleAlertProvidingRequestTypeConfigureAlertBehavior:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00100000000fb889
- (void)_handleAlertProvidingRequestTypeAlertStartTimeMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00100000000fb69f
- (void)_handleAlertProvidingRequestTypePlayRecordStartingAlertAndResetEndpointerMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00100000000fb4bc
- (void)_handleAlertProvidingRequestTypePlayAlertSoundMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00100000000fb2b5
- (void)_handleAlertProvidingRequestTypeSetAlertSoundMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00100000000fafd8
- (void)handleXPCMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00100000000fae0e
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x00100000000fada6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

