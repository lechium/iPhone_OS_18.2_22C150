//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKAssociatedStickerChatItem, CKBalloonView, CKChatItem, CKFullScreenBalloonViewController, CKMessagePartChatItem, CKTranscriptCollectionView, IMSticker, IMTapback, NSArray, NSDictionary, NSNumber, NSString, UIView;
@protocol CKGradientReferenceView;

@protocol CKFullScreenBalloonViewControllerDelegate <NSObject>
- (NSArray *)contextualChatItemsForFullScreenBalloonViewController:(CKFullScreenBalloonViewController *)arg1;
- (_Bool)shouldShowTapbackPickerForFullScreenBalloonViewController:(CKFullScreenBalloonViewController *)arg1;
- (_Bool)shouldShowTapbackAttributionForFullScreenBalloonViewController:(CKFullScreenBalloonViewController *)arg1;
- (struct CGRect)fullScreenBalloonViewController:(CKFullScreenBalloonViewController *)arg1 balloonFrameForChatItem:(CKChatItem *)arg2;

@optional
@property(retain, nonatomic) CKTranscriptCollectionView *collectionView;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"CKTranscriptCollectionView",?,&,N

- (void)hideAssociatedCellsForChatItem:(CKChatItem *)arg1;
- (struct CGPoint)fullScreenBalloonViewController:(CKFullScreenBalloonViewController *)arg1 stickerCenterForChatItem:(CKAssociatedStickerChatItem *)arg2;
- (struct CGRect)fullScreenBalloonViewController:(CKFullScreenBalloonViewController *)arg1 stickerBoundsForChatItem:(CKAssociatedStickerChatItem *)arg2;
- (void)associatedStickerCells:(id *)arg1 stickerChatItems:(id *)arg2 chatItemGUID:(NSString *)arg3;
- (double)_expectedAppCardAndEntryViewHeight;
- (NSString *)textInputContextIdentifierForFullScreenBalloonViewController:(CKFullScreenBalloonViewController *)arg1;
- (void)fullScreenBalloonViewController:(CKFullScreenBalloonViewController *)arg1 updateTranscriptBalloonViewAppearanceAsHidden:(_Bool)arg2;
- (void)fullScreenBalloonViewController:(CKFullScreenBalloonViewController *)arg1 updateTapbackPileAppearanceAsHidden:(_Bool)arg2;
- (UIView *)associatedTapbackPileViewForFullScreenBalloonViewController:(CKFullScreenBalloonViewController *)arg1;
- (NSArray *)fullScreenBalloonViewControllerSmartEmojiResponses:(CKFullScreenBalloonViewController *)arg1;
- (void)fullScreenBalloonViewControllerWillReturnToSuggestionsPicker:(CKFullScreenBalloonViewController *)arg1;
- (void)fullScreenBalloonViewControllerWillTransitionToKeyboardInput:(CKFullScreenBalloonViewController *)arg1;
- (UIView *)fullScreenBalloonViewController:(CKFullScreenBalloonViewController *)arg1 duplicatedViewForChatItem:(CKMessagePartChatItem *)arg2;
- (_Bool)fullScreenBalloonViewControllerShouldEnableStickerTapbacks:(CKFullScreenBalloonViewController *)arg1;
- (void)fullScreenBalloonViewController:(CKFullScreenBalloonViewController *)arg1 didTapToSaveSticker:(IMSticker *)arg2;
- (void)fullScreenBalloonViewControllerRequestedAppCardDismiss:(CKFullScreenBalloonViewController *)arg1;
- (void)fullScreenBalloonViewController:(CKFullScreenBalloonViewController *)arg1 requestedPresentPlugin:(NSDictionary *)arg2 withPayloadID:(NSString *)arg3;
- (_Bool)fullScreenBalloonViewControllerPickerViewUsesBottomTail:(CKFullScreenBalloonViewController *)arg1;
- (struct CGRect)tapbackButtonFrameForFullScreenBalloonViewController:(CKFullScreenBalloonViewController *)arg1;
- (UIView<CKGradientReferenceView> *)fullScreenBalloonViewControllerGradientReferenceView:(CKFullScreenBalloonViewController *)arg1;
- (void)fullScreenBalloonViewController:(CKFullScreenBalloonViewController *)arg1 didDeselectTapback:(IMTapback *)arg2;
- (void)fullScreenBalloonViewController:(CKFullScreenBalloonViewController *)arg1 didSelectTapback:(IMTapback *)arg2;
- (_Bool)shouldDismissKeyboardWhenShowingFullScreenAcknowledgmentPickerForBalloonChatItem:(CKChatItem *)arg1;
- (void)fullScreenBalloonViewControllerRequestDismissKeyboardSnapshot:(CKFullScreenBalloonViewController *)arg1;
- (void)fullScreenBalloonViewControllerRequestShowKeyboardSnapshot:(CKFullScreenBalloonViewController *)arg1;
- (void)fullScreenBalloonViewControllerMessageHighlightButtonDidFinishAnimating:(CKFullScreenBalloonViewController *)arg1;
- (void)fullScreenBalloonViewController:(CKFullScreenBalloonViewController *)arg1 sendMessageHighlight:(_Bool)arg2 forChatItem:(CKMessagePartChatItem *)arg3;
- (_Bool)fullScreenBalloonViewControllerShouldShowHightlightButton:(CKFullScreenBalloonViewController *)arg1 forChatItem:(CKMessagePartChatItem *)arg2;
- (struct NSDirectionalEdgeInsets)systemMinimumLayoutMarginsForFullScreenBalloonViewController:(CKFullScreenBalloonViewController *)arg1;
- (struct CGRect)fullScreenBalloonViewControllerSafeAreaLayoutFrameIgnoreEntryView:(CKFullScreenBalloonViewController *)arg1;
- (struct CGRect)fullScreenBalloonViewControllerSafeAreaLayoutFrame:(CKFullScreenBalloonViewController *)arg1;
- (BOOL)fullScreenBalloonViewControllerAnchorVertialOrientation:(CKFullScreenBalloonViewController *)arg1 withBalloonFrame:(struct CGRect)arg2;
- (_Bool)fullScreenBalloonViewControllerShouldShowReplyButton:(CKFullScreenBalloonViewController *)arg1;
- (void)fullScreenBalloonViewController:(CKFullScreenBalloonViewController *)arg1 replyButtonPressedForChatItem:(CKChatItem *)arg2;
- (void)fullScreenBalloonViewController:(CKFullScreenBalloonViewController *)arg1 didRequestSaveSticker:(IMSticker *)arg2;
- (void)fullScreenBalloonViewController:(CKFullScreenBalloonViewController *)arg1 deleteStickerWithTransferGUID:(NSString *)arg2;
- (void)fullScreenBalloonViewController:(CKFullScreenBalloonViewController *)arg1 stickerPackTappedWithAdamID:(NSNumber *)arg2;
- (void)fullScreenBalloonViewController:(CKFullScreenBalloonViewController *)arg1 verticallyScrollTranscriptByAmount:(double)arg2 animated:(_Bool)arg3 duration:(double)arg4 completion:(void (^)(void))arg5;
- (void)fullScreenBalloonViewControllerHandleDismissTap:(CKFullScreenBalloonViewController *)arg1;
- (void)fullScreenBalloonViewControllerDidDisappear:(CKFullScreenBalloonViewController *)arg1;
- (void)fullScreenBalloonViewControllerDidCompleteInitialAnimation:(CKFullScreenBalloonViewController *)arg1;
- (void)fullScreenBalloonViewController:(CKFullScreenBalloonViewController *)arg1 willDisappearWithSendAnimation:(_Bool)arg2 duration:(double)arg3;
- (void)fullScreenBalloonViewController:(CKFullScreenBalloonViewController *)arg1 didAppearAnimated:(_Bool)arg2;
- (void)fullScreenBalloonViewController:(CKFullScreenBalloonViewController *)arg1 willAppearAnimated:(_Bool)arg2;
- (CKBalloonView *)fullScreenBalloonViewController:(CKFullScreenBalloonViewController *)arg1 balloonViewForChatItem:(CKChatItem *)arg2;
@end
