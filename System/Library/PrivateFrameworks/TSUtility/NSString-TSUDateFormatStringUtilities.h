//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (TSUDateFormatStringUtilities)
+ (id)numberSymbols;	// IMP=0x0020000000014cb8
+ (id)tsu_stringWithXMLString:(const char *)arg1;	// IMP=0x002000000001da93
+ (id)tsu_stringByBase64EncodingBytes:(const char *)arg1 length:(unsigned long long)arg2 breakLines:(_Bool)arg3;	// IMP=0x002000000001d7e1
+ (id)tsu_stringByBase64EncodingBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x002000000001d7c5
+ (id)tsu_listSeparator;	// IMP=0x002000000001bedd
+ (id)tsu_stringByIndentingString:(id)arg1;	// IMP=0x002000000001b6e0
+ (id)tsu_stringByIndentingString:(id)arg1 times:(unsigned long long)arg2;	// IMP=0x002000000001b5ea
+ (id)tsu_stringWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;	// IMP=0x002000000001b5af
+ (id)tsu_stringWithUUID;	// IMP=0x002000000001b576
+ (id)stringWithSqlStatement:(struct sqlite3_stmt *)arg1 columnIndex:(int)arg2;	// IMP=0x002000000002104e
+ (id)customNumberFormatDecimalFormatStringWithDigits:(unsigned int)arg1 digitString:(id)arg2 includeDecimalSeparator:(_Bool)arg3;	// IMP=0x002000000003d609
+ (id)customNumberFormatDecimalTokenRepresentedStringWithDigits:(unsigned long long)arg1 digitString:(id)arg2;	// IMP=0x002000000003d58c
+ (id)customNumberFormatDecimalTokenDisplayStringWithDigits:(unsigned long long)arg1 digitString:(id)arg2;	// IMP=0x002000000003d4fa
+ (id)customNumberFormatIntegerFormatStringWithDigits:(unsigned long long)arg1 digitString:(id)arg2;	// IMP=0x002000000003d35a
+ (id)customNumberFormatIntegerTokenRepresentedStringWithDigits:(unsigned long long)arg1 separator:(_Bool)arg2 digitString:(id)arg3;	// IMP=0x002000000003d2b8
+ (id)customNumberFormatIntegerTokenDisplayStringWithDigits:(unsigned int)arg1 separator:(_Bool)arg2 digitString:(id)arg3;	// IMP=0x002000000003d1c8
+ (id)customNumberFormatTokenStringOfType:(int)arg1 content:(id)arg2;	// IMP=0x002000000003cdd5
- (id)stringByReplacing2DigitYearStringWith4DigitYearString;	// IMP=0x00100000000075be
- (id)stringByReplacing4DigitYearStringWith2DigitYearString;	// IMP=0x0010000000007550
- (id)prefixOfNumberFormatSubpattern;	// IMP=0x00100000000156fa
- (unsigned long long)indexOfFirstNonPrefixCharacterInNumberFormatSubpattern;	// IMP=0x00100000000155b5
- (id)suffixOfNumberFormatSubpattern;	// IMP=0x0010000000015583
- (unsigned long long)indexOfLastNonSuffixCharacterInNumberFormatSubpattern;	// IMP=0x001000000001546c
- (id)numberPortionOfNumberFormatSubpattern;	// IMP=0x001000000001541b
- (id)negativeSubpatternOfNumberFormatPattern;	// IMP=0x00100000000153cc
- (id)positiveSubpatternOfNumberFormatPattern;	// IMP=0x0010000000015384
- (unsigned long long)indexOfNumberFormatSubpatternSeparator;	// IMP=0x00100000000151f5
- (id)stringByRemovingEscapedCharactersFromNumberFormatPattern;	// IMP=0x00100000000150da
- (id)newRangesOfEscapedCharactersInNumberFormatPattern;	// IMP=0x0010000000014f68
- (_Bool)isNumberFormatPattern;	// IMP=0x0010000000014f01
- (id)newStringBySubstitutingCharactersCFNumberFormatterDoesntUnderstand;	// IMP=0x0010000000014d41
- (id)tsu_tolerantStringByAppendingPathExtension:(id)arg1;	// IMP=0x001000000001dcc6
- (_Bool)tsu_containsOnlyCharactersFromSet:(id)arg1;	// IMP=0x001000000001dc83
- (id)tsu_unescapeXML;	// IMP=0x001000000001db9a
- (id)tsu_escapeXML;	// IMP=0x001000000001dab1
- (id)tsu_stringByMakingFirstCharacterUppercase;	// IMP=0x001000000001da18
- (id)tsu_encodeStringBase64;	// IMP=0x001000000001d9cc
- (id)tsu_stringWithPathRelativeTo:(id)arg1 allowBacktracking:(_Bool)arg2;	// IMP=0x001000000001d63a
- (id)tsu_stringWithPathRelativeTo:(id)arg1;	// IMP=0x001000000001d4b4
- (id)tsu_substringWithComposedCharacterSequencesToFileSystemLength:(unsigned long long)arg1;	// IMP=0x001000000001d3dc
- (id)tsu_substringWithComposedCharacterSequencesToIndex:(unsigned long long)arg1;	// IMP=0x001000000001d358
- (id)tsu_stringWithRealpath;	// IMP=0x001000000001d2ff
- (_Bool)tsu_isChildOfPath:(id)arg1;	// IMP=0x001000000001d100
- (_Bool)tsu_isDescendantOfPath:(id)arg1;	// IMP=0x001000000001cfdf
- (id)tsu_escapeForIcuRegex;	// IMP=0x001000000001cd25
- (id)tsu_stringByReplacingInstancesOfCharactersInSet:(id)arg1 withString:(id)arg2;	// IMP=0x001000000001cb9e
- (id)tsu_stringByReplacingCharactersInSet:(id)arg1 withCharacter:(unsigned short)arg2;	// IMP=0x001000000001ca42
- (id)tsu_stringByRemovingCharactersInSet:(id)arg1;	// IMP=0x001000000001ca2e
- (id)tsu_stringByRemovingCharactersInSet:(id)arg1 options:(unsigned int)arg2;	// IMP=0x001000000001c883
- (id)tsu_md5Hash;	// IMP=0x001000000001c6f0
- (id)tsu_stringByFixingBrokenSurrogatePairs;	// IMP=0x001000000001c413
- (id)tsu_stringByUniquingPathInsideDirectory:(id)arg1 withFormat:(id)arg2;	// IMP=0x001000000001c211
- (id)tsu_stringByUniquingPathInsideDirectory:(id)arg1;	// IMP=0x001000000001c1f8
- (id)tsu_stringByAddingCSVEscapes;	// IMP=0x001000000001c07f
- (id)tsu_stringByAppendingSeparator:(id)arg1 format:(id)arg2;	// IMP=0x001000000001bf7a
- (id)tsu_stringQuotedIfContainsCharacterSet:(id)arg1;	// IMP=0x001000000001be19
- (id)tsu_stringByExpandingTableFormatting;	// IMP=0x001000000001b6f7
- (_Bool)tsu_isPathCreatedByAppendingPathComponent:(id)arg1 insideBasePath:(id)arg2;	// IMP=0x001000000001e1b8
- (id)tsu_pathToRelativeComponentPath:(id)arg1;	// IMP=0x001000000001e019
- (_Bool)tsu_containsSubstring:(id)arg1;	// IMP=0x001000000001dff6
- (void)tsu_enumerateRangesOfCharactersInSet:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000001ded8
- (struct _NSRange)tsu_range;	// IMP=0x001000000001dec0
- (struct _NSRange)tsu_rangeOfString:(id)arg1 options:(unsigned long long)arg2 updatingSearchRange:(struct _NSRange *)arg3;	// IMP=0x001000000001dded
- (unsigned long long)tsu_numberOfKeysInKeyPath;	// IMP=0x001000000001e58c
- (id)tsu_lastKey;	// IMP=0x001000000001e535
- (id)tsu_firstKey;	// IMP=0x001000000001e4e1
- (id)tsu_keyPathByAppendingKey:(id)arg1;	// IMP=0x001000000001e451
- (id)tsu_keyPathByPrependingKey:(id)arg1;	// IMP=0x001000000001e3c1
- (id)tsu_keyPathByRemovingFirstKey;	// IMP=0x001000000001e366
- (id)tsu_keyPathByRemovingLastKey;	// IMP=0x001000000001e30e
- (_Bool)bindToSqlStatement:(struct sqlite3_stmt *)arg1 index:(int)arg2 error:(id *)arg3;	// IMP=0x0010000000020f86
- (id)initWithSqlStatement:(struct sqlite3_stmt *)arg1 columnIndex:(int)arg2;	// IMP=0x0010000000020f5a
- (unsigned short)spaceCharacterInCustomNumberFormatSpaceToken;	// IMP=0x001000000003d7af
- (unsigned short)scaleCharacterInCustomNumberFormatScaleToken;	// IMP=0x001000000003d798
- (id)formatStringFromCustomNumberFormatScaleToken;	// IMP=0x001000000003d781
- (int)fractionAccuracyFromCustomNumberFormatFractionToken;	// IMP=0x001000000003d751
- (id)currencyCodeFromCustomNumberFormatCurrencyToken;	// IMP=0x001000000003d700
- (id)digitPlaceholderStringInDigitToken;	// IMP=0x001000000003d690
- (unsigned long long)numberOfDigitsInCustomNumberFormatDecimalToken;	// IMP=0x001000000003d3bb
- (id)stringByInsertingFormatGroupingSeparators;	// IMP=0x001000000003d0cb
- (_Bool)customFormatIntegerTokenUsesSeparator;	// IMP=0x001000000003cffa
- (unsigned int)numberOfDigitsInCustomNumberFormatIntegerToken;	// IMP=0x001000000003ceef
- (_Bool)isSpecialCustomNumberFormatTokenOfType:(int)arg1;	// IMP=0x001000000003ce77
- (_Bool)isSpecialCustomNumberFormatToken;	// IMP=0x001000000003ce34
- (_Bool)containsPercentEscapes;	// IMP=0x001000000005000f
- (void)appendJsonStringToString:(id)arg1;	// IMP=0x0010000000051293
- (_Bool)tsu_pathExtensionConformsToUTI:(id)arg1;	// IMP=0x001000000005266a
- (_Bool)tsu_pathConformsToUTI:(id)arg1;	// IMP=0x0010000000052639
@property(readonly, nonatomic) NSString *tsu_pathUTI;
@property(readonly, nonatomic) NSString *tsu_UTIFilenameExtension;
- (_Bool)tsu_conformsToAnyUTI:(id)arg1;	// IMP=0x001000000005228d
- (_Bool)tsu_conformsToUTI:(id)arg1;	// IMP=0x001000000005227a
- (struct CGSize)tsu_boundingSizeWithFont:(id)arg1;	// IMP=0x0010000000053839
@end

