//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MNAudioSystemOptions, MNObserverHashTable, MNUserOptions, NSString;

__attribute__((visibility("hidden")))
@interface MNAudioManager : NSObject
{
    int _transportType;	// 8 = 0x8
    MNObserverHashTable *_observers;	// 16 = 0x10
    MNUserOptions *_options;	// 24 = 0x18
    MNAudioSystemOptions *_audioSystemOptions;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000012b884
@property(readonly, nonatomic) int transportType; // @synthesize transportType=_transportType;
- (void)audioSystemOptions:(id)arg1 didChangeGuidanceLevel:(unsigned long long)arg2 transportType:(int)arg3;	// IMP=0x000000000012b85a
- (double)durationOf:(id)arg1;	// IMP=0x000000000012b851
- (void)setVoiceGuidanceLevelOverride:(unsigned long long)arg1;	// IMP=0x000000000012b835
- (_Bool)vibrateForShortPrompt:(unsigned long long)arg1;	// IMP=0x000000000012b6e0
- (void)clearAllAnnouncements;	// IMP=0x000000000012b6da
- (_Bool)isSpeaking;	// IMP=0x000000000012b6d2
- (void)stopSpeaking;	// IMP=0x000000000012b6cc
- (void)forceDeactivate;	// IMP=0x000000000012b6c6
- (void)requestSpeech:(id)arg1 guidanceLevel:(unsigned long long)arg2 modifier:(unsigned long long)arg3 shortPromptType:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000012b6c0
- (_Bool)voiceGuidanceEnabled;	// IMP=0x000000000012b6b8
- (void)changeTransportType:(int)arg1;	// IMP=0x000000000012b6b2
- (void)didChangeUserOptionsFrom:(id)arg1 to:(id)arg2;	// IMP=0x000000000012b6ac
- (void)unregisterObserver:(id)arg1;	// IMP=0x000000000012b6a6
- (void)registerObserver:(id)arg1;	// IMP=0x000000000012b6a0
@property(readonly, nonatomic) unsigned long long voiceGuidanceLevel;
- (void)dealloc;	// IMP=0x000000000012b653
- (id)initWithTransportType:(int)arg1 voiceLanguage:(id)arg2 guidanceLevelOverride:(unsigned long long)arg3;	// IMP=0x000000000012b518

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

