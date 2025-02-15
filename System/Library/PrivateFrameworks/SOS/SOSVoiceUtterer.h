//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVSpeechSynthesizer, NSArray, NSString;
@protocol SOSVoiceUttererDelegate;

__attribute__((visibility("hidden")))
@interface SOSVoiceUtterer : NSObject
{
    _Bool _mixToTelephonyUplink;	// 8 = 0x8
    id <SOSVoiceUttererDelegate> _delegate;	// 16 = 0x10
    AVSpeechSynthesizer *_voiceSynthesizer;	// 24 = 0x18
    NSArray *_sosUtterancesBeingSpoken;	// 32 = 0x20
    NSArray *_avUtterancesBeingSpoken;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000002b3ee
@property(retain, nonatomic) NSArray *avUtterancesBeingSpoken; // @synthesize avUtterancesBeingSpoken=_avUtterancesBeingSpoken;
@property(retain, nonatomic) NSArray *sosUtterancesBeingSpoken; // @synthesize sosUtterancesBeingSpoken=_sosUtterancesBeingSpoken;
@property(retain, nonatomic) AVSpeechSynthesizer *voiceSynthesizer; // @synthesize voiceSynthesizer=_voiceSynthesizer;
@property(nonatomic) _Bool mixToTelephonyUplink; // @synthesize mixToTelephonyUplink=_mixToTelephonyUplink;
@property(nonatomic) __weak id <SOSVoiceUttererDelegate> delegate; // @synthesize delegate=_delegate;
- (void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2;	// IMP=0x000000000002b023
@property(readonly, copy) NSString *description;
- (id)routeDescription;	// IMP=0x000000000002af68
- (void)_speakUtteranceAtIndex:(unsigned long long)arg1;	// IMP=0x000000000002ad78
- (void)_speakAVUtterance:(id)arg1;	// IMP=0x000000000002ac68
@property(readonly, nonatomic, getter=isSpeaking) _Bool speaking;
- (void)_forgetUtterancesBeingSpoken;	// IMP=0x000000000002ab79
- (void)stopSpeaking;	// IMP=0x000000000002aa9f
- (void)speakUtterances:(id)arg1;	// IMP=0x000000000002a7bf
- (void)dealloc;	// IMP=0x000000000002a769

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

