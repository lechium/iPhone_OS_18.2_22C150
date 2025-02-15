//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriMessagesUI/NSObject-Protocol.h>

@class AVAudioPlayer, NSError;

@protocol AVAudioPlayerDelegate <NSObject>

@optional
- (void)audioPlayerEndInterruption:(AVAudioPlayer *)arg1;
- (void)audioPlayerEndInterruption:(AVAudioPlayer *)arg1 withFlags:(unsigned long long)arg2;
- (void)audioPlayerEndInterruption:(AVAudioPlayer *)arg1 withOptions:(unsigned long long)arg2;
- (void)audioPlayerBeginInterruption:(AVAudioPlayer *)arg1;
- (void)audioPlayerDecodeErrorDidOccur:(AVAudioPlayer *)arg1 error:(NSError *)arg2;
- (void)audioPlayerDidFinishPlaying:(AVAudioPlayer *)arg1 successfully:(_Bool)arg2;
@end

