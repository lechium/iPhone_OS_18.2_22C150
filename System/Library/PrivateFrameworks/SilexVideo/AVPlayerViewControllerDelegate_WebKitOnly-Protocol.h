//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SilexVideo/AVPlayerViewControllerDelegate-Protocol.h>

@class AVPlayerViewController;

@protocol AVPlayerViewControllerDelegate_WebKitOnly <AVPlayerViewControllerDelegate>

@optional
- (void)playerViewControllerEndReducingResourcesForPictureInPicture:(AVPlayerViewController *)arg1;
- (void)playerViewControllerBeginReducingResourcesForPictureInPicture:(AVPlayerViewController *)arg1;
- (_Bool)playerViewControllerShouldStartPictureInPictureFromInlineWhenEnteringBackground:(AVPlayerViewController *)arg1;
- (_Bool)playerViewController:(AVPlayerViewController *)arg1 shouldExitFullScreenWithReason:(long long)arg2;
@end
