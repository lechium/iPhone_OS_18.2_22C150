//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LUIPaneFooterView, LUIPaneHeaderView, LUIPrivacyView, MISSING_TYPE, NSArray, NSString, UITableView, UITableViewCell, UITextField_CustomEditMenu;
@protocol LUILoginDelegate;

@interface LUIAppleIDSignInViewController
{
    _Bool _isUIUpdateAllowed;	// 8 = 0x8
    id <LUILoginDelegate> _delegate;	// 16 = 0x10
    UITableView *_tableView;	// 24 = 0x18
    LUIPaneHeaderView *_headerView;	// 32 = 0x20
    MISSING_TYPE *_privacyView;	// 40 = 0x28
    UITableViewCell *_usernameCell;	// 48 = 0x30
    UITextField_CustomEditMenu *_usernameField;	// 56 = 0x38
    LUIPaneFooterView *_progressView;	// 64 = 0x40
    NSArray *_defaultDomains;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000016e8b
@property(retain, nonatomic) NSArray *defaultDomains; // @synthesize defaultDomains=_defaultDomains;
@property(nonatomic) _Bool isUIUpdateAllowed; // @synthesize isUIUpdateAllowed=_isUIUpdateAllowed;
@property(retain, nonatomic) LUIPaneFooterView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UITextField_CustomEditMenu *usernameField; // @synthesize usernameField=_usernameField;
@property(retain, nonatomic) UITableViewCell *usernameCell; // @synthesize usernameCell=_usernameCell;
@property(retain, nonatomic) LUIPrivacyView *privacyView; // @synthesize privacyView=_privacyView;
@property(retain, nonatomic) LUIPaneHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property __weak id <LUILoginDelegate> delegate; // @synthesize delegate=_delegate;
- (void)presentPasscodeViewControllerForUser:(id)arg1 passcodeViewDidAppearAction:(CDUnknownBlockType)arg2 passcodeCanceledAction:(CDUnknownBlockType)arg3 passcodeEnteredAction:(CDUnknownBlockType)arg4;	// IMP=0x0010000000016cba
- (void)authenticationCanceled;	// IMP=0x0010000000016bf6
- (void)_updateDefaultDomainSetting;	// IMP=0x0010000000016b57
- (_Bool)_validateUsername:(id)arg1;	// IMP=0x0010000000016ac1
- (void)_clearTextFields;	// IMP=0x0010000000016a82
@property(readonly, nonatomic) long long viewType;
- (void)textFieldDidChange:(id)arg1;	// IMP=0x001000000001653e
- (void)textFieldDidBeginEditing:(id)arg1;	// IMP=0x0010000000016415
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x00100000000163aa
- (double)_maxLabelWidth;	// IMP=0x001000000001624f
- (id)_username;	// IMP=0x0010000000015eab
- (void)setUsername:(id)arg1;	// IMP=0x0010000000015e42
- (id)_subtitleAttributedString;	// IMP=0x0010000000015700
- (void)setHeaderTitle;	// IMP=0x001000000001560d
- (double)heightForHeaderInTableView:(id)arg1;	// IMP=0x0010000000015442
- (id)viewForHeaderInTableView:(id)arg1;	// IMP=0x0010000000015430
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00100000000153b2
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00100000000153a7
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x001000000001539c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x001000000001538a
- (void)bottomLeftVibrantButtonTapped:(id)arg1;	// IMP=0x00100000000152ec
- (id)titleForBottomRightVibrantButton;	// IMP=0x0010000000015284
- (id)titleForBottomLeftVibrantButton;	// IMP=0x0010000000015253
- (long long)imageTypeForBottomRightVibrantButton;	// IMP=0x0010000000015248
- (long long)imageTypeForBottomLeftVibrantButton;	// IMP=0x001000000001523d
- (_Bool)shouldShowBottomRightVibrantButton;	// IMP=0x00100000000151f2
- (_Bool)shouldShowBottomLeftVibrantButton;	// IMP=0x00100000000151d9
- (id)_bottomLeftButtonTitleForViewType:(long long)arg1;	// IMP=0x0010000000015125
- (double)heightForFooterInTableView:(id)arg1;	// IMP=0x0010000000015073
- (id)viewForFooterInTableView:(id)arg1;	// IMP=0x0010000000015061
- (void)signInButtonPressed:(id)arg1;	// IMP=0x0010000000014f60
- (void)_fetchAuthMode;	// IMP=0x0010000000014be2
- (id)_tableViewConstraints;	// IMP=0x0010000000014852
- (void)_activateLayoutConstraints;	// IMP=0x0010000000014773
- (long long)preferredStatusBarStyle;	// IMP=0x00100000000144dd
- (void)viewDidLoad;	// IMP=0x0010000000014257
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0010000000014211
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000001418f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

