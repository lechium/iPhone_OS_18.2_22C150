//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AXSoundDetectionUI/NSObject-Protocol.h>

@class AVAudioFile, AVAudioFormat, AVAudioPCMBuffer, AVAudioTime, NSError;

@protocol AXSDListenEngineDelegate <NSObject>
- (void)listenEngineFailedToStartWithError:(NSError *)arg1;
- (void)listenEngineDidStartWithInputFormat:(AVAudioFormat *)arg1;
- (void)receivedBuffer:(AVAudioPCMBuffer *)arg1 atTime:(AVAudioTime *)arg2;

@optional
- (void)listenEngineEncounteredError:(NSError *)arg1;
- (void)receivedBuffer:(AVAudioPCMBuffer *)arg1 atTime:(AVAudioTime *)arg2 isFile:(_Bool)arg3;
- (void)listenEngineFinishedAudioFile:(AVAudioFile *)arg1;
- (void)listenEngineReceivedAudioFile:(AVAudioFile *)arg1;
@end
