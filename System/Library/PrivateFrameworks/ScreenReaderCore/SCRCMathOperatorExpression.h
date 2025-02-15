//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface SCRCMathOperatorExpression
{
    unsigned short _operatorChar;	// 32 = 0x20
}

@property(readonly, nonatomic) unsigned short operatorChar; // @synthesize operatorChar=_operatorChar;
- (id)mathMLString;	// IMP=0x00000000000160b8
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;	// IMP=0x000000000001600c
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2;	// IMP=0x0000000000015c5d
- (id)latexFormatStringAsOver;	// IMP=0x0000000000015bb5
- (_Bool)isFenceDelimiter;	// IMP=0x0000000000015b41
- (_Bool)isOperationSymbol;	// IMP=0x0000000000015af8
- (_Bool)isTermSeparator;	// IMP=0x0000000000015ab7
- (_Bool)isEllipsis;	// IMP=0x0000000000015a94
- (_Bool)isNaturalSuperscript;	// IMP=0x0000000000015a82
- (_Bool)_isFactorialSign;	// IMP=0x0000000000015a6d
- (_Bool)_isMinusSign;	// IMP=0x0000000000015a54
- (_Bool)_isInvisibleCharacter;	// IMP=0x0000000000015a37
- (_Bool)_isRingOperator;	// IMP=0x0000000000015a1e
- (_Bool)canBeUsedWithRange;	// IMP=0x00000000000159d1
- (_Bool)_isSummation;	// IMP=0x00000000000159b8
- (_Bool)_isUnionOrIntersection;	// IMP=0x000000000001598c
- (_Bool)_isIntegral;	// IMP=0x000000000001596f
- (id)description;	// IMP=0x00000000000158f0
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000157de

@end

