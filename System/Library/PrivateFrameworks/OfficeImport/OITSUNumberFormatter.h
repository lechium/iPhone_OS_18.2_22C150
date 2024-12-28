//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSLocale, NSMutableArray, NSMutableDictionary, NSString, OITSULocaleStructuredDictionary;

__attribute__((visibility("hidden")))
@interface OITSUNumberFormatter : NSObject
{
    NSLocale *_locale;	// 8 = 0x8
    NSArray *_decimalFormatters;	// 16 = 0x10
    NSDictionary *_currencyFormatters;	// 24 = 0x18
    NSArray *_percentageFormatters;	// 32 = 0x20
    NSArray *_scientificFormatters;	// 40 = 0x28
    struct __CFNumberFormatter *_fractionFormatter;	// 48 = 0x30
    NSString *_currencyString;	// 56 = 0x38
    NSString *_percentageString;	// 64 = 0x40
    NSString *_scientificString;	// 72 = 0x48
    NSString *_decimalString;	// 80 = 0x50
    NSString *_decimalSeparator;	// 88 = 0x58
    NSString *_currencyDecimalSeparator;	// 96 = 0x60
    NSString *_groupingSeparator;	// 104 = 0x68
    NSString *_currencyGroupingSeparator;	// 112 = 0x70
    NSString *_percentSymbol;	// 120 = 0x78
    unsigned long long _groupingSize;	// 128 = 0x80
    NSMutableArray *_transformedDecimalStrings;	// 136 = 0x88
    NSMutableArray *_transformedCurrencyStrings;	// 144 = 0x90
    NSMutableArray *_transformedPercentageStrings;	// 152 = 0x98
    NSMutableArray *_transformedScientificStrings;	// 160 = 0xa0
    OITSULocaleStructuredDictionary *_harmonizedNumberFormatterSymbols;	// 168 = 0xa8
    NSMutableDictionary *_currencyCodeToSymbolMap;	// 176 = 0xb0
    NSMutableDictionary *_currencyCodeToHalfWidthSymbolMap;	// 184 = 0xb8
    NSString *_additionalCurrencyCode;	// 192 = 0xc0
    NSDictionary *_additionalCurrencyCodeFormatters;	// 200 = 0xc8
}

