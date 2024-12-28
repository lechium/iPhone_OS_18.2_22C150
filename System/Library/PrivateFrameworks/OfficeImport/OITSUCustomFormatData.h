//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexSet, NSString;

__attribute__((visibility("hidden")))
@interface OITSUCustomFormatData : NSObject
{
    unsigned char _minimumIntegerWidth;	// 8 = 0x8
    unsigned char _decimalWidth;	// 9 = 0x9
    unsigned char _numberOfNonSpaceIntegerPlaceholderDigits;	// 10 = 0xa
    unsigned char _numberOfNonSpaceDecimalPlaceholderDigits;	// 11 = 0xb
    unsigned char _indexFromRightOfLastDigitPlaceholder;	// 12 = 0xc
    unsigned char _numberOfHashDecimalPlaceholders;	// 13 = 0xd
    unsigned char _totalNumberOfDecimalPlaceholdersInFormat;	// 14 = 0xe
    _Bool _showThousandsSeparator;	// 15 = 0xf
    _Bool _useAccountingStyle;	// 16 = 0x10
    _Bool _requiresFractionReplacement;	// 17 = 0x11
    _Bool _isConditional;	// 18 = 0x12
    _Bool _formatContainsIntegerToken;	// 19 = 0x13
    _Bool _isComplexFormat;	// 20 = 0x14
    unsigned short _currencyCodeIndex;	// 22 = 0x16
    int _fractionAccuracy;	// 24 = 0x18
    NSString *_formatString;	// 32 = 0x20
    NSArray *_interstitialStrings;	// 40 = 0x28
    NSIndexSet *_interstitialStringInsertionIndexes;	// 48 = 0x30
    double _scaleFactor;	// 56 = 0x38
}

+ (id)customFormatData;	// IMP=0x00100000002b1074
- (void).cxx_destruct;	// IMP=0x00000000002b1ad7
@property(nonatomic) _Bool isComplexFormat; // @synthesize isComplexFormat=_isComplexFormat;
@property(nonatomic) _Bool formatContainsIntegerToken; // @synthesize formatContainsIntegerToken=_formatContainsIntegerToken;
@property(nonatomic) _Bool isConditional; // @synthesize isConditional=_isConditional;
@property(nonatomic) _Bool requiresFractionReplacement; // @synthesize requiresFractionReplacement=_requiresFractionReplacement;
@property(nonatomic) _Bool useAccountingStyle; // @synthesize useAccountingStyle=_useAccountingStyle;
@property(nonatomic) _Bool showThousandsSeparator; // @synthesize showThousandsSeparator=_showThousandsSeparator;
@property(nonatomic) unsigned short currencyCodeIndex; // @synthesize currencyCodeIndex=_currencyCodeIndex;
@property(nonatomic) unsigned char totalNumberOfDecimalPlaceholdersInFormat; // @synthesize totalNumberOfDecimalPlaceholdersInFormat=_totalNumberOfDecimalPlaceholdersInFormat;
@property(nonatomic) unsigned char numberOfHashDecimalPlaceholders; // @synthesize numberOfHashDecimalPlaceholders=_numberOfHashDecimalPlaceholders;
@property(nonatomic) unsigned char indexFromRightOfLastDigitPlaceholder; // @synthesize indexFromRightOfLastDigitPlaceholder=_indexFromRightOfLastDigitPlaceholder;
@property(nonatomic) unsigned char numberOfNonSpaceDecimalPlaceholderDigits; // @synthesize numberOfNonSpaceDecimalPlaceholderDigits=_numberOfNonSpaceDecimalPlaceholderDigits;
@property(nonatomic) unsigned char numberOfNonSpaceIntegerPlaceholderDigits; // @synthesize numberOfNonSpaceIntegerPlaceholderDigits=_numberOfNonSpaceIntegerPlaceholderDigits;
@property(nonatomic) unsigned char decimalWidth; // @synthesize decimalWidth=_decimalWidth;
@property(nonatomic) unsigned char minimumIntegerWidth; // @synthesize minimumIntegerWidth=_minimumIntegerWidth;
@property(nonatomic) int fractionAccuracy; // @synthesize fractionAccuracy=_fractionAccuracy;
@property(nonatomic) double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(copy, nonatomic) NSIndexSet *interstitialStringInsertionIndexes; // @synthesize interstitialStringInsertionIndexes=_interstitialStringInsertionIndexes;
@property(copy, nonatomic) NSArray *interstitialStrings; // @synthesize interstitialStrings=_interstitialStrings;
@property(copy, nonatomic) NSString *formatString; // @synthesize formatString=_formatString;
- (unsigned long long)hash;	// IMP=0x00000000002b191b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002b1440
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002b1435
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002b13e2
- (void)p_copySelfTo:(id)arg1;	// IMP=0x00000000002b1148
- (id)init;	// IMP=0x00000000002b10f5
- (id)initWithCustomFormatData:(id)arg1;	// IMP=0x00000000002b108d

@end
