//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NPKRemotePassActionCompanionEnterValueViewController, NSString, UINavigationController;

@interface NPKRemotePassActionCompanionValueEntryAlertViewController
{
    NPKRemotePassActionCompanionEnterValueViewController *_enterValueViewController;	// 8 = 0x8
    UINavigationController *_navigationController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000006aac
- (void)enterValueViewController:(id)arg1 didFinishWithCurrencyAmount:(id)arg2 forRequestIdentifier:(id)arg3;	// IMP=0x001000000000693d
- (void)enterValueViewController:(id)arg1 didCancelForRequestIdentifier:(id)arg2;	// IMP=0x00100000000067f9
- (void)prepareForActivationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000669e
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000061ef
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0010000000006191

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

