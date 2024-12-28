//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, NSURL, UINavigationController, WFServicePINEntryViewController;
@protocol WFPINEntryViewControllerProtocol;

@interface WFServicePINEntryNavigationController : UIViewController
{
    id <WFPINEntryViewControllerProtocol> _remoteViewControllerProxy;	// 8 = 0x8
    UINavigationController *_navController;	// 16 = 0x10
    WFServicePINEntryViewController *_PINEntryViewController;	// 24 = 0x18
    NSURL *_URL;	// 32 = 0x20
    NSString *_pageTitle;	// 40 = 0x28
}

+ (id)_remoteViewControllerInterface;	// IMP=0x0020000000002035
+ (id)_exportedInterface;	// IMP=0x0010000000002015
- (void).cxx_destruct;	// IMP=0x00200000000023b0
- (void)didCancelEnteringPIN;	// IMP=0x0010000000002393
- (void)didAcceptEnteredPIN;	// IMP=0x0010000000002350
- (void)cancel;	// IMP=0x001000000000233c
- (void)permitURLWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000002281
- (void)getIsPINPresentWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000002232
- (void)setPageTitle:(id)arg1;	// IMP=0x00100000000021c9
- (void)setURL:(id)arg1;	// IMP=0x0010000000002069
- (void)_willAppearInRemoteViewController:(id)arg1;	// IMP=0x0010000000002055
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0010000000001fbb
- (void)viewDidLoad;	// IMP=0x0010000000001e35

@end
