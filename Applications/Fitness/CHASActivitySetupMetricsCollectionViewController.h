//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OnBoardingKit/OBTableWelcomeController.h>

@class FIUIHealthSettingsDataSource, FIUIPregnancyStateProvider, NSString, UITableViewCell, UIView;
@protocol BPSBuddyControllerDelegate;

@interface CHASActivitySetupMetricsCollectionViewController : OBTableWelcomeController
{
    FIUIHealthSettingsDataSource *_healthSettingsDataSource;	// 8 = 0x8
    UITableViewCell *_selectedCell;	// 16 = 0x10
    UIView *_footerView;	// 24 = 0x18
    _Bool _showWheelchair;	// 32 = 0x20
    _Bool _isNavigationBarHidden;	// 33 = 0x21
    FIUIPregnancyStateProvider *_pregnancyStateProvider;	// 40 = 0x28
    id <BPSBuddyControllerDelegate> _delegate;	// 48 = 0x30
    long long _presentationContext;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000004bfeb
@property(readonly, nonatomic) long long presentationContext; // @synthesize presentationContext=_presentationContext;
@property(nonatomic) __weak id <BPSBuddyControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)tapToRadarMetadata;	// IMP=0x001000000004bf7f
- (void)shouldReloadPregnancySection;	// IMP=0x001000000004be54
- (void)didTapEditPregnancy;	// IMP=0x001000000004bd6f
- (void)wheelchairUseSwitchDidChangeTo:(_Bool)arg1;	// IMP=0x001000000004bd57
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x001000000004bc06
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x001000000004bbe9
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x001000000004bbcc
- (void)_requestWheelchairDiagnosticsSubmissionIfNecessary;	// IMP=0x001000000004b52b
- (void)_endEditingAndDiscardChanges:(_Bool)arg1;	// IMP=0x001000000004b3fe
- (void)_startEdit;	// IMP=0x001000000004b201
- (void)_done;	// IMP=0x001000000004b1ed
- (void)_cancel;	// IMP=0x001000000004b1d6
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x001000000004b039
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x001000000004b019
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x001000000004af9e
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x001000000004adb8
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x001000000004adb0
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x001000000004ada7
- (_Bool)holdBeforeDisplaying;	// IMP=0x001000000004aba5
- (void)_determinePresentationContextIfNeededWithHealthStore:(id)arg1;	// IMP=0x001000000004a70a
- (void)_contentSizeDidChange;	// IMP=0x001000000004a6d1
- (id)_footerString;	// IMP=0x001000000004a5ac
- (id)_makeFooterView;	// IMP=0x001000000004a1d4
- (void)tappedConfirm:(id)arg1;	// IMP=0x0010000000049f7a
- (id)_titleForConfirmButton;	// IMP=0x0010000000049eb5
- (void)viewDidLoad;	// IMP=0x0010000000049851
- (_Bool)showPregnancy;	// IMP=0x00100000000497bb
- (id)initWithPresentationContext:(long long)arg1 pregnancyStateProvider:(id)arg2;	// IMP=0x0010000000049729
- (id)initWithPresentationContext:(long long)arg1;	// IMP=0x00100000000496d3
- (id);	// IMP=0x00100000000496bf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

