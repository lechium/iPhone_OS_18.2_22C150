//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVOutputContext, MRDMRRelayConnectionManager, NSMapTable, NSString;
@protocol MRDAirPlayRemoteControlServiceDelegate, OS_dispatch_queue;

@interface MRDAirPlayRemoteControlService : NSObject
{
    AVOutputContext *_systemMusicContext;	// 8 = 0x8
    _Bool _started;	// 16 = 0x10
    NSMapTable *_connections;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workerQueue;	// 32 = 0x20
    MRDMRRelayConnectionManager *_mrRelayConnectionManager;	// 40 = 0x28
    id <MRDAirPlayRemoteControlServiceDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000012cc07
@property(nonatomic) __weak id <MRDAirPlayRemoteControlServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleNewConnection:(id)arg1 forServiceType:(long long)arg2;	// IMP=0x001000000012cb37
- (void)_didCloseCommunicationChannel:(id)arg1 error:(id)arg2;	// IMP=0x001000000012ca74
- (void)_didReceiveData:(id)arg1 fromCommunicationChannel:(id)arg2 connectionFactory:(CDUnknownBlockType)arg3;	// IMP=0x001000000012c55e
- (void)failedToSetupReverseCommunicationChannel:(id)arg1;	// IMP=0x001000000012c558
- (void)didSetupReverseCommunicationChannel:(id)arg1;	// IMP=0x001000000012c552
- (void)didCloseCommunicationChannel:(id)arg1;	// IMP=0x001000000012c461
- (void)didReceiveData:(id)arg1 fromCommunicationChannel:(id)arg2;	// IMP=0x001000000012c2f5
- (void)outputContext:(id)arg1 didCloseCommunicationChannel:(id)arg2;	// IMP=0x001000000012c204
- (void)outputContext:(id)arg1 didReceiveData:(id)arg2 fromCommunicationChannel:(id)arg3;	// IMP=0x001000000012c02f
- (void)startContext:(id)arg1;	// IMP=0x001000000012c014
- (void)stop;	// IMP=0x001000000012bf3a
- (void)start;	// IMP=0x001000000012bdee
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

- (void)dealloc;	// IMP=0x001000000012bb58
- (id)init;	// IMP=0x001000000012ba7b

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

