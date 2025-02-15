//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSService, NSMutableDictionary, NSString;

@interface SDUnlockTransport : NSObject
{
    IDSService *_autoUnlockService;	// 8 = 0x8
    NSMutableDictionary *_completionHandlersByMessageIdentifier;	// 16 = 0x10
    NSMutableDictionary *_sendDatesByMessageIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000001d0505
@property(readonly, copy, nonatomic) NSMutableDictionary *sendDatesByMessageIdentifier; // @synthesize sendDatesByMessageIdentifier=_sendDatesByMessageIdentifier;
@property(readonly, copy, nonatomic) NSMutableDictionary *completionHandlersByMessageIdentifier; // @synthesize completionHandlersByMessageIdentifier=_completionHandlersByMessageIdentifier;
@property(readonly, nonatomic) IDSService *autoUnlockService; // @synthesize autoUnlockService=_autoUnlockService;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x00100000001d025a
- (void)updateSendOptions:(id)arg1;	// IMP=0x00100000001d0254
- (void)handleSuccessfulMessageSentWithIdentifier:(id)arg1 sessionID:(id)arg2;	// IMP=0x00100000001d024e
- (id)sendAutoUnlockPayload:(id)arg1 toDevice:(id)arg2 type:(unsigned short)arg3 sessionID:(id)arg4 queueOneID:(id)arg5 timeout:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00100000001cfb2a
- (id)idsDeviceForUniqueID:(id)arg1;	// IMP=0x00100000001cf931
- (id)activeDevice;	// IMP=0x00100000001cf7b4
- (id)transferDataFromPayload:(id)arg1 sessionID:(id)arg2;	// IMP=0x00100000001cf6cc
- (id)dataFromUUID:(id)arg1;	// IMP=0x00100000001cf64c
- (id)init;	// IMP=0x00100000001cf5b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

