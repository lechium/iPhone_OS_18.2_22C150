//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, PKIDSService;
@protocol OS_dispatch_queue, PDAccessPassSharingIDSServiceDelegate;

@interface PDAccessPassSharingIDSService : NSObject
{
    id <PDAccessPassSharingIDSServiceDelegate> _delegate;	// 8 = 0x8
    PKIDSService *_service;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_internalQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_replyQueue;	// 32 = 0x20
    struct os_unfair_lock_s _lock;	// 40 = 0x28
    NSMutableDictionary *_messageIdentifierToEndpoint;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000003cf26e
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5 context:(id)arg6;	// IMP=0x00100000003cf0ce
- (void)prewarmEndpointCreationOfType:(unsigned long long)arg1 count:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000003cf0bb
- (void)universalShareURLForEndpoint:(id)arg1 urlDecoration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000003cf0a9
- (void)relinquishEndpoint:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003cf094
- (void)closeEndpoint:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003ceeb9
- (void)checkOutstandingMessagesOn:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003ceea7
- (void)_sendProtoMessageTo:(id)arg1 message:(id)arg2 type:(unsigned short)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000003ce84f
- (void)sendMessageTo:(id)arg1 message:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000003ce66c
- (void)pingEndpoint:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003ce657
@property(readonly, nonatomic) unsigned long long type;
- (void)_handleMessageReceived:(id)arg1 service:(id)arg2 fromID:(id)arg3 context:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00100000003ce343
- (void)_cancelMessageReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000003ce18e
- (void)_generalMessageReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000003cdeee
- (_Bool)isEndpoint:(id)arg1 forSameDeviceIn:(id)arg2;	// IMP=0x00100000003cd8be
- (id)resolveRemoteAddressForDeviceIdentifier:(id)arg1;	// IMP=0x00100000003cd851
- (void)remoteDeviceInformationForEndpoint:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003cd4dc
- (void)devicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000003cd3de
- (void)start;	// IMP=0x00100000003cd3d8
- (void)dealloc;	// IMP=0x00100000003cd393
- (id)initWithIDSSharingService:(id)arg1 delegate:(id)arg2;	// IMP=0x00100000003cd241
- (id)init;	// IMP=0x00100000003cd233

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
