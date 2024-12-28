//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICDelegateAccountStoreOptions, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ICDelegateAccountStoreXPCWriter : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    ICDelegateAccountStoreOptions *_accountStoreOptions;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 24 = 0x18
    NSXPCConnection *_connection;	// 32 = 0x20
    CDUnknownBlockType _externalChangeHandler;	// 40 = 0x28
    _Bool _hasReceivedConnectionInvalidation;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000011959b
- (void)_getXPCConnectionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000011950e
- (id)_onceWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000119446
- (void)recreateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001193b8
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000119326
- (void)invalidate;	// IMP=0x00000000001192db
@property(copy, nonatomic) CDUnknownBlockType externalChangeHandler; // @synthesize externalChangeHandler=_externalChangeHandler;
- (void)delegateAccountStoreDidChange;	// IMP=0x0000000000119102
- (void)setToken:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000011901d
- (void)setIdentityProperties:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000118f38
- (void)removeTokensExpiringBeforeDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000118e7e
- (void)removeTokenForUserIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000118dc4
- (void)removeIdentityPropertiesForUserIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000118d0a
- (void)removeDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000118c25
- (void)removeAllTokensWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000118b93
- (void)addDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000118aae
- (void)dealloc;	// IMP=0x0000000000118a6c
- (id)initWithAccountStoreOptions:(id)arg1;	// IMP=0x0000000000118943

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
