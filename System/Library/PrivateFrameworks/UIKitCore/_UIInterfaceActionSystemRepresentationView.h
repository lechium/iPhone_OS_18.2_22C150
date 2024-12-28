//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSSet, NSString, _UIInterfaceActionImagePropertyView, _UIInterfaceActionLabelsPropertyView;

__attribute__((visibility("hidden")))
@interface _UIInterfaceActionSystemRepresentationView
{
    _UIInterfaceActionImagePropertyView *_leadingImageView;	// 8 = 0x8
    _UIInterfaceActionImagePropertyView *_trailingImageView;	// 16 = 0x10
    _UIInterfaceActionLabelsPropertyView *_labelsView;	// 24 = 0x18
    NSSet *_viewsToDisplayWhenContentsVisible;	// 32 = 0x20
    NSSet *_displayedViews;	// 40 = 0x28
    NSArray *_displayedViewsSpacingConstraints;	// 48 = 0x30
    NSArray *_displayedViewsPositioningConstraints;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000002f6a76
@property(readonly, nonatomic) NSArray *displayedViewsPositioningConstraints; // @synthesize displayedViewsPositioningConstraints=_displayedViewsPositioningConstraints;
@property(readonly, nonatomic) NSArray *displayedViewsSpacingConstraints; // @synthesize displayedViewsSpacingConstraints=_displayedViewsSpacingConstraints;
@property(retain, nonatomic) NSSet *displayedViews; // @synthesize displayedViews=_displayedViews;
@property(retain, nonatomic) NSSet *viewsToDisplayWhenContentsVisible; // @synthesize viewsToDisplayWhenContentsVisible=_viewsToDisplayWhenContentsVisible;
@property(readonly, nonatomic) _UIInterfaceActionLabelsPropertyView *labelsView; // @synthesize labelsView=_labelsView;
@property(readonly, nonatomic) _UIInterfaceActionImagePropertyView *trailingImageView; // @synthesize trailingImageView=_trailingImageView;
@property(readonly, nonatomic) _UIInterfaceActionImagePropertyView *leadingImageView; // @synthesize leadingImageView=_leadingImageView;
- (_Bool)_isDisplayingTrailingImageView;	// IMP=0x00000000002f69c0
- (_Bool)_isDisplayingLeadingImageView;	// IMP=0x00000000002f6995
- (_Bool)_displayedViewsConstraintsNeedsLoading;	// IMP=0x00000000002f6971
- (void)_activateDisplayedViewsConstraints;	// IMP=0x00000000002f6818
- (void)_invalidateDisplayedViewsConstraints;	// IMP=0x00000000002f678b
- (void)_updateDisplayedViewsConstraintsVisualStyleConstants;	// IMP=0x00000000002f66db
- (id)_constraintsForHorizontallyCenteringLabelsView;	// IMP=0x00000000002f65d5
- (id)_constraintsForInsettingImageViewsLeadingAndTrailingEdge;	// IMP=0x00000000002f62a8
- (id)_constraintsForInsettingLabelsViewLeadingAndTrailingHorizontalEdgeReferenceExact:(_Bool)arg1;	// IMP=0x00000000002f6048
- (id)_constraintsForInsettingLabelsViewLeadingAndTrailingToImageViewsExact:(_Bool)arg1;	// IMP=0x00000000002f5e13
- (id)_constraintsForInsettingLabelsViewLeadingAndTrailing;	// IMP=0x00000000002f5ad8
- (id)_constraintsToEnsureContainerHeightTallEnoughForViews:(id)arg1;	// IMP=0x00000000002f5701
- (id)_constraintForBaselineAligningOrVerticallyCenteringImageViewToLabelsView:(id)arg1;	// IMP=0x00000000002f5617
- (id)_constraintForVerticallyCenteringLabelsView;	// IMP=0x00000000002f558d
- (void)_loadConstraintsForLabelsAndImagesDisplay;	// IMP=0x00000000002f5164
- (void)_loadConstraintsForLabelsOnlyDisplay;	// IMP=0x00000000002f4f63
- (void)_loadConstraintsForDisplayedViews;	// IMP=0x00000000002f4ed9
- (id)_horizontalEdgeReference;	// IMP=0x00000000002f4ec7
- (void)_reloadHierarchyWithViewsToDisplayWhenContentsVisible;	// IMP=0x00000000002f4d6c
- (void)_removeAllDisplayedViews;	// IMP=0x00000000002f4cf6
- (void)_arrangeDisplayedViews;	// IMP=0x00000000002f4cab
- (void)_reloadViewsToDisplayWhenContentsVisible;	// IMP=0x00000000002f4bb1
- (void)_applyVisualStyleToDisplayedViews;	// IMP=0x00000000002f4b9f
- (void)_applyVisualStyle;	// IMP=0x00000000002f4b5e
- (void)interfaceAction:(id)arg1 reloadDisplayedContentVisualStyle:(id)arg2;	// IMP=0x00000000002f4b2f
- (void)interfaceAction:(id)arg1 reloadDisplayedContentActionProperties:(id)arg2;	// IMP=0x00000000002f4a12
- (_Bool)_hasLoadedContents;	// IMP=0x00000000002f49fd
- (void)updateContentsInsertedIntoHierarchy;	// IMP=0x00000000002f49eb
- (void)loadContents;	// IMP=0x00000000002f4836
- (void)updateConstraints;	// IMP=0x00000000002f47f5
- (id)initWithAction:(id)arg1;	// IMP=0x00000000002f46af

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
