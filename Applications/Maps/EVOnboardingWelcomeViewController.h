//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;
@protocol EVOnboardingWelcomeViewControllerDelegate;

@interface EVOnboardingWelcomeViewController
{
    NSArray *_vehicles;	// 8 = 0x8
    id <EVOnboardingWelcomeViewControllerDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000b48133
- (void)_setUpLaterPressed;	// IMP=0x0010000000b48051
- (void)_connectPressed;	// IMP=0x0010000000b47f6f
- (id)obViewController;	// IMP=0x0010000000b46ee6
- (id)initWithVehicles:(id)arg1 delegate:(id)arg2;	// IMP=0x0010000000b46e35

@end

