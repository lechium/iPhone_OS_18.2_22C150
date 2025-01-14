//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WDCharacterProperties, WDDocument, WDParagraphPropertiesValues;

__attribute__((visibility("hidden")))
@interface WDParagraphProperties : NSObject
{
    WDCharacterProperties *mCharacterProperties;	// 8 = 0x8
    _Bool mCharacterPropertiesOverridden;	// 16 = 0x10
    unsigned int mOriginal:1;	// 17 = 0x11
    unsigned int mTracked:1;	// 17 = 0x11
    unsigned int mResolved:1;	// 17 = 0x11
    WDParagraphPropertiesValues *mOriginalProperties;	// 24 = 0x18
    WDParagraphPropertiesValues *mTrackedProperties;	// 32 = 0x20
    WDDocument *mDocument;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000003f8f58
@property(readonly) __weak WDDocument *document; // @synthesize document=mDocument;
- (void)copyPropertiesInto:(id)arg1;	// IMP=0x00000000003f8e54
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003f8d57
- (_Bool)isContextualSpacingOverridden;	// IMP=0x00000000003f8cd5
- (void)setContextualSpacing:(_Bool)arg1;	// IMP=0x00000000003f8b50
- (_Bool)contextualSpacing;	// IMP=0x00000000003f8ad8
- (_Bool)isIndexToAuthorIDOfFormattingChangeOverridden;	// IMP=0x00000000003f8a5a
- (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1;	// IMP=0x00000000003f88d5
- (unsigned short)indexToAuthorIDOfFormattingChange;	// IMP=0x00000000003f8861
- (_Bool)isFormattingChangedOverridden;	// IMP=0x00000000003f87e3
- (void)setFormattingChanged:(int)arg1;	// IMP=0x000000000021bb14
- (int)formattingChanged;	// IMP=0x00000000003f876e
- (void)removeTabStopDeletedPosition:(short)arg1;	// IMP=0x00000000003f85e0
- (void)addTabStopDeletedPosition:(short)arg1;	// IMP=0x00000000000e277c
- (short)tabStopDeletedPositionAt:(unsigned long long)arg1;	// IMP=0x00000000003f84e0
- (void)setTabStopDeletedPositionCount:(unsigned long long)arg1;	// IMP=0x00000000000d1cf7
- (unsigned long long)tabStopDeletedPositionCount;	// IMP=0x00000000003f8406
- (void)removeTabStopAddedWithPosition:(short)arg1;	// IMP=0x00000000003f827f
- (void)addTabStopAdded:(CDStruct_bd9d81e1 *)arg1;	// IMP=0x00000000000d1964
- (CDStruct_bd9d81e1 *)tabStopAddedAt:(unsigned long long)arg1;	// IMP=0x00000000003f813f
- (_Bool)hasTabStopDeletedAtPosition:(short)arg1;	// IMP=0x00000000003f80b6
- (_Bool)hasTabStopAddedAtPosition:(short)arg1;	// IMP=0x00000000003f802c
- (void)setTabStopAddedCount:(unsigned long long)arg1;	// IMP=0x00000000000d1b73
- (unsigned long long)tabStopAddedCount;	// IMP=0x00000000003f7f51
- (_Bool)isKinsokuOffOverridden;	// IMP=0x00000000003f7ed3
- (void)setKinsokuOff:(_Bool)arg1;	// IMP=0x00000000003f7d4e
- (_Bool)kinsokuOff;	// IMP=0x00000000003f7cda
- (_Bool)isBiDiOverridden;	// IMP=0x00000000003f7c5c
- (void)setBiDi:(_Bool)arg1;	// IMP=0x00000000003f7ad7
- (_Bool)biDi;	// IMP=0x00000000003f7a63
- (_Bool)isWidowControlOverridden;	// IMP=0x00000000003f79e5
- (void)setWidowControl:(_Bool)arg1;	// IMP=0x00000000000c26e4
- (_Bool)widowControl;	// IMP=0x00000000003f7971
- (_Bool)isSuppressLineNumbersOverridden;	// IMP=0x00000000003f78f3
- (void)setSuppressLineNumbers:(_Bool)arg1;	// IMP=0x00000000000c23da
- (_Bool)suppressLineNumbers;	// IMP=0x00000000003f787f
- (_Bool)isSuppressAutoHyphensOverridden;	// IMP=0x00000000003f7801
- (void)setSuppressAutoHyphens:(_Bool)arg1;	// IMP=0x00000000000c255f
- (_Bool)suppressAutoHyphens;	// IMP=0x00000000003f778d
- (_Bool)isKeepLinesTogetherOverridden;	// IMP=0x00000000003f770f
- (void)setKeepLinesTogether:(_Bool)arg1;	// IMP=0x0000000000162f4c
- (_Bool)keepLinesTogether;	// IMP=0x00000000003f769b
- (_Bool)isKeepNextParagraphTogetherOverridden;	// IMP=0x00000000003f761d
- (void)setKeepNextParagraphTogether:(_Bool)arg1;	// IMP=0x00000000000d16c1
- (_Bool)keepNextParagraphTogether;	// IMP=0x00000000003f75a9
- (_Bool)isOutlineLevelOverridden;	// IMP=0x00000000003f752b
- (void)setOutlineLevel:(unsigned short)arg1;	// IMP=0x00000000000d153c
- (unsigned short)outlineLevel;	// IMP=0x00000000003f74b7
- (_Bool)isPhysicalJustificationOverridden;	// IMP=0x00000000003f7439
- (void)setPhysicalJustification:(int)arg1;	// IMP=0x00000000003f72b4
- (int)physicalJustification;	// IMP=0x00000000003f723f
- (_Bool)isJustificationOverridden;	// IMP=0x00000000000ef7ec
- (void)setJustification:(int)arg1;	// IMP=0x00000000000c2255
- (int)justification;	// IMP=0x00000000000f2dca
- (_Bool)isFirstLineIndentCharsOverridden;	// IMP=0x00000000003f71c1
- (void)setFirstLineIndentChars:(short)arg1;	// IMP=0x00000000003f703c
- (short)firstLineIndentChars;	// IMP=0x00000000003f6fc8
- (_Bool)isRightIndentCharsOverridden;	// IMP=0x00000000003f6f4a
- (void)setRightIndentChars:(short)arg1;	// IMP=0x00000000003f6dc5
- (short)rightIndentChars;	// IMP=0x00000000003f6d51
- (_Bool)isLeftIndentCharsOverridden;	// IMP=0x00000000003f6cd3
- (void)setLeftIndentChars:(short)arg1;	// IMP=0x00000000003f6b4e
- (short)leftIndentChars;	// IMP=0x00000000003f6ada
- (void)clearFirstLineIndent;	// IMP=0x00000000003f6a7c
- (_Bool)isFirstLineIndentOverridden;	// IMP=0x00000000000ef966
- (void)setFirstLineIndent:(short)arg1;	// IMP=0x00000000000c20d0
- (short)firstLineIndent;	// IMP=0x00000000000f484e
- (void)clearRightIndent;	// IMP=0x00000000003f6a1e
- (_Bool)isRightIndentOverridden;	// IMP=0x00000000000ef8e8
- (void)setRightIndent:(short)arg1;	// IMP=0x00000000000c1f4b
- (short)rightIndent;	// IMP=0x000000000015adba
- (void)clearFollowingIndent;	// IMP=0x00000000003f69c0
- (_Bool)isFollowingIndentOverridden;	// IMP=0x00000000003f6942
- (void)setFollowingIndent:(short)arg1;	// IMP=0x00000000003f67bd
- (short)followingIndent;	// IMP=0x00000000003f6749
- (void)clearLeadingIndent;	// IMP=0x00000000003f66eb
- (_Bool)isLeadingIndentOverridden;	// IMP=0x00000000003f666d
- (void)setLeadingIndent:(short)arg1;	// IMP=0x00000000003f64e8
- (short)leadingIndent;	// IMP=0x00000000003f6474
- (void)clearLeftIndent;	// IMP=0x00000000003f6416
- (_Bool)isLeftIndentOverridden;	// IMP=0x00000000000ef86a
- (void)setLeftIndent:(short)arg1;	// IMP=0x00000000000c1dc6
- (short)leftIndent;	// IMP=0x00000000000f47da
- (_Bool)isLineSpacingRuleOverridden;	// IMP=0x000000000019d189
- (void)setLineSpacingRule:(int)arg1;	// IMP=0x00000000000c1c41
- (int)lineSpacingRule;	// IMP=0x000000000019d207
- (_Bool)isLineSpacingOverridden;	// IMP=0x00000000000ef73e
- (void)setLineSpacing:(short)arg1;	// IMP=0x00000000000c1abc
- (short)lineSpacing;	// IMP=0x00000000000f8d9f
- (_Bool)isSpaceAfterAutoOverridden;	// IMP=0x00000000003f6398
- (void)setSpaceAfterAuto:(_Bool)arg1;	// IMP=0x00000000000c1937
- (_Bool)spaceAfterAuto;	// IMP=0x00000000003f6324
- (_Bool)isSpaceAfterOverridden;	// IMP=0x00000000000ef642
- (void)setSpaceAfter:(unsigned short)arg1;	// IMP=0x00000000000c17b2
- (unsigned short)spaceAfter;	// IMP=0x00000000000fcee7
- (_Bool)isSpaceBeforeAutoOverridden;	// IMP=0x00000000003f62a6
- (void)setSpaceBeforeAuto:(_Bool)arg1;	// IMP=0x00000000000c162d
- (_Bool)spaceBeforeAuto;	// IMP=0x00000000003f6232
- (_Bool)isSpaceBeforeOverridden;	// IMP=0x00000000000ef6c0
- (void)setSpaceBefore:(unsigned short)arg1;	// IMP=0x00000000000c14a8
- (unsigned short)spaceBefore;	// IMP=0x00000000000f51e6
- (_Bool)isShadingOverridden;	// IMP=0x00000000000efc71
- (id)mutableShading;	// IMP=0x00000000000c1270
- (id)shading;	// IMP=0x000000000015ac1f
- (_Bool)isBarBorderOverridden;	// IMP=0x00000000003f61b4
- (id)mutableBarBorder;	// IMP=0x00000000000c1064
- (id)barBorder;	// IMP=0x00000000003f6135
- (_Bool)isBetweenBorderOverridden;	// IMP=0x00000000003f60b7
- (id)mutableBetweenBorder;	// IMP=0x00000000000c0e2c
- (id)betweenBorder;	// IMP=0x00000000003f6038
- (_Bool)isRightBorderOverridden;	// IMP=0x00000000003f5fba
- (id)mutableRightBorder;	// IMP=0x00000000000c0bf4
- (id)rightBorder;	// IMP=0x00000000003f5f03
- (_Bool)isBottomBorderOverridden;	// IMP=0x00000000000efbf3
- (id)mutableBottomBorder;	// IMP=0x00000000000c09e8
- (id)bottomBorder;	// IMP=0x000000000015ab68
- (_Bool)isLeftBorderOverridden;	// IMP=0x00000000003f5e85
- (id)mutableLeftBorder;	// IMP=0x00000000000c07dc
- (id)leftBorder;	// IMP=0x00000000003f5dce
- (_Bool)isTopBorderOverridden;	// IMP=0x00000000003f5d50
- (id)mutableTopBorder;	// IMP=0x00000000000c05d0
- (id)topBorder;	// IMP=0x00000000003f5c99
- (_Bool)isAnchorLockOverridden;	// IMP=0x00000000003f5c1b
- (void)setAnchorLock:(_Bool)arg1;	// IMP=0x00000000000c044b
- (_Bool)anchorLock;	// IMP=0x00000000003f5ba7
- (_Bool)isWrapCodeOverridden;	// IMP=0x00000000003f5b29
- (void)setWrapCode:(BOOL)arg1;	// IMP=0x000000000010039a
- (BOOL)wrapCode;	// IMP=0x00000000003f5ab5
- (_Bool)isVerticalPositionOverridden;	// IMP=0x00000000000ee4af
- (void)setVerticalPosition:(long long)arg1;	// IMP=0x00000000000c02c7
- (long long)verticalPosition;	// IMP=0x00000000001ddbb8
- (_Bool)isHorizontalPositionOverridden;	// IMP=0x00000000000ee431
- (void)setHorizontalPosition:(long long)arg1;	// IMP=0x00000000000c0143
- (long long)horizontalPosition;	// IMP=0x00000000001cb607
- (_Bool)isVerticalAnchorOverridden;	// IMP=0x00000000000ee3b3
- (void)setVerticalAnchor:(int)arg1;	// IMP=0x00000000000bffbe
- (int)verticalAnchor;	// IMP=0x00000000001cb58f
- (_Bool)isHorizontalAnchorOverridden;	// IMP=0x00000000000ee335
- (void)setHorizontalAnchor:(int)arg1;	// IMP=0x00000000000bfe39
- (int)horizontalAnchor;	// IMP=0x00000000001006e1
- (_Bool)isWrapOverridden;	// IMP=0x00000000003f5a37
- (void)setWrap:(_Bool)arg1;	// IMP=0x00000000000bfcb4
- (_Bool)wrap;	// IMP=0x00000000003f59c3
- (_Bool)isHorizontalSpaceOverridden;	// IMP=0x00000000003f5945
- (void)setHorizontalSpace:(long long)arg1;	// IMP=0x00000000000bfb30
- (long long)horizontalSpace;	// IMP=0x00000000003f58d1
- (_Bool)isVerticalSpaceOverridden;	// IMP=0x00000000003f5853
- (void)setVerticalSpace:(long long)arg1;	// IMP=0x00000000000bf9ac
- (long long)verticalSpace;	// IMP=0x00000000003f57df
- (_Bool)isHeightRuleOverridden;	// IMP=0x00000000003f5761
- (void)setHeightRule:(int)arg1;	// IMP=0x00000000000bf827
- (int)heightRule;	// IMP=0x00000000003f56e9
- (_Bool)isHeightOverridden;	// IMP=0x00000000003f566b
- (void)setHeight:(long long)arg1;	// IMP=0x00000000000bf6a2
- (long long)height;	// IMP=0x00000000003f55f8
- (_Bool)isWidthOverridden;	// IMP=0x0000000000100e21
- (void)setWidth:(long long)arg1;	// IMP=0x00000000000bf51e
- (long long)width;	// IMP=0x00000000001cb67b
- (_Bool)isDropCapOverridden;	// IMP=0x00000000003f557a
- (void)setDropCap:(CDStruct_8835774c)arg1;	// IMP=0x00000000000bf39a
- (CDStruct_8835774c)dropCap;	// IMP=0x00000000003f54c4
- (_Bool)isListIndexOverridden;	// IMP=0x00000000000ef9e4
- (void)setListIndex:(unsigned long long)arg1;	// IMP=0x00000000000bf216
- (unsigned long long)listIndex;	// IMP=0x00000000000f48c2
- (_Bool)isListLevelOverridden;	// IMP=0x00000000000efa62
- (void)setListLevel:(unsigned char)arg1;	// IMP=0x00000000000bf091
- (unsigned char)listLevel;	// IMP=0x00000000000f4936
- (_Bool)isPageBreakBeforeOverridden;	// IMP=0x00000000003f5446
- (void)setPageBreakBefore:(_Bool)arg1;	// IMP=0x00000000000bef0c
- (_Bool)isPageBreakBefore;	// IMP=0x00000000003f53d2
- (void)clearBaseStyle;	// IMP=0x00000000000d12ce
- (_Bool)isBaseStyleOverridden;	// IMP=0x00000000000eecf7
- (void)setBaseStyle:(id)arg1;	// IMP=0x00000000000d0046
- (id)baseStyle;	// IMP=0x00000000000eed75
- (void)negateFormattingChangesWithDefaults:(id)arg1;	// IMP=0x00000000003f384d
- (void)setResolveMode:(int)arg1;	// IMP=0x00000000000beeca
- (int)resolveMode;	// IMP=0x000000000019d27c
- (_Bool)isAnythingOverridden;	// IMP=0x00000000003f37ca
- (void)clearChararacterProperties;	// IMP=0x00000000003f37a4
- (_Bool)isCharacterPropertiesOverridden;	// IMP=0x00000000000f4e0e
- (void)setCharacterProperties:(id)arg1;	// IMP=0x00000000000da3a8
- (id)mutableCharacterProperties;	// IMP=0x00000000001aa86f
- (id)characterProperties;	// IMP=0x00000000000ef634
- (id)initWithDocument:(id)arg1;	// IMP=0x00000000000bee13
- (id)description;	// IMP=0x00000000003f9458
- (_Bool)isAnythingOverriddenIn:(id)arg1;	// IMP=0x00000000003f8f94

@end

