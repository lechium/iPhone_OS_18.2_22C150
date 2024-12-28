//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MRUHapticView, MRUNowPlayingLabelView, MRUTransportButton, MRUVisualStylingProvider, MRUWaveformView;

__attribute__((visibility("hidden")))
@interface MRUNowPlayingHeaderView : UIView
{
    _Bool _showTransportButton;	// 8 = 0x8
    _Bool _showRoutingButton;	// 9 = 0x9
    _Bool _showWaveform;	// 10 = 0xa
    _Bool _showHaptic;	// 11 = 0xb
    MRUWaveformView *_waveformView;	// 16 = 0x10
    MRUHapticView *_hapticView;	// 24 = 0x18
    MRUNowPlayingLabelView *_labelView;	// 32 = 0x20
    MRUTransportButton *_routingButton;	// 40 = 0x28
    MRUTransportButton *_transportButton;	// 48 = 0x30
    MRUVisualStylingProvider *_stylingProvider;	// 56 = 0x38
    long long _layout;	// 64 = 0x40
    long long _textAlignment;	// 72 = 0x48
    double _textCenterOffsetY;	// 80 = 0x50
    double _contentScale;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000017666
@property(nonatomic) double contentScale; // @synthesize contentScale=_contentScale;
@property(nonatomic) double textCenterOffsetY; // @synthesize textCenterOffsetY=_textCenterOffsetY;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) _Bool showHaptic; // @synthesize showHaptic=_showHaptic;
@property(nonatomic) _Bool showWaveform; // @synthesize showWaveform=_showWaveform;
@property(nonatomic) _Bool showRoutingButton; // @synthesize showRoutingButton=_showRoutingButton;
@property(nonatomic) _Bool showTransportButton; // @synthesize showTransportButton=_showTransportButton;
@property(nonatomic) long long layout; // @synthesize layout=_layout;
@property(retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
@property(readonly, nonatomic) MRUTransportButton *transportButton; // @synthesize transportButton=_transportButton;
@property(readonly, nonatomic) MRUTransportButton *routingButton; // @synthesize routingButton=_routingButton;
@property(readonly, nonatomic) MRUNowPlayingLabelView *labelView; // @synthesize labelView=_labelView;
@property(retain, nonatomic) MRUHapticView *hapticView; // @synthesize hapticView=_hapticView;
@property(retain, nonatomic) MRUWaveformView *waveformView; // @synthesize waveformView=_waveformView;
- (void)updateVisibility;	// IMP=0x00000000000172c8
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000016e47
- (void)layoutSubviews;	// IMP=0x0000000000015eec
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000015cc0

@end
