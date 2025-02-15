//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVKit/AVMobileControlsViewControllerDelegate-Protocol.h>

@class AVMobileChromelessControlsViewController, AVMobileContentTabPresentationContext;

@protocol AVMobileChromelessControlsViewControllerDelegate <AVMobileControlsViewControllerDelegate>
- (void)chromelessControlsViewControllerDidPressSkipForwardButton:(AVMobileChromelessControlsViewController *)arg1;
- (void)chromelessControlsViewControllerDidPressSkipBackButton:(AVMobileChromelessControlsViewController *)arg1;
- (void)chromelessControlsViewController:(AVMobileChromelessControlsViewController *)arg1 willBeginDismissingContentTabWithContext:(AVMobileContentTabPresentationContext *)arg2;
- (void)chromelessControlsViewController:(AVMobileChromelessControlsViewController *)arg1 willBeginPresentingContentTabWithContext:(AVMobileContentTabPresentationContext *)arg2;
- (CDStruct_b5bb7d6f)chromelessControlsViewController:(AVMobileChromelessControlsViewController *)arg1 contentTabPresentationInfoWithPreferredHeight:(double)arg2;
- (void)chromelessControlsViewControllerDidPressLiveTextButton:(AVMobileChromelessControlsViewController *)arg1;
@end

