//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, UINavigationController, UIViewController, VGVehicle;

@interface PreferredNetworksOnboardingController : NSObject
{
    UIViewController *_presentingViewController;	// 8 = 0x8
    UINavigationController *_navigationController;	// 16 = 0x10
    VGVehicle *_vehicle;	// 24 = 0x18
    NSMutableDictionary *_viewControllersByState;	// 32 = 0x20
    long long _state;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000004c2201
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (void)networksSelectionViewController:(id)arg1 didSelectNetworks:(id)arg2 forVehicle:(id)arg3;	// IMP=0x00100000004c1b1d
- (void)networksOfferViewControllerDidSelectSetupLater:(id)arg1;	// IMP=0x00100000004c1937
- (void)networksOfferViewControllerDidSelectSetupNow:(id)arg1;	// IMP=0x00100000004c1751
- (void)_proceedToNextState;	// IMP=0x00100000004c10db
- (void)_dismissOnboarding;	// IMP=0x00100000004c0e68
- (id)_viewControllerForState:(long long)arg1;	// IMP=0x00100000004c07b4
- (void)presentInViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000004c02d9
- (_Bool)_validateStateTransitionFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x00100000004c02b8
- (void)setState:(long long)arg1;	// IMP=0x00100000004bfb81
- (void)onboardingViewControllerWillMoveFromParentViewController:(id)arg1;	// IMP=0x00100000004bf719
- (id)initWithVehicle:(id)arg1;	// IMP=0x00100000004bf694

@end
