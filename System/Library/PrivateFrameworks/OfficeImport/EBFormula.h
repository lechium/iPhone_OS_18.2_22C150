//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EBFormula : NSObject
{
}

+ (struct XlFormulaInfo *)xlFormulaInfoFromEDFormula:(id)arg1 state:(id)arg2;	// IMP=0x008000000039844e
+ (id)edFormulaFromXlFmlaDefinition:(const void *)arg1 withTokenLength:(int)arg2 formulaLength:(int)arg3 formulaClass:(Class)arg4 edSheet:(id)arg5 state:(id)arg6;	// IMP=0x0080000000398338
+ (id)edFormulaFromXlFmlaDefinition:(const void *)arg1 withFormulaLength:(int)arg2 formulaClass:(Class)arg3 state:(id)arg4;	// IMP=0x008000000014cbf4
+ (id)edFormulaFromXlFmlaDefinition:(const void *)arg1 withFormulaLength:(int)arg2 state:(id)arg3;	// IMP=0x008000000014cb74
+ (void)readFormulaFromXlCell:(struct XlCell *)arg1 edCell:(struct EDCellHeader *)arg2 edRowBlocks:(id)arg3 state:(id)arg4;	// IMP=0x00800000001487bd
+ (struct XlFormulaInfo *)xlFormulaInfoFromEDSharedFormula:(id)arg1 state:(id)arg2;	// IMP=0x00800000003989d8
+ (void)setupTokensInEDFormulaFromXlFormulaProcessor:(void *)arg1 length:(int)arg2 edFormula:(id)arg3 edSheet:(id)arg4;	// IMP=0x0080000000137f2f
+ (unsigned int)writeToken:(id)arg1 tokenIndex:(unsigned int)arg2 tokenStream:(struct XLFormulaStream *)arg3 extendedStream:(struct XLFormulaStream *)arg4 state:(id)arg5;	// IMP=0x008000000039878a
+ (char *)edFormulaToParsedExpression:(id)arg1 tokenLength:(unsigned short *)arg2 formulaLength:(unsigned short *)arg3 state:(id)arg4;	// IMP=0x00800000003985f8

@end

