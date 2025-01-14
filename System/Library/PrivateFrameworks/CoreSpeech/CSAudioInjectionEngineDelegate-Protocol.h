//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class CSAudioChunkForTV, CSAudioInjectionEngine, NSData, NSError;

@protocol CSAudioInjectionEngineDelegate <NSObject>
- (void)audioEngineAudioChunkForTvAvailable:(CSAudioInjectionEngine *)arg1 audioChunk:(CSAudioChunkForTV *)arg2;
- (void)audioEngineBufferAvailable:(CSAudioInjectionEngine *)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(NSData *)arg3 remoteVAD:(NSData *)arg4 atTime:(unsigned long long)arg5 isFileLoadedBuffer:(_Bool)arg6;
- (void)audioEngineDidStopRecord:(CSAudioInjectionEngine *)arg1 audioStreamHandleId:(unsigned long long)arg2 reason:(unsigned long long)arg3;
- (void)audioEngineDidStartRecord:(CSAudioInjectionEngine *)arg1 audioStreamHandleId:(unsigned long long)arg2 successfully:(_Bool)arg3 error:(NSError *)arg4;
@end

