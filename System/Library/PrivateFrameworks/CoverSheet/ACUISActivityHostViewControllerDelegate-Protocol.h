//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoverSheet/NSObject-Protocol.h>

@class ACUISActivityHostViewController, BSAction;

@protocol ACUISActivityHostViewControllerDelegate <NSObject>

@optional
- (void)activityHostViewControllerArchivedActivityFamilyDidChange:(ACUISActivityHostViewController *)arg1;
- (void)activityHostViewControllerAudioCategoriesDisablingVolumeHUDDidChange:(ACUISActivityHostViewController *)arg1;
- (void)activityHostViewController:(ACUISActivityHostViewController *)arg1 didSetIdleTimerDisabled:(_Bool)arg2;
- (void)activityHostViewControllerSignificantUserInteractionEnded:(ACUISActivityHostViewController *)arg1;
- (void)activityHostViewControllerSignificantUserInteractionBegan:(ACUISActivityHostViewController *)arg1;
- (void)activityHostViewControllerHostShouldCancelTouches:(ACUISActivityHostViewController *)arg1;
- (void)activityHostViewControllerTextColorDidChange:(ACUISActivityHostViewController *)arg1;
- (void)activityHostViewControllerBackgroundTintColorDidChange:(ACUISActivityHostViewController *)arg1;
- (void)activityHostViewController:(ACUISActivityHostViewController *)arg1 requestsLaunchWithAction:(BSAction *)arg2;
@end

