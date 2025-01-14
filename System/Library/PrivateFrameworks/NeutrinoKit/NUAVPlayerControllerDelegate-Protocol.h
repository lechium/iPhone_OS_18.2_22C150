//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NeutrinoKit/NSObject-Protocol.h>

@class NSError, NUAVPlayerController;

@protocol NUAVPlayerControllerDelegate <NSObject>
- (void)playerController:(NUAVPlayerController *)arg1 didUpdateElapsedTime:(double)arg2 duration:(double)arg3;
- (void)playerControllerFailedToPlayToEnd:(NUAVPlayerController *)arg1 error:(NSError *)arg2;
- (void)playerControllerDidFinishPlaying:(NUAVPlayerController *)arg1 duration:(double)arg2;
- (void)playerControllerIsReadyForPlayback:(NUAVPlayerController *)arg1;
@end

