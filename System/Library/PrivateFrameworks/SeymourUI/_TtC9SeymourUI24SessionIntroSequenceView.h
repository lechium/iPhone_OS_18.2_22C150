//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI24SessionIntroSequenceView : UIView
{
    MISSING_TYPE *presenter;	// 8 = 0x8
    MISSING_TYPE *countdownPosition;	// 16 = 0x10
    MISSING_TYPE *countdownView;	// 24 = 0x18
    MISSING_TYPE *playButtonView;	// 40 = 0x28
    MISSING_TYPE *spinnerView;	// 56 = 0x38
    MISSING_TYPE *playPauseGestureRecognizer;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000510290
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000510230
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000510040
- (void)didTouchUpOutsidePlayIcon:(id)arg1;	// IMP=0x000000000050fd90
- (void)didTouchUpInsidePlayIcon:(id)arg1;	// IMP=0x000000000050fd40
- (void)didTouchDownPlayIcon:(id)arg1;	// IMP=0x000000000050fc40
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000050fc20
- (void)handlePlayPauseGesture;	// IMP=0x000000000050f9e0
@property(nonatomic) struct CGRect bounds;
@property(nonatomic) struct CGRect frame;

@end

