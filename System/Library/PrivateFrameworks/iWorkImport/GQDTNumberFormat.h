//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexSet, NSString;

@interface GQDTNumberFormat : NSObject
{
    char *mUid;	// 8 = 0x8
    struct __CFString *mFormatString;	// 16 = 0x10
    struct __CFString *mCurrencyCode;	// 24 = 0x18
    long long mDecimalPlaces;	// 32 = 0x20
    _Bool mUseAccountingStyle;	// 40 = 0x28
    _Bool mShowThousandsSeparator;	// 41 = 0x29
    int mValueType;	// 44 = 0x2c
    int mNegativeStyle;	// 48 = 0x30
    int mFractionAccuracy;	// 52 = 0x34
    _Bool mFormatStringRequiresSuppressionOfMinusSign;	// 56 = 0x38
    double mScaleFactor;	// 64 = 0x40
    _Bool mIsCustom;	// 72 = 0x48
    _Bool mRequiresFractionReplacement;	// 73 = 0x49
    unsigned char mNumberOfNonSpaceIntegerPlaceholderDigits;	// 74 = 0x4a
    unsigned char mNumberOfNonSpaceDecimalPlaceholderDigits;	// 75 = 0x4b
    unsigned short mIndexFromRightOfLastDigitPlaceholder;	// 76 = 0x4c
    unsigned char mBase;	// 78 = 0x4e
    unsigned short mBasePlaces;	// 80 = 0x50
    _Bool mBaseUsesMinusSign;	// 82 = 0x52
    _Bool mUseScientificFormattingAutomatically;	// 83 = 0x53
    _Bool mIgnoreDecimalPlacesForZeroValue;	// 84 = 0x54
    _Bool mIsTextFormat;	// 85 = 0x55
    _Bool mFormatContainsSpecialTokens;	// 86 = 0x56
    _Bool mFormatContainsIntegerToken;	// 87 = 0x57
    NSArray *mInterstitialStrings;	// 88 = 0x58
    NSIndexSet *mInterstitialStringInsertionIndexes;	// 96 = 0x60
    unsigned char mMinimumIntegerWidth;	// 104 = 0x68
    unsigned char mDecimalWidth;	// 105 = 0x69
    struct __CFString *mSuffixString;	// 112 = 0x70
}

+ (const struct StateSpec *)stateForReading;	// IMP=0x0010000000016b2c
+ (id)numberFormatWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(_Bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(_Bool)arg7 fractionAccuracy:(int)arg8 suffixString:(struct __CFString *)arg9;	// IMP=0x0010000000017927
+ (_Bool)needToSuppressMinusSignForFormatString:(struct __CFString *)arg1;	// IMP=0x0010000000017868
- (_Bool)useAccountingStyle;	// IMP=0x000000000001784d
- (int)valueType;	// IMP=0x0000000000017844
- (struct __CFString *)createStringFromDouble:(double)arg1;	// IMP=0x00000000000177a1
- (id)stringFromDouble:(double)arg1;	// IMP=0x0000000000016bd3
- (_Bool)hasValidDecimalPlaces;	// IMP=0x0000000000016bbf
- (void)dealloc;	// IMP=0x0000000000016b39
- (int)fractionAccuracy;	// IMP=0x0000000000019656
- (_Bool)isTextFormat;	// IMP=0x000000000001964d
- (_Bool)isCustom;	// IMP=0x0000000000019644
- (id)customNumberFormatTokens;	// IMP=0x00000000000186a5
- (_Bool)showThousandsSeparator;	// IMP=0x000000000001869c
- (id)currencyCode;	// IMP=0x0000000000018692
- (id)formatString;	// IMP=0x0000000000018688
- (id)numberFormatBySettingValueType:(int)arg1;	// IMP=0x0000000000018569
- (id)numberFormatBySettingNegativeStyle:(int)arg1;	// IMP=0x0000000000018415
- (void)setUseScientificFormattingAutomatically:(_Bool)arg1;	// IMP=0x000000000001840c
- (id)baseStringFromDouble:(double)arg1;	// IMP=0x00000000000181f7
- (id)fractionStringFromDouble:(double)arg1;	// IMP=0x000000000001800e
- (id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(_Bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(_Bool)arg7 fractionAccuracy:(int)arg8 suffixString:(struct __CFString *)arg9 scaleFactor:(double)arg10 base:(unsigned short)arg11 basePlaces:(unsigned short)arg12 baseUseMinusSign:(_Bool)arg13 isCustom:(_Bool)arg14 interstitialStrings:(id)arg15 interstitialStringInsertionIndexes:(id)arg16 indexFromRightOfLastDigitPlaceholder:(unsigned short)arg17 minimumIntegerWidth:(unsigned char)arg18 decimalWidth:(unsigned char)arg19 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)arg20 numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)arg21 isTextFormat:(_Bool)arg22 formatName:(id)arg23;	// IMP=0x0000000000017cc1
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;	// IMP=0x0000000000017a08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
