//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/CKMessageEntryTextViewDelegate-Protocol.h>

@class CKComposition, CKMediaObject, CKMessageEntryRichTextView, NSArray, NSString, NSTextAttachment, NSURL, UIGestureRecognizer, UIViewController;

@protocol CKMessageEntryRichTextViewDelegate <CKMessageEntryTextViewDelegate>
- (void)messageEntryRichTextViewDidDismissCustomizationPicker:(CKMessageEntryRichTextView *)arg1;
- (void)messageEntryRichTextViewWillDismissCustomizationPicker:(CKMessageEntryRichTextView *)arg1;
- (void)messageEntryRichTextViewDidPresentCustomizationPicker:(CKMessageEntryRichTextView *)arg1;
- (_Bool)messageEntryRichTextViewShouldAllowLinkCustomization:(CKMessageEntryRichTextView *)arg1;
- (double)balloonMaxWidthForMessageEntryRichTextView:(CKMessageEntryRichTextView *)arg1;
- (void)messageEntryRichTextViewWillPresentCustomizationPicker:(CKMessageEntryRichTextView *)arg1;
- (void)messageEntryRichTextView:(CKMessageEntryRichTextView *)arg1 didUpdateSizeForTextAttachment:(NSTextAttachment *)arg2;
- (void)messageEntryRichTextView:(CKMessageEntryRichTextView *)arg1 didAddPluginTextAttachmentViewControllerToViewHierarchy:(UIViewController *)arg2;
- (void)messageEntryRichTextView:(CKMessageEntryRichTextView *)arg1 willAddPluginTextAttachmentViewControllerToViewHierarchy:(UIViewController *)arg2;
- (_Bool)messageEntryRichTextView:(CKMessageEntryRichTextView *)arg1 canPerformDictationAction:(NSString *)arg2;
- (_Bool)messageEntryRichTextViewSupportsInlineAdaptiveImageGlyphs:(CKMessageEntryRichTextView *)arg1;
- (void)messageEntryRichTextView:(CKMessageEntryRichTextView *)arg1 didTapGenerativeButtonForImageURL:(NSURL *)arg2;
- (void)messageEntryRichTextView:(CKMessageEntryRichTextView *)arg1 didPasteComposition:(CKComposition *)arg2;
- (void)messageEntryRichTextViewDidTapHandwritingKey:(CKMessageEntryRichTextView *)arg1;
- (void)messageEntryRichTextView:(CKMessageEntryRichTextView *)arg1 pastedURL:(NSString *)arg2;
- (void)messageEntryRichTextViewWasTapped:(CKMessageEntryRichTextView *)arg1 isLongPress:(_Bool)arg2;
- (_Bool)messageEntryRichTextView:(CKMessageEntryRichTextView *)arg1 shouldRecognizeGesture:(UIGestureRecognizer *)arg2;
- (void)messageEntryRichTextView:(CKMessageEntryRichTextView *)arg1 didTapMediaObject:(CKMediaObject *)arg2;
- (_Bool)messageEntryRichTextViewShouldResignFirstResponder:(CKMessageEntryRichTextView *)arg1;
- (_Bool)messageEntryRichTextView:(CKMessageEntryRichTextView *)arg1 shouldPasteMediaObjects:(NSArray *)arg2;
- (double)maxWidthForPreviewImagesInMessageEntryRichTextView:(CKMessageEntryRichTextView *)arg1;
@end
