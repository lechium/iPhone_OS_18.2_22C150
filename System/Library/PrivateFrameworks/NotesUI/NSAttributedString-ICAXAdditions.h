//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (ICAXAdditions)
+ (id)icaxAttributedStringForSpeakingStringInLowerPitch:(id)arg1;	// IMP=0x003000000012a445
+ (id)ic_attributedStringWithString:(id)arg1 font:(id)arg2;	// IMP=0x00300000001472d8
+ (id)ic_blockQuoteMenuItemAttributedString;	// IMP=0x0030000000147018
- (id)ic_attributedSubstringUntilLine:(unsigned int)arg1;	// IMP=0x0010000000148b9b
- (_Bool)ic_containsTextAttachment:(id)arg1;	// IMP=0x0010000000148a57
- (_Bool)ic_containsBlockAttachmentsInRange:(struct _NSRange)arg1;	// IMP=0x0010000000148907
- (id)ic_attributedStringByCopyingInlineAttachmentsAndUpdatingChangeCountWithContext:(id)arg1;	// IMP=0x001000000014869d
- (id)ic_attributedStringByFlatteningCalculateAttachmentsWithContext:(id)arg1;	// IMP=0x0010000000148563
- (id)ic_attributedStringByFlatteningInlineAttachmentsWithContext:(id)arg1 formatter:(CDUnknownBlockType)arg2;	// IMP=0x00100000001483be
- (id)ic_itemProviderDataForUTI:(id)arg1;	// IMP=0x0010000000148237
- (id)ic_attributedStringByHighlightingRegexFinderMatches:(id)arg1 withHighlightColor:(id)arg2 attributeName:(id)arg3;	// IMP=0x0010000000148132
- (id)ic_attributedStringByHighlightingRegexFinderMatches:(id)arg1 withHighlightColor:(id)arg2;	// IMP=0x0010000000148116
- (id)ic_attributedStringByHighlightingRegex:(id)arg1 withHighlightColor:(id)arg2;	// IMP=0x00100000001480fa
- (id)ic_attributedStringByHighlightingRegex:(id)arg1 withHighlightColor:(id)arg2 attributeName:(id)arg3;	// IMP=0x0010000000148003
- (id)_ic_attributedStringByHighlightingRegexMatches:(id)arg1 withHighlightColor:(id)arg2 attributeName:(id)arg3;	// IMP=0x0010000000147dbf
- (long long)ic_writingDirectionAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000147c0e
- (id)ic_attributesByHighlightingAttributes:(id)arg1 withHighlightColor:(id)arg2 attributeName:(id)arg3;	// IMP=0x0010000000147b13
- (id)ic_stringWithoutAttachments;	// IMP=0x0010000000147a26
- (id)ic_stringByTrimmingLeadingTrailingWhitespace;	// IMP=0x00100000001477d2
- (struct _NSRange)ic_rangeForBaseAttachment:(id)arg1 withTextAttachment:(id *)arg2;	// IMP=0x00100000001474e2
- (struct _NSRange)ic_rangeForInlineAttachment:(id)arg1 withTextAttachment:(id *)arg2;	// IMP=0x0010000000147451
- (struct _NSRange)ic_rangeForAttachment:(id)arg1 withTextAttachment:(id *)arg2;	// IMP=0x00100000001473c0
- (id)ic_textTablesInRange:(struct _NSRange)arg1;	// IMP=0x001000000017495a
- (unsigned long long)ic_numberOfTables;	// IMP=0x00100000001748b8
- (struct _NSRange)ic_rangeofNextTableFromIndex:(unsigned long long)arg1;	// IMP=0x001000000017474f
- (id)ic_nextTableStringFromIndex:(unsigned long long)arg1 tableRange:(struct _NSRange *)arg2;	// IMP=0x0010000000174502
- (unsigned long long)ic_numRowsForTextTable:(id)arg1 outNumColumns:(out unsigned long long *)arg2;	// IMP=0x00100000001740e7
- (CDStruct_4bcfbbae)ic_tableSizeForTextTable:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x0010000000173b9c
@end
