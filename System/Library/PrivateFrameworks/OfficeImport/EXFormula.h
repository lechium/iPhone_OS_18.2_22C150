//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXFormula : NSObject
{
}

+ (id)edTokensForFormulaString:(id)arg1 sheet:(id)arg2 workbook:(id)arg3;	// IMP=0x00800000003b52cb
+ (void)applyArrayedFormulasToSheet:(id)arg1 state:(id)arg2;	// IMP=0x00800000001c12d2
+ (void)readFrom:(struct _xmlNode *)arg1 rowNumber:(int)arg2 columnNumber:(int)arg3 edCell:(struct EDCellHeader *)arg4 edRowBlocks:(id)arg5 state:(id)arg6;	// IMP=0x00800000001ee273
+ (id)edFormulaFromXmlFormulaElement:(struct _xmlNode *)arg1 formulaClass:(Class)arg2 state:(id)arg3;	// IMP=0x0080000000209db1
+ (id)edFormulaFromXmlFormulaElement:(struct _xmlNode *)arg1 state:(id)arg2;	// IMP=0x00800000003b5244
+ (void)applyArrayedFormula:(id)arg1 edReference:(id)arg2 edWorksheet:(id)arg3 state:(id)arg4;	// IMP=0x008000000023e793
+ (Class)formulaClassFromXmlFormulaElement:(struct _xmlNode *)arg1 state:(id)arg2;	// IMP=0x00800000001ee343
+ (id)edTokensForFormulaString:(id)arg1 formulaClass:(Class)arg2 rowNumber:(int)arg3 columnNumber:(int)arg4 sheet:(id)arg5 workbook:(id)arg6;	// IMP=0x00800000001ee970
+ (id)readFrom:(struct _xmlNode *)arg1 formulaClass:(Class)arg2 rowNumber:(int)arg3 columnNumber:(int)arg4 edCell:(struct EDCellHeader *)arg5 edRowBlocks:(id)arg6 state:(id)arg7;	// IMP=0x00800000001ee494

@end
