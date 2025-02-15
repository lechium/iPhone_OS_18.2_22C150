//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AXIndexMap, AXSSPunctuationGroup, MISSING_TYPE, NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSString, SCRCTargetSelectorTimer, SCRCThread, TTSSpeechSynthesizer;
@protocol BSInvalidatable;

@interface VOTOutputSpeechComponent
{
    SCRCThread *_speechThread;	// 24 = 0x18
    AXIndexMap *_allPunctuationTable;	// 32 = 0x20
    AXIndexMap *_selectedLanguageAllPunctuationTable;	// 40 = 0x28
    AXIndexMap *_somePunctuationTable;	// 48 = 0x30
    AXIndexMap *_selectedLanguageSomePunctuationTable;	// 56 = 0x38
    AXIndexMap *_noPunctuationTable;	// 64 = 0x40
    AXIndexMap *_selectedLanguageNoPunctuationTable;	// 72 = 0x48
    AXIndexMap *_specialPunctionTable;	// 80 = 0x50
    AXIndexMap *_noneTableOverrides;	// 88 = 0x58
    NSString *_spokenLanguage;	// 96 = 0x60
    NSDictionary *_languageExceptions;	// 104 = 0x68
    _Bool _isSpeaking;	// 112 = 0x70
    _Bool _userStopped;	// 113 = 0x71
    _Bool _isPaused;	// 114 = 0x72
    _Bool _isVolumeCapped;	// 115 = 0x73
    NSMutableDictionary *_speechStatistics;	// 120 = 0x78
    double _lastTimeSpeechStarted;	// 128 = 0x80
    AXIndexMap *_currentActionVariants;	// 136 = 0x88
    id _currentRequest;	// 144 = 0x90
    NSArray *_userSubstitutions;	// 152 = 0x98
    NSArray *_transientSubstitutions;	// 160 = 0xa0
    SCRCTargetSelectorTimer *_stopSpeakingAfterLongPauseTimer;	// 168 = 0xa8
    unsigned long long _lastSetOptions;	// 176 = 0xb0
    AXSSPunctuationGroup *_fileSystemPunctuationGroup;	// 184 = 0xb8
    NSString *_lastSelectedLanguage;	// 192 = 0xc0
    NSMutableDictionary *_punctuationFallbacks;	// 200 = 0xc8
    TTSSpeechSynthesizer *_synthesizer;	// 208 = 0xd0
    NSDictionary *_emoticonReplacements;	// 216 = 0xd8
    id <BSInvalidatable> _disableIdleTimerAssertion;	// 224 = 0xe0
    NSNumber *_activityBasedAudioDucking;	// 232 = 0xe8
    TTSSpeechSynthesizer *_synthesizerForTelephonyMixin;	// 240 = 0xf0
}

