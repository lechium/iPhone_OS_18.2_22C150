//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, WDDocument, WDTableCell;

__attribute__((visibility("hidden")))
@interface WDText : NSObject
{
    NSMutableArray *mBlocks;	// 8 = 0x8
    int mTextType;	// 16 = 0x10
    WDDocument *mDocument;	// 24 = 0x18
    WDTableCell *mTableCell;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000404bb1
@property(readonly) __weak WDDocument *document; // @synthesize document=mDocument;
- (id)description;	// IMP=0x0000000000404b73
- (id)content;	// IMP=0x0000000000404a31
- (_Bool)isEmpty;	// IMP=0x0000000000404974
- (id)newRunIterator;	// IMP=0x0000000000404916
- (id)runIterator;	// IMP=0x0000000000404899
- (id)newBlockIterator;	// IMP=0x000000000040486a
- (id)blockIterator;	// IMP=0x0000000000404833
- (int)tableNestingLevel;	// IMP=0x00000000000d648f
- (void)removeLastBlock;	// IMP=0x000000000010051f
- (void)removeLastCharacter:(unsigned short)arg1;	// IMP=0x00000000000e96eb
- (id)addTableAtIndex:(int)arg1;	// IMP=0x00000000004047c4
- (id)addTable;	// IMP=0x00000000000e5b02
- (id)paragraphs;	// IMP=0x000000000040461c
- (id)firstParagraph;	// IMP=0x0000000000404443
- (id)addParagraphAtIndex:(int)arg1;	// IMP=0x00000000004043d4
- (id)addParagraph;	// IMP=0x00000000000d798b
@property(readonly) __weak WDTableCell *tableCell; // @synthesize tableCell=mTableCell;
- (int)textType;	// IMP=0x00000000000d6cf4
- (void)addBlock:(id)arg1;	// IMP=0x00000000004043be
- (unsigned long long)indexOfBlock:(id)arg1;	// IMP=0x00000000004043a8
- (id)lastBlock;	// IMP=0x00000000001aa643
- (id)blockAt:(unsigned long long)arg1;	// IMP=0x00000000000edfde
- (unsigned long long)blockCount;	// IMP=0x00000000000ec7df
- (id)blocks;	// IMP=0x000000000040439a
- (id)initWithDocument:(id)arg1 textType:(int)arg2 tableCell:(id)arg3;	// IMP=0x00000000000c2f04
- (id)initWithDocument:(id)arg1 textType:(int)arg2;	// IMP=0x00000000000c2eef

@end

