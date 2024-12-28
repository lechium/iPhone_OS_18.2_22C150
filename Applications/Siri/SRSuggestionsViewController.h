//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class AFConversation, NSString, SiriUISuggestionsView;
@protocol SRSuggestionsViewControllerDelegate;

@interface SRSuggestionsViewController : UIViewController
{
    AFConversation *_conversation;	// 8 = 0x8
    id <SRSuggestionsViewControllerDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000209bf
@property(nonatomic) __weak id <SRSuggestionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_canShowWhileLocked;	// IMP=0x0010000000020988
- (_Bool)suggestionsViewIsInTextInputMode:(id)arg1;	// IMP=0x0010000000020904
- (double)contentWidthForSuggestionsView:(id)arg1;	// IMP=0x00100000000208ad
- (void)suggestionsView:(id)arg1 didHideVibrantView:(id)arg2;	// IMP=0x0010000000020819
- (double)statusViewHeightForSuggestionsView:(id)arg1;	// IMP=0x00100000000207c2
- (double)statusBarHeightForSuggestionsView:(id)arg1;	// IMP=0x0010000000020742
- (void)didShowSuggestionsForSuggestionsView:(id)arg1;	// IMP=0x00100000000206b8
- (void)conversation:(id)arg1 presentationStateDidChangeForItemsAtIndexPaths:(id)arg2;	// IMP=0x00100000000206b2
- (void)siriDidFinishActionsForConversationItemWithIdentifier:(id)arg1 inConversation:(id)arg2;	// IMP=0x00100000000206ac
- (void)conversation:(id)arg1 didRemoveItemsWithIdentifiers:(id)arg2 atIndexPaths:(id)arg3 parentItemIdentifiers:(id)arg4;	// IMP=0x00100000000206a6
- (void)conversation:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2;	// IMP=0x00100000000206a0
- (void)conversation:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;	// IMP=0x001000000002069a
- (void)keyboardHeightDidChange;	// IMP=0x0010000000020694
- (void)_createGuideController;	// IMP=0x00100000000205b0
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x001000000002052f
- (void)animateOut;	// IMP=0x0010000000020482
- (void)showRootGuide;	// IMP=0x001000000002047c
- (void)showGuideStart;	// IMP=0x0010000000020476
- (_Bool)isShowingGuide;	// IMP=0x001000000002042e
- (void)showGuideAnimated:(_Bool)arg1;	// IMP=0x0010000000020428
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000002036d
- (void)hideAcousticIDSpinner;	// IMP=0x0010000000020330
- (void)showAcousticIDSpinner;	// IMP=0x00100000000202f3
- (void)_showHeaderText:(id)arg1 subheaderText:(id)arg2 largeSubheaderText:(id)arg3;	// IMP=0x0010000000020191
- (void)showEmptyView;	// IMP=0x0010000000020138
- (_Bool)isShowingUserNudge;	// IMP=0x0010000000020068
- (void)showUserNudge;	// IMP=0x001000000001ffe2
- (void)showGreeting;	// IMP=0x001000000001ff43
- (void)showUnavailable;	// IMP=0x001000000001fe02
- (id)_nudgeHeaderText;	// IMP=0x001000000001fd31
- (id)_initialHeaderText;	// IMP=0x001000000001fc60
- (void)loadView;	// IMP=0x001000000001fb9b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SiriUISuggestionsView *view; // @dynamic view;

@end
