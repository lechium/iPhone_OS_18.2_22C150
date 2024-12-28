//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, UITextChecker;

@interface VOTBrailleGestureSpellingSuggestionHandler : NSObject
{
    UITextChecker *_textChecker;	// 8 = 0x8
    NSArray *_spellingSuggestions;	// 16 = 0x10
    struct _NSRange _rangeToReplace;	// 24 = 0x18
    long long _spellingSuggestionIndex;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000004c713
- (void)clearSpellingSuggestions;	// IMP=0x001000000004c6dd
- (id)applySpellingSuggestionForResponder:(id)arg1 languageCode:(id)arg2;	// IMP=0x001000000004c529
- (id)currentSpellingSuggestion;	// IMP=0x001000000004c4d3
- (void)selectNextSpellingSuggestionInDirection:(long long)arg1 responder:(id)arg2 languageCode:(id)arg3;	// IMP=0x001000000004c3d6
- (id)_generateSpellingSuggestionsForResponder:(id)arg1 languageCode:(id)arg2;	// IMP=0x001000000004c1ec
- (id)_spellingSuggestionsForWord:(id)arg1 languageCode:(id)arg2;	// IMP=0x001000000004c08f
- (id)_updateRangeToReplaceInContext:(id)arg1 selectedRange:(struct _NSRange)arg2;	// IMP=0x001000000004be7e

@end
