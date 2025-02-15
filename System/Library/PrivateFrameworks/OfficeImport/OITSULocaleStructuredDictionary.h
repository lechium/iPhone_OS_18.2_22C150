//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSLocale, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OITSULocaleStructuredDictionary : NSObject
{
    NSDictionary *_dictionary;	// 8 = 0x8
    NSMutableDictionary *_cldrLanguageScriptRegionForKey;	// 16 = 0x10
    NSMutableDictionary *_cldrLanguageScriptForKey;	// 24 = 0x18
    NSMutableDictionary *_workingDictionary;	// 32 = 0x20
    NSLocale *_workingLocale;	// 40 = 0x28
    _Bool _workingLocaleIsAutoUpdating;	// 48 = 0x30
    unsigned long long _autoUpdatingCount;	// 56 = 0x38
}

+ (id)numberFormatterSymbolsFallbackDictionary;	// IMP=0x00600000002c9b78
+ (id)dateFormatterSymbolsFallbackDictionary;	// IMP=0x00600000002c9b0e
+ (id)dictionaryWithContentsOfFileForLocale:(id)arg1 inDirectory:(id)arg2 inBundle:(id)arg3;	// IMP=0x00600000002c8961
- (void).cxx_destruct;	// IMP=0x00000000002c9be2
- (id)p_makeLocaleIdentifierWithLanguage:(id)arg1 script:(id)arg2 region:(id)arg3;	// IMP=0x00000000002c99ca
- (_Bool)p_extractLanguage:(id *)arg1 script:(id *)arg2 region:(id *)arg3 fromString:(id)arg4;	// IMP=0x00000000002c9598
- (void)p_remakeWorkingDictionaryWithLocale:(id)arg1;	// IMP=0x00000000002c8c72
- (id)objectForKey:(id)arg1 locale:(id)arg2;	// IMP=0x00000000002c8b88
- (id)initWithDictionary:(id)arg1 locale:(id)arg2;	// IMP=0x00000000002c8ab3

@end