+ (void)_setOverrideLocale:(id)arg1;	// IMP=0x0020000000039db6
- (void).cxx_destruct;	// IMP=0x002000000004a3d3
@property(retain, nonatomic) TTSSpeechSynthesizer *synthesizerForTelephonyMixin; // @synthesize synthesizerForTelephonyMixin=_synthesizerForTelephonyMixin;
@property(retain, nonatomic) NSNumber *activityBasedAudioDucking; // @synthesize activityBasedAudioDucking=_activityBasedAudioDucking;
@property(retain, nonatomic) id <BSInvalidatable> disableIdleTimerAssertion; // @synthesize disableIdleTimerAssertion=_disableIdleTimerAssertion;
@property(retain, nonatomic) NSDictionary *emoticonReplacements; // @synthesize emoticonReplacements=_emoticonReplacements;
@property(readonly, nonatomic) _Bool isPaused; // @synthesize isPaused=_isPaused;
@property(readonly, nonatomic) _Bool isSpeaking; // @synthesize isSpeaking=_isSpeaking;
@property(readonly, nonatomic) TTSSpeechSynthesizer *synthesizer; // @synthesize synthesizer=_synthesizer;
- (void)setShouldOutputToHearingAid:(_Bool)arg1;	// IMP=0x001000000004a2ec
- (_Bool)replacesCharacterAsPunctuation:(unsigned short)arg1;	// IMP=0x001000000004a287
- (void)_didFinishSpeaking:(id)arg1;	// IMP=0x0010000000049f8b
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(_Bool)arg3 withError:(id)arg4;	// IMP=0x0010000000049d22
- (void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(struct _NSRange)arg2 forRequest:(id)arg3;	// IMP=0x0010000000049864
- (void)speechSynthesizer:(id)arg1 didStartSpeakingRequest:(id)arg2;	// IMP=0x0010000000049820
- (void)_didStartSpeakingAction:(id)arg1;	// IMP=0x001000000004953b
- (void)_uncapVolume:(float)arg1;	// IMP=0x0010000000049501
- (void)_capVolumeForLanguage:(id)arg1 volume:(float)arg2;	// IMP=0x0010000000049486
- (id)_processCaptionTextForMarkup:(id)arg1 regex:(id)arg2 range:(struct _NSRange *)arg3;	// IMP=0x00100000000491ef
- (id)_spokenTextForRequest:(id)arg1 range:(struct _NSRange *)arg2;	// IMP=0x0010000000048cdd
- (void)_handlePerformAction:(id)arg1;	// IMP=0x00100000000477e6
- (void)_updateDuckingBasedOnActivity:(id)arg1;	// IMP=0x001000000004769a
- (double)outputMutedActivityLastToggleTime;	// IMP=0x001000000004767e
- (id)outputMutedActivityValue:(id)arg1;	// IMP=0x0010000000047669
- (void)_updatePitch:(id)arg1 settingsPitch:(float)arg2;	// IMP=0x00100000000475a8
- (float)mapSettingsPitchToSpeechPitch:(float)arg1;	// IMP=0x0010000000047550
- (void)_updateActionWithCanonicalMappings:(id)arg1;	// IMP=0x00100000000474c3
- (id)_preferenceLanguageForLanguage:(id)arg1 selectedLanguage:(id)arg2;	// IMP=0x0010000000047372
- (void)_notifyDidFinishSpeakingWithFakeRequestForEvent:(id)arg1;	// IMP=0x00100000000472c3
- (id)stringReplacingBrailleDotRanges:(id)arg1;	// IMP=0x0010000000046f6a
- (_Bool)stringIsInSupportedCharacters:(id)arg1;	// IMP=0x0010000000046e74
- (_Bool)_processActionForLiteralEmojis:(id)arg1;	// IMP=0x0010000000046c65
- (void)preprocessAction:(id)arg1;	// IMP=0x0010000000046662
- (void)_determineEmojiPreferenceForAction:(id)arg1;	// IMP=0x0010000000046566
- (void)_preprocessActionLanguageAndVoice:(id)arg1;	// IMP=0x0010000000046139
- (void)_configureSynthesizerWithPhonemeSubstitutionsFromAction:(id)arg1;	// IMP=0x0010000000045bab
- (void)_speakAsMixOfLiteralAndNormalText:(id)arg1 withLiteralRanges:(id)arg2;	// IMP=0x0010000000045713
- (void)_speakAsNormalText:(id)arg1;	// IMP=0x0010000000045635
- (id)_stringForNormalText:(id)arg1 action:(id)arg2 allowPausingAtBoundaries:(_Bool)arg3 ignoreLeadingCommas:(_Bool)arg4;	// IMP=0x0010000000044743
- (float)_determineVolume:(id)arg1;	// IMP=0x0010000000044555
- (void)_replaceUserSubstitutions:(id)arg1 action:(id)arg2;	// IMP=0x0010000000044166
- (_Bool)_makeSubstitution:(id)arg1 withString:(id)arg2 punctuationGroup:(id)arg3;	// IMP=0x0010000000043dc8
- (void)_processEmoji:(id)arg1 action:(id)arg2 rate:(float)arg3;	// IMP=0x0010000000043b95
- (void)_replaceEmoticonsWithText:(id)arg1;	// IMP=0x0010000000043865
- (void)_removeRunsOfNewLines:(id)arg1;	// IMP=0x00100000000436ba
- (void)_replacePunctuation:(id)arg1 withAction:(id)arg2 languageCode:(id)arg3;	// IMP=0x00100000000431db
- (id)_urlRangesInString:(id)arg1 languageCode:(id)arg2;	// IMP=0x0010000000042d39
- (id)_determinePunctuationGroupForAction:(id)arg1 isDefault:(_Bool *)arg2;	// IMP=0x0010000000042ac3
- (id)_determineSpeechSourceForAction:(id)arg1;	// IMP=0x0010000000042a1a
- (id)_determineVoiceIdentifier:(id)arg1 languageCode:(id)arg2;	// IMP=0x00100000000429ca
- (id)_determineVoiceSelection:(id)arg1 languageCode:(id)arg2;	// IMP=0x00100000000426b0
- (id)replacePunctuation:(id)arg1 punctuationGroup:(id)arg2 replaceCommas:(_Bool)arg3 languageCode:(id)arg4;	// IMP=0x0010000000042683
- (id)_parseNumberInString:(id)arg1 beforeCharacterAtIndex:(long long)arg2 numberRange:(struct _NSRange *)arg3;	// IMP=0x00100000000423f4
- (_Bool)_replaceRepeatedPuntuationAndEmoji:(id)arg1 newString:(id)arg2 charReplacementString:(id)arg3 charSequence:(id)arg4 charIndex:(long long *)arg5 speakPunctuationCounts:(_Bool)arg6 languageCode:(id)arg7;	// IMP=0x0010000000042007
- (void)_replaceRepeatedEmoji:(id)arg1;	// IMP=0x0010000000041ac4
- (id)_replacePunctuation:(id)arg1 punctuationGroup:(id)arg2 hasMathContext:(_Bool)arg3 hasPhoneContext:(_Bool)arg4 isText:(_Bool)arg5 replaceCommas:(_Bool)arg6 languageCode:(id)arg7 speakPunctuationCounts:(_Bool)arg8;	// IMP=0x0010000000040345
- (id)baseTableForPunctuationGroup:(id)arg1;	// IMP=0x001000000004022c
- (id)punctuationReplacement:(id)arg1 withGroup:(id)arg2 baseTable:(id)arg3 languageCode:(id)arg4 selectedLanguage:(id)arg5 spokenLanguage:(id)arg6;	// IMP=0x001000000003fcf9
- (id)fileSystemPunctuationGroup;	// IMP=0x001000000003fb65
- (void)_applyTextualWorkarounds:(id)arg1;	// IMP=0x001000000003fb5f
- (void)_speakAsPhoneticText:(id)arg1;	// IMP=0x001000000003fafd
- (void)_speakAsLiteralText:(id)arg1;	// IMP=0x001000000003f9f1
- (id)_stringForLiteralText:(id)arg1 action:(id)arg2 allowChangingLanguageForPunctuation:(_Bool)arg3;	// IMP=0x001000000003f433
- (id)_literalStringMarkupForString:(id)arg1 languageCode:(id)arg2 action:(id)arg3;	// IMP=0x001000000003f318
- (void)_appendLiteralCharacterString:(id)arg1 toString:(id)arg2 hasPhoneContext:(_Bool)arg3 hasMathContext:(_Bool)arg4 action:(id)arg5 punctuationTableLanguageUsed:(_Bool *)arg6;	// IMP=0x001000000003e689
- (void)_formatTimeDuration:(id)arg1 didMatch:(_Bool *)arg2 voiceIdentifier:(id)arg3 rate:(float)arg4;	// IMP=0x001000000003db12
- (void)_formatExplicitTimeDuration:(id)arg1 isMMSS:(_Bool)arg2 languageCode:(id)arg3;	// IMP=0x001000000003d70b
- (void)_formatIPAddress:(id)arg1 voiceIdentifier:(id)arg2 rate:(float)arg3;	// IMP=0x001000000003d073
- (void)_formatATVStyleMediaDurations:(id)arg1;	// IMP=0x001000000003cd39
- (void)_formatUSHeight:(id)arg1 voiceIdentifier:(id)arg2;	// IMP=0x001000000003c85b
- (void)_formatNumbers:(id)arg1 action:(id)arg2;	// IMP=0x001000000003c453
- (void)_formatEthernetMacAddress:(id)arg1 voiceIdentifier:(id)arg2 rate:(float)arg3;	// IMP=0x001000000003c0a7
- (void)_applyTransliteration:(id)arg1 languageCode:(id)arg2;	// IMP=0x001000000003bf75
- (void)_formatJapaneseYen:(id)arg1;	// IMP=0x001000000003bd10
- (void)_formatDetectedDates:(id)arg1 voiceIdentifier:(id)arg2 languageCode:(id)arg3 rate:(float)arg4;	// IMP=0x001000000003b593
- (_Bool)_formatDetectedFinnishDates:(id)arg1;	// IMP=0x001000000003af9d
- (MISSING_TYPE *)_formatTelephoneNumber:languageCode:voiceIdentifier:rate: /* Error: Ran out of types for this method. */;	// IMP=0x001000000003adfe
- (void)_applyTelephoneFormatting:(id)arg1 withRanges:(id)arg2 languageCode:(id)arg3 voiceIdentifier:(id)arg4 rate:(float)arg5;	// IMP=0x001000000003a5c7
- (void)_applyCamelCaseSeparation:(id)arg1;	// IMP=0x0010000000039e9c
- (_Bool)_currentLocaleUsesSpaceAsSeparator;	// IMP=0x0010000000039dca
- (void)_insertLongerPausesForSymbol:(id)arg1 withText:(id)arg2 allowPausingAtBoundaries:(_Bool)arg3 onlyApplyWhenFollowedBySpace:(_Bool)arg4 languageCode:(id)arg5 voiceIdentifier:(id)arg6 rate:(float)arg7;	// IMP=0x0010000000038bdf
- (id)pauseStringForType:(int)arg1 voiceIdentifier:(id)arg2 rate:(float)arg3;	// IMP=0x0010000000038a82
- (long long)_ttsVoiceTypeForPauseCalculationWithVoiceIdentifier:(id)arg1;	// IMP=0x00100000000389fe
- (float)_pauseDelayForType:(int)arg1 speechRate:(float)arg2 voiceType:(long long)arg3;	// IMP=0x00100000000389d5
- (id)expectedVoiceIdentifier:(id)arg1;	// IMP=0x0010000000038666
- (_Bool)_stringMatchesSpecialCases:(id)arg1 forSymbol:(id)arg2 ranges:(id *)arg3 langaugeCode:(id)arg4;	// IMP=0x001000000003815b
- (id)_localeSpecificURLRegexForLanguageCode:(id)arg1;	// IMP=0x0010000000037f1d
- (id)_localeSpecificURLsForLanguageCode:(id)arg1;	// IMP=0x0010000000037eee
- (id)_secureTextDescription:(id)arg1;	// IMP=0x0010000000037e64
- (void)_replaceEmbeddedTTSCommands:(id)arg1;	// IMP=0x0010000000037db2
- (void)_speakAllDigits:(id)arg1;	// IMP=0x0010000000037c5a
- (void)handleEvent:(id)arg1;	// IMP=0x0010000000037bcb
- (void)dealloc;	// IMP=0x0010000000037b48
- (void)_handleStopSpeaking:(id)arg1;	// IMP=0x00100000000377ec
- (void)_handleContinueSpeaking:(id)arg1;	// IMP=0x0010000000037716
- (void)_handlePauseSpeaking:(id)arg1;	// IMP=0x00100000000375d3
- (void)_stopSpeakingAfterLongPause:(id)arg1;	// IMP=0x0010000000037510
- (void)stopSpeakingAtBoundary:(int)arg1;	// IMP=0x00100000000374f9
- (void)stopSpeakingAtBoundary:(int)arg1 allRequests:(_Bool)arg2 sessionDeactivationDelay:(id)arg3;	// IMP=0x0010000000037305
- (void)continueSpeaking;	// IMP=0x0010000000037247
- (void)pauseSpeakingAtBoundary:(int)arg1;	// IMP=0x001000000003714e
- (void)setVoice:(id)arg1;	// IMP=0x001000000003710c
- (void)_setVoice:(id)arg1;	// IMP=0x001000000003700b
- (void)setRate:(float)arg1;	// IMP=0x0010000000036f89
- (float)rate;	// IMP=0x0010000000036f6c
- (void)_setRate:(id)arg1;	// IMP=0x0010000000036e47
- (float)volume;	// IMP=0x0010000000036df0
- (void)_loadPunctuationTable:(id)arg1 withLevel:(long long)arg2 language:(id)arg3;	// IMP=0x0010000000036d76
- (void)_saveSpeechStats;	// IMP=0x0010000000036cf4
- (id)currentAllPunctuationTable;	// IMP=0x0010000000036c9a
- (id)currentNonePunctuationTable;	// IMP=0x0010000000036c40
- (id)currentSomePunctuationTable;	// IMP=0x0010000000036be6
- (void)_resetLanguageDataOnSpeechThread:(id)arg1 language:(id)arg2;	// IMP=0x00100000000368f9
- (void)_selectedLanguageChanged:(id)arg1;	// IMP=0x00100000000364c7
- (void)_initializePunctuationData;	// IMP=0x0010000000036354
- (id)init;	// IMP=0x0010000000036075
- (void)_loadNoneTableOverrides;	// IMP=0x0010000000035fcf
- (void)_loadSpecialPunctuation;	// IMP=0x0010000000035e8c
- (void)_updateChannelLayout;	// IMP=0x0010000000035a11
- (void)_updateAudioSessionProperties;	// IMP=0x0010000000034b07
- (void)updateAudioSessionProperties:(id)arg1;	// IMP=0x0010000000034ad4
- (void)audioSessionWasInterrupted:(id)arg1;	// IMP=0x0010000000034a9e
- (void)_audioSessionWasInterrupted:(id)arg1;	// IMP=0x001000000003490e
- (_Bool)_usingAllChannels;	// IMP=0x00100000000345af
- (void)_callStatusChanged;	// IMP=0x001000000003446c
- (void)callStatusChanged;	// IMP=0x0010000000034439
- (void)_initializeSynthesizer;	// IMP=0x0010000000033d76
- (void)_createTelephonySynthesizer;	// IMP=0x0010000000033c41
- (void)_tearDownTelephonySynthesizer;	// IMP=0x0010000000033b84
- (void)_updateUserSubstitutions:(id)arg1;	// IMP=0x0010000000033a89
- (id)_internalVoiceOverSubstitutions;	// IMP=0x001000000003397a
- (void)_initializeThread;	// IMP=0x00100000000338f6
- (double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 waitTime:(double)arg3 cancelMask:(unsigned int)arg4 count:(unsigned int)arg5 objects:(id)arg6;	// IMP=0x00100000000338b6
- (double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 count:(unsigned int)arg3 objects:(id)arg4;	// IMP=0x0010000000033890

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

