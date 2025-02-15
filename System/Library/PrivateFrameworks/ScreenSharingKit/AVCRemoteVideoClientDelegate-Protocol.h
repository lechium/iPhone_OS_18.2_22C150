//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ScreenSharingKit/NSObject-Protocol.h>

@class AVCRemoteVideoClient, NSDictionary, VideoAttributes;

@protocol AVCRemoteVideoClientDelegate <NSObject>

@optional
- (void)remoteVideoClient:(AVCRemoteVideoClient *)arg1 remoteVideoAttributesDidChange:(VideoAttributes *)arg2;
- (void)remoteVideoClient:(AVCRemoteVideoClient *)arg1 remoteScreenAttributesDidChange:(VideoAttributes *)arg2;
- (void)remoteVideoServerDidDie:(AVCRemoteVideoClient *)arg1;
- (void)remoteVideoClientDidReceiveLastFrame:(AVCRemoteVideoClient *)arg1;
- (void)remoteVideoClient:(AVCRemoteVideoClient *)arg1 videoDidSuspend:(_Bool)arg2;
- (void)remoteVideoClient:(AVCRemoteVideoClient *)arg1 networkQualityDidDegrade:(_Bool)arg2 info:(NSDictionary *)arg3;
- (void)remoteVideoClient:(AVCRemoteVideoClient *)arg1 videoDidDegrade:(_Bool)arg2;
- (void)remoteVideoClient:(AVCRemoteVideoClient *)arg1 remoteMediaDidStall:(_Bool)arg2;
- (void)remoteVideoClient:(AVCRemoteVideoClient *)arg1 remoteVideoDidPause:(_Bool)arg2;
- (void)remoteVideoClientDidReceiveFirstFrame:(AVCRemoteVideoClient *)arg1;
@end

