//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class BSAction, DevicePINController, NSString;

@interface ServicePINEntryViewController : SBUIRemoteAlertServiceViewController
{
    _Bool _pinControllerShown;	// 8 = 0x8
    DevicePINController *_pinController;	// 16 = 0x10
    BSAction *_didAcceptPINAction;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000000c9d1
@property(retain, nonatomic) BSAction *didAcceptPINAction; // @synthesize didAcceptPINAction=_didAcceptPINAction;
@property(nonatomic) _Bool pinControllerShown; // @synthesize pinControllerShown=_pinControllerShown;
@property(retain, nonatomic) DevicePINController *pinController; // @synthesize pinController=_pinController;
- (void)_dismiss;	// IMP=0x001000000000c857
- (_Bool)_usesModalPresentation;	// IMP=0x001000000000c84d
- (_Bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;	// IMP=0x001000000000c838
- (void)didCancelEnteringPIN;	// IMP=0x001000000000c826
- (void)didAcceptEnteredPIN:(id)arg1;	// IMP=0x001000000000c71b
- (_Bool)prefersStatusBarHidden;	// IMP=0x001000000000c713
- (long long)preferredStatusBarStyle;	// IMP=0x001000000000c70b
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000000c52e
- (void)viewDidLoad;	// IMP=0x001000000000c497
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000c3de

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
