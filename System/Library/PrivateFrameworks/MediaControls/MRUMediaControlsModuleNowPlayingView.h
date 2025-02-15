//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class CCUIModuleContentMetrics, MRUArtworkView, MRUMediaControlsModuleRouteButton, MRUMediaModuleBackdropView, MRUMediaSuggestionsView, MRUNowPlayingHeaderView, MRUNowPlayingTimeControlsView, MRUNowPlayingTransportControlsView, MRUNowPlayingVolumeControlsView, MRUVisualStylingProvider, NSArray;

__attribute__((visibility("hidden")))
@interface MRUMediaControlsModuleNowPlayingView : UIView
{
    _Bool _onScreen;	// 8 = 0x8
    _Bool _showSuggestionsView;	// 9 = 0x9
    _Bool _resizing;	// 10 = 0xa
    MRUArtworkView *_artworkView;	// 16 = 0x10
    MRUNowPlayingHeaderView *_headerView;	// 24 = 0x18
    MRUNowPlayingTimeControlsView *_timeControlsView;	// 32 = 0x20
    MRUNowPlayingTransportControlsView *_transportControlsView;	// 40 = 0x28
    MRUNowPlayingVolumeControlsView *_volumeControlsView;	// 48 = 0x30
    NSArray *_routingButtons;	// 56 = 0x38
    MRUMediaSuggestionsView *_suggestionsView;	// 64 = 0x40
    MRUVisualStylingProvider *_stylingProvider;	// 72 = 0x48
    long long _layout;	// 80 = 0x50
    CCUIModuleContentMetrics *_contentMetrics;	// 88 = 0x58
    MRUMediaControlsModuleRouteButton *_upperRoutingButton;	// 96 = 0x60
    MRUMediaControlsModuleRouteButton *_lowerRoutingButton;	// 104 = 0x68
    MRUMediaModuleBackdropView *_backdropView;	// 112 = 0x70
    struct UIEdgeInsets _contentEdgeInsets;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000000000de1d5
@property(retain, nonatomic) MRUMediaModuleBackdropView *backdropView; // @synthesize backdropView=_backdropView;
@property(readonly, nonatomic) MRUMediaControlsModuleRouteButton *lowerRoutingButton; // @synthesize lowerRoutingButton=_lowerRoutingButton;
@property(readonly, nonatomic) MRUMediaControlsModuleRouteButton *upperRoutingButton; // @synthesize upperRoutingButton=_upperRoutingButton;
@property(nonatomic) _Bool resizing; // @synthesize resizing=_resizing;
@property(retain, nonatomic) CCUIModuleContentMetrics *contentMetrics; // @synthesize contentMetrics=_contentMetrics;
@property(nonatomic) _Bool showSuggestionsView; // @synthesize showSuggestionsView=_showSuggestionsView;
@property(nonatomic, getter=isOnScreen) _Bool onScreen; // @synthesize onScreen=_onScreen;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(nonatomic) long long layout; // @synthesize layout=_layout;
@property(retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
@property(retain, nonatomic) MRUMediaSuggestionsView *suggestionsView; // @synthesize suggestionsView=_suggestionsView;
@property(readonly, nonatomic) NSArray *routingButtons; // @synthesize routingButtons=_routingButtons;
@property(readonly, nonatomic) MRUNowPlayingVolumeControlsView *volumeControlsView; // @synthesize volumeControlsView=_volumeControlsView;
@property(readonly, nonatomic) MRUNowPlayingTransportControlsView *transportControlsView; // @synthesize transportControlsView=_transportControlsView;
@property(readonly, nonatomic) MRUNowPlayingTimeControlsView *timeControlsView; // @synthesize timeControlsView=_timeControlsView;
@property(readonly, nonatomic) MRUNowPlayingHeaderView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) MRUArtworkView *artworkView; // @synthesize artworkView=_artworkView;
- (double)backdropAlphaWithRatio:(struct CGPoint)arg1;	// IMP=0x00000000000de051
- (double)resizingAlphaWithRatio:(struct CGPoint)arg1;	// IMP=0x00000000000ddfff
- (double)resizingThresholdForLayout:(long long)arg1;	// IMP=0x00000000000ddfdd
- (struct CGPoint)resizingRatioForForLayout:(long long)arg1;	// IMP=0x00000000000dde5e
- (struct CGRect)suggestionsFrame;	// IMP=0x00000000000ddcac
- (void)updateVisibility;	// IMP=0x00000000000dd53d
- (void)updateOnScreen;	// IMP=0x00000000000dd3cc
- (void)updateLayout;	// IMP=0x00000000000dd00f
- (double)contentScaleFactor;	// IMP=0x00000000000dcfe3
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000dc97c
- (void)layoutSubviews;	// IMP=0x00000000000d7a5f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000d75bc

@end

