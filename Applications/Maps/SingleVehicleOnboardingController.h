//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, UINavigationController, UIViewController, VGVehicle;
@protocol SingleVehicleOnboardingControllerDelegate;

@interface SingleVehicleOnboardingController : NSObject
{
    id <SingleVehicleOnboardingControllerDelegate> _delegate;	// 8 = 0x8
    VGVehicle *_vehicle;	// 16 = 0x10
    _Bool _isLastUnpairedVehicle;	// 24 = 0x18
    _Bool _isSoleUnpairedVehicle;	// 25 = 0x19
    UINavigationController *_navigationController;	// 32 = 0x20
    _Bool _isLPREnabled;	// 40 = 0x28
    NSMutableDictionary *_viewControllersByState;	// 48 = 0x30
    long long _state;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000dda145
@property(nonatomic) long long state; // @synthesize state=_state;
- (void)didFinishConfiguringLPRForVehicle:(id)arg1;	// IMP=0x0010000000dda027
- (void)didCancelConfiguringLPRForVehicle:(id)arg1;	// IMP=0x0010000000dd9f13
- (void)vehicleAddedViewControllerDidSelectNext:(id)arg1;	// IMP=0x0010000000dd9bfc
- (void)vehicleAddedViewControllerDidSelectDone:(id)arg1;	// IMP=0x0010000000dd9847
- (void)networksSelectionViewController:(id)arg1 didSelectNetworks:(id)arg2 forVehicle:(id)arg3;	// IMP=0x0010000000dd94e7
- (void)networksOfferViewControllerDidSelectSetupLater:(id)arg1;	// IMP=0x0010000000dd92ad
- (void)networksOfferViewControllerDidSelectSetupNow:(id)arg1;	// IMP=0x0010000000dd90c7
- (void)onboardingViewControllerWillMoveFromParentViewController:(id)arg1;	// IMP=0x0010000000dd8c5f
- (void)_cleanUp;	// IMP=0x0010000000dd8b86
@property(readonly, nonatomic) UIViewController *currentViewController;
- (id)_viewControllerForState:(long long)arg1;	// IMP=0x0010000000dd83d3
- (void)_proceedToNextState;	// IMP=0x0010000000dd803e
- (_Bool)_validateStateTransitionFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x0010000000dd8000
- (id)initWithUnpairedVehicle:(id)arg1 isLastUnpairedVehicle:(_Bool)arg2 isSoleUnpairedVehicle:(_Bool)arg3 navigationController:(id)arg4 delegate:(id)arg5;	// IMP=0x0010000000dd77c8

@end
