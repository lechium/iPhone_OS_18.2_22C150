//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WDBorder, WDShading;

__attribute__((visibility("hidden")))
@interface WDTableCellDescriptor : NSObject
{
    WDShading *mShading;	// 8 = 0x8
    WDBorder *mTopBorder;	// 16 = 0x10
    WDBorder *mLeftBorder;	// 24 = 0x18
    WDBorder *mBottomBorder;	// 32 = 0x20
    WDBorder *mRightBorder;	// 40 = 0x28
    WDBorder *mDiagonalUpBorder;	// 48 = 0x30
    WDBorder *mDiagonalDownBorder;	// 56 = 0x38
    short mWidth;	// 64 = 0x40
    int mWidthType;	// 68 = 0x44
    short mTopMargin;	// 72 = 0x48
    int mTopMarginType;	// 76 = 0x4c
    short mBottomMargin;	// 80 = 0x50
    int mBottomMarginType;	// 84 = 0x54
    short mLeftMargin;	// 88 = 0x58
    int mLeftMarginType;	// 92 = 0x5c
    short mRightMargin;	// 96 = 0x60
    int mRightMarginType;	// 100 = 0x64
    int mVerticalAlignment;	// 104 = 0x68
    unsigned int mShadingOverridden:1;	// 108 = 0x6c
    unsigned int mTopBorderOverridden:1;	// 108 = 0x6c
    unsigned int mLeftBorderOverridden:1;	// 108 = 0x6c
    unsigned int mBottomBorderOverridden:1;	// 108 = 0x6c
    unsigned int mRightBorderOverridden:1;	// 108 = 0x6c
    unsigned int mDiagonalUpBorderOverridden:1;	// 108 = 0x6c
    unsigned int mDiagonalDownBorderOverridden:1;	// 108 = 0x6c
    unsigned int mWidthTypeOverridden:1;	// 108 = 0x6c
    unsigned int mTopMarginOverridden:1;	// 109 = 0x6d
    unsigned int mTopMarginTypeOverridden:1;	// 109 = 0x6d
    unsigned int mBottomMarginOverridden:1;	// 109 = 0x6d
    unsigned int mBottomMarginTypeOverridden:1;	// 109 = 0x6d
    unsigned int mLeftMarginOverridden:1;	// 109 = 0x6d
    unsigned int mLeftMarginTypeOverridden:1;	// 109 = 0x6d
    unsigned int mRightMarginOverridden:1;	// 109 = 0x6d
    unsigned int mRightMarginTypeOverridden:1;	// 109 = 0x6d
    unsigned int mVerticalAlignmentOverridden:1;	// 110 = 0x6e
    unsigned int mVerticallyMergedCell:1;	// 110 = 0x6e
    unsigned int mVerticallyMergedCellOverridden:1;	// 110 = 0x6e
    unsigned int mFirstInSetOfVerticallyMergedCells:1;	// 110 = 0x6e
    unsigned int mFirstInSetOfVerticallyMergedCellsOverridden:1;	// 110 = 0x6e
    unsigned int mNoWrap:1;	// 110 = 0x6e
    unsigned int mNoWrapOverridden:1;	// 110 = 0x6e
}

