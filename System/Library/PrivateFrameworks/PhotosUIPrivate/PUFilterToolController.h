//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CEKBadgeTextView, CEKSlider, CEKWheelScrubberView, CIContext, CIImage, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSNumberFormatter, NSString;

__attribute__((visibility("hidden")))
@interface PUFilterToolController
{
    CEKBadgeTextView *_filterBadgeView;	// 16 = 0x10
    CEKWheelScrubberView *_scrubberView;	// 24 = 0x18
    CEKSlider *_slider;	// 32 = 0x20
    _Bool _isSliderTouchDown;	// 40 = 0x28
    _Bool _isScrubbing;	// 41 = 0x29
    _Bool _isInteractingWithWheelScrubber;	// 42 = 0x2a
    CIImage *_inputImage;	// 48 = 0x30
    _Bool _monitorAdjustmentsForCache;	// 56 = 0x38
    NSMutableDictionary *_filterThumbnailCache;	// 64 = 0x40
    NSMutableDictionary *_filterIntensityCache;	// 72 = 0x48
    NSMutableArray *_toolConstraints;	// 80 = 0x50
    NSMutableArray *_scrubberViewConstraints;	// 88 = 0x58
    NSMutableArray *_filterBadgeViewConstraints;	// 96 = 0x60
    NSLayoutConstraint *_filterBadgeWidthConstraint;	// 104 = 0x68
    NSLayoutConstraint *_filterBadgeHeightConstraint;	// 112 = 0x70
    NSNumberFormatter *_formatter;	// 120 = 0x78
    CIContext *_context;	// 128 = 0x80
    CDStruct_1b6d18a9 _thumbnailTime;	// 136 = 0x88
    CDUnknownBlockType _willLoadFilterThumbnails;	// 160 = 0xa0
    CDUnknownBlockType _didFinishLoadingFilterThumbnails;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x000000000057a290
@property(copy, nonatomic) CDUnknownBlockType didFinishLoadingFilterThumbnails; // @synthesize didFinishLoadingFilterThumbnails=_didFinishLoadingFilterThumbnails;
@property(copy, nonatomic) CDUnknownBlockType willLoadFilterThumbnails; // @synthesize willLoadFilterThumbnails=_willLoadFilterThumbnails;
- (void)sliderDidEndScrolling:(id)arg1;	// IMP=0x000000000057a1ce
- (void)sliderWillEndScrolling:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x000000000057a183
- (void)sliderDidScroll:(id)arg1;	// IMP=0x000000000057a067
- (void)sliderWillBeginScrolling:(id)arg1;	// IMP=0x000000000057a005
- (void)_sliderDidEndScrolling;	// IMP=0x0000000000579fc7
- (void)_updateSelectionTextAnimate:(_Bool)arg1;	// IMP=0x0000000000579edd
- (void)_updateCompositionControllerWithEffect:(id)arg1;	// IMP=0x0000000000579d48
- (void)wheelScrubberViewDidEndScrolling:(id)arg1;	// IMP=0x0000000000579c43
- (void)wheelScrubberViewWillEndScrolling:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x0000000000579c2f
- (void)wheelScrubberViewWillBeginScrolling:(id)arg1;	// IMP=0x0000000000579bcf
- (void)wheelScrubberViewWillBeginDragging:(id)arg1;	// IMP=0x0000000000579bb8
- (void)wheelScrubberView:(id)arg1 updateCell:(id)arg2 forItemAtIndex:(unsigned long long)arg3;	// IMP=0x0000000000579960
- (void)wheelScrubberViewDidChangeSelectedIndex:(id)arg1;	// IMP=0x00000000005798e1
- (void)_updateFilterIntensityCache;	// IMP=0x00000000005797dc
- (void)_setShowSlider:(_Bool)arg1 animate:(_Bool)arg2;	// IMP=0x000000000057966a
- (void)_updateBadgeAndSliderWithEffect:(id)arg1;	// IMP=0x0000000000579400
- (long long)_indexForFilterId:(id)arg1;	// IMP=0x0000000000579360
- (id)_effectForIndex:(long long)arg1;	// IMP=0x00000000005792e5
- (double)_adjustedFilterIntensity;	// IMP=0x000000000057928e
- (id)_adjustedFilterName;	// IMP=0x000000000057923e
- (id)_effectAdjustment;	// IMP=0x0000000000579155
- (long long)_adjustedFilterIndex;	// IMP=0x000000000057905e
- (long long)toolControllerTag;	// IMP=0x0000000000579053
- (_Bool)wantsZoomAndPanEnabled;	// IMP=0x000000000057904b
- (id)centerToolbarView;	// IMP=0x0000000000578f2a
- (_Bool)toolbarGlyphUsesHierarchicalColor;	// IMP=0x0000000000578f22
- (id)selectedToolbarIconGlyphName;	// IMP=0x0000000000578f15
- (id)toolbarIconGlyphName;	// IMP=0x0000000000578f08
- (id)localizedName;	// IMP=0x0000000000578ef7
- (void)_updateScrubberLayout;	// IMP=0x0000000000578e47
- (void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000578d48
- (void)_updateBadgeConstraints;	// IMP=0x0000000000578742
- (void)_updateToolConstraints;	// IMP=0x0000000000577308
- (void)updateViewConstraints;	// IMP=0x00000000005772b5
- (void)_setThumbnail:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000577298
- (void)_updateCacheWithCIImage:(id)arg1;	// IMP=0x0000000000576fb9
- (void)_prepareThumbnailImagesIfNeeded;	// IMP=0x0000000000576ab0
- (void)_updateWithCompositionController:(id)arg1;	// IMP=0x00000000005769bf
- (void)compositionControllerDidChangeForAdjustments:(id)arg1;	// IMP=0x000000000057679d
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000005766eb
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000576685
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000005765f4
- (void)didResignActiveTool;	// IMP=0x00000000005765b8
- (void)willBecomeActiveTool;	// IMP=0x000000000057653c
- (void)decreaseSliderValue:(_Bool)arg1;	// IMP=0x00000000005764ea
- (void)increaseSliderValue:(_Bool)arg1;	// IMP=0x0000000000576495
- (_Bool)wantsSliderKeyControl;	// IMP=0x000000000057648d
- (void)decreaseScrubberValue:(_Bool)arg1;	// IMP=0x0000000000576418
- (void)increaseScrubberValue:(_Bool)arg1;	// IMP=0x0000000000576370
- (_Bool)wantsScrubberKeyControl;	// IMP=0x0000000000576368
- (void)viewDidLoad;	// IMP=0x000000000057629c
- (void)_setupSlider;	// IMP=0x00000000005761b0
- (void)_setupFilters;	// IMP=0x0000000000575f38
- (void)_setupScrubber;	// IMP=0x0000000000575d9f
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000575d5b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000575d17

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
