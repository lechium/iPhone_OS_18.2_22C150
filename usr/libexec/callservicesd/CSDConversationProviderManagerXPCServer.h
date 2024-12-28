//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDClientManager, CSDConversationProviderManager, NSString, TUConversationManager;
@protocol OS_dispatch_queue, TUFeatureFlags;

@interface CSDConversationProviderManagerXPCServer : NSObject
{
    int _clientsShouldConnectToken;	// 8 = 0x8
    id <TUFeatureFlags> _featureFlags;	// 16 = 0x10
    TUConversationManager *_conversationManager;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    CSDConversationProviderManager *_providerManager;	// 40 = 0x28
    CSDClientManager *_clientManager;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000008bdbc
@property(nonatomic) int clientsShouldConnectToken; // @synthesize clientsShouldConnectToken=_clientsShouldConnectToken;
@property(readonly, nonatomic) CSDClientManager *clientManager; // @synthesize clientManager=_clientManager;
@property(readonly, nonatomic) CSDConversationProviderManager *providerManager; // @synthesize providerManager=_providerManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (oneway void)registerConversationProvider:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008ba3b
- (oneway void)registerForCallbacksForProvider:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008b8cd
- (oneway void)doesHandle:(id)arg1 correspondToConversationProvider:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000008b6e0
- (oneway void)revokePseudonymHandle:(id)arg1 forConversationProvider:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000008b4f3
- (oneway void)renewPseudonymHandle:(id)arg1 forConversationProvider:(id)arg2 expirationDate:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000008b2cb
- (oneway void)generatePseudonymHandleForConversationProvider:(id)arg1 expiryDuration:(double)arg2 URI:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000008b0b4
- (oneway void)conversationProviderForIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008aec4
- (void)unregisterClient:(id)arg1;	// IMP=0x001000000008adbb
- (void)registerClient:(id)arg1;	// IMP=0x001000000008acb2
@property(readonly, nonatomic) TUConversationManager *conversationManager; // @synthesize conversationManager=_conversationManager;
@property(readonly, nonatomic) id <TUFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
- (void)notifyClientsToConnectIfNecessary;	// IMP=0x001000000008ab94
- (void)invalidate;	// IMP=0x001000000008aa8b
- (void)dealloc;	// IMP=0x001000000008a9ff
- (id)initWithConversationProviderManager:(id)arg1;	// IMP=0x001000000008a02e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
