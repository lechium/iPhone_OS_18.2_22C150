//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSViewController.h>

@class MISSING_TYPE;

@interface ICSHomeViewController : PSViewController
{
    MISSING_TYPE *viewModel;	// 8 = 0x8
    MISSING_TYPE *delayedDeeplinkInfo;	// 16 = 0x10
    MISSING_TYPE *$__lazy_storage_$_serviceOwnersManager;	// 24 = 0x18
    MISSING_TYPE *$__lazy_storage_$_accountManager;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000091e80
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000094000
- (void)handleURL:(id)arg1;	// IMP=0x0000000000093ef0
- (void)viewDidLoad;	// IMP=0x0000000000093930
- (void)willMoveToParentViewController:(id)arg1;	// IMP=0x00000000000926d0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000925c0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000923c0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000091ee0
- (void)dealloc;	// IMP=0x0000000000091d70
- (id)init;	// IMP=0x0000000000091c30
- (void)genericTermsRemoteUI:(id)arg1 acceptedTermsInfo:(id)arg2;	// IMP=0x0000000000094260
- (void)genericTermsRemoteUI:(id)arg1 didFinishWithSuccess:(_Bool)arg2;	// IMP=0x00000000000941f0
- (id)accountsForAccountManager:(id)arg1;	// IMP=0x00000000000947f0

@end

