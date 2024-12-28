//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MTVisualStylingProvider, MediaControlsRelativeVolumeStepper, MediaControlsVolumeSlider, NSString;

__attribute__((visibility("hidden")))
@interface MediaControlsVolumeContainerView : UIView
{
    _Bool _transitioning;	// 8 = 0x8
    _Bool _onScreen;	// 9 = 0x9
    unsigned int _volumeCapabilities;	// 12 = 0xc
    MediaControlsVolumeSlider *_volumeSlider;	// 16 = 0x10
    long long _style;	// 24 = 0x18
    MTVisualStylingProvider *_visualStylingProvider;	// 32 = 0x20
    MediaControlsRelativeVolumeStepper *_volumeStepper;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000650f0
@property(nonatomic) unsigned int volumeCapabilities; // @synthesize volumeCapabilities=_volumeCapabilities;
@property(retain, nonatomic) MediaControlsRelativeVolumeStepper *volumeStepper; // @synthesize volumeStepper=_volumeStepper;
@property(retain, nonatomic) MTVisualStylingProvider *visualStylingProvider; // @synthesize visualStylingProvider=_visualStylingProvider;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic, getter=isOnScreen) _Bool onScreen; // @synthesize onScreen=_onScreen;
@property(nonatomic, getter=isTransitioning) _Bool transitioning; // @synthesize transitioning=_transitioning;
@property(retain, nonatomic) MediaControlsVolumeSlider *volumeSlider; // @synthesize volumeSlider=_volumeSlider;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000065046
- (void)_updateVolumeCapabilities;	// IMP=0x0000000000064f5a
- (void)_updateVolumeStyle;	// IMP=0x0000000000064e72
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0000000000064ce9
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000064b62
- (void)didMoveToWindow;	// IMP=0x0000000000064a27
- (void)didMoveToSuperview;	// IMP=0x00000000000649e6
- (void)layoutSubviews;	// IMP=0x00000000000645e2
- (void)dealloc;	// IMP=0x0000000000064560
- (id)initWithFrame:(struct CGRect)arg1 slider:(id)arg2;	// IMP=0x00000000000643f3
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000064374

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
