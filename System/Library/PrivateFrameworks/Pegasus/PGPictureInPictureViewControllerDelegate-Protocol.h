//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Pegasus/NSObject-Protocol.h>

@class PGCommand, PGPictureInPictureViewController;

@protocol PGPictureInPictureViewControllerDelegate <NSObject>
- (_Bool)pictureInPictureViewControllerShouldHideTetheredViewControllerAlongsideControls:(PGPictureInPictureViewController *)arg1;
- (_Bool)pictureInPictureViewControllerWantsStashTabSuppression:(PGPictureInPictureViewController *)arg1;
- (void)pictureInPictureViewController:(PGPictureInPictureViewController *)arg1 didTransitionToStashed:(_Bool)arg2;
- (void)pictureInPictureViewController:(PGPictureInPictureViewController *)arg1 didReceiveCommand:(PGCommand *)arg2;
- (void)pictureInPictureViewControllerHostedWindowSizeChangeEnded:(PGPictureInPictureViewController *)arg1;
- (void)pictureInPictureViewControllerHostedWindowSizeChangeBegan:(PGPictureInPictureViewController *)arg1;
- (void)pictureInPictureViewController:(PGPictureInPictureViewController *)arg1 updateHostedWindowSize:(struct CGSize)arg2 animationType:(long long)arg3 initialSpringVelocity:(double)arg4;
@end

