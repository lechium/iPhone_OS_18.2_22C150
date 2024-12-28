//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVButton, AVChromedLabel, AVControlOverflowButton, AVLayoutView, AVMobileChromeControlsStyleSheet, AVPlaybackControlsRoutePickerView, AVScrubber, AVTouchIgnoringView, NSArray, NSString, NSTimer, UILabel, UIView;
@protocol AVTransportControlsViewDelegate;

__attribute__((visibility("hidden")))
@interface AVTransportControlsView
{
    _Bool _doubleRowLayoutEnabled;	// 8 = 0x8
    _Bool _showsLoadingIndicator;	// 9 = 0x9
    _Bool _showsLiveStreamingControls;	// 10 = 0xa
    _Bool _liveStreamingControlsIncludeScrubber;	// 11 = 0xb
    _Bool _transportViewIncludesVolumeController;	// 12 = 0xc
    _Bool _collapsed;	// 13 = 0xd
    _Bool _included;	// 14 = 0xe
    _Bool _removed;	// 15 = 0xf
    _Bool _hasAlternateAppearance;	// 16 = 0x10
    _Bool _hasFullScreenAppearance;	// 17 = 0x11
    _Bool _showingScrubInstructions;	// 18 = 0x12
    _Bool _animatingScrubInstructions;	// 19 = 0x13
    float _scrubberValueWhenScrubInstructionsTimerBegan;	// 20 = 0x14
    id <AVTransportControlsViewDelegate> _delegate;	// 24 = 0x18
    AVMobileChromeControlsStyleSheet *_styleSheet;	// 32 = 0x20
    double _minimumRequiredWidth;	// 40 = 0x28
    AVScrubber *_scrubber;	// 48 = 0x30
    AVChromedLabel *_elapsedTimeLabel;	// 56 = 0x38
    AVChromedLabel *_timeRemainingLabel;	// 64 = 0x40
    AVButton *_standardPlayPauseButton;	// 72 = 0x48
    AVButton *_skipForwardButton;	// 80 = 0x50
    AVButton *_skipBackButton;	// 88 = 0x58
    AVButton *_startLeftwardContentTransitionButton;	// 96 = 0x60
    AVButton *_startRightwardContentTransitionButton;	// 104 = 0x68
    AVPlaybackControlsRoutePickerView *_routePickerView;	// 112 = 0x70
    AVButton *_mediaSelectionButton;	// 120 = 0x78
    AVControlOverflowButton *_controlOverflowButton;	// 128 = 0x80
    AVButton *_playbackSpeedButton;	// 136 = 0x88
    NSArray *_customItems;	// 144 = 0x90
    NSArray *_customMenuItemsViews;	// 152 = 0x98
    UIView *_customContentTransitioningInfoPanel;	// 160 = 0xa0
    AVLayoutView *_controlsLayoutView;	// 168 = 0xa8
    AVLayoutView *_detachedExtraContentLayoutView;	// 176 = 0xb0
    AVChromedLabel *_liveBroadcastLabel;	// 184 = 0xb8
    AVChromedLabel *_liveBroadcastScrubberLabel;	// 192 = 0xc0
    AVTouchIgnoringView *_embeddedExtraContentContainer;	// 200 = 0xc8
    UILabel *_scrubInstructionsLabel;	// 208 = 0xd0
    AVChromedLabel *_detachedScrubInstructionsBackdropLabel;	// 216 = 0xd8
    NSTimer *_scrubInstructionsTimer;	// 224 = 0xe0
    AVTouchIgnoringView *_flexibleViewAfterRoutePickerView;	// 232 = 0xe8
    AVTouchIgnoringView *_flexibleViewAfterSkipForwardButtons;	// 240 = 0xf0
    struct CGSize _extrinsicContentSize;	// 248 = 0xf8
}

