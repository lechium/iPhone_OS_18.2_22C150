//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (TSUDateFormatStringUtilities)
+ (id)tsu_numberSymbols;	// IMP=0x002000000025c3a1
+ (id)tsu_stringByHexEncodingData:(id)arg1;	// IMP=0x00200000002671ee
+ (id)tsu_stringWithXMLString:(const char *)arg1;	// IMP=0x0020000000266df6
+ (id)tsu_stringByBase64EncodingBytes:(const char *)arg1 length:(unsigned long long)arg2 breakLines:(_Bool)arg3;	// IMP=0x0020000000266a13
+ (id)tsu_stringByBase64EncodingBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00200000002669f7
+ (id)tsu_stringWithHexFromBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0020000000266961
+ (id)tsu_stringByIndentingString:(id)arg1;	// IMP=0x0020000000264264
+ (id)tsu_stringByIndentingString:(id)arg1 times:(unsigned long long)arg2;	// IMP=0x002000000026412a
+ (id)tsu_stringWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;	// IMP=0x00200000002640ce
+ (id)tsu_stringWithUUID;	// IMP=0x0020000000264095
+ (id)tsu_localizedDisplayNameWithPersonNameComponents:(id)arg1;	// IMP=0x0020000000268166
+ (id)tsu_fogFilenameFromShareToken:(id)arg1;	// IMP=0x0020000000268b1f
+ (id)tsu_fogShareTokenFromFileURL:(id)arg1;	// IMP=0x00200000002689da
+ (id)tsu_customNumberFormatDecimalFormatStringWithDigits:(unsigned long long)arg1 digitString:(id)arg2 includeDecimalSeparator:(_Bool)arg3;	// IMP=0x002000000028549a
+ (id)tsu_customNumberFormatDecimalTokenRepresentedStringWithDigits:(unsigned long long)arg1 digitString:(id)arg2;	// IMP=0x002000000028541d
+ (id)tsu_customNumberFormatDecimalTokenDisplayStringWithDigits:(unsigned long long)arg1 digitString:(id)arg2;	// IMP=0x002000000028538b
+ (id)tsu_customNumberFormatIntegerFormatStringWithDigits:(unsigned long long)arg1 digitString:(id)arg2;	// IMP=0x0020000000285266
+ (id)tsu_customNumberFormatIntegerTokenRepresentedStringWithDigits:(unsigned long long)arg1 separator:(_Bool)arg2 digitString:(id)arg3;	// IMP=0x00200000002851cd
+ (id)tsu_customNumberFormatIntegerTokenDisplayStringWithDigits:(unsigned long long)arg1 separator:(_Bool)arg2 digitString:(id)arg3 locale:(id)arg4;	// IMP=0x002000000028504e
+ (id)tsu_customNumberFormatTokenStringOfType:(int)arg1 content:(id)arg2;	// IMP=0x0020000000284bc0
+ (id)tc_stringByFixingUnpairedSurrogateCharactersInString:(id)arg1;	// IMP=0x00200000002d7f2e
+ (_Bool)tc_fixUnpairedSurrogateCharactersInBuffer:(void *)arg1;	// IMP=0x00200000002d7ec0
+ (id)tc_stringWithXmlString:(const char *)arg1;	// IMP=0x00200000002d85da
+ (id)tswp_stringForValue:(unsigned int)arg1 withPageNumberFormat:(int)arg2;	// IMP=0x00200000002dd131
+ (id)tswp_stringForValue:(unsigned int)arg1 withListNumberFormat:(unsigned long long)arg2 includeFormatting:(_Bool)arg3;	// IMP=0x00200000002da71b
+ (id)tswp_stringForValue:(unsigned int)arg1 withListNumberFormat:(unsigned long long)arg2;	// IMP=0x00200000002da6fc
+ (unsigned long long)tswp_numberForString:(id)arg1 withPageNumberFormat:(int)arg2;	// IMP=0x00200000002da49f
+ (unsigned long long)tswp_numberForString:(id)arg1 withListNumberFormat:(unsigned long long)arg2;	// IMP=0x00200000002d9cfc
+ (id)stringWithOcText:(const struct OcText *)arg1;	// IMP=0x00200000000b2054
+ (id)stringWithCsString:(const struct CsString *)arg1;	// IMP=0x002000000001814a
+ (_Bool)tc_skipString:(id)arg1;	// IMP=0x0020000000373d02
+ (id)tc_mapString:(id)arg1;	// IMP=0x0020000000373b74
- (id)tsu_stringByReplacing2DigitYearStringWith4DigitYearString;	// IMP=0x0010000000248ee6
- (id)tsu_stringByReplacing4DigitYearStringWith2DigitYearString;	// IMP=0x0010000000248e78
- (id)tsu_prefixOfNumberFormatSubpattern;	// IMP=0x001000000025cd6b
- (unsigned long long)tsu_indexOfFirstNonPrefixCharacterInNumberFormatSubpattern;	// IMP=0x001000000025cbde
- (id)tsu_suffixOfNumberFormatSubpattern;	// IMP=0x001000000025cbac
- (unsigned long long)tsu_indexOfLastNonSuffixCharacterInNumberFormatSubpattern;	// IMP=0x001000000025ca47
- (id)tsu_numberPortionOfNumberFormatSubpattern;	// IMP=0x001000000025c9f6
- (id)tsu_negativeSubpatternOfNumberFormatPattern;	// IMP=0x001000000025c99c
- (id)tsu_positiveSubpatternOfNumberFormatPattern;	// IMP=0x001000000025c943
- (unsigned long long)tsu_indexOfNumberFormatSubpatternSeparator;	// IMP=0x001000000025c75d
- (id)tsu_stringByRemovingEscapedCharactersFromNumberFormatPattern;	// IMP=0x001000000025c616
- (id)tsu_newRangesOfEscapedCharactersInNumberFormatPattern;	// IMP=0x001000000025c49e
- (_Bool)tsu_isNumberFormatPattern;	// IMP=0x001000000025c40d
- (id)tsu_stringWithNormalizedQuotationMarks;	// IMP=0x0010000000267ae5
- (id)tsu_stringWithNormalizedHyphens;	// IMP=0x0010000000267a5d
- (id)tsu_stringWithNormalizedHyphensAndQuotationMarks;	// IMP=0x0010000000267a0d
- (_Bool)tsu_isEqualToString:(id)arg1;	// IMP=0x00100000002679f2
- (id)tsu_middleTruncateToLength:(unsigned long long)arg1;	// IMP=0x0010000000267948
- (id)tsu_stringWithoutAttachmentCharacters;	// IMP=0x00100000002678ae
- (id)tsu_setOfContainedWordsIncludingPunctuationAndSymbols:(_Bool)arg1;	// IMP=0x001000000026753a
- (_Bool)tsu_containsSubstring:(id)arg1;	// IMP=0x0010000000267517
- (void)tsu_enumerateRangesOfCharactersInSet:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000002673d2
- (struct _NSRange)tsu_range;	// IMP=0x00100000002673ba
- (struct _NSRange)tsu_rangeOfString:(id)arg1 options:(unsigned long long)arg2 updatingSearchRange:(struct _NSRange *)arg3;	// IMP=0x00100000002672c8
- (id)tsu_tolerantStringByAppendingPathExtension:(id)arg1;	// IMP=0x0010000000267041
- (_Bool)tsu_containsOnlyCharactersFromSet:(id)arg1;	// IMP=0x0010000000266fde
- (id)tsu_unescapeXML;	// IMP=0x0010000000266ef9
- (id)tsu_escapeXML;	// IMP=0x0010000000266e14
- (id)tsu_stringByMakingFirstCharacterUppercase;	// IMP=0x0010000000266d53
- (id)tsu_stringByMakingFirstCharacterLowercase;	// IMP=0x0010000000266c5b
- (id)tsu_encodeStringBase64;	// IMP=0x0010000000266c07
- (id)tsu_stringByTrimmingCharactersInSetFromFront:(id)arg1;	// IMP=0x00100000002668ce
- (id)tsu_stringWithPathRelativeTo:(id)arg1 allowBacktracking:(_Bool)arg2;	// IMP=0x001000000026663d
- (id)tsu_stringWithPathRelativeTo:(id)arg1;	// IMP=0x001000000026640a
- (id)tsu_substringWithComposedCharacterSequencesToFileSystemLength:(unsigned long long)arg1;	// IMP=0x0010000000266300
- (id)tsu_substringWithComposedCharacterSequencesTruncatedToLength:(unsigned long long)arg1;	// IMP=0x0010000000266292
- (id)tsu_stringWithRealpath;	// IMP=0x0010000000266226
- (_Bool)tsu_isChildOfPath:(id)arg1;	// IMP=0x0010000000265f87
- (_Bool)tsu_isDescendantOfPath:(id)arg1;	// IMP=0x0010000000265dda
- (id)tsu_escapeForIcuRegex;	// IMP=0x0010000000265a9b
- (unsigned long long)tsu_countInstancesOfString:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00100000002659c5
- (id)tsu_stringByReplacingInstancesOfCharactersInSet:(id)arg1 withString:(id)arg2;	// IMP=0x0010000000265771
- (id)tsu_stringByRemovingCharactersInSet:(id)arg1;	// IMP=0x001000000026575d
- (id)tsu_stringByRemovingCharactersInSet:(id)arg1 options:(unsigned int)arg2;	// IMP=0x0010000000265522
- (id)tsu_stringByFixingBrokenSurrogatePairs;	// IMP=0x0010000000265213
- (id)tsu_stringByUniquingPathInsideDirectory:(id)arg1 withFormat:(id)arg2;	// IMP=0x0010000000264f38
- (id)tsu_stringByUniquingPathInsideDirectory:(id)arg1;	// IMP=0x0010000000264f1f
- (id)tsu_stringByAddingCSVEscapesForLocale:(id)arg1;	// IMP=0x0010000000264cb7
- (id)tsu_stringByAppendingSeparator:(id)arg1 format:(id)arg2;	// IMP=0x0010000000264b7e
- (id)tsu_stringQuotedIfContainsCharacterSet:(id)arg1;	// IMP=0x0010000000264aa2
- (id)tsu_stringByExpandingTableFormatting;	// IMP=0x001000000026427b
- (_Bool)tsu_isLegalEmailAddress;	// IMP=0x0010000000267e2b
- (id)tsu_uncommentedAddressRespectingGroups;	// IMP=0x0010000000267da8
- (id)tsu_uncommentedAddress;	// IMP=0x0010000000267b6d
- (_Bool)tsu_isCJKString;	// IMP=0x0010000000267f87
- (id)tsu_sha256HexHashString;	// IMP=0x0010000000268325
- (long long)tsu_compareToVersionString:(id)arg1;	// IMP=0x001000000026842c
- (unsigned long long)tsu_numberOfKeysInKeyPath;	// IMP=0x0010000000268960
- (id)tsu_lastKey;	// IMP=0x00100000002688ec
- (id)tsu_firstKey;	// IMP=0x001000000026887b
- (id)tsu_keyPathByAppendingKey:(id)arg1;	// IMP=0x00100000002687c3
- (id)tsu_keyPathByPrependingKey:(id)arg1;	// IMP=0x001000000026870b
- (id)tsu_keyPathByRemovingFirstKey;	// IMP=0x00100000002686a5
- (id)tsu_keyPathByRemovingLastKey;	// IMP=0x0010000000268642
- (id)tsu_initUnRedactedWithFormat:(id)arg1;	// IMP=0x0010000000269075
- (id)tsu_initRedactedWithFormat:(id)arg1;	// IMP=0x0010000000268fb6
- (id)tsu_initUnRedactedWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;	// IMP=0x0010000000268edb
- (id)tsu_initRedactedWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;	// IMP=0x0010000000268c51
- (unsigned short)tsu_spaceCharacterInCustomNumberFormatSpaceToken;	// IMP=0x0010000000285639
- (unsigned short)tsu_scaleCharacterInCustomNumberFormatScaleToken;	// IMP=0x0010000000285622
- (id)tsu_formatStringFromCustomNumberFormatScaleToken;	// IMP=0x001000000028560b
- (int)tsu_fractionAccuracyFromCustomNumberFormatFractionToken;	// IMP=0x00100000002855db
- (id)tsu_currencyCodeFromCustomNumberFormatCurrencyToken;	// IMP=0x001000000028558a
- (id)tsu_digitPlaceholderStringInDigitToken;	// IMP=0x001000000028551a
- (unsigned long long)tsu_numberOfDigitsInCustomNumberFormatDecimalToken;	// IMP=0x00100000002852c7
- (id)tsu_stringByInsertingFormatGroupingSeparators:(id)arg1;	// IMP=0x0010000000284ec9
- (_Bool)tsu_customFormatIntegerTokenUsesSeparator;	// IMP=0x0010000000284ded
- (unsigned long long)tsu_numberOfDigitsInCustomNumberFormatIntegerToken;	// IMP=0x0010000000284cdf
- (_Bool)tsu_isSpecialCustomNumberFormatTokenOfType:(int)arg1;	// IMP=0x0010000000284c66
- (_Bool)tsu_isSpecialCustomNumberFormatToken;	// IMP=0x0010000000284c22
- (void)sfu_appendJsonStringToString:(id)arg1;	// IMP=0x001000000029a7ae
- (const char *)nulTerminatedUTF8;	// IMP=0x00100000002d7ea6
- (_Bool)tc_doesURLHostContainWhitespace;	// IMP=0x00100000002d7d67
- (_Bool)tc_startsWithString:(id)arg1;	// IMP=0x00100000002d7d46
- (id)tc_stringByRemovingInvalidXmlChars;	// IMP=0x00100000002d8be7
- (_Bool)tc_isEqualToXmlString:(const char *)arg1;	// IMP=0x00100000002d8b79
- (id)tc_componentsSeparatedByWhitespace;	// IMP=0x00100000002d892a
- (id)tc_initFromXmlNode:(struct _xmlNode *)arg1 nsWithFallbackNs:(id)arg2 attributeName:(const char *)arg3;	// IMP=0x00100000002d880c
- (id)tc_initFromXmlNode:(struct _xmlNode *)arg1 ns:(const char *)arg2 attributeName:(const char *)arg3;	// IMP=0x00100000002d8782
- (id)tc_initWithContentOfXmlNode:(struct _xmlNode *)arg1;	// IMP=0x00100000002d86eb
- (id)tc_initWithValueOfXmlAttribute:(struct _xmlAttr *)arg1;	// IMP=0x00100000002d8623
- (const char *)tc_xmlString;	// IMP=0x00100000002d8609
- (id)tc_initWithXmlString:(const char *)arg1;	// IMP=0x00100000002d85c8
- (id)tswp_stringWithoutControlCharacters;	// IMP=0x00100000002ddb17
- (_Bool)tswp_isLowerCaseFromIndex:(unsigned long long)arg1;	// IMP=0x00100000002dd9b2
- (unsigned int)tswp_utf32CharacterAtIndex:(unsigned long long)arg1 planeClassification:(long long *)arg2;	// IMP=0x00100000002dd5be
- (unsigned int)tswp_utf32CharacterAtIndex:(unsigned long long)arg1;	// IMP=0x00100000002dd1e4
@property(readonly, nonatomic) _Bool tswp_NSDetectorMatchStringIsStrictPhoneNumber;
- (id)tswp_replaceOccurrencesOfCharactersInSet:(id)arg1 minimumConsecutiveLength:(unsigned long long)arg2 replaceString:(id)arg3;	// IMP=0x00100000002d96cf
- (struct _NSRange)tswp_rangeOfCharactersFromSet:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000002d95e6
- (unsigned long long)tswp_findIndexOfCharacter:(unsigned short)arg1 range:(struct _NSRange)arg2;	// IMP=0x00100000002d943d
- (id)tswp_stringByNormalizingParagraphBreaks;	// IMP=0x00100000002d9044
- (void)copyToOcText:(struct OcText *)arg1 encoding:(int)arg2;	// IMP=0x001000000017ff23
- (void)copyToOcText:(struct OcText *)arg1;	// IMP=0x001000000017ff0c
- (void)copyToCsString:(struct CsString *)arg1;	// IMP=0x001000000034fe1f
- (id)dataUsingWordEncoding:(int)arg1;	// IMP=0x0010000000180018
- (id)initWithOcText:(const struct OcText *)arg1;	// IMP=0x00100000000b208b
- (id)initWithCsString:(const struct CsString *)arg1;	// IMP=0x0010000000015784
- (unsigned short *)cWideString;	// IMP=0x0010000000373a3e
- (id)tc_escapedFragment;	// IMP=0x0010000000374268
- (id)tc_escapedPath;	// IMP=0x00100000003741ee
- (int)tc_languageTypeAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;	// IMP=0x001000000037401b
- (id)tc_initialsFromAuthorName;	// IMP=0x0010000000373dd7
- (id)getDataUsingOfficeCryptographicEncoding;	// IMP=0x00100000003784ef
- (int)tc_fontTypeAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2 forXML:(_Bool)arg3;	// IMP=0x0010000000413a0c
- (int)fontTypeForCharacter:(unsigned short)arg1 isControl:(_Bool *)arg2;	// IMP=0x001000000041395d
- (id)CM_stringByAddingCSSEscapes;	// IMP=0x001000000046032f
- (id)copyCsvRows:(unsigned long long *)arg1;	// IMP=0x001000000046f051
- (id)_copyCsvRows:(unsigned long long *)arg1 usingDelimiter:(id)arg2 columnCountIsConstant:(_Bool *)arg3;	// IMP=0x001000000046e9fe
- (struct _NSRange)oi_rangeOfCharactersFromSet:(id)arg1 index:(int)arg2;	// IMP=0x00100000000f4137
- (double)oi_sizeWithFontName:(id)arg1 size:(int)arg2 bold:(_Bool)arg3 italic:(_Bool)arg4;	// IMP=0x00100000000ae467
- (double)oi_sizeWithFontName:(id)arg1 size:(int)arg2;	// IMP=0x00100000000ae44f
@end

