//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE;

@interface _TtC7NewsUI231AudioTrackDetailsViewController : UIViewController
{
    MISSING_TYPE *styler;	// 8 = 0x8
    MISSING_TYPE *eventHandler;	// 48 = 0x30
    MISSING_TYPE *trackView;	// 64 = 0x40
    MISSING_TYPE *track;	// 0 = 0x0
    MISSING_TYPE *playbackState;	// 0 = 0x0
    MISSING_TYPE *listeningProgressManager;	// 0 = 0x0
    MISSING_TYPE *logoCache;	// 0 = 0x0
    MISSING_TYPE *artworkCache;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000000070a980
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000070a920
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000070a7e0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000070c300
- (void)viewDidLayoutSubviews;	// IMP=0x000000000070c270
- (void)viewDidLoad;	// IMP=0x000000000070b960
- (void)loadView;	// IMP=0x000000000070ad50
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x000000000070c3b0
- (void)didTapCloseButton;	// IMP=0x000000000070c860
- (void)didTapReadButton;	// IMP=0x000000000070c790
- (void)didTapPlayPauseButton;	// IMP=0x000000000070c6c0
- (_Bool)accessibilityPerformEscape;	// IMP=0x000000000070c8a0

@end
