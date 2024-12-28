//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAudioPCMBuffer, TTSSiriSynthWrapper;

@protocol TTSSiriSynthWrapperDelegate
- (void)siriDidEndSynthesis:(TTSSiriSynthWrapper *)arg1 successfully:(_Bool)arg2;
- (void)siri:(TTSSiriSynthWrapper *)arg1 didGenerateMarkers:(const struct SiriTTSMarker *)arg2 count:(unsigned long long)arg3;
- (void)siri:(TTSSiriSynthWrapper *)arg1 didGenerateBuffer:(AVAudioPCMBuffer *)arg2;
- (void)siriDidStartSynthesis:(TTSSiriSynthWrapper *)arg1;
@end
