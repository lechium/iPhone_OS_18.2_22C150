//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXAccessQueue, MISSING_TYPE, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSNumber, NSString, TTSSpeechManager;

@interface AXOutputManager : NSObject
{
    _Bool _speechEnabled;	// 8 = 0x8
    _Bool _soundAudioSessionActive;	// 9 = 0x9
    _Bool _speechAudioSessionActive;	// 10 = 0xa
    _Bool _soundEffectsEnabled;	// 11 = 0xb
    NSMutableDictionary *_registeredSoundIDs;	// 16 = 0x10
    AXAccessQueue *_outputAccessQueue;	// 24 = 0x18
    TTSSpeechManager *_speechManager;	// 32 = 0x20
    NSArray *_recentSpeechOutputStrings;	// 40 = 0x28
    NSMutableDictionary *_soundIDsToAudioPlayer;	// 48 = 0x30
    NSMutableSet *_activeSoundIDs;	// 56 = 0x38
    NSMutableSet *_unfinishedSpeechActionsWithCompletionBlocks;	// 64 = 0x40
    NSMutableArray *_cachedRecentSpeechOutputRequests;	// 72 = 0x48
    unsigned long long _lastSetOptions;	// 80 = 0x50
    NSNumber *_cacheSCVolumeForDuckingOff;	// 88 = 0x58
}

+ (id)sharedOutputManager;	// IMP=0x00200000000dac1c
- (void).cxx_destruct;	// IMP=0x00200000000dc477
@property(nonatomic) NSNumber *cacheSCVolumeForDuckingOff; // @synthesize cacheSCVolumeForDuckingOff=_cacheSCVolumeForDuckingOff;
@property(nonatomic) unsigned long long lastSetOptions; // @synthesize lastSetOptions=_lastSetOptions;
@property(retain, nonatomic) NSMutableArray *cachedRecentSpeechOutputRequests; // @synthesize cachedRecentSpeechOutputRequests=_cachedRecentSpeechOutputRequests;
@property(retain, nonatomic) NSMutableSet *unfinishedSpeechActionsWithCompletionBlocks; // @synthesize unfinishedSpeechActionsWithCompletionBlocks=_unfinishedSpeechActionsWithCompletionBlocks;
@property(retain, nonatomic) NSMutableSet *activeSoundIDs; // @synthesize activeSoundIDs=_activeSoundIDs;
@property(retain, nonatomic) NSMutableDictionary *soundIDsToAudioPlayer; // @synthesize soundIDsToAudioPlayer=_soundIDsToAudioPlayer;
@property(retain, nonatomic) NSArray *recentSpeechOutputStrings; // @synthesize recentSpeechOutputStrings=_recentSpeechOutputStrings;
@property(nonatomic, getter=areSoundEffectsEnabled) _Bool soundEffectsEnabled; // @synthesize soundEffectsEnabled=_soundEffectsEnabled;
@property(nonatomic, getter=isSpeechAudioSessionActive) _Bool speechAudioSessionActive; // @synthesize speechAudioSessionActive=_speechAudioSessionActive;
@property(nonatomic, getter=isSoundAudioSessionActive) _Bool soundAudioSessionActive; // @synthesize soundAudioSessionActive=_soundAudioSessionActive;
@property(retain, nonatomic) TTSSpeechManager *speechManager; // @synthesize speechManager=_speechManager;
@property(retain, nonatomic) AXAccessQueue *outputAccessQueue; // @synthesize outputAccessQueue=_outputAccessQueue;
@property(retain, nonatomic) NSMutableDictionary *registeredSoundIDs; // @synthesize registeredSoundIDs=_registeredSoundIDs;
- (_Bool)_usesAVAudioPlayer;	// IMP=0x00100000000dc35e
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;	// IMP=0x00100000000dc34c
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;	// IMP=0x00100000000dc33a
- (void)_audioPlayerFinished:(id)arg1;	// IMP=0x00100000000dc22f
- (void)_updateSoundEffect:(int)arg1 isActive:(_Bool)arg2;	// IMP=0x00100000000dc081
- (void)_setDuckingLevelOnlySpeaking:(double)arg1;	// IMP=0x00100000000dc07b
- (void)_setDuckingLevelAlways:(double)arg1;	// IMP=0x00100000000dc075
- (void)_updateDuckingMode;	// IMP=0x00100000000dc06f
- (float)_volume;	// IMP=0x00100000000dc018
- (void)_setUnDuckingProperties;	// IMP=0x00100000000dc012
- (void)_setDuckingProperties;	// IMP=0x00100000000dc00c
- (void)_updateAudioSessionProperties;	// IMP=0x00100000000dbf1c
- (id)_urlForSoundEffect:(int)arg1;	// IMP=0x00100000000dbba5
- (MISSING_TYPE *)_flushSoundIDs;	// IMP=0x00100000000db98c
- (void)_playSoundWithSoundID:(unsigned int)arg1;	// IMP=0x00100000000db97b
- (void)clearRecentSpeech;	// IMP=0x00100000000db93e
- (void)cancelSpeech;	// IMP=0x00100000000db8f9
- (void)dispatchSpeechAction:(id)arg1;	// IMP=0x00100000000db7b0
- (void)playMouseClickSound;	// IMP=0x00100000000db68b
- (void)playSound:(int)arg1;	// IMP=0x00100000000db1f8
@property(nonatomic, getter=isSpeechEnabled) _Bool speechEnabled; // @synthesize speechEnabled=_speechEnabled;
- (id)_voiceOverBundle;	// IMP=0x00100000000db130
- (void)dealloc;	// IMP=0x00100000000dadc1
- (id)init;	// IMP=0x00100000000dac71
@property(readonly, nonatomic) _Bool scanningInterruptsSpeech;
- (void)_scatAddCompletionBlockToAction:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000dd6e6
- (void)outputScannerAttributedString:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000dd458
- (void)outputScannerAnnouncement:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000dd1fe
- (void)outputScannerFocusContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000dcfd4
- (_Bool)_scatOutputCanSpeakString:(id)arg1 withLanguage:(id)arg2;	// IMP=0x00100000000dced9
- (_Bool)_scatLanguage:(id)arg1 matchesOverrideLanguage:(id)arg2;	// IMP=0x00100000000dce05
- (id)processAXOutputAction:(id)arg1;	// IMP=0x00100000000dcd9a
- (void)_applySelectionToAction:(id)arg1 selection:(id)arg2;	// IMP=0x00100000000dcb14
- (id)_scatProcessAttributedString:(id)arg1;	// IMP=0x00100000000dc68c
- (id)selectionForLanguage:(id)arg1;	// IMP=0x00100000000dc4e1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

