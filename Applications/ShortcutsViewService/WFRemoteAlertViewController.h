//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class NSString, NSXPCConnection, WFCompactHostingViewController;

@interface WFRemoteAlertViewController : SBUIRemoteAlertServiceViewController
{
    NSXPCConnection *_xpcConnection;	// 8 = 0x8
    WFCompactHostingViewController *_compactViewController;	// 16 = 0x10
}

+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x0020000000004ac3
- (void).cxx_destruct;	// IMP=0x00200000000045dc
@property(retain, nonatomic) WFCompactHostingViewController *compactViewController; // @synthesize compactViewController=_compactViewController;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)hostingViewControllerDidRequestExit:(id)arg1;	// IMP=0x001000000000447d
- (void)dismissPersistentChromeWithSuccess:(_Bool)arg1 customAttribution:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000004330
- (void)dismissPresentedContentWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000004220
- (void)showDialogRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000040cd
- (void)preparePersistentChromeWithContext:(id)arg1 attribution:(id)arg2;	// IMP=0x0010000000003f6f
- (int)_preferredStatusBarVisibility;	// IMP=0x0010000000003f67
- (long long)preferredStatusBarStyle;	// IMP=0x0010000000003f5a
- (_Bool)_shouldRemoveViewFromHierarchyOnDisappear;	// IMP=0x0010000000003f52
- (void)handleButtonActions:(id)arg1;	// IMP=0x0010000000003d5a
- (void)prepareForActivationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000003ca8
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0010000000003c64
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000373c
- (id)init;	// IMP=0x001000000000369e
- (_Bool)_canShowWhileLocked;	// IMP=0x0010000000003696

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

