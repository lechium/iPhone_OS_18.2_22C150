//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableAttributedString.h>

@interface NSMutableAttributedString (NSMutableAttributedStringKitAdditions)
- (void)convertWritingDirectionToBidiControlCharacters;	// IMP=0x00900000000a6119
- (struct _NSRange)convertWritingDirectionToBidiControlCharactersForParagraphAtIndex:(unsigned long long)arg1;	// IMP=0x00900000000a5cd7
- (void)convertBidiControlCharactersToWritingDirection;	// IMP=0x00900000000a5c58
- (struct _NSRange)convertBidiControlCharactersToWritingDirectionForParagraphAtIndex:(unsigned long long)arg1;	// IMP=0x00900000000a58db
- (_Bool)readFromData:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3;	// IMP=0x00900000000a58c6
- (_Bool)readFromURL:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3;	// IMP=0x00900000000a58b1
- (_Bool)readFromData:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;	// IMP=0x00900000000a589e
- (_Bool)readFromFileURL:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;	// IMP=0x00900000000a5888
- (_Bool)readFromURL:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;	// IMP=0x00900000000a5872
- (void)unscriptRange:(struct _NSRange)arg1;	// IMP=0x00900000000a5850
- (void)subscriptRange:(struct _NSRange)arg1;	// IMP=0x00900000000a5827
- (void)superscriptRange:(struct _NSRange)arg1;	// IMP=0x00900000000a5800
- (void)_changeIntAttribute:(id)arg1 by:(long long)arg2 range:(struct _NSRange)arg3;	// IMP=0x00900000000a5690
- (void)setBaseWritingDirection:(long long)arg1 range:(struct _NSRange)arg2;	// IMP=0x00900000000a552b
- (void)setAlignment:(long long)arg1 range:(struct _NSRange)arg2;	// IMP=0x00900000000a53c6
- (void)fixGlyphInfoAttributeInRange:(struct _NSRange)arg1;	// IMP=0x00900000000a5255
- (void)_fixGlyphInfo:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x00900000000a513d
- (void)fixAttachmentAttributeInRange:(struct _NSRange)arg1;	// IMP=0x00900000000a4cd5
- (void)fixParagraphStyleAttributeInRange:(struct _NSRange)arg1;	// IMP=0x00900000000a4a6b
- (void)fixFontAttributeInRange:(struct _NSRange)arg1;	// IMP=0x00900000000a2416
- (_Bool)_shouldSetOriginalFontAttribute;	// IMP=0x00900000000a2404
- (void)fixAttributesInRange:(struct _NSRange)arg1;	// IMP=0x00900000000a22cb
- (void)_setAttributeFixingInProgress:(_Bool)arg1;	// IMP=0x00900000000a22c5
- (_Bool)_attributeFixingInProgress;	// IMP=0x00900000000a22bd
@end
