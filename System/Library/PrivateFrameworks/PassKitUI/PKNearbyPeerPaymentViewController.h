//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE;

@interface PKNearbyPeerPaymentViewController : UIViewController
{
    MISSING_TYPE *context;	// 8 = 0x8
    MISSING_TYPE *vfxViewController;	// 16 = 0x10
    MISSING_TYPE *divider;	// 24 = 0x18
    MISSING_TYPE *scrollView;	// 32 = 0x20
    MISSING_TYPE *metadataView;	// 40 = 0x28
    MISSING_TYPE *footerView;	// 48 = 0x30
    MISSING_TYPE *errorView;	// 56 = 0x38
    MISSING_TYPE *identityManager;	// 64 = 0x40
    MISSING_TYPE *amount;	// 72 = 0x48
    MISSING_TYPE *memo;	// 80 = 0x50
    MISSING_TYPE *screenEdgeSwipeAction;	// 96 = 0x60
    MISSING_TYPE *dismissAction;	// 112 = 0x70
    MISSING_TYPE *hideStatusBar;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000000002a9910
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000002a98b0
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000002a9780
- (void)peerPaymentIdentityManager:(id)arg1 didUpdateProfileAppearanceData:(id)arg2;	// IMP=0x00000000002a95c0
@property(nonatomic, readonly) long long preferredStatusBarStyle;
@property(nonatomic, readonly) _Bool prefersStatusBarHidden;
- (void)invalidate;	// IMP=0x00000000002a9560
- (void)handlePan:(id)arg1;	// IMP=0x00000000002a94f0
- (void)showAppearanceDetail;	// IMP=0x00000000002a94c0
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000002a94b0
- (void)viewDidLayoutSubviews;	// IMP=0x00000000002a9480
- (void)viewDidLoad;	// IMP=0x00000000002a87c0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002a83d0
- (id)initWithContext:(long long)arg1 screenEdgeSwipeAction:(CDUnknownBlockType)arg2 dismissAction:(CDUnknownBlockType)arg3;	// IMP=0x00000000002a8340
@property(nonatomic) _Bool hideStatusBar; // @synthesize hideStatusBar;

@end

