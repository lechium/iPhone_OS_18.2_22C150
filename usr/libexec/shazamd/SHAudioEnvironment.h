//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioSession;

@interface SHAudioEnvironment : NSObject
{
    AVAudioSession *_audioSession;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000040f6f
@property(retain, nonatomic) AVAudioSession *audioSession; // @synthesize audioSession=_audioSession;
@property(readonly, nonatomic) _Bool isOtherAudioPlaying;
@property(readonly, nonatomic) _Bool isUsingAlternativeOutputToBuiltInSpeaker;
- (id)init;	// IMP=0x0010000000040cb8

@end

