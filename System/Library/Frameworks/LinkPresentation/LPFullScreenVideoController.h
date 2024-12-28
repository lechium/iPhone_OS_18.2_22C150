//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVPlayer, AVPlayerController, LPAVPlayerViewController, LPVisualMediaView, NSString, __AVPlayerLayerView;

__attribute__((visibility("hidden")))
@interface LPFullScreenVideoController : NSObject
{
    LPVisualMediaView *_sourceView;	// 8 = 0x8
    LPAVPlayerViewController *_playerViewController;	// 16 = 0x10
    __AVPlayerLayerView *_playerLayerView;	// 24 = 0x18
    AVPlayerController *_playerController;	// 32 = 0x20
    AVPlayer *_player;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000007898c
- (_Bool)playerViewControllerShouldMuteVolumeForFullScreenDismissalTransition:(id)arg1;	// IMP=0x0000000000078984
- (void)didCompleteDismissal;	// IMP=0x00000000000788cd
- (void)playerViewController:(id)arg1 willEndFullScreenPresentationWithAnimationCoordinator:(id)arg2;	// IMP=0x000000000007876a
- (void)playerViewController:(id)arg1 willBeginFullScreenPresentationWithAnimationCoordinator:(id)arg2;	// IMP=0x0000000000078754
- (void)dismiss;	// IMP=0x00000000000786de
- (void)present;	// IMP=0x000000000007866a
- (void)setUpFullScreenVideoViewControllerIfNeeded;	// IMP=0x0000000000078569
- (void)prepareForDisplayWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000007850e
- (id)initWithPlayer:(id)arg1 sourceView:(id)arg2;	// IMP=0x00000000000782f6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