- (void).cxx_destruct;	// IMP=0x000000000008b76d
@property(nonatomic, getter=isAnimatingScrubInstructions) _Bool animatingScrubInstructions; // @synthesize animatingScrubInstructions=_animatingScrubInstructions;
@property(nonatomic, getter=isShowingScrubInstructions) _Bool showingScrubInstructions; // @synthesize showingScrubInstructions=_showingScrubInstructions;
@property(nonatomic) _Bool hasFullScreenAppearance; // @synthesize hasFullScreenAppearance=_hasFullScreenAppearance;
@property(nonatomic) _Bool hasAlternateAppearance; // @synthesize hasAlternateAppearance=_hasAlternateAppearance;
@property(nonatomic, getter=isRemoved) _Bool removed; // @synthesize removed=_removed;
@property(nonatomic, getter=isIncluded) _Bool included; // @synthesize included=_included;
@property(nonatomic, getter=isCollapsed) _Bool collapsed; // @synthesize collapsed=_collapsed;
@property(nonatomic) struct CGSize extrinsicContentSize; // @synthesize extrinsicContentSize=_extrinsicContentSize;
@property(retain, nonatomic) AVTouchIgnoringView *flexibleViewAfterSkipForwardButtons; // @synthesize flexibleViewAfterSkipForwardButtons=_flexibleViewAfterSkipForwardButtons;
@property(retain, nonatomic) AVTouchIgnoringView *flexibleViewAfterRoutePickerView; // @synthesize flexibleViewAfterRoutePickerView=_flexibleViewAfterRoutePickerView;
@property(nonatomic) float scrubberValueWhenScrubInstructionsTimerBegan; // @synthesize scrubberValueWhenScrubInstructionsTimerBegan=_scrubberValueWhenScrubInstructionsTimerBegan;
@property(nonatomic) __weak NSTimer *scrubInstructionsTimer; // @synthesize scrubInstructionsTimer=_scrubInstructionsTimer;
@property(readonly, nonatomic) AVChromedLabel *detachedScrubInstructionsBackdropLabel; // @synthesize detachedScrubInstructionsBackdropLabel=_detachedScrubInstructionsBackdropLabel;
@property(readonly, nonatomic) UILabel *scrubInstructionsLabel; // @synthesize scrubInstructionsLabel=_scrubInstructionsLabel;
@property(readonly, nonatomic) AVTouchIgnoringView *embeddedExtraContentContainer; // @synthesize embeddedExtraContentContainer=_embeddedExtraContentContainer;
@property(readonly, nonatomic) AVChromedLabel *liveBroadcastScrubberLabel; // @synthesize liveBroadcastScrubberLabel=_liveBroadcastScrubberLabel;
@property(readonly, nonatomic) AVChromedLabel *liveBroadcastLabel; // @synthesize liveBroadcastLabel=_liveBroadcastLabel;
@property(retain, nonatomic) AVLayoutView *detachedExtraContentLayoutView; // @synthesize detachedExtraContentLayoutView=_detachedExtraContentLayoutView;
@property(readonly, nonatomic) AVLayoutView *controlsLayoutView; // @synthesize controlsLayoutView=_controlsLayoutView;
@property(retain, nonatomic) UIView *customContentTransitioningInfoPanel; // @synthesize customContentTransitioningInfoPanel=_customContentTransitioningInfoPanel;
@property(copy, nonatomic) NSArray *customMenuItemsViews; // @synthesize customMenuItemsViews=_customMenuItemsViews;
@property(copy, nonatomic) NSArray *customItems; // @synthesize customItems=_customItems;
@property(readonly, nonatomic) AVButton *playbackSpeedButton; // @synthesize playbackSpeedButton=_playbackSpeedButton;
@property(readonly, nonatomic) AVControlOverflowButton *controlOverflowButton; // @synthesize controlOverflowButton=_controlOverflowButton;
@property(readonly, nonatomic) AVButton *mediaSelectionButton; // @synthesize mediaSelectionButton=_mediaSelectionButton;
@property(readonly, nonatomic) AVPlaybackControlsRoutePickerView *routePickerView; // @synthesize routePickerView=_routePickerView;
@property(readonly, nonatomic) AVButton *startRightwardContentTransitionButton; // @synthesize startRightwardContentTransitionButton=_startRightwardContentTransitionButton;
@property(readonly, nonatomic) AVButton *startLeftwardContentTransitionButton; // @synthesize startLeftwardContentTransitionButton=_startLeftwardContentTransitionButton;
@property(readonly, nonatomic) AVButton *skipBackButton; // @synthesize skipBackButton=_skipBackButton;
@property(readonly, nonatomic) AVButton *skipForwardButton; // @synthesize skipForwardButton=_skipForwardButton;
@property(readonly, nonatomic) AVButton *standardPlayPauseButton; // @synthesize standardPlayPauseButton=_standardPlayPauseButton;
@property(readonly, nonatomic) AVChromedLabel *timeRemainingLabel; // @synthesize timeRemainingLabel=_timeRemainingLabel;
@property(readonly, nonatomic) AVChromedLabel *elapsedTimeLabel; // @synthesize elapsedTimeLabel=_elapsedTimeLabel;
@property(readonly, nonatomic) AVScrubber *scrubber; // @synthesize scrubber=_scrubber;
@property(readonly, nonatomic) double minimumRequiredWidth; // @synthesize minimumRequiredWidth=_minimumRequiredWidth;
@property(nonatomic) _Bool transportViewIncludesVolumeController; // @synthesize transportViewIncludesVolumeController=_transportViewIncludesVolumeController;
@property(nonatomic) _Bool liveStreamingControlsIncludeScrubber; // @synthesize liveStreamingControlsIncludeScrubber=_liveStreamingControlsIncludeScrubber;
@property(nonatomic) _Bool showsLiveStreamingControls; // @synthesize showsLiveStreamingControls=_showsLiveStreamingControls;
@property(nonatomic) _Bool showsLoadingIndicator; // @synthesize showsLoadingIndicator=_showsLoadingIndicator;
@property(nonatomic, getter=isDoubleRowLayoutEnabled) _Bool doubleRowLayoutEnabled; // @synthesize doubleRowLayoutEnabled=_doubleRowLayoutEnabled;
@property(retain, nonatomic) AVMobileChromeControlsStyleSheet *styleSheet; // @synthesize styleSheet=_styleSheet;
@property(nonatomic) __weak id <AVTransportControlsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_subviewIsCustomMenuItemView:(id)arg1;	// IMP=0x000000000008b321
@property(readonly, nonatomic) _Bool canShowScrubInstructions;
@property(readonly, nonatomic) NSArray *doubleRowViews;
@property(readonly, nonatomic) NSArray *singleRowViews;
- (void)_updateCustomContentTransitioningInfoPanelLayout;	// IMP=0x000000000008aa7f
- (void)_updateVolumeControllerLayout;	// IMP=0x000000000008aa79
- (id)_scrubInstructionsAttributedText;	// IMP=0x000000000008a7fa
- (void)_updateScrubInstructionsFrame;	// IMP=0x000000000008a373
- (void)_updateScrubInstructionsLabelsText;	// IMP=0x000000000008a19e
- (void)_showScrubInstructions;	// IMP=0x0000000000089f7a
- (void)_updateFontSizes;	// IMP=0x0000000000089d3b
- (unsigned long long)_layoutItemDisplayPriorityForSubview:(id)arg1;	// IMP=0x0000000000089a16
- (double)_rowSpacingForDoubleRowLayoutAfterRow:(unsigned long long)arg1;	// IMP=0x000000000008988b
- (void)_layoutSingleRowViews;	// IMP=0x0000000000089129
- (void)_layoutDoubleRowViews;	// IMP=0x0000000000088206
- (double)_doubleRowLayoutSpacingAfterSubview:(id)arg1;	// IMP=0x0000000000087d09
- (double)_singeRowLayoutSpacingAfterSubview:(id)arg1;	// IMP=0x0000000000087922
- (void)endScrubbing:(id)arg1;	// IMP=0x00000000000877bd
- (void)scrubberValueChanged:(id)arg1;	// IMP=0x0000000000087738
- (void)beginScrubbing:(id)arg1;	// IMP=0x0000000000087664
@property(readonly, nonatomic, getter=isCollapsedOrExcluded) _Bool collapsedOrExcluded;
- (void)scrubberSlowKnobMovementDetected:(id)arg1;	// IMP=0x00000000000873a9
- (void)avkit_reevaluateHiddenStateOfItem:(id)arg1;	// IMP=0x000000000008728c
- (void)layoutSubviews;	// IMP=0x00000000000868d2
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000086891
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000086535
- (double)layoutHeightThatFitsRowsStartingWithRow:(unsigned long long)arg1;	// IMP=0x00000000000864de
- (void)reevaluateHiddenStateOfAllItems;	// IMP=0x00000000000864a1
- (float)volumeControlsControllerTransportBarHeight:(id)arg1;	// IMP=0x0000000000085fe5
- (id)initWithFrame:(struct CGRect)arg1 styleSheet:(id)arg2;	// IMP=0x00000000000854ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
