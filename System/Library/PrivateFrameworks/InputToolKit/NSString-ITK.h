//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (ITK)
- (id)itk_truncatedStringWithMaxLength:(unsigned long long)arg1 truncated:(_Bool *)arg2;	// IMP=0x0030000000008947
- (id)itk_stringByTrimmingLeadingCharactersInSet:(id)arg1;	// IMP=0x00300000000088aa
- (unsigned long long)itk_countOfCharactersInSet:(id)arg1;	// IMP=0x00300000000087d8
- (struct _NSRange)itk_safeCharacterRangeForRange:(struct _NSRange)arg1;	// IMP=0x003000000000878f
- (_Bool)itk_isLastCharacterInRangeANewlineForRange:(struct _NSRange)arg1;	// IMP=0x00300000000086eb
@property(readonly, nonatomic) unsigned long long itk_lengthOfLongestLine;
- (struct _NSRange)itk_paragraphRangeForRange:(struct _NSRange)arg1 contentEnd:(unsigned long long *)arg2;	// IMP=0x00300000000085ad
- (id)itk_stringByReplacingCharactersInStringMap:(id)arg1;	// IMP=0x0030000000007eb2
- (id)itk_stringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;	// IMP=0x0030000000007d5e
- (id)itk_stringByReplacingNewlineCharactersWithWhiteSpace;	// IMP=0x0030000000007cf1
- (id)itk_checkedSubstringWithRange:(struct _NSRange)arg1;	// IMP=0x0030000000007c94
- (id)itk_substringWithRange:(struct _NSRange)arg1;	// IMP=0x0030000000007c0e
- (id)itk_substringToIndex:(unsigned long long)arg1;	// IMP=0x0030000000007b84
- (id)itk_substringFromIndex:(unsigned long long)arg1;	// IMP=0x0030000000007b53
- (void)itk_enumerateContentLineRangesInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0030000000007a80
- (void)itk_enumerateParagraphsInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00300000000079b8
@property(readonly, nonatomic) _Bool itk_containsAlphanumericCharacters;
@property(readonly, nonatomic) _Bool itk_containsNonWhitespaceCharacters;
- (id)itk_uniqueWordsWithMinLength:(unsigned long long)arg1;	// IMP=0x00300000000074e8
@property(readonly, nonatomic) unsigned long long itk_wordCount;
@property(readonly, nonatomic) unsigned long long itk_numberOfLines;
@property(readonly, nonatomic) _Bool itk_isLastCharacterANewline;
@property(readonly, nonatomic) NSString *itk_stringReplacingUnsafeXMLCharacters;
@property(readonly, nonatomic) NSString *itk_stringReplacingUnsafeHTMLCharacters;
- (struct _NSRange)itk_lineRangeIgnoringLineBreakCharactersForIndex:(unsigned long long)arg1;	// IMP=0x00300000000071d7
- (_Bool)itk_rangeIsValid:(struct _NSRange)arg1;	// IMP=0x003000000000719f
@property(readonly, nonatomic) NSString *itk_sanitizedFilenameString;
@property(readonly, nonatomic) NSString *itk_whitespaceAndNewlineCoalescedString;
@property(readonly, nonatomic) NSString *itk_leadingTrimmedString;
@property(readonly, nonatomic) NSString *itk_trailingTrimmedString;
@property(readonly, nonatomic) NSString *itk_trimmedString;
@property(readonly, nonatomic) NSString *itk_htmlStringEscapingQuotesAndLineBreaks;
@property(readonly, nonatomic) NSString *itk_md5;
@property(readonly, nonatomic) NSString *itk_hexCodes;
@property(readonly, nonatomic) struct _NSRange itk_range;
@end
