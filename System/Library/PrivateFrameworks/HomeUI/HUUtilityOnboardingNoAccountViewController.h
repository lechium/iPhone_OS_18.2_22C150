//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OnBoardingKit/OBWelcomeController.h>

@class MISSING_TYPE;
@protocol HUConfigurationViewControllerDelegate;

@interface HUUtilityOnboardingNoAccountViewController : OBWelcomeController
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *onboardingContext;	// 16 = 0x10
    MISSING_TYPE *loginManager;	// 24 = 0x18
    MISSING_TYPE *utilityID;	// 32 = 0x20
    MISSING_TYPE *editButton;	// 48 = 0x30
    MISSING_TYPE *providerAccountButton;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000181d80
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;	// IMP=0x0000000000181d20
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 contentLayout:(long long)arg4;	// IMP=0x0000000000181c10
- (Class)onboardingFlowClass;	// IMP=0x0000000000181ae0
- (id)presentationAnchorForWebAuthenticationSession:(id)arg1;	// IMP=0x0000000000181a60
- (void)providerAccount:(id)arg1;	// IMP=0x000000000017fef0
- (void)editDetails:(id)arg1;	// IMP=0x000000000017fc90
- (void)closeButtonWith_sender:(id)arg1;	// IMP=0x000000000017f9b0
- (void)viewDidLoad;	// IMP=0x000000000017f460
- (id)initWithContext:(id)arg1;	// IMP=0x000000000017ec80
@property(nonatomic, retain) id <HUConfigurationViewControllerDelegate> delegate; // @synthesize delegate;

@end

