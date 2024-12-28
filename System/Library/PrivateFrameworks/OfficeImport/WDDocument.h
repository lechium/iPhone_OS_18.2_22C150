//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSMutableArray, NSMutableSet, NSString, OADBackground, OADColorMap, WDCitationTable, WDFontTable, WDListDefinitionTable, WDListTable, WDRevisionAuthorTable, WDStyleSheet, WDText;

__attribute__((visibility("hidden")))
@interface WDDocument
{
    WDStyleSheet *mStyleSheet;	// 88 = 0x58
    WDFontTable *mFontTable;	// 96 = 0x60
    WDListDefinitionTable *mListDefinitionTable;	// 104 = 0x68
    WDRevisionAuthorTable *mRevisionAuthorTable;	// 112 = 0x70
    WDCitationTable *mCitationTable;	// 120 = 0x78
    WDListTable *mListTable;	// 128 = 0x80
    NSMutableArray *mSections;	// 136 = 0x88
    unsigned short mDefaultTabWidth;	// 144 = 0x90
    WDText *mImageBulletText;	// 152 = 0x98
    WDText *mFootnoteSeparator;	// 160 = 0xa0
    WDText *mFootnoteContinuationSeparator;	// 168 = 0xa8
    WDText *mFootnoteContinuationNotice;	// 176 = 0xb0
    WDText *mEndnoteSeparator;	// 184 = 0xb8
    WDText *mEndnoteContinuationSeparator;	// 192 = 0xc0
    WDText *mEndnoteContinuationNotice;	// 200 = 0xc8
    int mFootnoteNumberFormat;	// 208 = 0xd0
    int mEndnoteNumberFormat;	// 212 = 0xd4
    int mFootnotePosition;	// 216 = 0xd8
    int mEndnotePosition;	// 220 = 0xdc
    int mFootnoteRestart;	// 224 = 0xe0
    int mEndnoteRestart;	// 228 = 0xe4
    unsigned short mFootnoteNumberingStart;	// 232 = 0xe8
    int mGutterPosition;	// 236 = 0xec
    NSString *mOleFilename;	// 240 = 0xf0
    NSString *mKinsokuAltBreakBefore;	// 248 = 0xf8
    NSString *mKinsokuAltBreakAfter;	// 256 = 0x100
    short mZoomPercentage;	// 264 = 0x108
    NSString *mVersion;	// 272 = 0x110
    NSString *mLanguage;	// 280 = 0x118
    unsigned int mMirrorMargins:1;	// 288 = 0x120
    unsigned int mBorderSurroundHeader:1;	// 288 = 0x120
    unsigned int mBorderSurroundFooter:1;	// 288 = 0x120
    unsigned int mKinsokuStrict:1;	// 288 = 0x120
    unsigned int mAutoHyphenate:1;	// 288 = 0x120
    unsigned int mEvenAndOddHeaders:1;	// 288 = 0x120
    unsigned int mBookFold:1;	// 288 = 0x120
    unsigned int mShowMarkup:1;	// 288 = 0x120
    unsigned int mShowComments:1;	// 289 = 0x121
    unsigned int mTrackChanges:1;	// 289 = 0x121
    unsigned int mShowRevisionMarksOnScreen:1;	// 289 = 0x121
    unsigned int mShowInsertionsAndDeletions:1;	// 289 = 0x121
    unsigned int mShowFormatting:1;	// 289 = 0x121
    unsigned int mShowOutline:1;	// 289 = 0x121
    unsigned int mNoTabForHangingIndents:1;	// 289 = 0x121
    NSMutableArray *mDocumentImages;	// 296 = 0x128
    NSMutableArray *mChangeTrackingEditDates;	// 304 = 0x130
    NSMutableArray *mChangeTrackingEditAuthors;	// 312 = 0x138
    NSDate *mCreationDate;	// 320 = 0x140
    NSDate *mModificationDate;	// 328 = 0x148
    NSMutableArray *mImageBullets;	// 336 = 0x150
    OADBackground *mDocumentBackground;	// 344 = 0x158
    NSMutableSet *mObjPointers;	// 352 = 0x160
    OADColorMap *mColorMap;	// 360 = 0x168
}

