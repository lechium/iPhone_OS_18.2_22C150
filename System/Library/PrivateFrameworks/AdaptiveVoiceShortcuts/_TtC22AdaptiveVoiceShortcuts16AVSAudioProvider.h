//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC22AdaptiveVoiceShortcuts16AVSAudioProvider : _TtCs12_SwiftObject
{
    MISSING_TYPE *audioEngine;	// 16 = 0x10
    MISSING_TYPE *audioSession;	// 24 = 0x18
    MISSING_TYPE *inputNode;	// 32 = 0x20
    MISSING_TYPE *delegate;	// 40 = 0x28
    MISSING_TYPE *isListening;	// 80 = 0x50
    MISSING_TYPE *audioSessionSubscribed;	// 81 = 0x51
    MISSING_TYPE *audioSessionResetSubscribed;	// 82 = 0x52
}

- (void)handleAudioSessionResetWithNotification:(id)arg1;	// IMP=0x0000000000020940
- (void)handleAudioSessionInterruptionWithNotification:(id)arg1;	// IMP=0x0000000000020500

@end

