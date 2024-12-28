//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (CoreHandwriting)
+ (id)alternativeCharacterForms;	// IMP=0x0050000000401110
+ (id)ch_latinCharacterString;	// IMP=0x00500000003ff790
- (_Bool)hasMaxHeightOfXHeight;	// IMP=0x0010000000401810
- (_Bool)hasAscender;	// IMP=0x00100000004017f0
- (unsigned long long)ascendersCount;	// IMP=0x00100000004015c0
- (_Bool)hasDescender;	// IMP=0x0010000000401290
- (_Bool)hasAmbiguousCharacter;	// IMP=0x0010000000401170
- (_Bool)isAllUppercase;	// IMP=0x0010000000401020
- (unsigned long long)cursorPositionAtIndex:(unsigned long long)arg1 usingBlockToSelectSide:(CDUnknownBlockType)arg2;	// IMP=0x0010000000400e80
- (_Bool)isAbbreviation;	// IMP=0x0010000000400cf0
- (_Bool)endsWithSentenceEndPunctuation;	// IMP=0x0010000000400c80
- (id)substringWithComposedCharacterRange:(struct _NSRange)arg1;	// IMP=0x00100000004009a0
- (id)firstComposedCharacter;	// IMP=0x0010000000400980
- (id)lastComposedCharacter;	// IMP=0x0010000000400940
- (id)composedCharacterAtIndex:(unsigned long long)arg1;	// IMP=0x00100000004008d0
- (void)enumerateCodepointsInRange:(struct _NSRange)arg1 reverse:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000004007a0
- (void)enumerateCodepointsInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000400780
- (unsigned int)firstCodepointInString;	// IMP=0x0010000000400740
- (unsigned int)codepointAtIndex:(unsigned long long)arg1 outRange:(struct _NSRange *)arg2;	// IMP=0x0010000000400630
- (struct _NSRange)codepointRangeAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000400600
- (long long)countCodepoints;	// IMP=0x0010000000400510
- (long long)countCharacters;	// IMP=0x0010000000400420
- (long long)countSubstringsWithOptions:(unsigned long long)arg1;	// IMP=0x0010000000400330
- (_Bool)hasSubstringInSet:(id)arg1;	// IMP=0x00100000004001d0
- (id)indexesOfCharacters:(id)arg1 withWeakCharacters:(id)arg2;	// IMP=0x00100000003ffcf0
- (id)indexesOfCharacters:(id)arg1;	// IMP=0x00100000003ffba0
- (id)ch_hasCharactersFromSets:(id)arg1;	// IMP=0x00100000003ff980
- (long long)ch_occurrencesOfCharactersInSet:(id)arg1 maxCount:(long long)arg2;	// IMP=0x00100000003ff810
@end
