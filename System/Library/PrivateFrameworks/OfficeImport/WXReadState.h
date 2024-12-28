//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CXNamespace, NSMutableArray, NSMutableDictionary, OAXDrawingState, OCPPackagePart, OITSUNoCopyDictionary, WDCharacterRun, WDDocument, WXOAVReadState;
@protocol TCCancelDelegate;

__attribute__((visibility("hidden")))
@interface WXReadState
{
    WDDocument *mDocument;	// 32 = 0x20
    OITSUNoCopyDictionary *mTextNodesToBeAdded;	// 40 = 0x28
    OITSUNoCopyDictionary *mMapBookmarkIdToName;	// 48 = 0x30
    OITSUNoCopyDictionary *mMapAnnotationIdToAnnotation;	// 56 = 0x38
    OITSUNoCopyDictionary *mMapAnnotationParaIdToAnnotation;	// 64 = 0x40
    NSMutableDictionary *mMapFlowIdToTextBox;	// 72 = 0x48
    OCPPackagePart *mPackagePart;	// 80 = 0x50
    OCPPackagePart *mAnnotationPart;	// 88 = 0x58
    OCPPackagePart *mAnnotationExtendedPart;	// 96 = 0x60
    struct _xmlDoc *mFootnoteDocument;	// 104 = 0x68
    struct _xmlNode *mFootnotes;	// 112 = 0x70
    struct _xmlDoc *mEndnoteDocument;	// 120 = 0x78
    struct _xmlNode *mEndnotes;	// 128 = 0x80
    struct _xmlDoc *mAnnotationDocument;	// 136 = 0x88
    struct _xmlNode *mAnnotations;	// 144 = 0x90
    struct _xmlDoc *mAnnotationExtendedDocument;	// 152 = 0x98
    struct _xmlNode *mAnnotationsExtended;	// 160 = 0xa0
    NSMutableArray *mDeleteAuthorStack;	// 168 = 0xa8
    NSMutableArray *mDeleteDateStack;	// 176 = 0xb0
    NSMutableArray *mEditAuthorStack;	// 184 = 0xb8
    NSMutableArray *mEditDateStack;	// 192 = 0xc0
    NSMutableArray *mFormatAuthorStack;	// 200 = 0xc8
    NSMutableArray *mFormatDateStack;	// 208 = 0xd0
    NSMutableArray *mPendingCommentNodes;	// 216 = 0xd8
    NSMutableArray *mPendingBookmarkNodes;	// 224 = 0xe0
    WXOAVReadState *mWXOavState;	// 232 = 0xe8
    OAXDrawingState *mDrawingState;	// 240 = 0xf0
    int mCurrentOfficeArtTextType;	// 248 = 0xf8
    WDCharacterRun *mReadSymbolTo;	// 256 = 0x100
    _Bool mNewSectionRequested;	// 264 = 0x108
    _Bool mReadingMath;	// 265 = 0x109
    unsigned long long mCurrentRowCNFStyle;	// 272 = 0x110
    unsigned long long mCurrentCellCNFStyle;	// 280 = 0x118
    _Bool mCurrentTableWraps;	// 288 = 0x120
    id <TCCancelDelegate> mCancelDelegate;	// 296 = 0x128
    CXNamespace *mWXMainNamespace;	// 304 = 0x130
    CXNamespace *mWXDrawingNamespace;	// 312 = 0x138
    CXNamespace *mWXShapeNamespace;	// 320 = 0x140
    CXNamespace *mWXGroupNamespace;	// 328 = 0x148
    CXNamespace *mWXOOBibliographyNamespace;	// 336 = 0x150
    CXNamespace *mWXRelationshipNamespace;	// 344 = 0x158
    _Bool mIsThumbnail;	// 352 = 0x160
}

