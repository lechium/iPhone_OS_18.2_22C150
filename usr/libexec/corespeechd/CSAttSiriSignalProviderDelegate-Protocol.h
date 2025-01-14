//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CSAttSiriSignalProvider, CSAudioChunk;

@protocol CSAttSiriSignalProviderDelegate <NSObject>

@optional
- (void)attSiriSignalProvider:(CSAttSiriSignalProvider *)arg1 silenceFramesCountMs:(double)arg2 silenceProbability:(double)arg3 silenceDurationMs:(double)arg4 processedAudioMs:(double)arg5 deviceHasBoronEnabled:(_Bool)arg6 latestBoronActiveSampleCount:(long long)arg7;
- (void)attSiriSignalProvider:(CSAttSiriSignalProvider *)arg1 audioBufferAvailable:(CSAudioChunk *)arg2;
- (void)attSiriSignalProviderDidStopUnexpectedly;
@end

