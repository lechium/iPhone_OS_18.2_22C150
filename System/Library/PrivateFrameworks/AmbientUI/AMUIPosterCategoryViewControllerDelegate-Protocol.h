//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AmbientUI/AMUIAmbientViewControllingDelegate-Protocol.h>

@class AMUIPosterCategoryViewController, PRSPosterConfiguration;
@protocol AMAuthenticationHandling;

@protocol AMUIPosterCategoryViewControllerDelegate <AMUIAmbientViewControllingDelegate>
- (_Bool)posterCategoryViewController:(AMUIPosterCategoryViewController *)arg1 wantsBiometricAuthenticationBlockedForDeepUserInteraction:(_Bool)arg2;
- (void)posterCategoryViewController:(AMUIPosterCategoryViewController *)arg1 didSetBiometricAuthenticationDisabled:(_Bool)arg2;
- (_Bool)posterCategoryViewControllerHasInlineAuthenticated:(AMUIPosterCategoryViewController *)arg1;
- (void)posterCategoryViewControllerDidSuccessfulyCompleteInlineAuthentication:(AMUIPosterCategoryViewController *)arg1;
- (void)posterCategoryViewController:(AMUIPosterCategoryViewController *)arg1 didSetInlineAuthenticationViewVisible:(_Bool)arg2;
- (void)posterCategoryViewController:(AMUIPosterCategoryViewController *)arg1 didSetPasscodeVisible:(_Bool)arg2;
- (id <AMAuthenticationHandling>)posterCategoryViewControllerAuthenticationHandler:(AMUIPosterCategoryViewController *)arg1;
- (_Bool)posterCategoryViewControllerIsAuthenticated:(AMUIPosterCategoryViewController *)arg1;
- (void)posterCategoryViewController:(AMUIPosterCategoryViewController *)arg1 didSettleOnConfiguration:(PRSPosterConfiguration *)arg2 interactive:(_Bool)arg3;
@end

