//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NPKRemotePassActionCompanionItemSelectionViewController, NSString, UINavigationController;

@interface NPKRemotePassActionCompanionItemSelectionAlertViewController
{
    NPKRemotePassActionCompanionItemSelectionViewController *_selectItemViewController;	// 8 = 0x8
    UINavigationController *_navigationController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000000742b
- (void)selectItemViewController:(id)arg1 didFinishWithRenewalAmount:(id)arg2 serviceProviderData:(id)arg3 forRequestIdentifier:(id)arg4;	// IMP=0x0010000000007289
- (void)selectItemViewController:(id)arg1 didCancelForRequestIdentifier:(id)arg2;	// IMP=0x0010000000007145
- (void)prepareForActivationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000006fea
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000006b3b
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0010000000006add

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

