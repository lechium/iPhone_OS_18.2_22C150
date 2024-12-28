//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class Context, NSString;
@protocol LAContextCallbackXPC;

@interface ContextProxy : NSObject
{
    CDUnknownBlockType _invalidationBlock;	// 8 = 0x8
    CDUnknownBlockType _checkEntitlementBlock;	// 16 = 0x10
    unsigned int _clientId;	// 24 = 0x18
    _Bool;	// 28 = 0x1c
    int _processId;	// 32 = 0x20
    unsigned int _userId;	// 36 = 0x24
    int _auditSessionId;	// 40 = 0x28
    id <LAContextCallbackXPC> _callback;	// 48 = 0x30
    unsigned long long _originatorId;	// 56 = 0x38
    Context *_managedContext;	// 64 = 0x40
    NSString *_proxyId;	// 72 = 0x48
    CDStruct_4c969caf _auditToken;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000000e98c
@property(readonly, nonatomic) NSString *proxyId; // @synthesize proxyId=_proxyId;
@property(readonly, nonatomic) Context *managedContext; // @synthesize managedContext=_managedContext;
@property(readonly, nonatomic) unsigned long long originatorId; // @synthesize originatorId=_originatorId;
@property(readonly, nonatomic) id <LAContextCallbackXPC> callback; // @synthesize callback=_callback;
@property(readonly, nonatomic) CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
@property(readonly, nonatomic) int auditSessionId; // @synthesize auditSessionId=_auditSessionId;
@property(readonly, nonatomic) unsigned int userId; // @synthesize userId=_userId;
@property(readonly, nonatomic) int processId; // @synthesize processId=_processId;
@property(readonly, nonatomic) _Bool cApiOrigin; // @synthesize cApiOrigin=_cApiOrigin;
- (void)invalidateWithError:(id)arg1;	// IMP=0x001000000000e8e3
- (_Bool)checkEntitlement:(id)arg1;	// IMP=0x001000000000e8d1
- (void)evaluateACL:(id)arg1 cfOperation:(void *)arg2 options:(id)arg3 uiDelegate:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000000e8b6
- (void)evaluateACL:(id)arg1 operation:(id)arg2 options:(id)arg3 uiDelegate:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000000e89b
- (void)evaluatePolicy:(long long)arg1 options:(id)arg2 uiDelegate:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000000e879
- (void)getDomainStateWithOptions:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000e861
- (void)tokenForTransferToUnknownProcess:(CDUnknownBlockType)arg1;	// IMP=0x001000000000e58b
- (void)allowTransferToProcess:(int)arg1 receiverAuditTokenData:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000000e29e
- (void)verifyFileVaultUser:(id)arg1 volumeUuid:(id)arg2 options:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000000dfb7
- (void)authMethodWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000000dcea
- (void)externalizedContextWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000000da38
- (void)setServerPropertyForOption:(long long)arg1 value:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000000d78c
- (void)serverPropertyForOption:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000d4f4
- (void)setOptions:(id)arg1 forInternalOperation:(long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000000d22c
- (void)optionsForInternalOperation:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000cf44
- (void)credentialOfType:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000cc8a
- (void)invalidateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000000ca5d
- (void)setCredential:(id)arg1 type:(long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000000c72f
- (void)isCredentialSet:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000c4a5
- (void)setCredential:(id)arg1 forProcessedEvent:(long long)arg2 credentialType:(long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000000c18c
- (void)setShowingCoachingHint:(_Bool)arg1 event:(long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000000be8b
- (void)pauseProcessedEvent:(long long)arg1 pause:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000000bba2
- (void)resetProcessedEvent:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000b8c2
- (void)retryProcessedEvent:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000b5e2
- (void)failProcessedEvent:(long long)arg1 failureError:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000000b2d5
- (_Bool)_isPreflightOnCleanContext:(id)arg1;	// IMP=0x001000000000b13b
- (void)_evaluateRequest:(id)arg1 originator:(id)arg2 preflightKey:(id)arg3 uiDelegate:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000000a9fa
- (void)evaluateACL:(id)arg1 operation:(id)arg2 options:(id)arg3 uiDelegate:(id)arg4 originator:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x001000000000a3c5
- (void)evaluatePolicy:(long long)arg1 options:(id)arg2 uiDelegate:(id)arg3 originator:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000009c5c
- (void)getDomainStateWithOptions:(id)arg1 originator:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000009805
@property(readonly, copy) NSString *description;
- (void)interruptWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000000093d6
- (void)dealloc;	// IMP=0x0010000000009313
- (id)initWithContext:(id)arg1 processId:(int)arg2 userId:(unsigned int)arg3 auditSessionId:(int)arg4 auditToken:(CDStruct_4c969caf)arg5 cApiOrigin:(_Bool)arg6 checkEntitlementBlock:(CDUnknownBlockType)arg7 invalidationBlock:(CDUnknownBlockType)arg8 callback:(id)arg9 clientId:(unsigned long long)arg10;	// IMP=0x0010000000008ffb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
