//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class LACUIContainerViewController, LAPSFetchNewPasscodeViewControllerInput, LAPSPasscode, LAPSPasscodeType, LAPSPasscodeViewController, NSString;
@protocol LAPSFetchNewPasscodeViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface LAPSFetchNewPasscodeViewController : UIViewController
{
    LAPSFetchNewPasscodeViewControllerInput *_input;	// 8 = 0x8
    CDUnknownBlockType _handler;	// 16 = 0x10
    LACUIContainerViewController *_containerVC;	// 24 = 0x18
    LAPSPasscodeType *_passcodeType;	// 32 = 0x20
    _Bool _isPasscodeRecoveryEnabled;	// 40 = 0x28
    LAPSPasscode *_passcode;	// 48 = 0x30
    LAPSPasscodeViewController *_passcodeVC;	// 56 = 0x38
    id <LAPSFetchNewPasscodeViewControllerDelegate> _delegate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000000453b
@property(nonatomic) __weak id <LAPSFetchNewPasscodeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)passcodeViewController:(id)arg1 didSetPasscodeRecoveryEnabled:(_Bool)arg2;	// IMP=0x0000000000004407
- (void)passcodeViewController:(id)arg1 didSelectPasscodeType:(id)arg2;	// IMP=0x0000000000004383
- (void)passcodeViewController:(id)arg1 didCancelWithError:(id)arg2;	// IMP=0x00000000000042f8
- (void)passcodeViewController:(id)arg1 verifyPasscode:(id)arg2;	// IMP=0x00000000000041a6
- (id)_currentChildVC;	// IMP=0x0000000000004189
- (void)_deactivate;	// IMP=0x0000000000004155
- (void)_invokeHandlerWithOutput:(id)arg1 error:(id)arg2;	// IMP=0x0000000000004095
- (void)_invokeHandlerWithError:(id)arg1;	// IMP=0x000000000000407e
- (void)_invokeHandlerWithOutput:(id)arg1;	// IMP=0x000000000000406a
- (void)_presentViewController:(id)arg1 transitionStyle:(long long)arg2;	// IMP=0x000000000000404d
- (void)_presentVerifyPasscodeVCWithTransitionStyle:(long long)arg1;	// IMP=0x0000000000003e00
- (void)_presentNewPasscodeVCWithTransitionStyle:(long long)arg1;	// IMP=0x00000000000037ee
- (void)finishWithPasscode:(id)arg1;	// IMP=0x0000000000003681
- (void)finishWithError:(id)arg1;	// IMP=0x000000000000366f
- (void)clear;	// IMP=0x00000000000035d2
- (void)restart;	// IMP=0x000000000000359f
- (void)continueWithPasscode:(id)arg1;	// IMP=0x0000000000003552
- (void)_preferredContentSizeDidChangeForChildViewController:(id)arg1;	// IMP=0x00000000000034c2
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000000034ba
- (id)navigationItem;	// IMP=0x0000000000003415
- (_Bool)resignFirstResponder;	// IMP=0x00000000000033f8
- (_Bool)becomeFirstResponder;	// IMP=0x00000000000033db
- (void)viewDidLoad;	// IMP=0x0000000000002f6d
- (id)initWithInput:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002e54

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

