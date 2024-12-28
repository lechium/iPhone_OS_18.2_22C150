//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKViewController.h"

@class CKConversation, CKTranscriptCollectionView, NSString;

__attribute__((visibility("hidden")))
@interface CKTranscriptPreviewController : CKViewController
{
    _Bool _isInitialLayout;	// 8 = 0x8
    CKConversation *_conversation;	// 16 = 0x10
    CKTranscriptCollectionView *_collectionView;	// 24 = 0x18
    double _transcriptWidth;	// 32 = 0x20
    struct UIEdgeInsets _layoutMargins;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000009b185
@property(nonatomic) _Bool isInitialLayout; // @synthesize isInitialLayout=_isInitialLayout;
@property(nonatomic) struct UIEdgeInsets layoutMargins; // @synthesize layoutMargins=_layoutMargins;
@property(nonatomic) double transcriptWidth; // @synthesize transcriptWidth=_transcriptWidth;
@property(retain, nonatomic) CKTranscriptCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
- (id)currentlyFocusedChatItemForTapbackInTranscriptCollectionViewController:(id)arg1;	// IMP=0x000000000009b0b1
- (long long)transcriptCollectionViewControllerWantsCurrentDesiredIntent:(id)arg1;	// IMP=0x000000000009b0a6
- (void)transcriptCollectionViewControllerDidUpdateTranscriptChatItems:(id)arg1;	// IMP=0x000000000009b0a0
- (void)transcriptCollectionViewControllerWillUpdateTranscriptChatItems:(id)arg1;	// IMP=0x000000000009b09a
- (void)viewDidLayoutSubviewsForTranscriptCollectionViewController:(id)arg1;	// IMP=0x000000000009b094
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 didRequestReaderViewControllerForChatItem:(id)arg3;	// IMP=0x000000000009b08e
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 showInlineReplyForItemWithIndexPath:(id)arg3 withReplyTransitionProperties:(id)arg4;	// IMP=0x000000000009b088
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 selectedItemAtIndexPath:(id)arg3;	// IMP=0x000000000009b082
- (_Bool)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestCommitSticker:(id)arg2 forPlugin:(id)arg3 allowAllCommits:(_Bool)arg4 error:(id *)arg5;	// IMP=0x000000000009b07a
- (void)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestStartEditingPayload:(id)arg2 forPlugin:(id)arg3 allowAllCommits:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000009b074
- (_Bool)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestCommitPayload:(id)arg2 forPlugin:(id)arg3 allowAllCommits:(_Bool)arg4 error:(id *)arg5;	// IMP=0x000000000009b06c
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 didRequestPresentationStyle:(unsigned long long)arg3 forChatItem:(id)arg4 allowAllStyles:(_Bool)arg5;	// IMP=0x000000000009b066
- (void)transcriptCollectionViewController:(id)arg1 didEndImpactEffectAnimationWithSendAnimationContext:(id)arg2;	// IMP=0x000000000009b060
- (void)transcriptCollectionViewController:(id)arg1 willBeginImpactEffectAnimationWithSendAnimationContext:(id)arg2;	// IMP=0x000000000009b05a
- (void)transcriptCollectionViewControllerWillBeginFullscreenEffectAnimationForOutgoingMessage:(id)arg1;	// IMP=0x000000000009b054
- (id)transcriptCollectionViewControllerOuterEffectPresentingView:(id)arg1;	// IMP=0x000000000009b001
- (id)transcriptCollectionViewControllerAdditionalFullscreenEffectViews:(id)arg1;	// IMP=0x000000000009aff9
- (_Bool)transcriptCollectionViewController:(id)arg1 shouldCleanupFullscreenEffectUI:(id)arg2;	// IMP=0x000000000009aff1
- (_Bool)transcriptCollectionViewControllerShouldLayoutFullscreenEffects:(id)arg1;	// IMP=0x000000000009afe9
- (_Bool)transcriptCollectionViewController:(id)arg1 shouldSetupFullscreenEffectUI:(id)arg2;	// IMP=0x000000000009afe1
- (_Bool)transcriptCollectionViewControllerPlaybackForOutgoingEffectsIsAllowed:(id)arg1;	// IMP=0x000000000009afd9
- (void)transcriptCollectionViewController:(id)arg1 requestRecoverJunkConversation:(id)arg2;	// IMP=0x000000000009afd3
- (void)transcriptCollectionViewController:(id)arg1 requestDeleteJunkConversation:(id)arg2;	// IMP=0x000000000009afcd
- (void)transcriptCollectionViewController:(id)arg1 willDeleteChatItems:(id)arg2;	// IMP=0x000000000009afc7
- (void)transcriptCollectionViewController:(id)arg1 viewedCommSafetyAssociatedItemsWithIndexPath:(id)arg2;	// IMP=0x000000000009afc1
- (void)transcriptCollectionViewController:(id)arg1 viewedCommSafetyItemWithIndexPath:(id)arg2;	// IMP=0x000000000009afbb
- (void)transcriptCollectionViewController:(id)arg1 showMessageSomeoneForItemWithIndexPath:(id)arg2;	// IMP=0x000000000009afb5
- (double)transcriptCollectionViewController:(id)arg1 targetAlphaForChatItem:(id)arg2;	// IMP=0x000000000009af61
- (id)traitCollectionForTranscriptCollectionViewController:(id)arg1;	// IMP=0x000000000009af4f
- (void)transcriptCollectionViewControllerDidChangeAssociatedChatItem:(id)arg1 chatItemDiff:(id)arg2;	// IMP=0x000000000009af49
- (void)transcriptCollectionViewControllerDidInsertAssociatedChatItem:(id)arg1;	// IMP=0x000000000009af43
- (void)transcriptCollectionViewController:(id)arg1 shouldScrollToHighlightedMessage:(id)arg2;	// IMP=0x000000000009af3d
- (_Bool)transcriptCollectionViewControllerShouldScrollToBottomForLocalSentMessage:(id)arg1;	// IMP=0x000000000009af35
- (_Bool)transcriptCollectionViewControllerShouldShouldScrollToTopForStatusBarTap:(id)arg1;	// IMP=0x000000000009af2d
- (void)transcriptCollectionViewControllerRestingStateDidChange:(id)arg1;	// IMP=0x000000000009af27
- (void)transcriptCollectionViewController:(id)arg1 collectionViewContentSizeDidChange:(struct CGSize)arg2;	// IMP=0x000000000009ae47
- (_Bool)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 shouldSelectChatItem:(id)arg3;	// IMP=0x000000000009ae3f
- (_Bool)transcriptCollectionViewControllerShouldPlayAudio:(id)arg1;	// IMP=0x000000000009ae37
- (void)transcriptCollectionViewControllerWillDisplayLastBalloon:(id)arg1;	// IMP=0x000000000009ae31
- (void)transcriptCollectionViewControllerDisplaySMSSpamReporting:(id)arg1;	// IMP=0x000000000009ae2b
- (void)transcriptCollectionViewControllerReportSpamButtonTapped:(id)arg1;	// IMP=0x000000000009ae25
- (void)transcriptCollectionViewControllerBlockContactButtonTapped:(id)arg1;	// IMP=0x000000000009ae1f
- (void)transcriptCollectionViewControllerWillScrollToBottom:(id)arg1;	// IMP=0x000000000009ae19
- (void)transcriptCollectionViewControllerPerformBatchUpdateCompleted:(id)arg1;	// IMP=0x000000000009ae13
- (void)transcriptCollectionViewControllerDidSetChatItems:(id)arg1;	// IMP=0x000000000009ae0d
- (void)transcriptCollectionViewControllerPlayingAudioDidChange:(id)arg1;	// IMP=0x000000000009ae07
- (void)transcriptCollectionViewControllerDidInset:(id)arg1;	// IMP=0x000000000009ae01
- (void)transcriptCollectionViewControllerWillInset:(id)arg1 targetContentInset:(inout struct UIEdgeInsets *)arg2;	// IMP=0x000000000009adfb
- (void)transcriptCollectionViewController:(id)arg1 balloonViewTitleTappedForItemWithIndexPath:(id)arg2;	// IMP=0x000000000009adf5
- (void)transcriptCollectionViewController:(id)arg1 didTapPluginStatusButtonForChatItem:(id)arg2;	// IMP=0x000000000009adef
- (void)transcriptCollectionViewController:(id)arg1 didTapAttributionButtonForChatItem:(id)arg2 parentIndexPath:(id)arg3 sender:(id)arg4;	// IMP=0x000000000009ade9
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 doubleTappedItemAtIndexPath:(id)arg3;	// IMP=0x000000000009ade3
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 longPressedForItemWithIndexPath:(id)arg3;	// IMP=0x000000000009addd
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 tappedForChatItem:(id)arg3;	// IMP=0x000000000009add7
- (void)transcriptCollectionViewController:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;	// IMP=0x000000000009add1
- (void)transcriptCollectionViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000009adcb
- (void)transcriptCollectionViewControllerNeedsChatItemLayoutInvalidation:(id)arg1;	// IMP=0x000000000009adc5
- (id)textInputContextIdentifier;	// IMP=0x000000000009ad50
- (void)viewDidLayoutSubviews;	// IMP=0x000000000009a9b8
- (void)loadView;	// IMP=0x000000000009a879
- (id)initWithConversation:(id)arg1 transcriptWidth:(double)arg2 layoutMargins:(struct UIEdgeInsets)arg3;	// IMP=0x000000000009a7b7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
