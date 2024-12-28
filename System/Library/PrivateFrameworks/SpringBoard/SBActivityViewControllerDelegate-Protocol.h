//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBActivityViewController;

@protocol SBActivityViewControllerDelegate <NSObject>

@optional
- (void)activityViewControllerDidUpdateAudioCategoriesDisablingVolumeHUD:(SBActivityViewController *)arg1;
- (void)activityViewController:(SBActivityViewController *)arg1 didSetIdleTimerDisabled:(_Bool)arg2;
- (void)activityViewControllerContentRequestsCancellingGesture:(SBActivityViewController *)arg1;
@end
