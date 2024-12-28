//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GQDSStyle, GQDWPContainerHint, GQHStyle, GQWrapPointSet, NSString;

@interface GQHPagesState
{
    struct __CFDictionary *mFloatingDrawables;	// 184 = 0xb8
    int mMode;	// 192 = 0xc0
    struct __CFDictionary *mHeaders;	// 200 = 0xc8
    struct __CFDictionary *mFooters;	// 208 = 0xd0
    struct __CFArray *mSectionStyles;	// 216 = 0xd8
    struct __CFDictionary *mPageWrapPointsMap;	// 224 = 0xe0
    int mCurrentPageIndex;	// 232 = 0xe8
    int mStartPageAt;	// 236 = 0xec
    int mStartPageAtValueChangedAtPageIndex;	// 240 = 0xf0
    GQHStyle *mCurrentLayoutStyle;	// 248 = 0xf8
    GQHStyle *mCurrentParagraphStyle;	// 256 = 0x100
    GQDSStyle *mCurrentBaseParagraphStyle;	// 264 = 0x108
    struct __CFString *mCurrentCachedParagraphClass;	// 272 = 0x110
    GQHStyle *mCurrentSpanStyle;	// 280 = 0x118
    GQDSStyle *mCurrentBaseSpanStyle;	// 288 = 0x120
    struct __CFString *mCurrentCachedSpanClass;	// 296 = 0x128
    GQWrapPointSet *mCurrentWrapPointSet;	// 304 = 0x130
    struct CGRect mLastFrame;	// 312 = 0x138
    _Bool mMappingFloatingDrawables;	// 344 = 0x158
    _Bool mStartedPage;	// 345 = 0x159
    _Bool mStartedSection;	// 346 = 0x15a
    _Bool mDidInsertPageHeader;	// 347 = 0x15b
    _Bool mDidFindContainerHint;	// 348 = 0x15c
    GQDWPContainerHint *mLastInsertedContainerHint;	// 352 = 0x160
    struct __CFArray *mAttachmentPositions;	// 360 = 0x168
    long long mAttachmentIdCounter;	// 368 = 0x170
    long long mFirstAttachmentId;	// 376 = 0x178
    _Bool mSplitNextAttachment;	// 384 = 0x180
    GQDSStyle *mCurrentSectionStyle;	// 392 = 0x188
    _Bool mHasLayoutDrawables;	// 400 = 0x190
    int mCurrentHintPageIndex;	// 404 = 0x194
    int mCurrentHintColumnIndex;	// 408 = 0x198
    _Bool mIsMappingHeadersFooters;	// 412 = 0x19c
    int mHeaderFooterPageNumber;	// 416 = 0x1a0
    struct __CFDictionary *mDrawablePagesOrderToCssZOrderClassMap;	// 424 = 0x1a8
    struct CGSize mPageSize;	// 432 = 0x1b0
    struct __CFArray *mTocHrefStack;	// 448 = 0x1c0
    _Bool mCurrentFrameHasSandbagFloats;	// 456 = 0x1c8
    int mProgressiveIndex;	// 460 = 0x1cc
}

