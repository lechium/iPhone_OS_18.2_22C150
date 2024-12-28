//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADSharedPeerStreamConnection, IDSDeviceConnection;
@protocol ADPeerStreamConnectionDelegate;

@interface ADPeerStreamConnection : NSObject
{
    ADSharedPeerStreamConnection *_sharedConnection;	// 8 = 0x8
    id <ADPeerStreamConnectionDelegate> _delegate;	// 16 = 0x10
    IDSDeviceConnection *_vendedDeviceConnection;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000e1b99
- (_Bool)hasNearbyPeer;	// IMP=0x00100000000e1b83
- (void)close;	// IMP=0x00100000000e1b4d
- (_Bool)peerSupportsExtendedHeader;	// IMP=0x00100000000e1b37
- (void)getAWDMetrics:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e1b21
- (void)getRemoteMetrics:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e1b0b
- (void)getLocalMetrics:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e19cf
- (void)getSocket:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e191b
- (id)initWithServiceIdentifier:(id)arg1 delegate:(id)arg2 listener:(_Bool)arg3;	// IMP=0x00100000000e1814

@end
