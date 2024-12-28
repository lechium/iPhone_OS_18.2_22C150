//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CXNamespace;

__attribute__((visibility("hidden")))
@interface OCXState : NSObject
{
    int mXMLFormat;	// 8 = 0x8
    CXNamespace *mOCXRelationshipsNamespace;	// 16 = 0x10
    CXNamespace *mOCXDrawingNamespace;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000037c7fc
@property(retain, nonatomic) CXNamespace *OCXDrawingNamespace; // @synthesize OCXDrawingNamespace=mOCXDrawingNamespace;
@property(retain, nonatomic) CXNamespace *OCXRelationshipsNamespace; // @synthesize OCXRelationshipsNamespace=mOCXRelationshipsNamespace;
@property(readonly, nonatomic) int xmlFormat; // @synthesize xmlFormat=mXMLFormat;
- (id)OCXSettingsRelationshipType;	// IMP=0x000000000037c79a
- (id)OCXTableStylesRelationshipType;	// IMP=0x000000000037c777
- (id)OCXPackageViewPropsRelationshipType;	// IMP=0x000000000037c754
- (id)OCXPackagePresPropsRelationshipType;	// IMP=0x000000000037c731
- (id)OCXNumberingRelationshipType;	// IMP=0x000000000037c70e
- (id)OCXNotesMasterRelationshipType;	// IMP=0x000000000037c6eb
- (id)OCXVmlDrawingRelationshipType;	// IMP=0x000000000037c6d7
- (id)OCXThemeOverrideRelationshipType;	// IMP=0x000000000037c6b4
- (id)OCXThemeRelationshipType;	// IMP=0x000000000037c691
- (id)OCXLegacyDocTextInfoRelationshipType;	// IMP=0x000000000037c67d
- (id)OCXCustomXmlRelationshipType;	// IMP=0x000000000037c65a
- (id)OCXCommentAuthorsRelationshipType;	// IMP=0x000000000037c637
- (id)OCXNotesSlideRelationshipType;	// IMP=0x000000000037c614
- (id)OCXSlideRelationshipType;	// IMP=0x000000000037c5f1
- (id)OCXSlideLayoutRelationshipType;	// IMP=0x000000000037c5ce
- (id)OCXSlideMasterRelationshipType;	// IMP=0x000000000037c5ab
- (id)OCXTableRelationshipType;	// IMP=0x000000000037c588
- (id)OCXPivotTableRelationshipType;	// IMP=0x000000000037c565
- (id)OCXCommentsExtendedRelationshipType;	// IMP=0x000000000037c551
- (id)OCXCommentsRelationshipType;	// IMP=0x000000000037c52e
- (id)OCXFootnotesRelationshipType;	// IMP=0x000000000037c50b
- (id)OCXFontTableRelationshipType;	// IMP=0x000000000037c4e8
- (id)OCXEndnotesRelationshipType;	// IMP=0x000000000037c4c5
- (id)OCXDrawingRelationshipType;	// IMP=0x000000000037c4a2
- (id)OCXSharedStringsRelationshipType;	// IMP=0x000000000037c47f
- (id)OCXStylesRelationshipType;	// IMP=0x000000000037c45c
- (void)setupNSForXMLFormat:(int)arg1;	// IMP=0x000000000037c329
- (id)init;	// IMP=0x000000000037c2be
- (void)setXmlFormat:(int)arg1;	// IMP=0x000000000037c824

@end
