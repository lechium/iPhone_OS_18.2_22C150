//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class BSAction, CNMutableContact, CNSNaPSetupFlowManager, NSString;

@interface CNContactPhotoCarouselRemoteAlertViewController : SBUIRemoteAlertServiceViewController
{
    CNSNaPSetupFlowManager *_flowManager;	// 8 = 0x8
    CNMutableContact *_requestContact;	// 16 = 0x10
    BSAction *_action;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000002933
- (void)avatarPosterEditorFromFlowManager:(id)arg1 didUpdateContact:(id)arg2 withVisualIdentity:(id)arg3;	// IMP=0x0010000000002769
@property(readonly) _Bool isPresentingModalViewController;
- (void)sender:(id)arg1 dismissViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000026c7
- (void)sender:(id)arg1 dismissViewController:(id)arg2;	// IMP=0x00100000000026b2
- (void)sender:(id)arg1 presentViewController:(id)arg2;	// IMP=0x0010000000002656
- (void)_flowDidDismiss;	// IMP=0x0010000000002619
- (void)prepareForActivationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000219d
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000001fe1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

