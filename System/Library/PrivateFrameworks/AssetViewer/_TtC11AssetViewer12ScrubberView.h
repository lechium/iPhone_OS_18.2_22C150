//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC11AssetViewer12ScrubberView : UIView
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *currentTime;	// 24 = 0x18
    MISSING_TYPE *$__lazy_storage_$_playPauseButton;	// 40 = 0x28
    MISSING_TYPE *$__lazy_storage_$_skipBackButton;	// 48 = 0x30
    MISSING_TYPE *$__lazy_storage_$_skipForwardButton;	// 56 = 0x38
    MISSING_TYPE *$__lazy_storage_$_slider;	// 64 = 0x40
    MISSING_TYPE *$__lazy_storage_$_elapsedTimeLabel;	// 72 = 0x48
    MISSING_TYPE *$__lazy_storage_$_remainingTimeLabel;	// 80 = 0x50
    MISSING_TYPE *$__lazy_storage_$_elapsedTimeFormatter;	// 88 = 0x58
    MISSING_TYPE *$__lazy_storage_$_remainingTimeFormatter;	// 96 = 0x60
    MISSING_TYPE *link;	// 104 = 0x68
    MISSING_TYPE *timing;	// 112 = 0x70
    MISSING_TYPE *lastLayoutBounds;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x000000000004dfd0
- (void)layoutSubviews;	// IMP=0x0000000000050730
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004e080
- (void)dealloc;	// IMP=0x000000000004dfb0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000004dee0
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000051100
- (void)handleSkipForwardButton:(id)arg1;	// IMP=0x00000000000512f0
- (void)handleSkipBackButton:(id)arg1;	// IMP=0x00000000000512a0
- (void)handlePlayPauseButton:(id)arg1;	// IMP=0x0000000000051250
- (void)updateTimeLabelFonts;	// IMP=0x0000000000051570
- (void)stopScrubbing:(id)arg1;	// IMP=0x00000000000517f0
- (void)didScrub:(id)arg1;	// IMP=0x00000000000517a0
- (void)startScrubbing:(id)arg1;	// IMP=0x00000000000515a0

@end
