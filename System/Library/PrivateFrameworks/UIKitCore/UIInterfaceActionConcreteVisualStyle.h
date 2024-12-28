//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionConcreteVisualStyle : NSObject
{
}

- (id)newRepresentationViewForAction:(id)arg1;	// IMP=0x00000000002d674a
- (void)configureForDismissingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2;	// IMP=0x00000000002d6744
- (void)configureForPresentingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2;	// IMP=0x00000000002d673e
- (void)configureAttributesForActionRepresentationView:(id)arg1 actionViewState:(id)arg2;	// IMP=0x00000000002d6738
- (id)actionPropertiesAffectingActionRepresentationViewStyling;	// IMP=0x00000000002d672b
- (void)configureAttributesForActionScrollView:(id)arg1 groupViewState:(id)arg2;	// IMP=0x00000000002d6725
- (id)actionGroupPropertiesAffectingActionsScrollViewStyling;	// IMP=0x00000000002d6718
- (void)configureAttributesForImageView:(id)arg1 imageProperty:(id)arg2 actionViewState:(id)arg3;	// IMP=0x00000000002d6712
- (id)actionPropertiesAffectingImageViewStyling;	// IMP=0x00000000002d6705
- (void)configureAttributesForTitleLabel:(id)arg1 classificationLabel:(id)arg2 actionViewState:(id)arg3;	// IMP=0x00000000002d66ff
- (id)actionPropertiesAffectingLabelStyling;	// IMP=0x00000000002d66f2
- (double)actionSpacingForGroupViewState:(id)arg1;	// IMP=0x00000000002d66e9
- (id)actionImageViewTintColorForImageProperty:(id)arg1 actionViewState:(id)arg2;	// IMP=0x00000000002d66e1
- (id)actionClassificationLabelColorForViewState:(id)arg1;	// IMP=0x00000000002d66cf
- (id)actionClassificationLabelFontForViewState:(id)arg1;	// IMP=0x00000000002d66bd
- (id)actionTitleLabelCompositingFilterForViewState:(id)arg1;	// IMP=0x00000000002d66b5
- (id)actionTitleLabelColorForViewState:(id)arg1;	// IMP=0x00000000002d669c
- (id)actionTitleLabelFontForViewState:(id)arg1;	// IMP=0x00000000002d6679
- (id)newActionBackgroundViewForViewState:(id)arg1;	// IMP=0x00000000002d6671
- (id)newSectionSeparatorViewForGroupViewState:(id)arg1;	// IMP=0x00000000002d6669
- (id)newActionSeparatorViewForGroupViewState:(id)arg1;	// IMP=0x00000000002d6661
- (id)newGroupBackgroundViewWithGroupViewState:(id)arg1;	// IMP=0x00000000002d6659
- (id)actionViewStateForAttachingToActionRepresentationView:(id)arg1;	// IMP=0x00000000002d6651
- (double)actionTitleLabelMinimumScaleFactor;	// IMP=0x00000000002d6643
- (_Bool)selectByIndirectPointerTouchRequired;	// IMP=0x00000000002d663b
- (_Bool)selectionFeedbackEnabled;	// IMP=0x00000000002d6633
- (_Bool)selectByPressGestureRequired;	// IMP=0x00000000002d662b
- (struct UIEdgeInsets)actionSequenceEdgeInsets;	// IMP=0x00000000002d6618
- (double)actionSectionSpacing;	// IMP=0x00000000002d660f
- (_Bool)allowsZeroSizedSectionSeparators;	// IMP=0x00000000002d6607
- (double)verticalImageContentSpacing;	// IMP=0x00000000002d65fe
- (double)horizontalImageContentSpacing;	// IMP=0x00000000002d65f5
- (struct CGSize)minimumActionContentSize;	// IMP=0x00000000002d65df
- (struct UIEdgeInsets)contentMargin;	// IMP=0x00000000002d65cc
- (double)contentCornerRadius;	// IMP=0x00000000002d65c3
- (struct CGSize)maximumActionGroupContentSize;	// IMP=0x00000000002d6539
- (id)defaultScreen;	// IMP=0x00000000002d6520
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002d650e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
