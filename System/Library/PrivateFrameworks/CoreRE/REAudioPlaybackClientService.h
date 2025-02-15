//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection, _REAudioManagerCancellable;

__attribute__((visibility("hidden")))
@interface REAudioPlaybackClientService : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    struct atomic<unsigned long long> _connectionIdentifier;	// 16 = 0x10
    _REAudioManagerCancellable *_service;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000048db7d
@property(readonly) _Bool connected;
@property(readonly) unsigned long long connectionIdentifier;
- (void)receiveWorldTransformForExternalStream:(unsigned long long)arg1 transform:(id)arg2 listenerTransform:(id)arg3;	// IMP=0x000000000048d92c
- (void)receiveWorldTransformForSTSState:(id)arg1 transform:(id)arg2 globalState:(id)arg3;	// IMP=0x000000000048d82b
- (void)mediaServicesReset;	// IMP=0x000000000048d77f
- (void)mediaServicesLost;	// IMP=0x000000000048d6d3
- (void)streamToken:(unsigned long long)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x000000000048d66b
- (void)didReceiveConnectionIdentifier:(unsigned long long)arg1;	// IMP=0x000000000048d562
- (id)initWithXPCEndpoint:(id)arg1 queue:(id)arg2 service:(id)arg3;	// IMP=0x000000000048cfc2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

