//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableData, WDBorder, WDShading, WDStyle;

__attribute__((visibility("hidden")))
@interface WDParagraphPropertiesValues : NSObject
{
    unsigned int mBaseStyleOverridden:1;	// 8 = 0x8
    unsigned int mPageBreakBefore:1;	// 8 = 0x8
    unsigned int mPageBreakBeforeOverridden:1;	// 8 = 0x8
    unsigned int mListLevelOverridden:1;	// 8 = 0x8
    unsigned int mListIndexOverridden:1;	// 8 = 0x8
    unsigned int mTopBorderOverridden:1;	// 8 = 0x8
    unsigned int mLeftBorderOverridden:1;	// 8 = 0x8
    unsigned int mBottomBorderOverridden:1;	// 8 = 0x8
    unsigned int mRightBorderOverridden:1;	// 9 = 0x9
    unsigned int mBetweenBorderOverridden:1;	// 9 = 0x9
    unsigned int mBarBorderOverridden:1;	// 9 = 0x9
    unsigned int mShadingOverridden:1;	// 9 = 0x9
    unsigned int mDropCapOverridden:1;	// 9 = 0x9
    unsigned int mWidthOverridden:1;	// 9 = 0x9
    unsigned int mHeightOverridden:1;	// 9 = 0x9
    unsigned int mHeightRuleOverridden:1;	// 9 = 0x9
    unsigned int mVerticalSpaceOverridden:1;	// 10 = 0xa
    unsigned int mHorizontalSpaceOverridden:1;	// 10 = 0xa
    unsigned int mWrap:1;	// 10 = 0xa
    unsigned int mWrapOverridden:1;	// 10 = 0xa
    unsigned int mHorizontalAnchorOverridden:1;	// 10 = 0xa
    unsigned int mVerticalAnchorOverridden:1;	// 10 = 0xa
    unsigned int mHorizontalPositionOverridden:1;	// 10 = 0xa
    unsigned int mVerticalPositionOverridden:1;	// 10 = 0xa
    unsigned int mWrapCodeOverridden:1;	// 11 = 0xb
    unsigned int mAnchorLock:1;	// 11 = 0xb
    unsigned int mAnchorLockOverridden:1;	// 11 = 0xb
    unsigned int mSpaceBeforeOverridden:1;	// 11 = 0xb
    unsigned int mSpaceBeforeAuto:1;	// 11 = 0xb
    unsigned int mSpaceBeforeAutoOverridden:1;	// 11 = 0xb
    unsigned int mSpaceAfterOverridden:1;	// 11 = 0xb
    unsigned int mSpaceAfterAuto:1;	// 11 = 0xb
    unsigned int mSpaceAfterAutoOverridden:1;	// 12 = 0xc
    unsigned int mLineSpacingOverridden:1;	// 12 = 0xc
    unsigned int mLineSpacingRuleOverridden:1;	// 12 = 0xc
    unsigned int mLeftIndentOverridden:1;	// 12 = 0xc
    unsigned int mRightIndentOverridden:1;	// 12 = 0xc
    unsigned int mLeadingIndentOverridden:1;	// 12 = 0xc
    unsigned int mFollowingIndentOverridden:1;	// 12 = 0xc
    unsigned int mFirstLineIndentOverridden:1;	// 12 = 0xc
    unsigned int mLeftIndentCharsOverridden:1;	// 13 = 0xd
    unsigned int mRightIndentCharsOverridden:1;	// 13 = 0xd
    unsigned int mFirstLineIndentCharsOverridden:1;	// 13 = 0xd
    unsigned int mJustificationOverridden:1;	// 13 = 0xd
    unsigned int mPhysicalJustificationOverridden:1;	// 13 = 0xd
    unsigned int mOutlineLevelOverridden:1;	// 13 = 0xd
    unsigned int mKeepNextParagraphTogether:1;	// 13 = 0xd
    unsigned int mKeepNextParagraphTogetherOverridden:1;	// 13 = 0xd
    unsigned int mKeepLinesTogether:1;	// 14 = 0xe
    unsigned int mKeepLinesTogetherOverridden:1;	// 14 = 0xe
    unsigned int mSuppressAutoHyphens:1;	// 14 = 0xe
    unsigned int mSuppressAutoHyphensOverridden:1;	// 14 = 0xe
    unsigned int mSuppressLineNumbers:1;	// 14 = 0xe
    unsigned int mSuppressLineNumbersOverridden:1;	// 14 = 0xe
    unsigned int mWidowControl:1;	// 14 = 0xe
    unsigned int mWidowControlOverridden:1;	// 14 = 0xe
    unsigned int mKinsokuOff:1;	// 15 = 0xf
    unsigned int mKinsokuOffOverridden:1;	// 15 = 0xf
    unsigned int mTabStopAddedCountOverridden:1;	// 15 = 0xf
    unsigned int mTabStopDeletedCountOverridden:1;	// 15 = 0xf
    unsigned int mFormattingChangedOverridden:1;	// 15 = 0xf
    unsigned int mBiDi:1;	// 15 = 0xf
    unsigned int mBiDiOverridden:1;	// 15 = 0xf
    unsigned int mCachedRtl:1;	// 15 = 0xf
    unsigned int mCachedRtlOverridden:1;	// 16 = 0x10
    unsigned int mIndexToAuthorIDOfFormattingChangeOverridden:1;	// 16 = 0x10
    unsigned int mContextualSpacing:1;	// 16 = 0x10
    unsigned int mContextualSpacingOverridden:1;	// 16 = 0x10
    BOOL _wrapCode;	// 17 = 0x11
    unsigned char _horizontalAnchor;	// 18 = 0x12
    unsigned char _verticalAnchor;	// 19 = 0x13
    unsigned char _lineSpacingRule;	// 20 = 0x14
    unsigned char _heightRule;	// 21 = 0x15
    unsigned char _listLevel;	// 22 = 0x16
    unsigned char _justification;	// 23 = 0x17
    unsigned char _physicalJustification;	// 24 = 0x18
    unsigned char _formattingChanged;	// 25 = 0x19
    CDStruct_8835774c _dropCap;	// 26 = 0x1a
    short _lineSpacing;	// 28 = 0x1c
    short _leftIndent;	// 30 = 0x1e
    short _rightIndent;	// 32 = 0x20
    short _leadingIndent;	// 34 = 0x22
    short _followingIndent;	// 36 = 0x24
    short _firstLineIndent;	// 38 = 0x26
    short _leftIndentChars;	// 40 = 0x28
    short _rightIndentChars;	// 42 = 0x2a
    short _firstLineIndentChars;	// 44 = 0x2c
    unsigned short _spaceBefore;	// 46 = 0x2e
    unsigned short _spaceAfter;	// 48 = 0x30
    unsigned short _height;	// 50 = 0x32
    unsigned short _outlineLevel;	// 52 = 0x34
    unsigned short _indexToAuthorIDOfFormattingChange;	// 54 = 0x36
    WDStyle *_baseStyle;	// 56 = 0x38
    WDBorder *_topBorder;	// 64 = 0x40
    WDBorder *_leftBorder;	// 72 = 0x48
    WDBorder *_bottomBorder;	// 80 = 0x50
    WDBorder *_rightBorder;	// 88 = 0x58
    WDBorder *_betweenBorder;	// 96 = 0x60
    WDBorder *_barBorder;	// 104 = 0x68
    WDShading *_shading;	// 112 = 0x70
    NSMutableData *_tabStopAddedTable;	// 120 = 0x78
    NSMutableData *_tabStopDeletedTable;	// 128 = 0x80
    long long _listIndex;	// 136 = 0x88
    unsigned long long _tabStopAddedCount;	// 144 = 0x90
    unsigned long long _tabStopDeletedCount;	// 152 = 0x98
    long long _width;	// 160 = 0xa0
    long long _verticalSpace;	// 168 = 0xa8
    long long _horizontalSpace;	// 176 = 0xb0
    long long _horizontalPosition;	// 184 = 0xb8
    long long _verticalPosition;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x00000000003fb14d
@property unsigned char formattingChanged; // @synthesize formattingChanged=_formattingChanged;
@property unsigned char physicalJustification; // @synthesize physicalJustification=_physicalJustification;
@property unsigned char justification; // @synthesize justification=_justification;
@property unsigned char listLevel; // @synthesize listLevel=_listLevel;
@property unsigned char heightRule; // @synthesize heightRule=_heightRule;
@property unsigned char lineSpacingRule; // @synthesize lineSpacingRule=_lineSpacingRule;
@property unsigned char verticalAnchor; // @synthesize verticalAnchor=_verticalAnchor;
@property unsigned char horizontalAnchor; // @synthesize horizontalAnchor=_horizontalAnchor;
@property BOOL wrapCode; // @synthesize wrapCode=_wrapCode;
@property unsigned short indexToAuthorIDOfFormattingChange; // @synthesize indexToAuthorIDOfFormattingChange=_indexToAuthorIDOfFormattingChange;
@property unsigned short outlineLevel; // @synthesize outlineLevel=_outlineLevel;
@property unsigned short height; // @synthesize height=_height;
@property unsigned short spaceAfter; // @synthesize spaceAfter=_spaceAfter;
@property unsigned short spaceBefore; // @synthesize spaceBefore=_spaceBefore;
@property short firstLineIndentChars; // @synthesize firstLineIndentChars=_firstLineIndentChars;
@property short rightIndentChars; // @synthesize rightIndentChars=_rightIndentChars;
@property short leftIndentChars; // @synthesize leftIndentChars=_leftIndentChars;
@property short firstLineIndent; // @synthesize firstLineIndent=_firstLineIndent;
@property short followingIndent; // @synthesize followingIndent=_followingIndent;
@property short leadingIndent; // @synthesize leadingIndent=_leadingIndent;
@property short rightIndent; // @synthesize rightIndent=_rightIndent;
@property short leftIndent; // @synthesize leftIndent=_leftIndent;
@property short lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property long long verticalPosition; // @synthesize verticalPosition=_verticalPosition;
@property long long horizontalPosition; // @synthesize horizontalPosition=_horizontalPosition;
@property long long horizontalSpace; // @synthesize horizontalSpace=_horizontalSpace;
@property long long verticalSpace; // @synthesize verticalSpace=_verticalSpace;
@property long long width; // @synthesize width=_width;
@property unsigned long long tabStopDeletedCount; // @synthesize tabStopDeletedCount=_tabStopDeletedCount;
@property unsigned long long tabStopAddedCount; // @synthesize tabStopAddedCount=_tabStopAddedCount;
@property long long listIndex; // @synthesize listIndex=_listIndex;
@property(retain, nonatomic) NSMutableData *tabStopDeletedTable; // @synthesize tabStopDeletedTable=_tabStopDeletedTable;
@property(retain, nonatomic) NSMutableData *tabStopAddedTable; // @synthesize tabStopAddedTable=_tabStopAddedTable;
@property CDStruct_8835774c dropCap; // @synthesize dropCap=_dropCap;
@property(retain, nonatomic) WDShading *shading; // @synthesize shading=_shading;
@property(retain, nonatomic) WDBorder *barBorder; // @synthesize barBorder=_barBorder;
@property(retain, nonatomic) WDBorder *betweenBorder; // @synthesize betweenBorder=_betweenBorder;
@property(retain, nonatomic) WDBorder *rightBorder; // @synthesize rightBorder=_rightBorder;
@property(retain, nonatomic) WDBorder *bottomBorder; // @synthesize bottomBorder=_bottomBorder;
@property(retain, nonatomic) WDBorder *leftBorder; // @synthesize leftBorder=_leftBorder;
@property(retain, nonatomic) WDBorder *topBorder; // @synthesize topBorder=_topBorder;
@property(retain, nonatomic) WDStyle *baseStyle; // @synthesize baseStyle=_baseStyle;
@property _Bool contextualSpacingOverridden; // @synthesize contextualSpacingOverridden=mContextualSpacingOverridden;
@property _Bool contextualSpacing; // @synthesize contextualSpacing=mContextualSpacing;
@property _Bool indexToAuthorIDOfFormattingChangeOverridden; // @synthesize indexToAuthorIDOfFormattingChangeOverridden=mIndexToAuthorIDOfFormattingChangeOverridden;
@property _Bool cachedRtlOverridden; // @synthesize cachedRtlOverridden=mCachedRtlOverridden;
@property _Bool cachedRtl; // @synthesize cachedRtl=mCachedRtl;
@property _Bool biDiOverridden; // @synthesize biDiOverridden=mBiDiOverridden;
@property _Bool biDi; // @synthesize biDi=mBiDi;
@property _Bool formattingChangedOverridden; // @synthesize formattingChangedOverridden=mFormattingChangedOverridden;
@property _Bool tabStopDeletedCountOverridden; // @synthesize tabStopDeletedCountOverridden=mTabStopDeletedCountOverridden;
@property _Bool tabStopAddedCountOverridden; // @synthesize tabStopAddedCountOverridden=mTabStopAddedCountOverridden;
@property _Bool kinsokuOffOverridden; // @synthesize kinsokuOffOverridden=mKinsokuOffOverridden;
@property _Bool kinsokuOff; // @synthesize kinsokuOff=mKinsokuOff;
@property _Bool widowControlOverridden; // @synthesize widowControlOverridden=mWidowControlOverridden;
@property _Bool widowControl; // @synthesize widowControl=mWidowControl;
@property _Bool suppressLineNumbersOverridden; // @synthesize suppressLineNumbersOverridden=mSuppressLineNumbersOverridden;
@property _Bool suppressLineNumbers; // @synthesize suppressLineNumbers=mSuppressLineNumbers;
@property _Bool suppressAutoHyphensOverridden; // @synthesize suppressAutoHyphensOverridden=mSuppressAutoHyphensOverridden;
@property _Bool suppressAutoHyphens; // @synthesize suppressAutoHyphens=mSuppressAutoHyphens;
@property _Bool keepLinesTogetherOverridden; // @synthesize keepLinesTogetherOverridden=mKeepLinesTogetherOverridden;
@property _Bool keepLinesTogether; // @synthesize keepLinesTogether=mKeepLinesTogether;
@property _Bool keepNextParagraphTogetherOverridden; // @synthesize keepNextParagraphTogetherOverridden=mKeepNextParagraphTogetherOverridden;
@property _Bool keepNextParagraphTogether; // @synthesize keepNextParagraphTogether=mKeepNextParagraphTogether;
@property _Bool outlineLevelOverridden; // @synthesize outlineLevelOverridden=mOutlineLevelOverridden;
@property _Bool physicalJustificationOverridden; // @synthesize physicalJustificationOverridden=mPhysicalJustificationOverridden;
@property _Bool justificationOverridden; // @synthesize justificationOverridden=mJustificationOverridden;
@property _Bool firstLineIndentCharsOverridden; // @synthesize firstLineIndentCharsOverridden=mFirstLineIndentCharsOverridden;
@property _Bool rightIndentCharsOverridden; // @synthesize rightIndentCharsOverridden=mRightIndentCharsOverridden;
@property _Bool leftIndentCharsOverridden; // @synthesize leftIndentCharsOverridden=mLeftIndentCharsOverridden;
@property _Bool firstLineIndentOverridden; // @synthesize firstLineIndentOverridden=mFirstLineIndentOverridden;
@property _Bool followingIndentOverridden; // @synthesize followingIndentOverridden=mFollowingIndentOverridden;
@property _Bool leadingIndentOverridden; // @synthesize leadingIndentOverridden=mLeadingIndentOverridden;
@property _Bool rightIndentOverridden; // @synthesize rightIndentOverridden=mRightIndentOverridden;
@property _Bool leftIndentOverridden; // @synthesize leftIndentOverridden=mLeftIndentOverridden;
@property _Bool lineSpacingRuleOverridden; // @synthesize lineSpacingRuleOverridden=mLineSpacingRuleOverridden;
@property _Bool lineSpacingOverridden; // @synthesize lineSpacingOverridden=mLineSpacingOverridden;
@property _Bool spaceAfterAutoOverridden; // @synthesize spaceAfterAutoOverridden=mSpaceAfterAutoOverridden;
@property _Bool spaceAfterAuto; // @synthesize spaceAfterAuto=mSpaceAfterAuto;
@property _Bool spaceAfterOverridden; // @synthesize spaceAfterOverridden=mSpaceAfterOverridden;
@property _Bool spaceBeforeAutoOverridden; // @synthesize spaceBeforeAutoOverridden=mSpaceBeforeAutoOverridden;
@property _Bool spaceBeforeAuto; // @synthesize spaceBeforeAuto=mSpaceBeforeAuto;
@property _Bool spaceBeforeOverridden; // @synthesize spaceBeforeOverridden=mSpaceBeforeOverridden;
@property _Bool anchorLockOverridden; // @synthesize anchorLockOverridden=mAnchorLockOverridden;
@property _Bool anchorLock; // @synthesize anchorLock=mAnchorLock;
@property _Bool wrapCodeOverridden; // @synthesize wrapCodeOverridden=mWrapCodeOverridden;
@property _Bool verticalPositionOverridden; // @synthesize verticalPositionOverridden=mVerticalPositionOverridden;
@property _Bool horizontalPositionOverridden; // @synthesize horizontalPositionOverridden=mHorizontalPositionOverridden;
@property _Bool verticalAnchorOverridden; // @synthesize verticalAnchorOverridden=mVerticalAnchorOverridden;
@property _Bool horizontalAnchorOverridden; // @synthesize horizontalAnchorOverridden=mHorizontalAnchorOverridden;
@property _Bool wrapOverridden; // @synthesize wrapOverridden=mWrapOverridden;
@property _Bool wrap; // @synthesize wrap=mWrap;
@property _Bool horizontalSpaceOverridden; // @synthesize horizontalSpaceOverridden=mHorizontalSpaceOverridden;
@property _Bool verticalSpaceOverridden; // @synthesize verticalSpaceOverridden=mVerticalSpaceOverridden;
@property _Bool heightRuleOverridden; // @synthesize heightRuleOverridden=mHeightRuleOverridden;
@property _Bool heightOverridden; // @synthesize heightOverridden=mHeightOverridden;
@property _Bool widthOverridden; // @synthesize widthOverridden=mWidthOverridden;
@property _Bool dropCapOverridden; // @synthesize dropCapOverridden=mDropCapOverridden;
@property _Bool shadingOverridden; // @synthesize shadingOverridden=mShadingOverridden;
@property _Bool barBorderOverridden; // @synthesize barBorderOverridden=mBarBorderOverridden;
@property _Bool betweenBorderOverridden; // @synthesize betweenBorderOverridden=mBetweenBorderOverridden;
@property _Bool rightBorderOverridden; // @synthesize rightBorderOverridden=mRightBorderOverridden;
@property _Bool bottomBorderOverridden; // @synthesize bottomBorderOverridden=mBottomBorderOverridden;
@property _Bool leftBorderOverridden; // @synthesize leftBorderOverridden=mLeftBorderOverridden;
@property _Bool topBorderOverridden; // @synthesize topBorderOverridden=mTopBorderOverridden;
@property _Bool listIndexOverridden; // @synthesize listIndexOverridden=mListIndexOverridden;
@property _Bool listLevelOverridden; // @synthesize listLevelOverridden=mListLevelOverridden;
@property _Bool pageBreakBeforeOverridden; // @synthesize pageBreakBeforeOverridden=mPageBreakBeforeOverridden;
@property _Bool pageBreakBefore; // @synthesize pageBreakBefore=mPageBreakBefore;
@property _Bool baseStyleOverridden; // @synthesize baseStyleOverridden=mBaseStyleOverridden;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003f9496

@end

