//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class CUIKCalendarModel, InboxSwitcherViewController, NSString, UINavigationController;
@protocol InboxViewControllerDelegate;

@interface InboxViewController : UIViewController
{
    CUIKCalendarModel *_model;	// 8 = 0x8
    unsigned long long _destination;	// 16 = 0x10
    UINavigationController *_embeddedNavigationController;	// 24 = 0x18
    InboxSwitcherViewController *_switcherViewController;	// 32 = 0x20
    _Bool _wantsDisplayReviewPrompt;	// 40 = 0x28
    CDUnknownBlockType _doneBlock;	// 48 = 0x30
    id <InboxViewControllerDelegate> _delegate;	// 56 = 0x38
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;	// IMP=0x002000000003752d
- (void).cxx_destruct;	// IMP=0x00200000000384c6
@property(nonatomic) __weak id <InboxViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType doneBlock; // @synthesize doneBlock=_doneBlock;
- (void)_dismissMessagesViewControllerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000003826f
- (void)_dismissMessagesViewController;	// IMP=0x001000000003825b
- (void)_pushDetailViewControllerForEvent:(id)arg1 animated:(_Bool)arg2 showComments:(_Bool)arg3 proposedTimeAttendee:(id)arg4;	// IMP=0x0010000000037ebf
- (void)showEvent:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000037ea7
@property(readonly, nonatomic) InboxSwitcherViewController *switcherViewController;
- (_Bool)canDismiss;	// IMP=0x0010000000037e8a
- (void)attemptDisplayReviewPrompt;	// IMP=0x0010000000037e79
- (_Bool)eventViewControllerShouldShowNextPreviousRecurrenceButtons;	// IMP=0x0010000000037e71
- (_Bool)eventViewControllerShouldHideInlineEditButton;	// IMP=0x0010000000037e69
- (void)eventViewController:(id)arg1 didCompleteWithAction:(long long)arg2;	// IMP=0x0010000000037e22
- (id)inboxSwitcherViewControllerRightBarButtonItem:(id)arg1;	// IMP=0x0010000000037dd1
- (void)inboxSwitcherViewController:(id)arg1 viewProposedTimeForAttendee:(id)arg2 onEvent:(id)arg3;	// IMP=0x0010000000037dae
- (void)inboxSwitcherViewController:(id)arg1 viewCommentsForEvent:(id)arg2;	// IMP=0x0010000000037d8b
- (void)inboxSwitcherViewController:(id)arg1 inspectEvent:(id)arg2;	// IMP=0x0010000000037d6b
- (void)_inspectEvent:(id)arg1 animated:(_Bool)arg2 showComments:(_Bool)arg3 proposedTimeAttendee:(id)arg4;	// IMP=0x0010000000037b0c
- (void)inboxSwitcherViewController:(id)arg1 shouldCloseAnimated:(_Bool)arg2;	// IMP=0x0010000000037afa
- (id)displayedDetailViewControllers;	// IMP=0x0010000000037916
- (_Bool)prefersForcedModalShowViewController;	// IMP=0x001000000003790e
- (void)viewWillLayoutSubviews;	// IMP=0x001000000003785f
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000000377bb
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000003767b
- (struct CGSize)preferredContentSize;	// IMP=0x001000000003765e
- (void)loadView;	// IMP=0x0010000000037535
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x00100000000374e4
- (id)initWithModel:(id)arg1 destination:(unsigned long long)arg2;	// IMP=0x00100000000373e7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

