//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaRemote/MRIDSClientConnection.h>

@class MRAVRoutingDiscoverySessionConfiguration;

@interface MRDIDSServerClientConnection : MRIDSClientConnection
{
    MRAVRoutingDiscoverySessionConfiguration *_configuration;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000013755c
@property(retain, nonatomic) MRAVRoutingDiscoverySessionConfiguration *configuration; // @synthesize configuration=_configuration;
- (id)initWithConnection:(id)arg1 queue:(id)arg2;	// IMP=0x0010000000137508

@end
