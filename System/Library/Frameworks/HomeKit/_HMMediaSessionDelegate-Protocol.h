//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/NSObject-Protocol.h>

@class NSString, _HMMediaSession;

@protocol _HMMediaSessionDelegate <NSObject>
- (void)mediaSession:(_HMMediaSession *)arg1 didUpdateRouteUID:(NSString *)arg2;
- (void)mediaSessionDidUpdate:(_HMMediaSession *)arg1;
- (void)mediaSession:(_HMMediaSession *)arg1 didUpdatePlaybackState:(long long)arg2;
@end

