//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXCVoiceSelection, MISSING_TYPE, NSString;

@interface _TtCE22AccessibilityUtilitiesCSo13AXPreferences21SpokenContentSettings : NSObject
{
    MISSING_TYPE *resolver;	// 8 = 0x8
    MISSING_TYPE *_voiceSelectionsByLanguage;	// 16 = 0x10
    MISSING_TYPE *_macroLanguageDisambiguations;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000c6a20
- (id)init;	// IMP=0x00000000000c6910
- (void)setWithVoiceId:(NSString *)arg1 forLanguage:(NSString *)arg2 completionHandler:(void (^)(void))arg3;	// IMP=0x00000000000c6220
- (void)setForLanguage:(NSString *)arg1 voiceSelection:(AXCVoiceSelection *)arg2 completionHandler:(void (^)(void))arg3;	// IMP=0x00000000000c5e30
- (void)voiceSelectionForLanguage:(NSString *)arg1 completionHandler:(void (^)(AXCVoiceSelection *))arg2;	// IMP=0x00000000000c5930
- (void)speechVoiceIdentifierForLanguage:(NSString *)arg1 exists:(_Bool *)arg2 completionHandler:(void (^)(NSString *))arg3;	// IMP=0x00000000000c5470

@end