- (void).cxx_destruct;	// IMP=0x00000000003ff0b6
- (void)setNoWrapOverridden:(_Bool)arg1;	// IMP=0x00000000003ff0a3
- (_Bool)isNoWrapOverridden;	// IMP=0x00000000003ff095
- (void)setNoWrap:(_Bool)arg1;	// IMP=0x00000000003ff082
- (_Bool)noWrap;	// IMP=0x00000000003ff074
- (void)setFirstInSetOfVerticallyMergedCellsOverridden:(_Bool)arg1;	// IMP=0x00000000003ff061
- (_Bool)isFirstInSetOfVerticallyMergedCellsOverridden;	// IMP=0x00000000003ff053
- (void)setFirstInSetOfVerticallyMergedCells:(_Bool)arg1;	// IMP=0x00000000003ff040
- (_Bool)firstInSetOfVerticallyMergedCells;	// IMP=0x00000000003ff032
- (void)setVerticallyMergedCellOverridden:(_Bool)arg1;	// IMP=0x00000000003ff01f
- (_Bool)isVerticallyMergedCellOverridden;	// IMP=0x00000000003ff011
- (void)setVerticallyMergedCell:(_Bool)arg1;	// IMP=0x00000000003fefff
- (_Bool)verticallyMergedCell;	// IMP=0x00000000003feff2
- (void)setVerticalAlignmentOverridden:(_Bool)arg1;	// IMP=0x00000000003fefe2
- (_Bool)isVerticalAlignmentOverridden;	// IMP=0x00000000003fefd7
- (void)setVerticalAlignment:(int)arg1;	// IMP=0x00000000003fefce
- (int)verticalAlignment;	// IMP=0x00000000003fefc5
- (void)setRightMarginTypeOverridden:(_Bool)arg1;	// IMP=0x00000000003fefb2
- (_Bool)isRightMarginTypeOverridden;	// IMP=0x00000000003fefa6
- (void)setRightMarginType:(int)arg1;	// IMP=0x00000000003fef9d
- (int)rightMarginType;	// IMP=0x00000000003fef94
- (void)setRightMarginOverridden:(_Bool)arg1;	// IMP=0x00000000003fef81
- (_Bool)isRightMarginOverridden;	// IMP=0x00000000003fef73
- (void)setRightMargin:(short)arg1;	// IMP=0x00000000003fef69
- (short)rightMargin;	// IMP=0x00000000003fef5f
- (void)setLeftMarginTypeOverridden:(_Bool)arg1;	// IMP=0x00000000003fef4c
- (_Bool)isLeftMarginTypeOverridden;	// IMP=0x00000000003fef3e
- (void)setLeftMarginType:(int)arg1;	// IMP=0x00000000003fef35
- (int)leftMarginType;	// IMP=0x00000000003fef2c
- (void)setLeftMarginOverridden:(_Bool)arg1;	// IMP=0x00000000003fef19
- (_Bool)isLeftMarginOverridden;	// IMP=0x00000000003fef0b
- (void)setLeftMargin:(short)arg1;	// IMP=0x00000000003fef01
- (short)leftMargin;	// IMP=0x00000000003feef7
- (void)setBottomMarginTypeOverridden:(_Bool)arg1;	// IMP=0x00000000003feee4
- (_Bool)isBottomMarginTypeOverridden;	// IMP=0x00000000003feed6
- (void)setBottomMarginType:(int)arg1;	// IMP=0x00000000003feecd
- (int)bottomMarginType;	// IMP=0x00000000003feec4
- (void)setBottomMarginOverridden:(_Bool)arg1;	// IMP=0x00000000003feeb1
- (_Bool)isBottomMarginOverridden;	// IMP=0x00000000003feea3
- (void)setBottomMargin:(short)arg1;	// IMP=0x00000000003fee99
- (short)bottomMargin;	// IMP=0x00000000003fee8f
- (void)setTopMarginTypeOverridden:(_Bool)arg1;	// IMP=0x00000000003fee7d
- (_Bool)isTopMarginTypeOverridden;	// IMP=0x00000000003fee70
- (void)setTopMarginType:(int)arg1;	// IMP=0x00000000003fee67
- (int)topMarginType;	// IMP=0x00000000003fee5e
- (void)setTopMarginOverridden:(_Bool)arg1;	// IMP=0x00000000003fee4e
- (_Bool)isTopMarginOverridden;	// IMP=0x00000000003fee43
- (void)setTopMargin:(short)arg1;	// IMP=0x00000000003fee39
- (short)topMargin;	// IMP=0x00000000003fee2f
- (void)setWidthTypeOverridden:(_Bool)arg1;	// IMP=0x00000000003fee1c
- (_Bool)isWidthTypeOverridden;	// IMP=0x00000000003fee10
- (void)setWidthType:(int)arg1;	// IMP=0x00000000003fee07
- (int)widthType;	// IMP=0x00000000003fedfe
- (void)setWidth:(short)arg1;	// IMP=0x00000000003fedf4
- (void)setDiagonalDownBorderOverridden:(_Bool)arg1;	// IMP=0x00000000003fede1
- (_Bool)isDiagonalDownBorderOverridden;	// IMP=0x00000000003fedd3
- (void)setDiagonalDownBorder:(id)arg1;	// IMP=0x00000000003fedc2
- (id)diagonalDownBorder;	// IMP=0x00000000003fedb4
- (void)setDiagonalUpBorderOverridden:(_Bool)arg1;	// IMP=0x00000000003feda1
- (_Bool)isDiagonalUpBorderOverridden;	// IMP=0x00000000003fed93
- (void)setDiagonalUpBorder:(id)arg1;	// IMP=0x00000000003fed82
- (id)diagonalUpBorder;	// IMP=0x00000000003fed74
- (void)setRightBorderOverridden:(_Bool)arg1;	// IMP=0x00000000003fed61
- (_Bool)isRightBorderOverridden;	// IMP=0x00000000003fed53
- (void)setRightBorder:(id)arg1;	// IMP=0x00000000003fed42
- (id)rightBorder;	// IMP=0x00000000003fed34
- (void)setBottomBorderOverridden:(_Bool)arg1;	// IMP=0x00000000003fed21
- (_Bool)isBottomBorderOverridden;	// IMP=0x00000000003fed13
- (void)setBottomBorder:(id)arg1;	// IMP=0x00000000003fed02
- (id)bottomBorder;	// IMP=0x00000000003fecf4
- (void)setLeftBorderOverridden:(_Bool)arg1;	// IMP=0x00000000003fece1
- (_Bool)isLeftBorderOverridden;	// IMP=0x00000000003fecd3
- (void)setLeftBorder:(id)arg1;	// IMP=0x00000000003fecc2
- (id)leftBorder;	// IMP=0x00000000003fecb4
- (void)setTopBorderOverridden:(_Bool)arg1;	// IMP=0x00000000003feca2
- (_Bool)isTopBorderOverridden;	// IMP=0x00000000003fec95
- (void)setTopBorder:(id)arg1;	// IMP=0x00000000003fec84
- (id)topBorder;	// IMP=0x00000000003fec76
- (void)setShadingOverridden:(_Bool)arg1;	// IMP=0x00000000003fec66
- (_Bool)isShadingOverridden;	// IMP=0x00000000003fec5b
- (void)setShading:(id)arg1;	// IMP=0x00000000003fec4a
- (id)shading;	// IMP=0x00000000003fec3c

@end
