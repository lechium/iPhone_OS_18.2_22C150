//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;

@interface MapsXPCConnectionsManager : NSObject
{
    NSXPCConnection *_brokerConnection;	// 8 = 0x8
}

+ (id)sharedManager;	// IMP=0x0020000000c3aa35
- (void).cxx_destruct;	// IMP=0x0020000000c3b583
- (void)listenerEndpointDidChange:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x0010000000c3b350
- (void)_fetchListenerEndpoints;	// IMP=0x0010000000c3aeaf
- (void)_handleConnectionInvalidated;	// IMP=0x0010000000c3ad45
- (void)dealloc;	// IMP=0x0010000000c3ad03
- (id)init;	// IMP=0x0010000000c3aa8a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
