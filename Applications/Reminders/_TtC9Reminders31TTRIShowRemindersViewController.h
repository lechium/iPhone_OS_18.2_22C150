//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RemindersUICore/TTRIContentUnavailableHostableViewController.h>

@class MISSING_TYPE, NSArray;

@interface _TtC9Reminders31TTRIShowRemindersViewController : TTRIContentUnavailableHostableViewController
{
    MISSING_TYPE *feedbackGenerator;	// 8 = 0x8
    MISSING_TYPE *contentLayout;	// 16 = 0x10
    MISSING_TYPE *$__lazy_storage_$_toolbar;	// 24 = 0x18
    MISSING_TYPE *toolbarBottomConstraint;	// 32 = 0x20
    MISSING_TYPE *keyboardAppearState;	// 40 = 0x28
    MISSING_TYPE *contentViewController;	// 48 = 0x30
    MISSING_TYPE *presenter;	// 64 = 0x40
    MISSING_TYPE *navigationItemOptions;	// 80 = 0x50
    MISSING_TYPE *listInfo;	// 0 = 0x0
    MISSING_TYPE *emptyListMessaging;	// 0 = 0x0
    MISSING_TYPE *internalDeferredItemUpdates;	// 0 = 0x0
    MISSING_TYPE *toolbarHeight;	// 0 = 0x0
    MISSING_TYPE *keyboardHeight;	// 0 = 0x0
    MISSING_TYPE *pencilInputAreaHeight;	// 0 = 0x0
    MISSING_TYPE *toolbarController;	// 0 = 0x0
    MISSING_TYPE *lastSetLargeTitleColor;	// 0 = 0x0
    MISSING_TYPE *listMessagingView;	// 0 = 0x0
    MISSING_TYPE *currentTextInputModeObserver;	// 0 = 0x0
    MISSING_TYPE *currentTextInputModeCancellable;	// 0 = 0x0
    MISSING_TYPE *contentPreferredChromelessBarStatesObserver;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_autoCategorizationController;	// 0 = 0x0
    MISSING_TYPE *swHighlightToShowInNavBar;	// 0 = 0x0
    MISSING_TYPE *cellTitleItemGainingFocus_forKeyboardAvoidance;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00200000002a34a0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00100000002a3440
- (_Bool)accessibilityPerformMagicTap;	// IMP=0x00100000002a33f0
- (void)keyboardWillChangeFrameNotificationWithNotification:(id)arg1;	// IMP=0x00100000002a3350
- (void)keyboardDidHideNotificationWithNotification:(id)arg1;	// IMP=0x00100000002a3140
- (void)keyboardWillHideNotificationWithNotification:(id)arg1;	// IMP=0x00100000002a3090
- (void)keyboardDidShowNotificationWithNotification:(id)arg1;	// IMP=0x00100000002a3080
- (void)keyboardWillShowNotificationWithNotification:(id)arg1;	// IMP=0x00100000002a2ff0
- (void)willAddDeactivationReasonWithNotification:(id)arg1;	// IMP=0x00100000002a2ca0
- (void)newSectionWithSelectionAction:(id)arg1;	// IMP=0x00100000002a16f0
- (void)newSectionAction:(id)arg1;	// IMP=0x00100000002a1590
- (void)toggleShowCompletedAction:(id)arg1;	// IMP=0x00100000002a14b0
- (void)printListAction:(id)arg1;	// IMP=0x00100000002a1410
- (void)postponeAllOverdueToTodayAction:(id)arg1;	// IMP=0x00100000002a1360
- (void)setReminderDueDateToNoneAction:(id)arg1;	// IMP=0x00100000002a12c0
- (void)setReminderDueDateToNextWeekAction:(id)arg1;	// IMP=0x00100000002a12b0
- (void)setReminderDueDateToWeekendAction:(id)arg1;	// IMP=0x00100000002a12a0
- (void)setReminderDueDateToTomorrowAction:(id)arg1;	// IMP=0x00100000002a1290
- (void)setReminderDueDateToTodayAction:(id)arg1;	// IMP=0x00100000002a1190
- (void)addStructuredHashtagForSelectedReminderAction:(id)arg1;	// IMP=0x00100000002a1050
- (void)toggleFlaggedForSelectedReminderAction:(id)arg1;	// IMP=0x00100000002a1030
- (void)outdentSelectedReminderAction:(id)arg1;	// IMP=0x00100000002a0f10
- (void)indentSelectedReminderAction:(id)arg1;	// IMP=0x00100000002a0d90
- (void)toggleReminderCompletionStateAction:(id)arg1;	// IMP=0x00100000002a0c10
- (void)showReminderInfoAction:(id)arg1;	// IMP=0x00100000002a09f0
- (void)collapseAllItemsAction:(id)arg1;	// IMP=0x00100000002a0680
- (void)expandAllItemsAction:(id)arg1;	// IMP=0x00100000002a0580
- (void)startEditingReminderAction:(id)arg1;	// IMP=0x00100000002a0560
- (void)newReminderAction:(id)arg1;	// IMP=0x00100000002a0450
- (void)deleteReminderAction:(id)arg1;	// IMP=0x00100000002a0250
- (void)expandReminderSubtasksAlternativeShortcutAction:(id)arg1;	// IMP=0x00100000002a0230
- (void)collapseReminderSubtasksAlternativeShortcutAction:(id)arg1;	// IMP=0x00100000002a0210
- (void)expandReminderSubtasksWithArrowKeyAction:(id)arg1;	// IMP=0x00100000002a01f0
- (void)collapseReminderSubtasksWithArrowKeyAction:(id)arg1;	// IMP=0x00100000002a0040
- (void)endEditingReminderAction:(id)arg1;	// IMP=0x001000000029fe10
- (void)ttr_updateContentUnavailableConfigurationUsingState:(id)arg1;	// IMP=0x001000000029fdc0
- (void)validateCommand:(id)arg1;	// IMP=0x001000000029fd70
- (void)paste:(id)arg1;	// IMP=0x001000000029f420
- (void)copy:(id)arg1;	// IMP=0x001000000029f300
- (void)cut:(id)arg1;	// IMP=0x001000000029f1e0
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x001000000029f050
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x001000000029d1d0
- (void)updateUserActivityState:(id)arg1;	// IMP=0x001000000029d010
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x001000000029cda0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x001000000029cd70
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000029c920
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000029c250
- (void)viewDidLayoutSubviews;	// IMP=0x001000000029bf10
- (void)viewWillLayoutSubviews;	// IMP=0x001000000029bb60
- (void)viewDidLoad;	// IMP=0x001000000029b450
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000299490
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x00100000002a4520
- (void)presentationControllerDidAttemptToDismiss:(id)arg1;	// IMP=0x00100000002a43b0
- (_Bool)presentationControllerShouldDismiss:(id)arg1;	// IMP=0x00100000002a4220

@end

