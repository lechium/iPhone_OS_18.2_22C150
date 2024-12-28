//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITextView.h>

@class NSArray, NSDictionary, PKSelectionInteraction, PKTiledView, UIView;

@interface UITextView (IC)
- (void)ic_scrollRectToVisible:(struct CGRect)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0030000000180cb9
- (void)ic_scrollRangeToVisible:(struct _NSRange)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0030000000180c35
@property(readonly, nonatomic) UIView *containerViewForAttachments;
@property(readonly, nonatomic) _Bool ic_shouldEnableBlockQuoteForAttachmentsOnlySelection;
@property(readonly, nonatomic) struct CGPoint ic_textContainerOrigin;
@property(readonly, nonatomic) PKSelectionInteraction *ic_pkSelectionInteraction;
@property(readonly, nonatomic) PKTiledView *ic_pkTiledView;
- (id)ic_imageForRange:(struct _NSRange)arg1;	// IMP=0x0030000000180235
- (struct CGRect)ic_rectForRange:(struct _NSRange)arg1;	// IMP=0x003000000017fe65
- (struct _NSRange)ic_rangeFromRect:(struct CGRect)arg1;	// IMP=0x003000000017fd31
@property(readonly, nonatomic) struct _NSRange ic_visibleRange;
- (struct _NSRange)ic_characterRangeFromTextPosition:(id)arg1;	// IMP=0x003000000017fb67
- (id)ic_textRangeFromCharacterRange:(struct _NSRange)arg1;	// IMP=0x003000000017faa6
- (struct _NSRange)ic_characterRangeFromTextRange:(id)arg1;	// IMP=0x003000000017f9d2
@property(readonly, copy, nonatomic) NSDictionary *ic_markedTextAttributes;
@property(readonly, nonatomic) struct _NSRange ic_markedTextRange;
@property(retain, nonatomic) NSArray *ic_selectedRanges;
- (void)ic_scrollRangeToTop:(struct _NSRange)arg1;	// IMP=0x003000000017f706
- (void)ic_scrollRangeToVisible:(struct _NSRange)arg1 consideringInsets:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x003000000017f62c
@end
