//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE, NSString, SSSDittoRootViewController, SSSViewControllerManager, UIVisualEffectView;

@interface SSSDittoDebugViewController : UIViewController
{
    SSSDittoRootViewController *_rootViewController;	// 8 = 0x8
    UIVisualEffectView *_backgroundView;	// 16 = 0x10
    SSSViewControllerManager *viewControllerManager;	// 24 = 0x18
}

+ (void)prepareForDebugging;	// IMP=0x0020000000019911
- (void).cxx_destruct;	// IMP=0x002000000001a701
@property(nonatomic) __weak SSSViewControllerManager *viewControllerManager; // @synthesize viewControllerManager;
- (void)viewWillLayoutSubviews;	// IMP=0x001000000001a62a
- (void)viewDidLoad;	// IMP=0x001000000001a50c
- (id)debugView;	// IMP=0x001000000001a4fa
- (void)loadView;	// IMP=0x001000000001a481
- (MISSING_TYPE *)_addScreenshots;	// IMP=0x001000000001a1ba
- (void)dittoDebugView:(id)arg1 requestsPresentationOfViewController:(id)arg2;	// IMP=0x001000000001a19d
- (void)_addScreenshotWithPDF:(id)arg1 visibleRect:(struct CGRect)arg2;	// IMP=0x0010000000019cf2
- (void)removeDittoRootViewController;	// IMP=0x0010000000019c5c
- (void)createDittoRootViewControllerIfNecessary;	// IMP=0x0010000000019ac9
@property(readonly, nonatomic) SSSDittoRootViewController *rootViewController;
- (void)cleanupRootViewController;	// IMP=0x0010000000019aae
- (void)stopBeingParentOfDittoRootViewController:(id)arg1;	// IMP=0x0010000000019aa8
- (void)becomeParentOfDittoRootViewController:(id)arg1;	// IMP=0x0010000000019aa2
- (void)dittoRootViewControllerDidDismiss:(id)arg1;	// IMP=0x0010000000019a90
- (void)dittoRootViewController:(id)arg1 wantsBackground:(_Bool)arg2 duration:(double)arg3;	// IMP=0x00100000000199a9
- (void)dittoRootViewControllerFinishedShowingSharingUI:(id)arg1 inStateTransition:(_Bool)arg2;	// IMP=0x00100000000199a3
- (void)dittoRootViewController:(id)arg1 willShowTestFlightUIWithBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000019998
- (void)dittoRootViewController:(id)arg1 willShowShowSharingUIWithBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000001998d
- (void)dittoRootViewController:(id)arg1 didTransitionToState:(unsigned long long)arg2;	// IMP=0x0010000000019987
- (void)dittoRootViewController:(id)arg1 willTransitionToState:(unsigned long long)arg2 changeBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000001997c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

