//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC15RemindersUICore37TTRIReminderCellHashtagViewController : NSObject
{
    MISSING_TYPE *hashtagsAttributedText;	// 8 = 0x8
    MISSING_TYPE *uncommittedHashtagsFont;	// 16 = 0x10
    MISSING_TYPE *uncommittedHashtagsBoldFont;	// 24 = 0x18
    MISSING_TYPE *committedHashtagsFont;	// 32 = 0x20
    MISSING_TYPE *$__lazy_storage_$_committedHashtagsBoldFont;	// 40 = 0x28
    MISSING_TYPE *uncommittedTagsColor;	// 48 = 0x30
    MISSING_TYPE *presenter;	// 56 = 0x38
    MISSING_TYPE *tokenInteraction;	// 72 = 0x48
    MISSING_TYPE *lastTextChangeDetail;	// 80 = 0x50
    MISSING_TYPE *descriptionAndTagsView;	// 120 = 0x78
    MISSING_TYPE *userPressedReturn;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000000361b90
- (id)init;	// IMP=0x0000000000361b30
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;	// IMP=0x00000000003628c0
- (void)textViewDidChangeSelection:(id)arg1;	// IMP=0x0000000000362580
- (void)textViewDidChange:(id)arg1;	// IMP=0x0000000000362350
- (void)textViewDidEndEditing:(id)arg1;	// IMP=0x00000000003620d0
- (void)textViewDidBeginEditing:(id)arg1;	// IMP=0x0000000000361f50
- (_Bool)textViewShouldBeginEditing:(id)arg1;	// IMP=0x0000000000361d70
- (id)textView:(id)arg1 editMenuForTextInRange:(struct _NSRange)arg2 suggestedActions:(id)arg3;	// IMP=0x0000000000362ee0

@end
