//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE;

@interface _TtC19ContactlessReaderUI24TapRemoteSceneController : UIViewController
{
    MISSING_TYPE *suppressor;	// 8 = 0x8
    MISSING_TYPE *walletSuppressor;	// 16 = 0x10
    MISSING_TYPE *dismissalExpected;	// 56 = 0x38
    MISSING_TYPE *hideMenuIndicatorTimer;	// 64 = 0x40
    MISSING_TYPE *subscriptions;	// 72 = 0x48
    MISSING_TYPE *showStatusBar;	// 80 = 0x50
    MISSING_TYPE *context;	// 88 = 0x58
    MISSING_TYPE *scene;	// 112 = 0x70
    MISSING_TYPE *homeAffordanceOn;	// 120 = 0x78
    MISSING_TYPE *issuerPIN;	// 121 = 0x79
}

- (void).cxx_destruct;	// IMP=0x0000000000053720
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000057a90
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000577c0
- (void)handlePanWithSender:(id)arg1;	// IMP=0x0000000000057480
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000054290
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000053cd0
- (void)viewDidLoad;	// IMP=0x0000000000053ca0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000053a80
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000537a0
- (void)dealloc;	// IMP=0x0000000000053700
@property(nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
@property(nonatomic, readonly) unsigned long long preferredScreenEdgesDeferringSystemGestures;
@property(nonatomic, readonly) long long preferredStatusBarUpdateAnimation;
@property(nonatomic, readonly) _Bool prefersStatusBarHidden;

@end
