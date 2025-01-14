//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface WFTreeXMLDocumentStripper : NSObject
{
    struct _xmlDoc *xmlDocument;	// 8 = 0x8
    NSString *pageTitle;	// 16 = 0x10
    NSMutableDictionary *metaTagsLabeled;	// 24 = 0x18
    NSMutableArray *metaTagsUnlabeled;	// 32 = 0x20
    NSMutableArray *scriptBlocks;	// 40 = 0x28
    NSMutableArray *images;	// 48 = 0x30
    NSString *pageContent;	// 56 = 0x38
    NSMutableArray *links;	// 64 = 0x40
    _Bool hasFrameset;	// 72 = 0x48
    _Bool hasShortRefresh;	// 73 = 0x49
}

+ (id)treeStripperWithXMLDocument:(struct _xmlDoc *)arg1;	// IMP=0x0010000000005fa1
- (void)dealloc;	// IMP=0x0000000000006922
- (id)description;	// IMP=0x0000000000006812
- (id)processXMLDocument:(struct _xmlDoc *)arg1 blockComments:(_Bool)arg2;	// IMP=0x0000000000006212
- (void)processXMLDocument:(struct _xmlDoc *)arg1;	// IMP=0x0000000000006165
- (void)strip;	// IMP=0x000000000000614f
- (_Bool)hasShortRefresh;	// IMP=0x0000000000006146
- (_Bool)hasFrameset;	// IMP=0x000000000000613d
- (id)links;	// IMP=0x0000000000006133
- (id)pageContent;	// IMP=0x0000000000006129
- (id)images;	// IMP=0x000000000000611f
- (id)scriptBlocks;	// IMP=0x0000000000006115
- (id)metaTagsUnlabeled;	// IMP=0x000000000000610b
- (id)metaTagsLabeled;	// IMP=0x0000000000006101
- (id)metaTagRating;	// IMP=0x00000000000060e4
- (id)metaTagKeywords;	// IMP=0x00000000000060c7
- (id)metaTagDescription;	// IMP=0x00000000000060aa
- (id)pageTitle;	// IMP=0x00000000000060a0
- (id)URLString;	// IMP=0x0000000000006098
- (void)setPageTitle:(id)arg1;	// IMP=0x000000000000606f
- (void)setXMLDocument:(struct _xmlDoc *)arg1;	// IMP=0x0000000000006065
- (id)initWithXMLDocument:(struct _xmlDoc *)arg1;	// IMP=0x0000000000005fd8

@end

