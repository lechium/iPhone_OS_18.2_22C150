//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WiFiPeerToPeer/NSObject-Protocol.h>

@class NSData, WiFiAwarePublishDatapathServiceSpecificInfo, WiFiAwarePublishServiceSpecificInfo, WiFiAwarePublisherDataSessionHandle, WiFiMACAddress;

@protocol WiFiAwarePublisherXPCDelegate <NSObject>
- (void)publishPairingRequestIndicatedBySubscriber:(WiFiAwarePublishServiceSpecificInfo *)arg1 withPairingMethod:(long long)arg2 pairingAuthenticationGeneratedCompletionHandler:(void (^)(NSData *))arg3;
- (void)publishDataTerminatedForHandle:(WiFiAwarePublisherDataSessionHandle *)arg1 reason:(long long)arg2;
- (void)publishDataConfirmedForHandle:(WiFiAwarePublisherDataSessionHandle *)arg1 localInterfaceIndex:(unsigned int)arg2 serviceSpecificInfo:(WiFiAwarePublishDatapathServiceSpecificInfo *)arg3;
- (void)publishReceivedMessage:(NSData *)arg1 fromSubscriberID:(unsigned char)arg2 subscriberAddress:(WiFiMACAddress *)arg3;
- (void)publishTerminatedWithReason:(long long)arg1;
- (void)publishFailedToStartWithError:(long long)arg1;
- (void)publishStartedWithInstanceID:(unsigned char)arg1;
@end

