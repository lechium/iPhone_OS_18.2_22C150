//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SNNetworkManager;

@protocol SNNetworkManagerObserver
- (void)networkManagerNetworkUnreachable:(SNNetworkManager *)arg1;
- (void)networkManagerLostNonWWANConnectivity:(SNNetworkManager *)arg1;
- (void)networkManagerNonWWANDidBecomeAvailable:(SNNetworkManager *)arg1;
@end
