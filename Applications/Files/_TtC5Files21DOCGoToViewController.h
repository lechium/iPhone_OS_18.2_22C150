//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface _TtC5Files21DOCGoToViewController
{
    MISSING_TYPE *delegate;	// 16 = 0x10
    MISSING_TYPE *suggestionsTableViewWidthConstraint;	// 32 = 0x20
    MISSING_TYPE *contentView;	// 40 = 0x28
    MISSING_TYPE *initialSuggestionsToken;	// 48 = 0x30
    MISSING_TYPE *initialCandidateSource;	// 56 = 0x38
    MISSING_TYPE *filteringSource;	// 96 = 0x60
    MISSING_TYPE *scrollViewDidScrollObservation;	// 136 = 0x88
    MISSING_TYPE *currentGoToLocation;	// 144 = 0x90
    MISSING_TYPE *requestID;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_inputField;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_goButton;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_separatorView;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_noResultsView;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_suggestionsTableViewController;	// 0 = 0x0
    MISSING_TYPE *metrics;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_closeBox;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00200000002246c0
- (id)init;	// IMP=0x0010000000224550
- (void)didReturn;	// IMP=0x0010000000223000
- (void)didTab;	// IMP=0x0010000000222e80
- (void)didHitDirectionalArrow;	// IMP=0x0010000000222e10
- (void)goToLocation;	// IMP=0x0010000000222de0
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0010000000222c90
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000222c10
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0010000000222ba0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000222b70
- (void)viewDidLoad;	// IMP=0x0010000000222a50
- (void)loadView;	// IMP=0x0010000000221950
- (void)inputTextFieldDidChange:(id)arg1;	// IMP=0x0010000000224ef0
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x0010000000224960
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x0010000000224910
- (_Bool)textFieldShouldEndEditing:(id)arg1;	// IMP=0x0010000000224900
- (void)performDismiss:(id)arg1;	// IMP=0x0010000000405bc0

@end

