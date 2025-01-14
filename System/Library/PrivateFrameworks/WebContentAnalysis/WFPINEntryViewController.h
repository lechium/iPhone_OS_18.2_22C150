//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSString, NSURL, WFRemotePINEntryViewController, _UIFallbackPresentationViewController;

__attribute__((visibility("hidden")))
@interface WFPINEntryViewController : UIViewController
{
    _UIFallbackPresentationViewController *_fallbackPresentationVC;	// 8 = 0x8
    NSArray *_windowsWithDisabledRotation;	// 16 = 0x10
    UIViewController *_rootViewControllerToUse;	// 24 = 0x18
    WFRemotePINEntryViewController *_remoteViewController;	// 32 = 0x20
    NSURL *_URL;	// 40 = 0x28
    NSString *_pageTitle;	// 48 = 0x30
    CDUnknownBlockType _completion;	// 56 = 0x38
    CDUnknownBlockType _dismissCompletionHandler;	// 64 = 0x40
}

+ (Class)remoteViewControllerClass;	// IMP=0x001000000000ec64
+ (id)serviceViewControllerClassName;	// IMP=0x001000000000ec57
- (void).cxx_destruct;	// IMP=0x000000000000fc40
@property(copy, nonatomic) CDUnknownBlockType dismissCompletionHandler; // @synthesize dismissCompletionHandler=_dismissCompletionHandler;
- (void)userDidCancel;	// IMP=0x000000000000fb59
- (void)userEnteredCorrectPIN;	// IMP=0x000000000000fab8
- (unsigned long long)_supportedInterfaceOrientationsForRootViewController;	// IMP=0x000000000000faa6
- (id)delegate;	// IMP=0x000000000000fa9e
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x000000000000fa91
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x000000000000fa86
- (_Bool)shouldAutorotate;	// IMP=0x000000000000fa7e
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000000f90d
- (_Bool)hasUIWebViewSubView:(id)arg1;	// IMP=0x000000000000f7a3
- (void)presentViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000f28a
- (void)insertRemoteViewController:(id)arg1;	// IMP=0x000000000000f117
- (void)dealloc;	// IMP=0x000000000000f087
- (id)initWithURL:(id)arg1 pageTitle:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000ec75

@end

