//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVRemoteCore/NSObject-Protocol.h>

@class NSString, TVRMSPairingServer;

@protocol TVRMSPairingServerDelegate <NSObject>
- (void)pairingServerDidFail:(TVRMSPairingServer *)arg1;
- (void)pairingServer:(TVRMSPairingServer *)arg1 didPairWithService:(NSString *)arg2 pairingGUID:(NSString *)arg3;

@optional
- (void)pairingServer:(TVRMSPairingServer *)arg1 didFailToPairWithService:(NSString *)arg2;
@end
