//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDRowBlock, EDRowBlocks;

__attribute__((visibility("hidden")))
@interface EDCellIterator : NSObject
{
    EDRowBlocks *mRowBlocks;	// 8 = 0x8
    EDRowBlock *mCurrentRowBlock;	// 16 = 0x10
    struct EDRowInfo *mCurrentRowInfo;	// 24 = 0x18
    unsigned int mCurrentRowInfoIndex;	// 32 = 0x20
    struct EDCellHeader *mCurrentCell;	// 40 = 0x28
    unsigned int mCurrentCellIndex;	// 48 = 0x30
    unsigned int mDesiredRowNumber;	// 52 = 0x34
    unsigned int mDesiredColumnNumber;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000003bc7cb
- (struct EDCellHeader *)scanToRowNumber:(unsigned int)arg1 columnNumber:(unsigned int)arg2;	// IMP=0x00000000003bc614
- (struct EDCellHeader *)adjacentCellRight;	// IMP=0x00000000003bc5fd
- (struct EDCellHeader *)adjacentCellLeft;	// IMP=0x00000000003bc5e6
- (void)dealloc;	// IMP=0x00000000003bc56f
- (id)initWithWorksheet:(id)arg1;	// IMP=0x00000000003bc4aa
- (struct EDCellHeader *)adjacentCell:(int)arg1;	// IMP=0x00000000003bc7f3

@end

