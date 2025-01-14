//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EMFEmojiLocaleData, EMFEmojiPreferencesClient, NSArray;

@interface _EAREmojiRecognition : NSObject
{
    EMFEmojiPreferencesClient *_preferences;	// 8 = 0x8
    EMFEmojiLocaleData *_localeData;	// 16 = 0x10
    NSArray *_frequentEmojis;	// 24 = 0x18
    struct __EmojiLocaleDataWrapper *_cemlocaleRef;	// 32 = 0x20
    _Bool _isEmojiPersonalizationUsed;	// 40 = 0x28
    _Bool _isEmojiDisambiguationUsed;	// 41 = 0x29
    _Bool _isLocaleRTL;	// 42 = 0x2a
}

+ (void)initialize;	// IMP=0x00600000006b69c8
- (void).cxx_destruct;	// IMP=0x00000000006b8077
@property(readonly, nonatomic) _Bool isLocaleRTL; // @synthesize isLocaleRTL=_isLocaleRTL;
@property(readonly, nonatomic) _Bool isEmojiDisambiguationUsed; // @synthesize isEmojiDisambiguationUsed=_isEmojiDisambiguationUsed;
@property(readonly, nonatomic) _Bool isEmojiPersonalizationUsed; // @synthesize isEmojiPersonalizationUsed=_isEmojiPersonalizationUsed;
- (void)recognizeEmojisInInputString:(id)arg1 enumerateUsingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000006b7cc7
- (id)searchEmojiAlternativesForSpokenEmoji:(id)arg1 count:(long long)arg2 emojiCharacter:(id)arg3;	// IMP=0x00000000006b741a
- (_Bool)isValidEmoji:(id)arg1;	// IMP=0x00000000006b73eb
- (_Bool)isEmojiRecognitionCapable;	// IMP=0x00000000006b7268
- (id)baseStringForEmojiString:(id)arg1;	// IMP=0x00000000006b7156
- (void)resetEmojiMetrics;	// IMP=0x00000000006b714a
- (void)resetEmojiPreferences;	// IMP=0x00000000006b70e2
- (void)didUseEmoji:(id)arg1 replacementContext:(id)arg2;	// IMP=0x00000000006b6feb
- (id)formatEmojiStrings:(id)arg1 isLogging:(_Bool)arg2;	// IMP=0x00000000006b6c33
- (id)formatEmojiStrings:(id)arg1;	// IMP=0x00000000006b6c0f
- (void)dealloc;	// IMP=0x00000000006b6b9b
- (id)initWithLanguage:(id)arg1;	// IMP=0x00000000006b69f0

@end