- (void).cxx_destruct;	// IMP=0x00000000003f08e5
- (id)description;	// IMP=0x00000000003f08a7
- (void)setColorMap:(id)arg1;	// IMP=0x00000000003f0893
- (id)colorMap;	// IMP=0x00000000003f083c
- (_Bool)isFromBinary;	// IMP=0x00000000003f0827
- (id)newAnnotationBlockIterator;	// IMP=0x00000000003f07c9
- (id)annotationBlockIterator;	// IMP=0x00000000003f07af
- (id)newEndnoteBlockIterator;	// IMP=0x00000000003f0751
- (id)endnoteBlockIterator;	// IMP=0x00000000003f0737
- (id)newFootnoteBlockIterator;	// IMP=0x00000000003f06d9
- (id)footnoteBlockIterator;	// IMP=0x00000000003f06bf
- (id)newAnnotationIterator;	// IMP=0x00000000003f0661
- (id)annotationIterator;	// IMP=0x00000000003f0647
- (id)newEndnoteIterator;	// IMP=0x00000000003f05e9
- (id)endnoteIterator;	// IMP=0x00000000003f05cf
- (id)newFootnoteIterator;	// IMP=0x00000000003f0571
- (id)footnoteIterator;	// IMP=0x00000000003f0557
- (id)newMainRunsIterator;	// IMP=0x00000000003f04f9
- (id)mainRunsIterator;	// IMP=0x00000000003f04df
- (id)newMainBlocksIterator;	// IMP=0x00000000003f0481
- (id)mainBlocksIterator;	// IMP=0x00000000003f0467
- (id)newSectionIterator;	// IMP=0x00000000003f0431
- (id)sectionIterator;	// IMP=0x00000000003f0417
- (void)removeEmptySections;	// IMP=0x00000000003f0307
- (id)documentBackground;	// IMP=0x00000000003f02f2
- (void)setDocumentBackground:(id)arg1;	// IMP=0x00000000001587f9
- (id)imageBulletText;	// IMP=0x00000000003f02dd
- (void)setLastModDate:(id)arg1;	// IMP=0x00000000003f02c9
- (id)lastModDate;	// IMP=0x00000000003f02b4
- (void)setCreationDate:(id)arg1;	// IMP=0x00000000003f02a0
- (id)creationDate;	// IMP=0x00000000003f028b
- (id)changeTrackingEditAuthors;	// IMP=0x00000000003f0276
- (id)changeTrackingEditDates;	// IMP=0x00000000003f0261
- (void)addChangeTrackingEditAtDate:(id)arg1 authorIndex:(int)arg2;	// IMP=0x00000000001d3f4d
- (void)setNoTabForHangingIndents:(_Bool)arg1;	// IMP=0x00000000003f0246
- (_Bool)noTabForHangingIndents;	// IMP=0x00000000003f0231
- (void)setShowOutline:(_Bool)arg1;	// IMP=0x00000000000c5a9b
- (_Bool)showOutline;	// IMP=0x00000000003f021c
- (void)setShowFormatting:(_Bool)arg1;	// IMP=0x00000000000c590c
- (_Bool)showFormatting;	// IMP=0x00000000003f0207
- (void)setShowInsertionsAndDeletions:(_Bool)arg1;	// IMP=0x00000000000c58f1
- (_Bool)showInsertionsAndDeletions;	// IMP=0x00000000003f01f2
- (void)setShowRevisionMarksOnScreen:(_Bool)arg1;	// IMP=0x00000000000c58d6
- (_Bool)showRevisionMarksOnScreen;	// IMP=0x00000000003f01dd
- (void)setTrackChanges:(_Bool)arg1;	// IMP=0x00000000000c58bc
- (_Bool)trackChanges;	// IMP=0x00000000003f01c9
- (void)setShowComments:(_Bool)arg1;	// IMP=0x00000000000c5942
- (_Bool)showComments;	// IMP=0x00000000003f01b7
- (void)setShowMarkup:(_Bool)arg1;	// IMP=0x00000000000c5927
- (_Bool)showMarkup;	// IMP=0x00000000003f01a4
- (void)addRevisionAuthor:(id)arg1;	// IMP=0x00000000003f0187
- (unsigned long long)revisionAuthorAddLookup:(id)arg1;	// IMP=0x00000000003f016a
- (id)revisionAuthorAt:(unsigned long long)arg1;	// IMP=0x00000000003f00cf
- (unsigned long long)revisionAuthorCount;	// IMP=0x00000000003f00b2
- (id)revisionAuthorTable;	// IMP=0x00000000000d44cc
- (void)setLanguage:(id)arg1;	// IMP=0x00000000003f009e
- (id)language;	// IMP=0x00000000003f0089
- (void)setVersion:(id)arg1;	// IMP=0x00000000003f0075
- (id)version;	// IMP=0x00000000003f0060
- (void)addImageBullets;	// IMP=0x00000000003efe0f
- (id)imageBullets;	// IMP=0x00000000000d2368
- (id)imageBulletParagraph;	// IMP=0x000000000021bc99
- (id)addImageBulletText;	// IMP=0x0000000000166ff6
- (id)imageBulletWithCharacterOffset:(int)arg1;	// IMP=0x000000000016715e
- (id)applicationName;	// IMP=0x00000000003efe02
- (void)setZoomPercentage:(short)arg1;	// IMP=0x00000000000c5a8a
- (short)zoomPercentage;	// IMP=0x00000000003efdf1
- (void)setBookFold:(_Bool)arg1;	// IMP=0x00000000000c5a6f
- (_Bool)bookFold;	// IMP=0x00000000003efddc
- (void)setOleFilename:(id)arg1;	// IMP=0x00000000000c5dac
- (id)oleFilename;	// IMP=0x00000000001cb6ef
- (void)setGutterPosition:(int)arg1;	// IMP=0x00000000000c5a5f
- (int)gutterPosition;	// IMP=0x00000000003efdcc
- (id)listLevelWithListId:(int)arg1 levelIndex:(unsigned char)arg2;	// IMP=0x00000000003efcac
- (id)listWithListId:(int)arg1;	// IMP=0x00000000003efc8f
- (id)listTable;	// IMP=0x00000000000d3aba
- (id)listDefinitionWithListId:(int)arg1;	// IMP=0x00000000003efc0d
- (id)listDefinitionWithListDefinitionId:(int)arg1;	// IMP=0x00000000003efbf0
- (id)listDefinitionTable;	// IMP=0x00000000000d237d
- (id)citationTable;	// IMP=0x00000000003efbdb
- (void)addCitation:(id)arg1 forID:(id)arg2;	// IMP=0x00000000003efbbe
- (id)citationFor:(id)arg1;	// IMP=0x00000000003efb91
- (unsigned long long)citationCount;	// IMP=0x00000000003efb74
- (void)setFootnoteNumberingStart:(unsigned short)arg1;	// IMP=0x00000000000c5a4e
- (unsigned short)footnoteNumberingStart;	// IMP=0x00000000003efb63
- (void)setEndnoteRestart:(int)arg1;	// IMP=0x00000000000c5a3e
- (int)endnoteRestart;	// IMP=0x00000000003efb53
- (void)setFootnoteRestart:(int)arg1;	// IMP=0x00000000000c5a2e
- (int)footnoteRestart;	// IMP=0x00000000003efb43
- (void)setEndnotePosition:(int)arg1;	// IMP=0x00000000000c59fe
- (int)endnotePosition;	// IMP=0x00000000003efb33
- (void)setFootnotePosition:(int)arg1;	// IMP=0x00000000000c59ee
- (int)footnotePosition;	// IMP=0x00000000003efb23
- (void)setEndnoteNumberFormat:(int)arg1;	// IMP=0x00000000000c5a1e
- (int)endnoteNumberFormat;	// IMP=0x00000000003efb13
- (void)setFootnoteNumberFormat:(int)arg1;	// IMP=0x00000000000c5a0e
- (int)footnoteNumberFormat;	// IMP=0x00000000003efb03
- (id)endnoteContinuationNotice;	// IMP=0x00000000000eafa5
- (id)endnoteContinuationSeparator;	// IMP=0x00000000000eaf90
- (id)endnoteSeparator;	// IMP=0x00000000000eaf7b
- (id)footnoteContinuationNotice;	// IMP=0x00000000000eaf66
- (id)footnoteContinuationSeparator;	// IMP=0x00000000000eaf51
- (id)footnoteSeparator;	// IMP=0x00000000000eae61
- (void)setEvenAndOddHeaders:(_Bool)arg1;	// IMP=0x00000000000c59d3
- (_Bool)evenAndOddHeaders;	// IMP=0x00000000003efaee
- (void)setAutoHyphenate:(_Bool)arg1;	// IMP=0x00000000000c59b8
- (_Bool)autoHyphenate;	// IMP=0x00000000003efad9
- (void)setKinsokuStrict:(_Bool)arg1;	// IMP=0x00000000000c5be8
- (_Bool)kinsokuStrict;	// IMP=0x00000000003efac4
- (void)setKinsokuAltBreakAfter:(id)arg1;	// IMP=0x00000000001f5371
- (id)kinsokuAltBreakAfter;	// IMP=0x00000000003efaaf
- (void)setKinsokuAltBreakBefore:(id)arg1;	// IMP=0x00000000001f5385
- (id)kinsokuAltBreakBefore;	// IMP=0x00000000003efa9a
- (void)setDefaultTabWidth:(unsigned short)arg1;	// IMP=0x00000000000c59a7
- (unsigned short)defaultTabWidth;	// IMP=0x00000000000f47c9
- (void)setBorderSurroundFooter:(_Bool)arg1;	// IMP=0x00000000000c598c
- (_Bool)borderSurroundFooter;	// IMP=0x00000000003efa85
- (void)setBorderSurroundHeader:(_Bool)arg1;	// IMP=0x00000000000c5972
- (_Bool)borderSurroundHeader;	// IMP=0x00000000003efa71
- (void)setMirrorMargins:(_Bool)arg1;	// IMP=0x00000000000c595a
- (_Bool)mirrorMargins;	// IMP=0x00000000003efa5f
- (id)addSection;	// IMP=0x00000000000d5594
- (id)lastSection;	// IMP=0x00000000001aa8f6
- (id)sectionAt:(unsigned long long)arg1;	// IMP=0x00000000000ecd91
- (unsigned long long)sectionCount;	// IMP=0x00000000000ebbdc
- (id)sections;	// IMP=0x00000000000ebd5d
- (id)fontTable;	// IMP=0x00000000000bd650
- (id)styleSheet;	// IMP=0x00000000000c5eb3
- (void)removeObjPointer:(id)arg1;	// IMP=0x00000000003efa08
- (void)addObjPointer:(id)arg1;	// IMP=0x000000000015859a
- (id)init;	// IMP=0x00000000000bc2f2

@end
