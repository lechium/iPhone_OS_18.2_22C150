//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@class NSArray;

@interface NSString (CHCSVAdditions)
+ (id)safari_detailStringWithTitleString:(id)arg1 prompt:(id)arg2;	// IMP=0x0020000000141a80
+ (id)safari_detailStringWithURLString:(id)arg1 prompt:(id)arg2;	// IMP=0x00200000001419b0
+ (id)safari_stringByBase64EncodingData:(id)arg1;	// IMP=0x0020000000140b3b
+ (id)safari_stringWithUTF8Bytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x002000000013ff6b
+ (id)safari_stringWithJSValue:(struct OpaqueJSValue *)arg1 context:(struct OpaqueJSContext *)arg2;	// IMP=0x002000000013f2d1
+ (id)safari_stringWithJSValue:(struct OpaqueJSValue *)arg1 context:(struct OpaqueJSContext *)arg2 nullStringPolicy:(long long)arg3;	// IMP=0x002000000013f23b
- (id)componentsSeparatedByDelimiter:(unsigned short)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0010000000007242
- (id)componentsSeparatedByDelimiter:(unsigned short)arg1 options:(unsigned long long)arg2;	// IMP=0x001000000000722d
- (id)componentsSeparatedByDelimiter:(unsigned short)arg1;	// IMP=0x0010000000007216
- (id)CSVComponentsWithOptions:(unsigned long long)arg1;	// IMP=0x00100000000071f9
@property(readonly, nonatomic) NSArray *CSVComponents;
- (id)CSVComponentsWithOptions:(unsigned long long)arg1 delimiter:(unsigned short)arg2 error:(id *)arg3;	// IMP=0x0010000000007a49
- (id)CSVComponentsWithOptions:(unsigned long long)arg1 delimiter:(unsigned short)arg2;	// IMP=0x0010000000007a2c
- (id)CSVComponentsWithDelimiter:(unsigned short)arg1;	// IMP=0x0010000000007a15
@property(readonly, nonatomic) long long safari_wordCount;
- (id)safari_stringByRedactingStrings:(id)arg1 withReplacement:(id)arg2;	// IMP=0x0010000000141b50
- (struct _NSRange)safari_rangeOfURLScheme;	// IMP=0x00100000001418bb
@property(readonly, copy, nonatomic) NSString *safari_userVisibleTitleIgnoringFullURLString;
@property(readonly, copy, nonatomic) NSString *safari_stringByRemovingParenthesizedDomain;
- (_Bool)safari_looksLikeObscuredPassword;	// IMP=0x0010000000141495
- (id)safari_containedURLs;	// IMP=0x0010000000141373
- (id)safari_ensurePathExtension:(id)arg1;	// IMP=0x0010000000141275
@property(readonly, copy, nonatomic) NSString *safari_lastPathComponentWithoutZipExtension;
@property(readonly, nonatomic) _Bool safari_isPDFMIMEType;
- (id)safari_urlHashesOfComponents;	// IMP=0x0010000000140d34
- (id)safari_sha256Hash;	// IMP=0x0010000000140c4b
- (id)safari_md5Hash;	// IMP=0x0010000000140b62
- (_Bool)safari_isVisualDuplicateOfURLString:(id)arg1;	// IMP=0x0010000000140a01
- (id)safari_canonicalURLForFrequentlyVisitedSites;	// IMP=0x001000000014098a
- (id)safari_canonicalURLStringForFrequentlyVisitedSites;	// IMP=0x00100000001403c5
- (void)safari_enumerateSubdomainRangesInHostUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001402ee
- (id)safari_scriptIfJavaScriptURLString;	// IMP=0x0010000000140269
- (_Bool)safari_isJavaScriptURLString;	// IMP=0x0010000000140250
- (_Bool)safari_isRightToLeft;	// IMP=0x0010000000140224
- (id)safari_stringBySubstitutingHTMLEntitiesForAmpersandAndAngleBrackets;	// IMP=0x00100000001400e8
- (id)safari_stringBySubstitutingAmpersandAndAngleBracketsForHTMLEntities;	// IMP=0x001000000013ffac
- (_Bool)safari_hasDirectionalPrefix;	// IMP=0x001000000013feef
- (id)safari_stringByRemovingDirectionalPrefix;	// IMP=0x001000000013fe9f
@property(readonly, copy, nonatomic) NSString *safari_stringDecodedFromURLQueryParameter;
@property(readonly, copy, nonatomic) NSString *safari_stringEncodedAsURLQueryParameter;
@property(readonly, nonatomic) NSString *safari_stringByReplacingLastOccurrenceOfWhitespaceWithANonBreakingSpace;
@property(readonly, nonatomic) NSString *safari_stringByReplacingMarkupCharactersWithHTMLEntities;
@property(readonly, nonatomic) NSString *safari_stringByAddingSoftBreaksBeforePeriods;
- (id)safari_stringByFoldingWideCharactersAndNormalizing;	// IMP=0x001000000013fa81
- (_Bool)safari_looksLikeAbsoluteURLString;	// IMP=0x001000000013fa1b
- (id)safari_userVisibleURL;	// IMP=0x001000000013f992
- (id)safari_bestURLStringForUserTypedString;	// IMP=0x001000000013f923
@property(readonly, copy, nonatomic) NSString *safari_bestKnownLanguageTag;
- (id)safari_bestLanguageTag;	// IMP=0x001000000013f428
- (id)safari_bestURLForUserTypedString;	// IMP=0x001000000013f2e6
- (id)safari_normalizedParsecInputString;	// IMP=0x00100000001532c6
@end
