//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE;
@protocol HUConfigurationViewControllerDelegate;

@interface HUUtilityOnboardingOAuthLoginViewController : UIViewController
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *context;	// 16 = 0x10
    MISSING_TYPE *loginManager;	// 24 = 0x18
    MISSING_TYPE *utilityID;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000071770
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000071710
- (Class)onboardingFlowClass;	// IMP=0x0000000000071650
- (id)presentationAnchorForWebAuthenticationSession:(id)arg1;	// IMP=0x00000000000715e0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000071540
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000071530
- (void)viewDidLoad;	// IMP=0x0000000000071500
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006fc10
- (id)initWithContext:(id)arg1;	// IMP=0x000000000006fbe0
@property(nonatomic, retain) id <HUConfigurationViewControllerDelegate> delegate; // @synthesize delegate;

@end

