//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBSUIFeaturePolicyHostComponent;

@protocol SBSUIFeaturePolicyHostComponentDelegate <NSObject>
- (void)conformsToFeaturePolicyHostComponentDelegate;
- (void)featurePolicyHostComponentDidChangeDesiredBackgroundActivities:(SBSUIFeaturePolicyHostComponent *)arg1;
- (void)featurePolicyHostComponentDidChangeDesiredHardwareButtonEvents:(SBSUIFeaturePolicyHostComponent *)arg1;
- (void)featurePolicyHostComponentDidChangeAllowsMenuButtonDismissal:(SBSUIFeaturePolicyHostComponent *)arg1;
- (void)featurePolicyHostComponentDidChangeShouldDisableReachability:(SBSUIFeaturePolicyHostComponent *)arg1;
- (void)featurePolicyHostComponentDidChangeShouldDisableInteractiveScreenshotGesture:(SBSUIFeaturePolicyHostComponent *)arg1;
- (void)featurePolicyHostComponentDidChangeShouldDisableSiri:(SBSUIFeaturePolicyHostComponent *)arg1;
- (void)featurePolicyHostComponentDidChangeShouldDisableControlCenter:(SBSUIFeaturePolicyHostComponent *)arg1;
- (void)featurePolicyHostComponentDidChangeShouldDisableAlertItems:(SBSUIFeaturePolicyHostComponent *)arg1;
- (void)featurePolicyHostComponentDidChangeShouldDisableBanners:(SBSUIFeaturePolicyHostComponent *)arg1;
@end
