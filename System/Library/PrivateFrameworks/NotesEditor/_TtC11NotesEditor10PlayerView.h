//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC11NotesEditor10PlayerView : UIView
{
    MISSING_TYPE *titleLabel;	// 8 = 0x8
    MISSING_TYPE *subtitleLabel;	// 16 = 0x10
    MISSING_TYPE *playPauseButton;	// 24 = 0x18
    MISSING_TYPE *recordingPauseButton;	// 32 = 0x20
    MISSING_TYPE *recordingStopButton;	// 40 = 0x28
    MISSING_TYPE *backButton;	// 48 = 0x30
    MISSING_TYPE *forwardButton;	// 56 = 0x38
    MISSING_TYPE *buttonStack;	// 64 = 0x40
    MISSING_TYPE *labelColor;	// 72 = 0x48
    MISSING_TYPE *secondaryLabelColor;	// 80 = 0x50
    MISSING_TYPE *state;	// 88 = 0x58
    MISSING_TYPE *playbackController;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000000272a90
- (void)forward:(id)arg1;	// IMP=0x0000000000271780
- (void)stopRecording:(id)arg1;	// IMP=0x0000000000271710
- (void)playPause:(id)arg1;	// IMP=0x00000000002716a0
- (void)back:(id)arg1;	// IMP=0x0000000000271650
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000026f3c0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000026f110

@end
