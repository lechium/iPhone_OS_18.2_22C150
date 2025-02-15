//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EKUIFocusBannerView, NSString;

@interface CompactWidthWeekViewController
{
    long long _currentlyDisplayedMonth;	// 16 = 0x10
    long long _currentlyDisplayedMonthInOverlayCalendar;	// 24 = 0x18
    EKUIFocusBannerView *_focusBanner;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000159564
- (void)showReminderDetail:(id)arg1;	// IMP=0x0010000000159484
- (_Bool)shouldShowCompactLayout;	// IMP=0x001000000015947c
- (id)interactionControllerForPresentation:(id)arg1;	// IMP=0x0010000000159428
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x00100000001593d4
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x0010000000159380
- (void)focusBannerViewToggled:(id)arg1;	// IMP=0x0010000000159310
- (void)editorDidSaveEvent:(id)arg1;	// IMP=0x0010000000159291
- (_Bool)eventViewControllerShouldHideInlineEditButton;	// IMP=0x0010000000159289
- (void)_focusConfigurationChanged;	// IMP=0x001000000015911b
- (_Bool)_focusBannerVisible;	// IMP=0x00100000001590d3
- (void)overlayCalendarDidChange;	// IMP=0x0010000000158f7d
- (void)updateBannerDateStrings:(id)arg1;	// IMP=0x0010000000158c67
- (double)headerVerticalOffset;	// IMP=0x0010000000158c18
- (void)viewDidLayoutSubviews;	// IMP=0x0010000000158bd7
- (void)layoutCellsAnimated:(_Bool)arg1;	// IMP=0x0010000000158b96
- (void)updateTimeViewBaseline;	// IMP=0x0010000000158984
- (void)viewWillLayoutSubviews;	// IMP=0x001000000015887a
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000158806
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000001586cb
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000158617
- (void)loadView;	// IMP=0x00100000001585b9
- (void)showViewController:(id)arg1 sender:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000158400
- (void)showEvents:(id)arg1 animated:(_Bool)arg2 showMode:(unsigned long long)arg3 context:(id)arg4;	// IMP=0x0010000000158291
- (long long)intendedSizeClass;	// IMP=0x0010000000158286
- (_Bool)allowsOverriddenToolbarItems;	// IMP=0x001000000015827e
- (_Bool)allowsOverriddenRightNavigationBarItems;	// IMP=0x0010000000158276
- (id)initWithModel:(id)arg1 window:(id)arg2;	// IMP=0x00100000001581e2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

