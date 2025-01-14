//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AAAFoundation/AAFService.h>

@class AKClient, NSString;

@interface AKWalrusDaemonService : AAFService
{
    AKClient *_client;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000001f2bd
@property(readonly, nonatomic) AKClient *client; // @synthesize client=_client;
- (_Bool)shouldAcceptNewConnection:(id)arg1;	// IMP=0x001000000001f21d
- (void)postWalrusStateUpdateToServerWithContext:(id)arg1 urlBagKey:(id)arg2 username:(id)arg3 password:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000001ed31
- (void)verifyEnableWalrusAllowedWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001eaa4
- (void)removeAllPCSAuthCredentialWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000001ea04
- (void)PCSAuthContextForWebSessionIdentifier:(id)arg1 serviceName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001e7a5
- (void)configureExportedInterface:(id)arg1;	// IMP=0x001000000001e4e2
- (id)exportedProtocol;	// IMP=0x001000000001e4d1
- (id)exportedObject;	// IMP=0x001000000001e4c8
- (id)serviceName;	// IMP=0x001000000001e4b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

