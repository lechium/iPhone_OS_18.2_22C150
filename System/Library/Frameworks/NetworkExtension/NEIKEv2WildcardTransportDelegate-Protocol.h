//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NetworkExtension/NSObject-Protocol.h>

@class NEIKEv2Packet, NEIKEv2Transport;

@protocol NEIKEv2WildcardTransportDelegate <NSObject>
- (void)invalidatingTransport:(NEIKEv2Transport *)arg1;
- (void)receivePacket:(NEIKEv2Packet *)arg1 transport:(NEIKEv2Transport *)arg2;
@end
