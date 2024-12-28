//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class NSString, SKTermsPageViewController, ServiceAlertProxy;

@interface ServiceTermsPageViewController : SBUIRemoteAlertServiceViewController
{
    ServiceAlertProxy *_remoteAlertProxy;	// 8 = 0x8
    SKTermsPageViewController *_underlyingViewController;	// 16 = 0x10
}

+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x0020000000012072
- (void).cxx_destruct;	// IMP=0x0020000000012f3a
- (void)_showViewControllerForAlertProxy:(id)arg1;	// IMP=0x0010000000012aa4
- (id)_remoteViewControllerProxy;	// IMP=0x0010000000012a66
- (void)_dismissWithAcceptance:(_Bool)arg1;	// IMP=0x00100000000129f7
- (void)_dismissClientViewController;	// IMP=0x001000000001297d
- (void)_dismiss;	// IMP=0x00100000000128d3
- (_Bool)_checkEntitlementsWithError:(id *)arg1;	// IMP=0x001000000001280b
- (void)termsPageViewControllerDidFinish:(id)arg1 withAcceptance:(_Bool)arg2;	// IMP=0x00100000000127f7
- (void)termsPageViewControllerDidFinish:(id)arg1;	// IMP=0x00100000000127e5
- (void)handleHomeButtonPressed;	// IMP=0x00100000000127d3
- (void)alertProxyDidCancel:(id)arg1;	// IMP=0x0010000000012635
- (void)_willAppearInRemoteViewController:(id)arg1;	// IMP=0x00100000000125a0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x001000000001251b
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x0010000000012392
- (void)viewDidLoad;	// IMP=0x00100000000122fa
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000001207a
- (void)dealloc;	// IMP=0x0010000000012005

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
