//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKMediaObject, CKMessageEntryView, CKSendMenuPresentation, IMPluginPayload, NSArray, UIInputContextHistory, UITextView, UIView, UIViewController, UIWindow;

@protocol CKMessageEntryViewDelegate <NSObject>
- (void)messageEntryViewTextFormattingAnimationsOptionsPresentationInProgress:(_Bool)arg1;
- (void)messageEntryViewWantsGenerativePlaygroundPluginPresented:(CKMessageEntryView *)arg1 presentationStyle:(unsigned long long)arg2;
- (void)messageEntryViewSendLaterPluginInfoUpdated:(CKMessageEntryView *)arg1;
- (void)messageEntryViewWantsSendLaterPickerPresented:(CKMessageEntryView *)arg1;
- (CKSendMenuPresentation *)messageEntryViewActiveSendMenuPresentation:(CKMessageEntryView *)arg1;
- (struct CGSize)messageEntryViewMaxShelfPluginViewSize:(CKMessageEntryView *)arg1;
- (double)messageEntryViewMaxHeight:(CKMessageEntryView *)arg1;
- (void)messageEntryViewRaiseGestureAutoSend:(CKMessageEntryView *)arg1;
- (void)messageEntryViewPlusButtonHit:(CKMessageEntryView *)arg1;
- (void)messageEntryViewSendButtonHitWhileDisabled:(CKMessageEntryView *)arg1;
- (void)messageEntryViewSendButtonHit:(CKMessageEntryView *)arg1;
- (void)messageEntryView:(CKMessageEntryView *)arg1 didMoveToWindow:(UIWindow *)arg2;
- (void)messageEntryViewSafeAreaInsetsDidChange:(CKMessageEntryView *)arg1;
- (void)messageEntryView:(CKMessageEntryView *)arg1 didInsertPluginPayload:(IMPluginPayload *)arg2;
- (void)messageEntryView:(CKMessageEntryView *)arg1 didTapMediaObject:(CKMediaObject *)arg2;
- (_Bool)messageEntryView:(CKMessageEntryView *)arg1 shouldInsertMediaObjects:(NSArray *)arg2;
- (void)messageEntryViewDidChangePencilMode:(CKMessageEntryView *)arg1;
- (void)messageEntryViewDidEndEditing:(CKMessageEntryView *)arg1;
- (void)messageEntryViewDidBeginEditingNotAlreadyActive:(CKMessageEntryView *)arg1;
- (_Bool)messageEntryViewShouldBeginEditing:(CKMessageEntryView *)arg1;
- (UIInputContextHistory *)inputContextHistoryForMessageEntryView:(CKMessageEntryView *)arg1;
- (void)messageEntryViewRecordingDidChange:(CKMessageEntryView *)arg1;
- (UIViewController *)parentViewControllerForPluginViewControllerInMessageEntryView:(CKMessageEntryView *)arg1;
- (void)messageEntryViewDidChange:(CKMessageEntryView *)arg1 isTextChange:(_Bool)arg2 isShelfChange:(_Bool)arg3;

@optional
- (void)messageEntryViewDidDismissCustomizationPicker:(CKMessageEntryView *)arg1;
- (void)messageEntryViewWillDismissCustomizationPicker:(CKMessageEntryView *)arg1;
- (void)messageEntryViewDidPresentCustomizationPicker:(CKMessageEntryView *)arg1;
- (void)messageEntryViewWillPresentCustomizationPicker:(CKMessageEntryView *)arg1;
- (double)balloonMaxWidthForMessageEntryView:(CKMessageEntryView *)arg1;
- (void)messageEntryViewPopulateNextSentMessage:(CKMessageEntryView *)arg1;
- (void)messageEntryViewPopulatePreviousSentMessage:(CKMessageEntryView *)arg1;
- (void)sendCurrentLocationMessage:(CKMessageEntryView *)arg1;
- (UITextView *)textViewOnscreenWithEntryView;
- (void)messageEntryViewDidTakeFocus:(CKMessageEntryView *)arg1;
- (struct CGRect)messageEntryView:(CKMessageEntryView *)arg1 frameInThrowViewCoordinatesForView:(UIView *)arg2;
- (void)enableRotationAfterRecording;
- (void)disableRotationWhileRecordingAudioMessage;
- (void)messageEntryViewDidBeginEditing:(CKMessageEntryView *)arg1;
- (void)messageEntryViewWantsEffectPicker:(CKMessageEntryView *)arg1;
- (void)messageEntryViewSwipeDownGestureRecognized:(CKMessageEntryView *)arg1;
- (void)messageEntryView:(CKMessageEntryView *)arg1 shouldShowAppStrip:(_Bool)arg2 animated:(_Bool)arg3;
- (_Bool)shouldMessageEntryViewReportBrowserButtonHitToInputDelegate:(CKMessageEntryView *)arg1;
- (_Bool)messageEntryViewWidth:(double *)arg1 andOffset:(double *)arg2;
@end

