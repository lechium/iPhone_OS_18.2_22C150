//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayerHost.h>

@class AVCRemoteVideoClient;

__attribute__((visibility("hidden")))
@interface VCCALayerHost : CALayerHost
{
    AVCRemoteVideoClient *remoteVideoClient;	// 8 = 0x8
}

- (void)layoutSublayers;	// IMP=0x000000000047d8e5
- (id)initWithRemoteVideoClient:(id)arg1;	// IMP=0x000000000047d87e

@end

