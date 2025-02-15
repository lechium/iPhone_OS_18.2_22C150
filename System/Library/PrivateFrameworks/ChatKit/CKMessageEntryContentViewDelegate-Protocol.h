//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/UIScrollViewDelegate-Protocol.h>

@class CKMediaObject, CKMessageEntryContentView, IMPluginPayload, NSArray, NSString, NSURL, UIViewController;

@protocol CKMessageEntryContentViewDelegate <UIScrollViewDelegate>
- (void)messageEntryContentViewDidDismissCustomizationPicker:(CKMessageEntryContentView *)arg1;
- (void)messageEntryContentViewWillDismissCustomizationPicker:(CKMessageEntryContentView *)arg1;
- (void)messageEntryContentViewDidPresentCustomizationPicker:(CKMessageEntryContentView *)arg1;
- (void)messageEntryContentViewWillPresentCustomizationPicker:(CKMessageEntryContentView *)arg1;
- (_Bool)messageEntryContentViewShouldAllowLinkCustomization:(CKMessageEntryContentView *)arg1;
- (double)balloonMaxWidthForMessageEntryRichTextView:(CKMessageEntryContentView *)arg1;
- (void)messageEntryContentViewSendLaterPluginInfoUpdated:(CKMessageEntryContentView *)arg1;
- (void)messageEntryContentViewWantsSendLaterPickerPresented:(CKMessageEntryContentView *)arg1;
- (void)messageEntryContentView:(CKMessageEntryContentView *)arg1 didAddPluginEntryViewControllerToViewHierarchy:(UIViewController *)arg2;
- (void)messageEntryContentView:(CKMessageEntryContentView *)arg1 willAddPluginEntryViewControllerToViewHierarchy:(UIViewController *)arg2;
- (_Bool)messageEntryContentView:(CKMessageEntryContentView *)arg1 canPerformDictationAction:(NSString *)arg2;
- (void)messageEntryContentViewTextFormattingAnimationsOptionsPresentationInProgress:(_Bool)arg1;
- (_Bool)messageEntryContentViewShouldResignFirstResponder:(CKMessageEntryContentView *)arg1;
- (_Bool)messageEntryContentView:(CKMessageEntryContentView *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
- (void)messageEntryContentView:(CKMessageEntryContentView *)arg1 didStagePluginPayload:(IMPluginPayload *)arg2;
- (void)messageEntryContentView:(CKMessageEntryContentView *)arg1 didRequestGenerativeContentForImageURL:(NSURL *)arg2;
- (void)messageEntryContentViewCancelWasTapped:(CKMessageEntryContentView *)arg1 shelfPluginPayload:(IMPluginPayload *)arg2;
- (void)messageEntryContentViewDidTapHandwritingKey:(CKMessageEntryContentView *)arg1;
- (void)messageEntryContentView:(CKMessageEntryContentView *)arg1 didPasteURL:(NSString *)arg2;
- (void)messageEntryContentViewWasTapped:(CKMessageEntryContentView *)arg1 isLongPress:(_Bool)arg2;
- (void)messageEntryContentView:(CKMessageEntryContentView *)arg1 didTapMediaObject:(CKMediaObject *)arg2;
- (struct CGSize)messageEntryContentViewMaxShelfPluginViewSize:(CKMessageEntryContentView *)arg1;
- (_Bool)messageEntryContentView:(CKMessageEntryContentView *)arg1 shouldInsertMediaObjects:(NSArray *)arg2;
- (void)messageEntryContentViewDidChangePencilMode:(CKMessageEntryContentView *)arg1;
- (void)messageEntryContentViewDidEndEditing:(CKMessageEntryContentView *)arg1;
- (void)messageEntryContentViewDidBeginEditing:(CKMessageEntryContentView *)arg1 wasAlreadyActive:(_Bool)arg2;
- (_Bool)messageEntryContentViewShouldBeginEditing:(CKMessageEntryContentView *)arg1;
- (void)messageEntryContentViewShelfDidChange:(CKMessageEntryContentView *)arg1;
- (void)messageEntryContentViewDidChange:(CKMessageEntryContentView *)arg1 isTextChange:(_Bool)arg2 isShelfChange:(_Bool)arg3;
- (void)messageEntryContentViewDidReturn:(CKMessageEntryContentView *)arg1;
@end

