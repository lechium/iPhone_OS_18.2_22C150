//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;
@protocol BCSXPCDaemonBusinessEmailClientInterface, BCSXPCDaemonProtocol;

__attribute__((visibility("hidden")))
@interface BCSXPCDaemonConnection : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    id <BCSXPCDaemonBusinessEmailClientInterface> _exportedClient;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000025b71
- (void)resume;	// IMP=0x0000000000025b52
- (void)setExportedClient:(id)arg1;	// IMP=0x0000000000025b41
@property(readonly, retain) id <BCSXPCDaemonProtocol> remoteObjectProxy;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000025b03

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
