//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexPath;

__attribute__((visibility("hidden")))
@interface UIDictationSerializableResults : NSObject
{
    _Bool _fromKeyboard;	// 8 = 0x8
    _Bool _showMultilingualAlternatives;	// 9 = 0x9
    _Bool _lowConfidenceAboutLanguageDetection;	// 10 = 0xa
    _Bool _useServerCapitalization;	// 11 = 0xb
    _Bool _addTrailingSpace;	// 12 = 0xc
    _Bool _allowsAlternatives;	// 13 = 0xd
    _Bool _isFinalResult;	// 14 = 0xe
    NSArray *_phrases;	// 16 = 0x10
    NSArray *_multilingualAlternatives;	// 24 = 0x18
    struct __CFString *_transform;	// 32 = 0x20
    NSIndexPath *_indexPathOfInterpretations;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000f8a6fd
- (void).cxx_destruct;	// IMP=0x0000000000f8d9ab
@property(nonatomic) _Bool isFinalResult; // @synthesize isFinalResult=_isFinalResult;
@property(readonly, nonatomic) _Bool allowsAlternatives; // @synthesize allowsAlternatives=_allowsAlternatives;
@property(retain, nonatomic) NSIndexPath *indexPathOfInterpretations; // @synthesize indexPathOfInterpretations=_indexPathOfInterpretations;
@property(nonatomic) _Bool addTrailingSpace; // @synthesize addTrailingSpace=_addTrailingSpace;
@property(nonatomic) _Bool useServerCapitalization; // @synthesize useServerCapitalization=_useServerCapitalization;
@property(nonatomic) struct __CFString *transform; // @synthesize transform=_transform;
@property(nonatomic) _Bool lowConfidenceAboutLanguageDetection; // @synthesize lowConfidenceAboutLanguageDetection=_lowConfidenceAboutLanguageDetection;
@property(nonatomic) _Bool showMultilingualAlternatives; // @synthesize showMultilingualAlternatives=_showMultilingualAlternatives;
@property(nonatomic) _Bool fromKeyboard; // @synthesize fromKeyboard=_fromKeyboard;
@property(copy, nonatomic) NSArray *multilingualAlternatives; // @synthesize multilingualAlternatives=_multilingualAlternatives;
@property(copy, nonatomic) NSArray *phrases; // @synthesize phrases=_phrases;
- (id)description;	// IMP=0x0000000000f8d85a
- (id)singleLineResult;	// IMP=0x0000000000f8cf01
- (id)bestResults;	// IMP=0x0000000000f8cd20
- (id)dictationPhraseArray;	// IMP=0x0000000000f8c320
- (id)bestTextArrayForAlternatives:(id)arg1;	// IMP=0x0000000000f8c27a
- (id)secondBestTextArray;	// IMP=0x0000000000f8bdfc
- (id)bestTextArray;	// IMP=0x0000000000f8bd95
- (id)textArrayForAlternatives:(id)arg1;	// IMP=0x0000000000f8bb03
- (id)textArray;	// IMP=0x0000000000f8b88c
- (id)bestTextForMultilingualAlternatives;	// IMP=0x0000000000f8b569
- (id)multilingualResultsByLanguageCode;	// IMP=0x0000000000f8b3af
- (id)secondBestText;	// IMP=0x0000000000f8b358
- (id)bestText;	// IMP=0x0000000000f8b301
- (id)text;	// IMP=0x0000000000f8b2aa
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000f8b061
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000f8af1a
- (void)dealloc;	// IMP=0x0000000000f8aed3
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000f8ac72
- (id)initWithArrayOfArrayOfStrings:(id)arg1;	// IMP=0x0000000000f8a8d3
- (id)initWithDetectedPhrases:(id)arg1 multilingualAlternatives:(id)arg2;	// IMP=0x0000000000f8a817
- (id)initWithPhrases:(id)arg1;	// IMP=0x0000000000f8a79e
- (id)init;	// IMP=0x0000000000f8a705

@end

