//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/NSObject-Protocol.h>

@class NSString;

@protocol VCRemoteVideoManagerDelegate <NSObject>
- (void)networkQualityDidDegrade:(_Bool)arg1 isLocalNetworkQualityDegraded:(_Bool)arg2 streamToken:(long long)arg3;
- (void)connectionDidChangeWithLocalInterfaceType:(NSString *)arg1 remoteInterfaceType:(NSString *)arg2 streamToken:(long long)arg3;
- (void)releaseQueueForStreamToken:(long long)arg1;
- (void)remoteVideoDidSuspend:(_Bool)arg1 streamToken:(long long)arg2;
- (void)remoteVideoDidDegrade:(_Bool)arg1 streamToken:(long long)arg2;
- (void)remoteMediaDidStall:(_Bool)arg1 streamToken:(long long)arg2;
- (void)remoteVideoDidPause:(_Bool)arg1 streamToken:(long long)arg2;

@optional
- (void)remoteVideoServerDidDie;
@end

