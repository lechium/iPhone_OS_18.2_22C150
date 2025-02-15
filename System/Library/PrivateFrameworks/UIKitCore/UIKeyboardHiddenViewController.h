//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewController.h"

@class NSString, _SFPasswordViewController;

__attribute__((visibility("hidden")))
@interface UIKeyboardHiddenViewController : UIViewController
{
    _SFPasswordViewController *_autofillVC;	// 440 = 0x1b8
    _Bool _presentedAutofill;	// 448 = 0x1c0
    _Bool _processingSceneDidChange;	// 449 = 0x1c1
}

- (void).cxx_destruct;	// IMP=0x0000000001199f66
@property(nonatomic) _Bool presentedAutofill; // @synthesize presentedAutofill=_presentedAutofill;
@property(retain, nonatomic) _SFPasswordViewController *autofillVC; // @synthesize autofillVC=_autofillVC;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;	// IMP=0x0000000001199e46
- (void)_sceneDidChange;	// IMP=0x0000000001199d37
- (_Bool)_formSheetObeysContentContainerSize;	// IMP=0x0000000001199d2f
- (void)presentViewController:(_Bool)arg1;	// IMP=0x0000000001199d0d
- (void)presentAutofillVCWithAnimation:(_Bool)arg1;	// IMP=0x0000000001199c4d
- (void)presentSelfWithAnimation:(_Bool)arg1;	// IMP=0x0000000001199ab2
- (_Bool)shouldPresentAsPopover;	// IMP=0x0000000001199a2a
- (void)_deviceWillLock:(id)arg1;	// IMP=0x0000000001199a16
- (void)passwordViewControllerDidFinish:(id)arg1;	// IMP=0x000000000119970b
- (void)_localAuthenticationUIDismissed;	// IMP=0x00000000011995f5
- (void)_localAuthenticationUIPresented;	// IMP=0x00000000011994c3
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000001199439
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000119925e
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x00000000011991ec
- (void)dealloc;	// IMP=0x0000000001199110
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000119901b
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000001199013

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

