//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ESDContainer, OABReaderState, OABTableSortedIntArray, OADTable;

__attribute__((visibility("hidden")))
@interface OABRTable : NSObject
{
    ESDContainer *mSrcTable;	// 8 = 0x8
    OADTable *mTgtTable;	// 16 = 0x10
    OABReaderState *mState;	// 24 = 0x18
    struct CGPoint mScale;	// 32 = 0x20
    int mRowCount;	// 48 = 0x30
    int mColumnCount;	// 52 = 0x34
    OABTableSortedIntArray *mXCoords;	// 56 = 0x38
    OABTableSortedIntArray *mYCoords;	// 64 = 0x40
    void *mHorzLines;	// 72 = 0x48
    void *mVertLines;	// 80 = 0x50
    void *mCells;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000003040c7
- (void)map;	// IMP=0x000000000015e6f4
- (void)createTargetTableContents;	// IMP=0x00000000002398b5
- (id)readStrokeFromShape:(void *)arg1;	// IMP=0x000000000023a1f0
- (void)validateTable;	// IMP=0x00000000002395c6
- (void)readCellsAndLines;	// IMP=0x000000000015f5c2
- (void)readCoordinates;	// IMP=0x000000000015eadd
- (void)mapScale;	// IMP=0x000000000015e873
- (void)readAnchor;	// IMP=0x000000000015e818
- (void)dealloc;	// IMP=0x000000000015f994
- (id)initWithSourceTable:(id)arg1 targetTable:(id)arg2 state:(id)arg3;	// IMP=0x000000000015e616

@end