- (void).cxx_destruct;	// IMP=0x00000000004188fc
@property(retain, nonatomic) id <TCCancelDelegate> cancelDelegate; // @synthesize cancelDelegate=mCancelDelegate;
@property(nonatomic) int currentOfficeArtTextType; // @synthesize currentOfficeArtTextType=mCurrentOfficeArtTextType;
@property(nonatomic) _Bool readingMath; // @synthesize readingMath=mReadingMath;
@property(retain, nonatomic) CXNamespace *WXRelationshipNamespace; // @synthesize WXRelationshipNamespace=mWXRelationshipNamespace;
@property(retain, nonatomic) CXNamespace *WXOOBibliographyNamespace; // @synthesize WXOOBibliographyNamespace=mWXOOBibliographyNamespace;
@property(retain, nonatomic) CXNamespace *WXGroupNamespace; // @synthesize WXGroupNamespace=mWXGroupNamespace;
@property(retain, nonatomic) CXNamespace *WXShapeNamespace; // @synthesize WXShapeNamespace=mWXShapeNamespace;
@property(retain, nonatomic) CXNamespace *WXDrawingNamespace; // @synthesize WXDrawingNamespace=mWXDrawingNamespace;
@property(retain, nonatomic) CXNamespace *WXMainNamespace; // @synthesize WXMainNamespace=mWXMainNamespace;
- (_Bool)isThumbnail;	// IMP=0x00000000004187a9
- (void)setIsThumbnail:(_Bool)arg1;	// IMP=0x0000000000418799
- (void)setupNSForXMLFormat:(int)arg1;	// IMP=0x00000000004181da
- (_Bool)currentTableWraps;	// IMP=0x00000000004181ca
- (void)setCurrentTableWraps:(_Bool)arg1;	// IMP=0x00000000004181ba
- (void)setCurrentCellCNFStyle:(unsigned long long)arg1;	// IMP=0x00000000004181a9
- (unsigned long long)currentCellCNFStyle;	// IMP=0x0000000000418198
- (void)setCurrentRowCNFStyle:(unsigned long long)arg1;	// IMP=0x0000000000418187
- (unsigned long long)currentRowCNFStyle;	// IMP=0x0000000000418176
- (void)setNewSectionRequested:(_Bool)arg1;	// IMP=0x0000000000418166
- (_Bool)isNewSectionRequested;	// IMP=0x0000000000418156
- (void)setReadSymbolTo:(id)arg1;	// IMP=0x0000000000418142
- (id)readSymbolTo;	// IMP=0x000000000041812d
- (id)drawingState;	// IMP=0x0000000000418118
- (void)clearPendingBookmarks;	// IMP=0x0000000000417f94
- (id)pendingBookmarks;	// IMP=0x0000000000417f7f
- (void)addPendingBookmark:(struct _xmlNode *)arg1;	// IMP=0x0000000000417efd
- (void)clearPendingComments;	// IMP=0x0000000000417ee0
- (id)pendingComments;	// IMP=0x0000000000417ecb
- (void)addPendingComment:(struct _xmlNode *)arg1;	// IMP=0x0000000000417e5c
- (id)currentFormatDate;	// IMP=0x0000000000417e3f
- (id)currentFormatAuthor;	// IMP=0x0000000000417e22
- (void)popFormatAuthorDate;	// IMP=0x0000000000417dd9
- (void)pushFormatAuthor:(id)arg1 date:(id)arg2;	// IMP=0x0000000000417d34
- (id)currentEditDate;	// IMP=0x0000000000417d17
- (id)currentEditAuthor;	// IMP=0x0000000000417cfa
- (void)popEditAuthorDate;	// IMP=0x0000000000417c77
- (void)pushEditAuthor:(id)arg1 date:(id)arg2;	// IMP=0x0000000000417bc6
- (id)currentDeleteDate;	// IMP=0x0000000000417ba9
- (id)currentDeleteAuthor;	// IMP=0x0000000000417b8c
- (void)popDeleteAuthorDate;	// IMP=0x0000000000417b2f
- (void)pushDeleteAuthor:(id)arg1 date:(id)arg2;	// IMP=0x0000000000417a7e
- (id)wxoavState;	// IMP=0x0000000000417a69
- (void)setDocumentPart:(id)arg1;	// IMP=0x0000000000417839
- (void)setAnnotationExtendedPart:(id)arg1;	// IMP=0x0000000000417825
- (id)annotationExtendedPart;	// IMP=0x0000000000417810
- (void)setAnnotationPart:(id)arg1;	// IMP=0x00000000004177fc
- (id)annotationPart;	// IMP=0x00000000004177e7
- (void)setPackagePart:(id)arg1;	// IMP=0x00000000004177d3
- (id)packagePart;	// IMP=0x00000000004177be
- (struct _xmlNode *)xmlAnnotationExtendedWithParaId:(unsigned int)arg1;	// IMP=0x000000000041762d
- (struct _xmlNode *)xmlAnnotationWithID:(long long)arg1;	// IMP=0x000000000041759f
- (struct _xmlNode *)xmlEndnoteWithID:(long long)arg1;	// IMP=0x0000000000417511
- (struct _xmlNode *)xmlFootnoteWithID:(long long)arg1;	// IMP=0x0000000000417483
- (void)setTextBox:(id)arg1 forFlowId:(id)arg2;	// IMP=0x0000000000417466
- (id)textBoxForFlowId:(id)arg1;	// IMP=0x0000000000417439
- (_Bool)hasAnnotationsExtended;	// IMP=0x0000000000417424
- (id)annotationWithParaId:(unsigned int)arg1;	// IMP=0x00000000004173a2
- (void)addAnnotationParaId:(unsigned int)arg1 annotation:(id)arg2;	// IMP=0x0000000000417302
- (_Bool)hasAnnotations;	// IMP=0x00000000004172ed
- (id)annotationWithId:(long long)arg1;	// IMP=0x000000000041726b
- (void)addAnnotationId:(long long)arg1 annotation:(id)arg2;	// IMP=0x00000000004171cb
- (id)bookmarkName:(long long)arg1;	// IMP=0x0000000000417149
- (void)addBookmarkId:(long long)arg1 name:(id)arg2;	// IMP=0x00000000004170a9
- (void)clearOutNodesToBeAdded:(id)arg1;	// IMP=0x0000000000416ffc
- (id)nodesToBeAdded:(id)arg1;	// IMP=0x0000000000416f8d
- (void)addText:(id)arg1 node:(struct _xmlNode *)arg2;	// IMP=0x0000000000416e6e
- (void)setDocument:(id)arg1;	// IMP=0x0000000000416dc3
- (id)document;	// IMP=0x0000000000416dae
- (void)dealloc;	// IMP=0x0000000000416bd6
- (id)initNoStacksWith:(id)arg1;	// IMP=0x00000000004169bb
- (id)init;	// IMP=0x000000000041661a

@end
