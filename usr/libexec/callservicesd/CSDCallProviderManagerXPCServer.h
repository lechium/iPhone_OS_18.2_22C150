//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDCallProviderManager, CSDClientManager, NSString;
@protocol OS_dispatch_queue;

@interface CSDCallProviderManagerXPCServer : NSObject
{
    CSDClientManager *_clientManager;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    CSDCallProviderManager *_providerManager;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000008d53b
@property(readonly, nonatomic) CSDCallProviderManager *providerManager; // @synthesize providerManager=_providerManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) CSDClientManager *clientManager; // @synthesize clientManager=_clientManager;
- (void)providersChangedForProviderManager:(id)arg1;	// IMP=0x001000000008d366
- (void)unregisterClient:(id)arg1;	// IMP=0x001000000008d25d
- (void)registerClient:(id)arg1;	// IMP=0x001000000008d154
- (oneway void)defaultAppProvider:(CDUnknownBlockType)arg1;	// IMP=0x001000000008d00a
- (oneway void)sortedProviders:(CDUnknownBlockType)arg1;	// IMP=0x001000000008cec0
- (oneway void)launchAppForDialRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000008cd93
- (oneway void)donateUserIntentForProviderWithIdentifier:(id)arg1;	// IMP=0x001000000008cc86
- (oneway void)providersByIdentifier:(CDUnknownBlockType)arg1;	// IMP=0x001000000008cb60
- (id)pairedHostDeviceProvidersByIdentifierForClient:(id)arg1;	// IMP=0x001000000008caa6
- (id)localProvidersByIdentifierForClient:(id)arg1;	// IMP=0x001000000008c9ec
- (id)providersByIdentifierForClient:(id)arg1;	// IMP=0x001000000008c932
- (void)invalidate;	// IMP=0x001000000008c880
- (id)initWithProviderManager:(id)arg1;	// IMP=0x001000000008c2fe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
