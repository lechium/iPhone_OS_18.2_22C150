//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OnBoardingKit/OBWelcomeController.h>

@class MISSING_TYPE;

@interface _TtC9Reminders25TTRIWelcomeViewController : OBWelcomeController
{
    MISSING_TYPE *upgradeHelpURLString;	// 8 = 0x8
    MISSING_TYPE *viewModel;	// 24 = 0x18
    MISSING_TYPE *spinner;	// 40 = 0x28
    MISSING_TYPE *originalBottomConstraints;	// 48 = 0x30
    MISSING_TYPE *newBottomConstraints;	// 56 = 0x38
    MISSING_TYPE *presenter;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x004000000036d1f0
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;	// IMP=0x001000000036ebb0
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 contentLayout:(long long)arg4;	// IMP=0x001000000036eb80
- (void)viewDidLoad;	// IMP=0x001000000036d9c0
- (void)didTapLaterButton:(id)arg1;	// IMP=0x001000000036d360
- (void)didTapUpgradeButton:(id)arg1;	// IMP=0x001000000036d2c0
- (void)didTapContinueToUpgradeAutomaticallyButton:(id)arg1;	// IMP=0x001000000036d2a0
- (void)didTapDismissButton:(id)arg1;	// IMP=0x001000000036d290
- (void)didTapContinueButton:(id)arg1;	// IMP=0x001000000036d270
- (void)dealloc;	// IMP=0x001000000036d0e0

@end

