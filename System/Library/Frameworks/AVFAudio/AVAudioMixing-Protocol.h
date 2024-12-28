//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFAudio/AVAudio3DMixing-Protocol.h>
#import <AVFAudio/AVAudioStereoMixing-Protocol.h>

@class AVAudioMixingDestination, AVAudioNode;

@protocol AVAudioMixing <AVAudioStereoMixing, AVAudio3DMixing>
@property(nonatomic) float volume;
- (AVAudioMixingDestination *)destinationForMixer:(AVAudioNode *)arg1 bus:(unsigned long long)arg2;
@end
