//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUViewControllerSpec.h"

@class PUOneUpViewControllerSpecChange, UIColor;

__attribute__((visibility("hidden")))
@interface PUOneUpViewControllerSpec : PUViewControllerSpec
{
    _Bool _isChromeVisible;	// 8 = 0x8
    _Bool _isContentLocked;	// 9 = 0x9
    _Bool _isPresentedForPreview;	// 10 = 0xa
    _Bool _isShowingPlayPauseButtonInBars;	// 11 = 0xb
    _Bool _shouldDisplayPeopleRow;	// 12 = 0xc
    _Bool _shouldPlaceButtonsInNavigationBar;	// 13 = 0xd
    _Bool _shouldUseCompactTitleView;	// 14 = 0xe
    _Bool _shouldUseContentGuideInsets;	// 15 = 0xf
    _Bool _shouldUseUserTransformTiles;	// 16 = 0x10
    _Bool _shouldDisplayBadges;	// 17 = 0x11
    _Bool _shouldDisplayAssetExplorerReviewScreenBadges;	// 18 = 0x12
    _Bool _shouldDisplayPlayButtons;	// 19 = 0x13
    _Bool _shouldDisplayProgressIndicators;	// 20 = 0x14
    _Bool _shouldAutoplayOnAppear;	// 21 = 0x15
    _Bool _shouldDisplayBufferingIndicators;	// 22 = 0x16
    _Bool _canDisplayLoadingIndicators;	// 23 = 0x17
    _Bool _shouldDisplayEmptyPlaceholder;	// 24 = 0x18
    _Bool _shouldUseCompactCommentsTitle;	// 25 = 0x19
    _Bool _shouldCounterrotateReviewScreenBars;	// 26 = 0x1a
    _Bool _shouldPinContentToTop;	// 27 = 0x1b
    _Bool _shouldLayoutReviewScreenControlBarVertically;	// 28 = 0x1c
    _Bool _shouldPlaceScrubberInScrubberBar;	// 29 = 0x1d
    _Bool _shouldDisplaySyndicationAttribution;	// 30 = 0x1e
    _Bool _prefersFloatingInfoPanel;	// 31 = 0x1f
    _Bool _hideNavigationBarWhenShowingAccessoryView;	// 32 = 0x20
    _Bool _hideScrubberWhenShowingAccessoryView;	// 33 = 0x21
    _Bool _prefersSquareImageInDetails;	// 34 = 0x22
    _Bool _hideStatusBarWhenShowingAccessoryView;	// 35 = 0x23
    _Bool _hideBadgesWhenShowingAccessoryView;	// 36 = 0x24
    unsigned long long _options;	// 40 = 0x28
    double _maximumToolbarHeight;	// 48 = 0x30
    double _maximumAccessoryToolbarHeight;	// 56 = 0x38
    UIColor *_backgroundColorOverride;	// 64 = 0x40
    long long _tileInitialContentMode;	// 72 = 0x48
    struct CGSize _progressIndicatorSize;	// 80 = 0x50
    struct CGSize _peopleRowSize;	// 96 = 0x60
    struct CGSize _bufferingIndicatorSize;	// 112 = 0x70
    struct CGSize _renderIndicatorSize;	// 128 = 0x80
    struct UIEdgeInsets _progressIndicatorContentInsets;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x000000000040b2c4
@property(nonatomic) _Bool hideBadgesWhenShowingAccessoryView; // @synthesize hideBadgesWhenShowingAccessoryView=_hideBadgesWhenShowingAccessoryView;
@property(nonatomic) _Bool hideStatusBarWhenShowingAccessoryView; // @synthesize hideStatusBarWhenShowingAccessoryView=_hideStatusBarWhenShowingAccessoryView;
@property(nonatomic) _Bool prefersSquareImageInDetails; // @synthesize prefersSquareImageInDetails=_prefersSquareImageInDetails;
@property(nonatomic) _Bool hideScrubberWhenShowingAccessoryView; // @synthesize hideScrubberWhenShowingAccessoryView=_hideScrubberWhenShowingAccessoryView;
@property(nonatomic) _Bool hideNavigationBarWhenShowingAccessoryView; // @synthesize hideNavigationBarWhenShowingAccessoryView=_hideNavigationBarWhenShowingAccessoryView;
@property(nonatomic) _Bool prefersFloatingInfoPanel; // @synthesize prefersFloatingInfoPanel=_prefersFloatingInfoPanel;
@property(readonly, nonatomic) _Bool shouldDisplaySyndicationAttribution; // @synthesize shouldDisplaySyndicationAttribution=_shouldDisplaySyndicationAttribution;
@property(nonatomic, setter=_setShouldPlaceScrubberInScrubberBar:) _Bool shouldPlaceScrubberInScrubberBar; // @synthesize shouldPlaceScrubberInScrubberBar=_shouldPlaceScrubberInScrubberBar;
@property(nonatomic, setter=_setShouldLayoutReviewScreenControlBarVertically:) _Bool shouldLayoutReviewScreenControlBarVertically; // @synthesize shouldLayoutReviewScreenControlBarVertically=_shouldLayoutReviewScreenControlBarVertically;
@property(nonatomic, setter=_setShouldPinContentToTop:) _Bool shouldPinContentToTop; // @synthesize shouldPinContentToTop=_shouldPinContentToTop;
@property(nonatomic, setter=_setShouldCounterrotateReviewScreenBars:) _Bool shouldCounterrotateReviewScreenBars; // @synthesize shouldCounterrotateReviewScreenBars=_shouldCounterrotateReviewScreenBars;
@property(nonatomic, setter=_setTileInitialContentMode:) long long tileInitialContentMode; // @synthesize tileInitialContentMode=_tileInitialContentMode;
@property(nonatomic, setter=_setShouldUseCompactCommentsTitle:) _Bool shouldUseCompactCommentsTitle; // @synthesize shouldUseCompactCommentsTitle=_shouldUseCompactCommentsTitle;
@property(readonly, nonatomic) struct CGSize renderIndicatorSize; // @synthesize renderIndicatorSize=_renderIndicatorSize;
@property(nonatomic, setter=_setBufferingIndicatorSize:) struct CGSize bufferingIndicatorSize; // @synthesize bufferingIndicatorSize=_bufferingIndicatorSize;
@property(nonatomic, setter=_setProgressIndicatorContentInsets:) struct UIEdgeInsets progressIndicatorContentInsets; // @synthesize progressIndicatorContentInsets=_progressIndicatorContentInsets;
@property(nonatomic, setter=_setPeopleRowSize:) struct CGSize peopleRowSize; // @synthesize peopleRowSize=_peopleRowSize;
@property(nonatomic, setter=_setProgressIndicatorSize:) struct CGSize progressIndicatorSize; // @synthesize progressIndicatorSize=_progressIndicatorSize;
@property(retain, nonatomic, setter=_setBackgroundColorOverride:) UIColor *backgroundColorOverride; // @synthesize backgroundColorOverride=_backgroundColorOverride;
@property(nonatomic, setter=_setShouldDisplayEmptyPlaceholder:) _Bool shouldDisplayEmptyPlaceholder; // @synthesize shouldDisplayEmptyPlaceholder=_shouldDisplayEmptyPlaceholder;
@property(nonatomic, setter=_setCanDisplayLoadingIndicators:) _Bool canDisplayLoadingIndicators; // @synthesize canDisplayLoadingIndicators=_canDisplayLoadingIndicators;
@property(nonatomic, setter=_setShouldDisplayBufferingIndicators:) _Bool shouldDisplayBufferingIndicators; // @synthesize shouldDisplayBufferingIndicators=_shouldDisplayBufferingIndicators;
@property(nonatomic, setter=_setShouldAutoplayOnAppear:) _Bool shouldAutoplayOnAppear; // @synthesize shouldAutoplayOnAppear=_shouldAutoplayOnAppear;
@property(nonatomic, setter=_setShouldDisplayProgressIndicators:) _Bool shouldDisplayProgressIndicators; // @synthesize shouldDisplayProgressIndicators=_shouldDisplayProgressIndicators;
@property(nonatomic, setter=_setShouldDisplayPlayButtons:) _Bool shouldDisplayPlayButtons; // @synthesize shouldDisplayPlayButtons=_shouldDisplayPlayButtons;
@property(nonatomic, setter=_setShouldDisplayAssetExplorerReviewScreenBadges:) _Bool shouldDisplayAssetExplorerReviewScreenBadges; // @synthesize shouldDisplayAssetExplorerReviewScreenBadges=_shouldDisplayAssetExplorerReviewScreenBadges;
@property(nonatomic, setter=_setShouldDisplayBadges:) _Bool shouldDisplayBadges; // @synthesize shouldDisplayBadges=_shouldDisplayBadges;
@property(nonatomic, setter=_setShouldUseUserTransformTiles:) _Bool shouldUseUserTransformTiles; // @synthesize shouldUseUserTransformTiles=_shouldUseUserTransformTiles;
@property(nonatomic, setter=_setShouldUseContentGuideInsets:) _Bool shouldUseContentGuideInsets; // @synthesize shouldUseContentGuideInsets=_shouldUseContentGuideInsets;
@property(nonatomic, setter=_setMaximumAccessoryToolbarHeight:) double maximumAccessoryToolbarHeight; // @synthesize maximumAccessoryToolbarHeight=_maximumAccessoryToolbarHeight;
@property(nonatomic, setter=_setMaximumToolbarHeight:) double maximumToolbarHeight; // @synthesize maximumToolbarHeight=_maximumToolbarHeight;
@property(nonatomic, setter=_setShouldUseCompactTitleView:) _Bool shouldUseCompactTitleView; // @synthesize shouldUseCompactTitleView=_shouldUseCompactTitleView;
@property(nonatomic, setter=_setShouldPlaceButtonsInNavigationBar:) _Bool shouldPlaceButtonsInNavigationBar; // @synthesize shouldPlaceButtonsInNavigationBar=_shouldPlaceButtonsInNavigationBar;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic, setter=setShouldDisplayPeopleRow:) _Bool shouldDisplayPeopleRow; // @synthesize shouldDisplayPeopleRow=_shouldDisplayPeopleRow;
@property(nonatomic, setter=setShowingPlayPauseButtonInBars:) _Bool isShowingPlayPauseButtonInBars; // @synthesize isShowingPlayPauseButtonInBars=_isShowingPlayPauseButtonInBars;
@property(nonatomic, setter=setPresentedForPreview:) _Bool isPresentedForPreview; // @synthesize isPresentedForPreview=_isPresentedForPreview;
@property(nonatomic, setter=setContentLocked:) _Bool isContentLocked; // @synthesize isContentLocked=_isContentLocked;
@property(nonatomic, setter=setChromeVisible:) _Bool isChromeVisible; // @synthesize isChromeVisible=_isChromeVisible;
- (void)_setHideBadgesWhenShowingAccessoryView:(_Bool)arg1;	// IMP=0x000000000040af3b
- (void)_setHideStatusBarWhenShowingAccessoryView:(_Bool)arg1;	// IMP=0x000000000040aecd
- (void)_setPrefersSquareImageInDetails:(_Bool)arg1;	// IMP=0x000000000040ae5f
- (void)setShouldDisplaySyndicationAttribution:(_Bool)arg1;	// IMP=0x000000000040ad15
- (void)setShouldPlaceScrubberInScrubberBar:(_Bool)arg1;	// IMP=0x000000000040aca7
- (void)_setRenderIndicatorSize:(struct CGSize)arg1;	// IMP=0x000000000040a933
- (void)_setShouldDisplayPeopleRow:(_Bool)arg1;	// IMP=0x000000000040a4e5
@property(readonly, nonatomic) struct CGSize playButtonSize;
- (void)updateIfNeeded;	// IMP=0x000000000040986f
@property(readonly, nonatomic) _Bool shouldShowCropButton;
@property(readonly, nonatomic) _Bool isInCompactLayoutStyle;
@property(readonly, nonatomic) _Bool shouldDisableNavigationBarsVisibility;
- (id)spotlightBackgroundColor;	// IMP=0x00000000004095f4
@property(readonly, nonatomic) _Bool shouldUseSpotlightStyling;
- (_Bool)_shouldForceBlackBackground;	// IMP=0x00000000004095c2
@property(readonly, nonatomic) _Bool shouldDisplayReviewScreenBars;
@property(readonly, nonatomic) struct CGSize assetExplorerReviewScreenProgressIndicatorSize;
@property(readonly, nonatomic) _Bool shouldDisplayAssetExplorerReviewScreenProgressIndicators;
@property(readonly, nonatomic) _Bool shouldDisplaySelectionIndicators;
@property(readonly, nonatomic) _Bool shouldShowTitleView;
@property(readonly, nonatomic) _Bool allowTapOnTitle;
@property(readonly, nonatomic) _Bool allowProgrammaticNavBackButton;
@property(readonly, nonatomic) _Bool allowSuggestions;
@property(readonly, nonatomic) _Bool allowAccessoryVisibility;
- (_Bool)_isAssetExplorerReviewScreen;	// IMP=0x00000000004094fa
@property(readonly, nonatomic) PUOneUpViewControllerSpecChange *currentChange;
- (id)newSpecChange;	// IMP=0x00000000004094ab
- (id)initWithOptions:(unsigned long long)arg1;	// IMP=0x000000000040944b

@end

