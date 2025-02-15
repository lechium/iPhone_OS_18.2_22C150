//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WiFiPeerToPeer/NSObject-Protocol.h>

@class NSData, WiFiAwareDiscoveryResult, WiFiMACAddress;

@protocol WiFiAwareSubscriberXPCDelegate <NSObject>
- (void)subscribeReceivedMessage:(NSData *)arg1 fromPublishID:(unsigned char)arg2 address:(WiFiMACAddress *)arg3;
- (void)subscribeFailedToStartWithError:(long long)arg1;
- (void)subscribeLostDiscoveryResultForPublishID:(unsigned char)arg1 address:(WiFiMACAddress *)arg2;
- (void)subscribeReceivedDiscoveryResult:(WiFiAwareDiscoveryResult *)arg1;
- (void)subscribeTerminatedWithReason:(long long)arg1;
- (void)subscribeStartedWithInstanceID:(unsigned char)arg1;
@end