- (_Bool)allowInlineWrap;	// IMP=0x000000000002e39f
- (_Bool)needAbsolutelyPositionedTables;	// IMP=0x000000000002e386
- (void)endSection;	// IMP=0x000000000002e28f
- (void)popTocHref;	// IMP=0x000000000002e253
- (void)pushTocHref:(struct __CFString *)arg1;	// IMP=0x000000000002e20a
- (unsigned int)tocDepth;	// IMP=0x000000000002e1eb
- (void)setPageSize:(struct CGSize)arg1;	// IMP=0x000000000002e1d3
- (struct CGSize)pageSize;	// IMP=0x000000000002e1bb
- (struct __CFDictionary *)pagesOrderToCssZOrderClassMapDictionary;	// IMP=0x000000000002e1aa
- (struct __CFString *)cssZOrderClassForDrawablePagesOrder:(int)arg1;	// IMP=0x000000000002e100
- (struct __CFString *)cssZOrderClassForDrawable:(id)arg1;	// IMP=0x000000000002e0cd
- (void)addStyle:(struct __CFString *)arg1 className:(struct __CFString *)arg2 srcStyle:(id)arg3;	// IMP=0x000000000002e079
- (void)setOutlineStyleType:(int)arg1;	// IMP=0x000000000002e059
- (void)setOutlineLevel:(int)arg1;	// IMP=0x000000000002e039
- (_Bool)useOutline;	// IMP=0x000000000002e025
- (int)pageNumberForHeaderOrFooter;	// IMP=0x000000000002e001
- (_Bool)isMappingHeadersFooters;	// IMP=0x000000000002dff1
- (void)setIsMappingHeadersFooters:(_Bool)arg1;	// IMP=0x000000000002dfe1
- (_Bool)hasLayoutDrawables;	// IMP=0x000000000002dfd1
- (void)setHasLayoutDrawables:(_Bool)arg1;	// IMP=0x000000000002dfc1
- (void)inContent;	// IMP=0x000000000002dd7b
- (void)clearWrapPoints;	// IMP=0x000000000002dd75
- (void *)createListOfWrapPointsAlongY:(float)arg1 minX:(float)arg2 maxX:(float)arg3 zIndex:(int)arg4;	// IMP=0x000000000002dae8
- (const void *)wrapPoints;	// IMP=0x000000000002dabe
- (void)addWrapPoint:(id)arg1;	// IMP=0x000000000002da54
- (void)endWrapPointSet;	// IMP=0x000000000002d9da
- (void)beginWrapPointSet;	// IMP=0x000000000002d9b3
- (void)resolveHeaderName:(const struct __CFString **)arg1 footerName:(const struct __CFString **)arg2;	// IMP=0x000000000002d537
- (void)handleContainerHint:(id)arg1;	// IMP=0x000000000002d075
- (void)insertAttachmentPlaceholder;	// IMP=0x000000000002cfcf
- (long long)firstAttachmentId;	// IMP=0x000000000002cfbe
- (long long)nextAttachmentId;	// IMP=0x000000000002cfa5
- (long long)currentAttachmentId;	// IMP=0x000000000002cf94
- (double)moveToNextAttachmentPosition;	// IMP=0x000000000002cf56
- (double)currentAttachmentPosition;	// IMP=0x000000000002cef4
- (void)addAttachmentPosition:(double)arg1;	// IMP=0x000000000002ceab
- (void)finishedWithSplitAttachment;	// IMP=0x000000000002ce80
- (_Bool)splitNextAttachment;	// IMP=0x000000000002ce70
- (void)mapFloatingDrawablesForPageAtIndex:(unsigned long long)arg1;	// IMP=0x000000000002cd0f
- (void)setDidFindContainerHint:(_Bool)arg1;	// IMP=0x000000000002ccff
- (void)setDidInsertPageHeader:(_Bool)arg1;	// IMP=0x000000000002ccef
- (void)setCurrentSpanStyle:(id)arg1 baseStyle:(id)arg2 cachedClass:(struct __CFString *)arg3;	// IMP=0x000000000002cc13
- (void)setCurrentParagraphStyle:(id)arg1 baseStyle:(id)arg2 cachedClass:(struct __CFString *)arg3;	// IMP=0x000000000002cb37
- (void)setCurrentLayoutStyle:(id)arg1;	// IMP=0x000000000002caf1
- (void)setCurrentPageIndex:(int)arg1;	// IMP=0x000000000002cae1
- (int)currentPageIndex;	// IMP=0x000000000002cad1
- (void)overrideSectionStyle:(id)arg1;	// IMP=0x000000000002ca95
- (CDStruct_627e0f85)rangeForSectionStyleAtPageIndex:(int)arg1;	// IMP=0x000000000002ca33
- (id)sectionStyleForPageIndex:(int)arg1;	// IMP=0x000000000002c9ad
- (void)addSectionStyle:(id)arg1 pageIndex:(int)arg2 numPages:(int)arg3;	// IMP=0x000000000002c892
- (void)setFooters:(struct __CFArray *)arg1;	// IMP=0x000000000002c7c7
- (id)footerForName:(struct __CFString *)arg1;	// IMP=0x000000000002c7a6
- (void)setHeaders:(struct __CFArray *)arg1;	// IMP=0x000000000002c6db
- (id)headerForName:(struct __CFString *)arg1;	// IMP=0x000000000002c6ba
- (void)setMode:(int)arg1;	// IMP=0x000000000002c6aa
- (int)mode;	// IMP=0x000000000002c69a
- (struct __CFArray *)pageDrawables:(int)arg1;	// IMP=0x000000000002c646
- (void)clearFloatingDrawables;	// IMP=0x000000000002c5d1
- (id)drawableAtIndex:(int)arg1;	// IMP=0x000000000002c593
- (void)addFloatingDrawable:(id)arg1;	// IMP=0x000000000002c4ee
- (int)floatingDrawablesCount;	// IMP=0x000000000002c4c0
- (void)dealloc;	// IMP=0x000000000002c3b4
- (id)initWithState:(id)arg1 documentSize:(struct CGSize)arg2;	// IMP=0x000000000002c2a2
- (id)sectionStyleRunForRunBeforePageIndex:(int)arg1;	// IMP=0x000000000002ea1c
- (void)openStateLayoutElementsAndStyles;	// IMP=0x000000000002e7a4
- (void)closeStateLayoutElementsAndStyles;	// IMP=0x000000000002e662
- (void)startLayout;	// IMP=0x000000000002e4e7
- (void)startSection;	// IMP=0x000000000002e407
- (id)wrapPointSetForPage:(int)arg1;	// IMP=0x000000000002e3b3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
