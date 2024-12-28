//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class VGVehicle;
@protocol LPROnboardingDelegate;

@interface LPRCustomizeInterstitialViewController : UIViewController
{
    VGVehicle *_vehicle;	// 8 = 0x8
    id <LPROnboardingDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000002b874b
- (void)editVehicleViewControllerDidSelectDone:(id)arg1;	// IMP=0x00100000002b8739
- (void)editVehicleViewController:(id)arg1 didSelectColor:(id)arg2 nickname:(id)arg3 removedNetworks:(id)arg4;	// IMP=0x00100000002b84cc
- (void)continuePressed;	// IMP=0x00100000002b83bf
- (void)_didFinishCreatingVehicle;	// IMP=0x00100000002b82f8
- (void)setupLaterPressed;	// IMP=0x00100000002b82e6
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00100000002b823c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000002b814e
- (void)viewDidLoad;	// IMP=0x00100000002b7bb8
- (id)initWithVehicle:(id)arg1 delegate:(id)arg2;	// IMP=0x00100000002b7b12

@end