+ (id)userVisibleCurrencyCodes;	// IMP=0x006000000025f4d8
+ (unsigned long long)groupingSizeForLocale:(id)arg1;	// IMP=0x006000000025f494
+ (id)percentSymbolForLocale:(id)arg1;	// IMP=0x006000000025f444
+ (id)currencyGroupingSeparatorForLocale:(id)arg1;	// IMP=0x006000000025f3f4
+ (id)currencyDecimalSeparatorForLocale:(id)arg1;	// IMP=0x006000000025f3a4
+ (id)groupingSeparatorForLocale:(id)arg1;	// IMP=0x006000000025f354
+ (id)decimalSeparatorForLocale:(id)arg1;	// IMP=0x006000000025f304
+ (id)defaultFormatStringForValueType:(int)arg1;	// IMP=0x006000000025f2a5
+ (id)defaultFormatStringForValueType:(int)arg1 negativeStyle:(int)arg2;	// IMP=0x006000000025f241
+ (id)numberFormatStringSpecialSymbols;	// IMP=0x006000000025f221
+ (id)currentLocaleCurrencyDecimalSeparator;	// IMP=0x006000000025f1ca
+ (id)currentLocaleDecimalSeparator;	// IMP=0x006000000025f173
+ (id)currentLocaleCurrencyCode;	// IMP=0x006000000025f15f
+ (id)defaultCurrencyCodeForLocale:(id)arg1;	// IMP=0x006000000025f10f
+ (unsigned short)defaultDecimalPlacesForCurrencyCode:(id)arg1;	// IMP=0x006000000025f018
+ (id)currencySymbolForCurrencyCode:(id)arg1 locale:(id)arg2;	// IMP=0x006000000025ef8f
+ (id)currencySymbolForCurrencyCode:(id)arg1;	// IMP=0x006000000025ef7b
+ (id)displayNameForCurrencyCode:(id)arg1;	// IMP=0x006000000025eeff
+ (id)availableCurrencyCodes;	// IMP=0x006000000025eef5
+ (void)formatString:(id)arg1 replaceOccurencesOfUnescapedString:(id)arg2 withString:(id)arg3;	// IMP=0x006000000025ec19
+ (id)formatString:(id)arg1 transformedForNegativeStyle:(int)arg2;	// IMP=0x006000000025e8b9
+ (int)positionOfMinusSignInNumberFormatSubpattern:(id)arg1;	// IMP=0x006000000025e831
+ (int)positionOfCurrencySymbolInNumberFormatSubpattern:(id)arg1;	// IMP=0x006000000025e815
+ (int)positionOfSymbol:(id)arg1 inNumberFormatSubpattern:(id)arg2;	// IMP=0x006000000025e79c
+ (id)stringBySubstitutingCharactersCFNumberFormatterDoesntUnderstand:(id)arg1;	// IMP=0x006000000025e5bb
+ (void)initialize;	// IMP=0x006000000025e52d
+ (id)formatterForLocale:(id)arg1;	// IMP=0x006000000025f889
+ (struct __CFNumberFormatter *)createHarmonizedCFNumberFormatterWithLocale:(id)arg1 style:(long long)arg2;	// IMP=0x006000000025f82f
- (void).cxx_destruct;	// IMP=0x000000000025f705
- (id)p_scientificFormatters;	// IMP=0x0000000000262d38
- (id)p_percentageFormatters;	// IMP=0x0000000000262cac
- (id)p_currencyFormatters;	// IMP=0x0000000000262bde
- (id)p_decimalFormatters;	// IMP=0x0000000000262b52
- (id)p_createDictionaryOfCurrencyFormattersForCurrencies:(id)arg1;	// IMP=0x000000000026257a
- (unsigned long long)groupingSize;	// IMP=0x000000000026256d
- (id)percentSymbol;	// IMP=0x000000000026255f
- (id)currencyGroupingSeparator;	// IMP=0x0000000000262551
- (id)currencyDecimalSeparator;	// IMP=0x0000000000262543
- (id)groupingSeparator;	// IMP=0x0000000000262535
- (id)decimalSeparator;	// IMP=0x0000000000262527
- (id)defaultFormatStringForValueType:(int)arg1;	// IMP=0x0000000000262503
- (id)defaultFormatStringForValueType:(int)arg1 negativeStyle:(int)arg2;	// IMP=0x00000000002624bc
- (id)currencyCode;	// IMP=0x0000000000262481
- (id)halfWidthCurrencySymbolForCurrencyCode:(id)arg1;	// IMP=0x0000000000262393
- (id)currencySymbolForCurrencyCode:(id)arg1;	// IMP=0x0000000000262066
- (void)p_loadHarmonizedNumberFormatterSymbols;	// IMP=0x0000000000261f53
- (id)displayNameForCurrencyCode:(id)arg1;	// IMP=0x0000000000261f30
- (id)p_findCurrencySymbolInString:(id)arg1 additionalCurrencyCode:(id)arg2 successfullString:(id *)arg3 currencyCode:(id *)arg4;	// IMP=0x0000000000261a5a
- (_Bool)p_valueFromString:(id)arg1 formatters:(id)arg2 value:(double *)arg3 formatString:(id *)arg4;	// IMP=0x00000000002618f7
- (_Bool)fractionFromString:(id)arg1 value:(double *)arg2;	// IMP=0x00000000002613ea
- (_Bool)scientificFromString:(id)arg1 value:(double *)arg2 formatString:(id *)arg3;	// IMP=0x0000000000261366
- (_Bool)percentageFromString:(id)arg1 value:(double *)arg2 formatString:(id *)arg3;	// IMP=0x00000000002612e2
- (_Bool)currencyFromString:(id)arg1 additionalCurrencyCode:(id)arg2 value:(double *)arg3 formatString:(id *)arg4 currencyCode:(id *)arg5;	// IMP=0x0000000000260e4b
- (_Bool)decimalFromString:(id)arg1 value:(double *)arg2 formatString:(id *)arg3;	// IMP=0x0000000000260dc7
- (void)p_numberPreferencesChanged:(id)arg1;	// IMP=0x0000000000260bc0
- (struct __CFNumberFormatter *)p_createHarmonizedCFNumberFormatterOfStyle:(long long)arg1;	// IMP=0x000000000026028a
- (void)dealloc;	// IMP=0x0000000000260243
- (id)initWithLocale:(id)arg1;	// IMP=0x000000000025fccb

@end
