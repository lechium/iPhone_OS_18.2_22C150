//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class NSString, NSURL, SUClientInterface, UIViewController;

@interface ServiceWebViewPromptViewController : SBUIRemoteAlertServiceViewController
{
    _Bool _shouldUseAMS;	// 8 = 0x8
    _Bool _viewControllerShown;	// 9 = 0x9
    SUClientInterface *_clientInterface;	// 16 = 0x10
    UIViewController *_underlyingViewController;	// 24 = 0x18
    NSURL *_URL;	// 32 = 0x20
}

+ (id)_generateClientInterface;	// IMP=0x002000000001c4db
- (void).cxx_destruct;	// IMP=0x002000000001cdff
@property(nonatomic) _Bool viewControllerShown; // @synthesize viewControllerShown=_viewControllerShown;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) UIViewController *underlyingViewController; // @synthesize underlyingViewController=_underlyingViewController;
@property(nonatomic) _Bool shouldUseAMS; // @synthesize shouldUseAMS=_shouldUseAMS;
@property(retain, nonatomic) SUClientInterface *clientInterface; // @synthesize clientInterface=_clientInterface;
- (id)_viewControllerForType:(long long)arg1;	// IMP=0x001000000001c996
- (id)_sanitizedURL;	// IMP=0x001000000001c6fe
- (void)_presentViewController;	// IMP=0x001000000001c5c3
- (void)_dismiss;	// IMP=0x001000000001c3cb
- (void)_determineTypeForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001c0b7
- (id)_bag;	// IMP=0x001000000001be88
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x001000000001bdf6
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x001000000001bde4
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;	// IMP=0x001000000001bdd9
- (void)attemptDismissHostViewController;	// IMP=0x001000000001bd90
- (void)dismissHostViewController;	// IMP=0x001000000001bd7e
- (_Bool)shouldAutorotate;	// IMP=0x001000000001bd2b
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x001000000001bcd1
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000001bbb2
- (void)_willAppearInRemoteViewController;	// IMP=0x001000000001bb1f
- (void)viewDidLoad;	// IMP=0x001000000001ba88
- (void)handleHomeButtonPressed;	// IMP=0x001000000001ba76
- (void)handleButtonActions:(id)arg1;	// IMP=0x001000000001b923
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001b6e2
- (void)dealloc;	// IMP=0x001000000001b697
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x001000000001b609

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

