//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface CKEntryRichTextViewEffectsPickerAssistant : NSObject
{
    MISSING_TYPE *textView;	// 8 = 0x8
    MISSING_TYPE *shouldSkipNextAdjustingOfTypingAttributes;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000007a8bb0
- (id)init;	// IMP=0x00000000007a8b50
- (void)removeTypingAttributesAdjustments;	// IMP=0x00000000007a8ad0
- (void)adjustTypingAttributesIfNeededForReplacement:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x00000000007a6e20
- (void)selectWordAtCaretIfPossible;	// IMP=0x00000000007a6de0
- (void)selectSentenceAtCaretIfPossible;	// IMP=0x00000000007a6d10
@property(nonatomic) _Bool shouldSkipNextAdjustingOfTypingAttributes; // @synthesize shouldSkipNextAdjustingOfTypingAttributes;
- (id)initWithTextView:(id)arg1;	// IMP=0x00000000007a64d0

@end

