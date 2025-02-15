//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PBPresentation : NSObject
{
}

+ (void)addHeadersFootersToDocumentContainer:(id)arg1 instance:(int)arg2;	// IMP=0x0080000000430d18
+ (void)setFontEntites:(id)arg1 environmentHolder:(id)arg2;	// IMP=0x0080000000017f0e
+ (void)readFrom:(void *)arg1 to:(id)arg2 cancel:(id)arg3 asThumbnail:(_Bool)arg4 delegate:(id)arg5;	// IMP=0x008000000000b9bb
+ (id)drawingGroupHolderWithDocumentContainerHolder:(id)arg1;	// IMP=0x008000000001d0f1
+ (void)readNotes:(id)arg1 masterLayoutMap:(id)arg2 slideIdMap:(id)arg3 state:(id)arg4 delegate:(id)arg5;	// IMP=0x0080000000433c6f
+ (void)readSlides:(id)arg1 masterLayoutMap:(id)arg2 slideIdMap:(id)arg3 state:(id)arg4 isThumbnail:(_Bool)arg5 delegate:(id)arg6;	// IMP=0x0080000000038e88
+ (void)processLayoutTypesFromDocument:(id)arg1 masterLayoutMap:(id)arg2 state:(id)arg3;	// IMP=0x0080000000035679
+ (void)readCommentAuthorsFrom:(id)arg1 state:(id)arg2;	// IMP=0x008000000043359b
+ (void)scanSlideListForLayoutTypes:(id)arg1 slideListHolder:(id)arg2 masterLayoutMap:(id)arg3;	// IMP=0x0080000000034eac
+ (void)readMasterAndLayouts:(id)arg1 masterLayoutMap:(id)arg2 state:(id)arg3;	// IMP=0x008000000001d9ec
+ (void)readSlideListWithInstance:(int)arg1 documentContainerHolder:(id)arg2 state:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0080000000432544
+ (void)readTextStyleFromNotesMaster:(id)arg1 toNotesMaster:(id)arg2 slideMaster:(id)arg3 state:(id)arg4;	// IMP=0x0080000000431f30
+ (void)readTextStylesFromSlideMaster:(id)arg1 toSlideMaster:(id)arg2 state:(id)arg3;	// IMP=0x0080000000431bec
+ (void)readXmlLayoutsFromSlideMaster:(id)arg1 document:(id)arg2 masterInfo:(id)arg3 state:(id)arg4;	// IMP=0x008000000043181e
+ (void)readThemeFromSlideMaster:(id)arg1 document:(id)arg2 theme:(id)arg3 colorMap:(id)arg4 state:(id)arg5;	// IMP=0x0080000000431151
+ (void)readDefaultTextListStyle:(id)arg1 fromDocumentContainer:(id)arg2 state:(id)arg3;	// IMP=0x0080000000021a04
+ (void)setDefaultTextStyleWithEnvironmentHolder:(id)arg1 state:(id)arg2;	// IMP=0x00800000000182fd

@end

