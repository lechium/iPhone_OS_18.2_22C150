//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EDReference;

__attribute__((visibility("hidden")))
@interface EMCellMapper
{
    struct EDCellHeader *edCell;	// 40 = 0x28
    EDReference *edMergedCellReference;	// 48 = 0x30
    int rowNumber;	// 56 = 0x38
    int firstColumn;	// 60 = 0x3c
    int lastColumn;	// 64 = 0x40
    int columnSpan;	// 68 = 0x44
    _Bool firstCellFlag;	// 72 = 0x48
    _Bool spreadLeftFlag;	// 73 = 0x49
    double columnWidth;	// 80 = 0x50
}

+ (_Bool)isCellEmpty:(struct EDCellHeader *)arg1;	// IMP=0x00600000004649fa
- (void).cxx_destruct;	// IMP=0x0000000000465102
- (void)mapAt:(id)arg1 withState:(id)arg2 height:(double)arg3 nextCell:(struct EDCellHeader *)arg4;	// IMP=0x0000000000464a25
- (void)mapRowColSpansAt:(id)arg1 withState:(id)arg2;	// IMP=0x0000000000131617
- (void)adjustColumnSpanForGrid:(double *)arg1 columnCount:(unsigned long long)arg2 nextCell:(struct EDCellHeader *)arg3 withState:(id)arg4;	// IMP=0x000000000013144d
- (_Bool)isCellMerged;	// IMP=0x000000000013117d
- (_Bool)isCellSpreading:(id)arg1;	// IMP=0x000000000013120b
- (_Bool)isFirstCell;	// IMP=0x0000000000464a15
- (void)setFirstCellFlag;	// IMP=0x000000000013115c
- (_Bool)isCellEmpty;	// IMP=0x00000000001642a2
- (int)columnSpan;	// IMP=0x00000000004649ea
- (void)resetColumnSpan:(int)arg1;	// IMP=0x00000000004649da
- (double)columnWidth;	// IMP=0x00000000004649c8
- (void)setFirstColumn:(int)arg1;	// IMP=0x00000000004649b8
- (int)firstColumn;	// IMP=0x00000000004649a8
- (void)setLastColumn:(int)arg1;	// IMP=0x00000000001642d1
- (int)lastColumn;	// IMP=0x000000000013116d
- (id)initWithEDCell:(struct EDCellHeader *)arg1 rowInfo:(struct EDRowInfo *)arg2 parent:(id)arg3 state:(id)arg4;	// IMP=0x0000000000130ef1
- (id)initWithParent:(id)arg1;	// IMP=0x00000000001310be
- (id)mapHyperlink:(id)arg1 at:(id)arg2;	// IMP=0x0000000000465115

@end

