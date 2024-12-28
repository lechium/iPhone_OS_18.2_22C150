//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibrary/NSObject-Protocol.h>

@class PLVideoView;

@protocol PLVideoViewDelegate <NSObject>

@optional
- (_Bool)videoViewCanCreateMetadata:(PLVideoView *)arg1;
- (void)videoViewDidEndPlayback:(PLVideoView *)arg1 didFinish:(_Bool)arg2;
- (void)videoViewDidPausePlayback:(PLVideoView *)arg1;
- (void)videoViewDidBeginPlayback:(PLVideoView *)arg1;
- (void)videoViewPlaybackDidFail:(PLVideoView *)arg1;
- (void)videoViewIsReadyToBeginPlayback:(PLVideoView *)arg1;
- (_Bool)videoViewCanBeginPlayback:(PLVideoView *)arg1;
- (double)videoViewScrubberYOrigin:(PLVideoView *)arg1 forOrientation:(long long)arg2;
@end
