//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DashBoard/NSObject-Protocol.h>

@class DBApplication, DBNowPlayingObserver;

@protocol DBNowPlayingDelegate <NSObject>

@optional
- (void)nowPlayingObserver:(DBNowPlayingObserver *)arg1 didUpdatePlaybackState:(_Bool)arg2 inApplication:(DBApplication *)arg3;
- (void)nowPlayingObserver:(DBNowPlayingObserver *)arg1 didChangeNowPlayingApplication:(DBApplication *)arg2;
@end

