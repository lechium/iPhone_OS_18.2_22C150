//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class NSString, ServiceAlertProxy, ServiceTouchIDAlertHeaderView, UIAlertController;

@interface ServiceTouchIDAlertViewController : SBUIRemoteAlertServiceViewController
{
    UIAlertController *_alertController;	// 8 = 0x8
    ServiceTouchIDAlertHeaderView *_headerView;	// 16 = 0x10
    ServiceAlertProxy *_remoteAlertProxy;	// 24 = 0x18
}

+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x00200000000131a4
- (void).cxx_destruct;	// IMP=0x0020000000013e38
- (void)_showAlertForAlertProxy:(id)arg1;	// IMP=0x001000000001384a
- (id)_remoteViewControllerProxy;	// IMP=0x001000000001380c
- (void)_finishWithButtonIndex:(long long)arg1;	// IMP=0x001000000001379d
- (void)_dismissAlertController;	// IMP=0x00100000000136d7
- (void)alertProxyDidCancel:(id)arg1;	// IMP=0x00100000000136c5
- (void)alertProxy:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x001000000001354c
- (void)handleHomeButtonPressed;	// IMP=0x0010000000013546
- (void)_willAppearInRemoteViewController:(id)arg1;	// IMP=0x00100000000134b1
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x001000000001342c
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000000131ac
- (void)dealloc;	// IMP=0x0010000000013159

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
