//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRApplicationConnectionContext, MRDMediaRemoteClient, MRExternalDevice, MRPlayerPath, NSMutableArray, NSString;

@interface MRDApplicationConnection : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    MRApplicationConnectionContext *_context;	// 16 = 0x10
    unsigned long long _type;	// 24 = 0x18
    CDUnknownBlockType _serverBoundMessageHandler;	// 32 = 0x20
    CDUnknownBlockType _clientBoundMessageHandler;	// 40 = 0x28
    NSMutableArray *_pendingMessages;	// 48 = 0x30
    unsigned long long _state;	// 56 = 0x38
    MRDMediaRemoteClient *_invalidationXPCClient;	// 64 = 0x40
    MRExternalDevice *_invalidationExternalDevice;	// 72 = 0x48
    MRPlayerPath *_invalidationPlayerPath;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000163026
@property(retain, nonatomic) MRPlayerPath *invalidationPlayerPath; // @synthesize invalidationPlayerPath=_invalidationPlayerPath;
@property(retain, nonatomic) MRExternalDevice *invalidationExternalDevice; // @synthesize invalidationExternalDevice=_invalidationExternalDevice;
@property(retain, nonatomic) MRDMediaRemoteClient *invalidationXPCClient; // @synthesize invalidationXPCClient=_invalidationXPCClient;
@property(readonly, nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSMutableArray *pendingMessages; // @synthesize pendingMessages=_pendingMessages;
@property(copy, nonatomic) CDUnknownBlockType clientBoundMessageHandler; // @synthesize clientBoundMessageHandler=_clientBoundMessageHandler;
@property(copy, nonatomic) CDUnknownBlockType serverBoundMessageHandler; // @synthesize serverBoundMessageHandler=_serverBoundMessageHandler;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) MRApplicationConnectionContext *context; // @synthesize context=_context;
- (void)handlePlayerInvalidation:(id)arg1;	// IMP=0x0010000000162dd9
- (void)handleClientInvalidation:(id)arg1;	// IMP=0x0010000000162c61
- (void)handleRemoteExternalDeviceInvalidation:(id)arg1;	// IMP=0x0010000000162bcc
- (void)handleXPCClientInvalidation:(id)arg1;	// IMP=0x0010000000162b74
- (id)installInvalidationObserversAndCheckForPostActivationInvalidations;	// IMP=0x0010000000162801
- (void)setLocalInvalidationXPCClient:(id)arg1;	// IMP=0x00100000001627bc
- (void)setLocalHostedInvalidationPlayerPath:(id)arg1;	// IMP=0x0010000000162777
- (void)setRemoteInvalidationExternalDevice:(id)arg1;	// IMP=0x0010000000162732
- (void)invalidate:(id)arg1;	// IMP=0x0010000000162319
- (void);	// IMP=0x0010000000161fe7
- (void)handleClientBoundMessage:(id)arg1;	// IMP=0x0010000000161ef0
- (void)handleServerBoundMessage:(id)arg1;	// IMP=0x0010000000161d57
@property(readonly, nonatomic) NSString *identifier;
- (void)dealloc;	// IMP=0x0010000000161c93
- (id)initWithContext:(id)arg1;	// IMP=0x0010000000161c20

@end
