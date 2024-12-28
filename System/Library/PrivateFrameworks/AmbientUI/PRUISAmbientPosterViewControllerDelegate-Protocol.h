//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AmbientUI/NSObject-Protocol.h>

@class BKSAnimationFenceHandle, BSAnimationSettings, NSUUID, PRUISAmbientPosterViewController;

@protocol PRUISAmbientPosterViewControllerDelegate <NSObject>

@optional
- (double)ambientPosterViewControllerContainerCornerRadius:(PRUISAmbientPosterViewController *)arg1;
- (void)ambientPosterViewController:(PRUISAmbientPosterViewController *)arg1 relinquishExtensionInstanceIdentifier:(NSUUID *)arg2;
- (NSUUID *)ambientPosterViewControllerRequestExtensionInstanceIdentifier:(PRUISAmbientPosterViewController *)arg1;
- (unsigned long long)ambientPosterViewController:(PRUISAmbientPosterViewController *)arg1 titleAlignmentForInterfaceOrientation:(long long)arg2;
- (void)ambientPosterViewController:(PRUISAmbientPosterViewController *)arg1 setChromeVisibility:(_Bool)arg2 withAnimationSettings:(BSAnimationSettings *)arg3 animationFence:(BKSAnimationFenceHandle *)arg4;
@end
