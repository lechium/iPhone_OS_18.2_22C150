//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GQHTable
{
}

+ (const char *)name;	// IMP=0x0010000000034d5c
+ (int)handleCell:(id)arg1 state:(id)arg2;	// IMP=0x00100000000349e7
+ (int)endCells:(id)arg1 state:(id)arg2;	// IMP=0x00100000000349dc
+ (int)beginCells:(id)arg1 state:(id)arg2;	// IMP=0x00100000000343ab
+ (void)startTableWithTableAnchor:(struct __CFString *)arg1 tableHeight:(float)arg2 state:(id)arg3;	// IMP=0x0010000000033f2b
+ (int)endTable:(id)arg1 state:(id)arg2;	// IMP=0x0010000000033d9e
+ (int)beginTable:(id)arg1 state:(id)arg2;	// IMP=0x0010000000033cbc
+ (void)addMissingCellsUpToRowIndex:(unsigned short)arg1 columnIndex:(unsigned short)arg2 state:(id)arg3;	// IMP=0x00100000000339ab
+ (void)addMissingCellWithRowIndex:(unsigned short)arg1 columnIndex:(unsigned short)arg2 state:(id)arg3;	// IMP=0x001000000003361f
+ (void)beginRowWithIndex:(unsigned short)arg1 state:(id)arg2;	// IMP=0x00100000000334bf
+ (int)mapCellContent:(id)arg1 xml:(id)arg2 state:(id)arg3;	// IMP=0x0010000000032ec9
+ (struct __CFString *)createTableAttachmentIdWithNumber:(long long)arg1;	// IMP=0x0010000000035938
+ (void)splitTable:(id)arg1;	// IMP=0x00100000000357c3
+ (unsigned short)resolveGroupLevel:(id)arg1 model:(id)arg2 columnIndex:(int)arg3 tableState:(id)arg4;	// IMP=0x001000000003572d
+ (void)mapVectorStyles:(id *)arg1 toCellStyle:(id)arg2 state:(id)arg3;	// IMP=0x0010000000035632
+ (void)getVectorStylesForRowIndex:(unsigned short)arg1 rowSpan:(unsigned short)arg2 columnIndex:(unsigned short)arg3 columnSpan:(unsigned short)arg4 vectorStyles:(id *)arg5 state:(id)arg6;	// IMP=0x00100000000354bc
+ (void)mapCellStyle:(id)arg1 rowIndex:(unsigned short)arg2 rowSpan:(unsigned short)arg3 columnIndex:(unsigned short)arg4 columnSpan:(unsigned short)arg5 state:(id)arg6 cell:(id)arg7 level:(unsigned short)arg8;	// IMP=0x0010000000034e9a
+ (id)mapBaseFillStyleForRowIndex:(unsigned short)arg1 columnIndex:(unsigned short)arg2 state:(id)arg3 isGroupingCell:(_Bool)arg4;	// IMP=0x0010000000034d69

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
