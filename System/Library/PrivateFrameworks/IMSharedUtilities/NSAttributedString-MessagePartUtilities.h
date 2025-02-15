//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (MessagePartUtilities)
+ (id)__im_attributedStringWithFileTransfers:(id)arg1;	// IMP=0x0080000000026a4f
+ (void)__im_diffPartIndexesInEditedMessage:(id)arg1 previousMessage:(id)arg2 editedPartIndexes:(out id *)arg3 removedPartIndexes:(out id *)arg4;	// IMP=0x0080000000025c92
- (id)__im_attributedStringByReplacingRichCardGUID:(id)arg1 withUpdatedTransferGUID:(id)arg2;	// IMP=0x0010000000026e50
- (id)__im_attributedStringByReplacingFileTransferGUID:(id)arg1 withUpdatedTransferGUID:(id)arg2;	// IMP=0x0010000000026c5c
- (_Bool)__im_containsFileTransferGUID:(id)arg1;	// IMP=0x0010000000026ad1
- (id)__im_attributedStringByAppendingFileTransfers:(id)arg1;	// IMP=0x00100000000267e0
- (id)__im_attributedStringByAssigningMessagePartNumbers;	// IMP=0x00100000000264e2
- (id)__im_messagePartIndexToRangeMap;	// IMP=0x0010000000026368
- (id)__im_rangeToMessagePartIndexMap;	// IMP=0x00100000000261ee
- (id)__im_messageTextByRemovingMessagePartIndex:(long long)arg1;	// IMP=0x0010000000025b9d
- (id)__im_messageTextByReplacingMessagePartIndex:(long long)arg1 withNewPartText:(id)arg2;	// IMP=0x00100000000259bd
- (id)__im_messageTextByAddingMessagePart:(id)arg1 atIndex:(long long)arg2;	// IMP=0x00100000000258a0
- (id)__im_messagePartMatchingRange:(struct _NSRange)arg1;	// IMP=0x0010000000025512
- (id)__im_messagePartMatchingPartIndex:(long long)arg1;	// IMP=0x00100000000251c3
- (long long)__im_insertionIndexForMessagePartBody:(id)arg1;	// IMP=0x0010000000024f4f
- (_Bool)__im_containsAttributedValue:(id)arg1;	// IMP=0x0010000000024ceb
- (id)__im_partDescriptorWithIndex:(long long)arg1 range:(struct _NSRange)arg2 totalPartCount:(unsigned long long)arg3;	// IMP=0x0010000000024c67
- (void)__im_visitMessageParts:(CDUnknownBlockType)arg1;	// IMP=0x0010000000024a85
- (id)__im_dataDetectedURLsFromAttributes;	// IMP=0x00100000000246f5
- (id)__im_attributedSubstringFromRange:(struct _NSRange)arg1;	// IMP=0x0010000000024661
- (id)__im_messagePartIndexes;	// IMP=0x001000000002451c
- (unsigned long long)__im_countMessageParts;	// IMP=0x001000000002441e
- (id)__im_attributedStringByReplacingAdaptiveImageGlyphsWithUnknownCharacterSymbol;	// IMP=0x0010000000080f06
- (_Bool)__im_isOnlyAdaptiveImageGlyphFileTransfersAndWhitespaceUsingIsAdaptiveImageGlyphProvider:(CDUnknownBlockType)arg1;	// IMP=0x0010000000080c0b
- (_Bool)__im_isOnlyAdaptiveImageGlyphFileTransfersAndWhitespaceUsingFileTransferProvider:(CDUnknownBlockType)arg1;	// IMP=0x0010000000080837
- (_Bool)__im_containsAdaptiveImageGlyphFileTransfersUsingFileTransferProvider:(CDUnknownBlockType)arg1;	// IMP=0x001000000008075e
- (_Bool)__im_containsAdaptiveImageGlyphs;	// IMP=0x0010000000080679
- (id)__im_transferGUIDsInAttributedString;	// IMP=0x0010000000080512
- (void)__im_enumerateAdaptiveImageGlyphFileTransfersUsingFileTransferProvider:(CDUnknownBlockType)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x001000000008035b
- (void)__im_enumerateAdaptiveImageGlyphFileTransfersUsingIsAdaptiveImageGlyphProvider:(CDUnknownBlockType)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00100000000801b6
- (id)__im_attributedStringByReplacingAdaptiveImageGlyphFileTransfersUsingIsAdaptiveImageGlyphProvider:(CDUnknownBlockType)arg1 replacementTextProvider:(CDUnknownBlockType)arg2 removedTransferGUIDsOut:(inout id *)arg3;	// IMP=0x001000000007fc99
- (id)__im_attributedStringByReplacingAdaptiveImageGlyphFileTransfersUsingFileTransferProvider:(CDUnknownBlockType)arg1 replacementTextProvider:(CDUnknownBlockType)arg2 removedTransferGUIDsOut:(inout id *)arg3;	// IMP=0x001000000007fa85
- (id)_localesSupportingTrim;	// IMP=0x001000000008e37a
- (_Bool)_currentLocaleSupportsTrimming;	// IMP=0x001000000008e245
- (id)_currentLocale;	// IMP=0x001000000008e0ed
- (id)im_trimmedSummaryIfNeededForTapback;	// IMP=0x001000000008dfc8
- (_Bool)isSingleCharacterString:(id)arg1;	// IMP=0x00100000000ad901
- (_Bool)__im_isRichCardsOrSuggestedReply;	// IMP=0x00100000000ad8b8
- (_Bool)__im_isRichCard;	// IMP=0x00100000000ad89c
- (id)__im_suggestedReplyPreviewText;	// IMP=0x00100000000ad6f2
- (id)__im_richCardsPreviewText;	// IMP=0x00100000000ad50f
- (_Bool)im_containsIMTextEffect;	// IMP=0x00100000000bbf8b
- (long long)im_activeTextEffectTypeInRange:(struct _NSRange)arg1 ignoreRangeLengthCheck:(_Bool)arg2;	// IMP=0x00100000000bbbde
@end

