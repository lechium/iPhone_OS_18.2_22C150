//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudRecommendationUI/NSObject-Protocol.h>

@class CEUpgradeFlowManager, NSError, UIViewController;

@protocol CEUpgradeFlowManagerDelegate <NSObject>
- (void)upgradeFlowManagerDidFail:(CEUpgradeFlowManager *)arg1 error:(NSError *)arg2;
- (void)upgradeFlowManager:(CEUpgradeFlowManager *)arg1 didPresentViewController:(UIViewController *)arg2;
- (void)upgradeFlowManagerDidComplete:(CEUpgradeFlowManager *)arg1;
- (void)upgradeFlowManagerDidCancel:(CEUpgradeFlowManager *)arg1;
@end
