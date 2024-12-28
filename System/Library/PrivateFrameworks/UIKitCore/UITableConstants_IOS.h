//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UITableConstants_IOS : NSObject
{
}

+ (id)sharedConstants;	// IMP=0x00100000015b8cac
- (_Bool)shouldAnimatePropertyInContentViewWithKey:(id)arg1;	// IMP=0x00000000015bd721
- (id)defaultAccessoryBackgroundColorForAccessorySystemType:(long long)arg1 header:(_Bool)arg2 sidebarStyle:(long long)arg3 cellConfigurationState:(id)arg4 traitCollection:(id)arg5;	// IMP=0x00000000015bd648
- (id)defaultAccessoryTintColorForAccessorySystemType:(long long)arg1 header:(_Bool)arg2 sidebarStyle:(long long)arg3 cellConfigurationState:(id)arg4 traitCollection:(id)arg5 inheritedTintColor:(id)arg6;	// IMP=0x00000000015bd2d0
- (id)defaultImageTintColorForState:(id)arg1 traitCollection:(id)arg2;	// IMP=0x00000000015bd244
- (id)defaultListCellAccessoryImageSymbolConfigurationForTraitCollection:(id)arg1 accessoryType:(long long)arg2;	// IMP=0x00000000015bd232
- (id)defaultImageSymbolConfigurationForTraitCollection:(id)arg1;	// IMP=0x00000000015bd183
- (double)defaultMaskGradientHeightForTableView:(id)arg1;	// IMP=0x00000000015bd17a
- (double)defaultFocusedShadowRadiusForTableView:(id)arg1;	// IMP=0x00000000015bd171
- (double)defaultFocusedHorizontalOutsetForTableView:(id)arg1;	// IMP=0x00000000015bd168
- (double)defaultAlphaForDraggingCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x00000000015bd15a
- (struct UIEdgeInsets)reorderControlHoverEffectInsets;	// IMP=0x00000000015bd147
- (double)reorderControlHoverEffectCornerRadius;	// IMP=0x00000000015bd13e
- (double)defaultVerticalAccessorySeparatorReplacementPaddingWidth;	// IMP=0x00000000015bd130
- (_Bool)reorderingCellWantsShadows;	// IMP=0x00000000015bd128
- (double)defaultAlphaForReorderingCell;	// IMP=0x00000000015bd11a
- (id)defaultReorderControlImageForTraitCollection:(id)arg1 withAccessoryBaseColor:(id)arg2 isTracking:(_Bool)arg3;	// IMP=0x00000000015bcf52
- (struct CGSize)defaultReorderControlSizeForCell:(id)arg1 withAccessoryBaseColor:(id)arg2;	// IMP=0x00000000015bce80
- (double)defaultEditAndUpdateAnimationDuration;	// IMP=0x00000000015bce72
- (id)defaultDetailAccessoryImage;	// IMP=0x00000000015bce52
- (id)defaultMultiSelectSelectedImageForCellStyle:(long long)arg1 traitCollection:(id)arg2 checkmarkColor:(id)arg3 backgroundColor:(id)arg4;	// IMP=0x00000000015bcce5
- (id)defaultMultiSelectNotSelectedImageForCellStyle:(long long)arg1 traitCollection:(id)arg2 accessoryBaseColor:(id)arg3;	// IMP=0x00000000015bcc2e
- (id)defaultInsertImageWithTintColor:(id)arg1 backgroundColor:(id)arg2;	// IMP=0x00000000015bca9a
- (id)defaultInsertImageForCell:(id)arg1;	// IMP=0x00000000015bca2e
- (id)defaultDeleteImageWithTintColor:(id)arg1 backgroundColor:(id)arg2;	// IMP=0x00000000015bc89a
- (id)defaultDeleteImageForCell:(id)arg1;	// IMP=0x00000000015bc82e
- (struct CGRect)defaultDeleteMinusRectForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x00000000015bc810
- (double)defaultSpaceBetweenEditAndReorderControlsForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x00000000015bc807
- (double)defaultEditControlPaddingForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x00000000015bc7f9
- (struct CGSize)defaultEditControlSizeForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x00000000015bc79f
- (id)defaultCheckmarkImageForCell:(id)arg1;	// IMP=0x00000000015bc6a1
- (id)defaultOutlineDisclosureImageForView:(id)arg1;	// IMP=0x00000000015bc5f9
- (id)defaultPopUpMenuIndicatorImageForTraitCollection:(id)arg1;	// IMP=0x00000000015bc534
- (id)defaultDisclosureImageForCell:(id)arg1 withAccessoryBaseColor:(id)arg2;	// IMP=0x00000000015bc460
- (id)_defaultCircleDisclosureImageForTraitCollection:(id)arg1;	// IMP=0x00000000015bc30e
- (id)_defaultDisclosureImageForTraitCollection:(id)arg1;	// IMP=0x00000000015bc249
- (id)_symbolImageNamed:(id)arg1 withTextStyle:(id)arg2 scale:(long long)arg3;	// IMP=0x00000000015bc1b2
- (id)_accessoryTintColorForAccessoryBaseColor:(id)arg1;	// IMP=0x00000000015bc180
- (id)_defaultAccessoryTintColor;	// IMP=0x00000000015bc112
- (struct _UITableConstantsBackgroundProperties)defaultHeaderFooterBackgroundPropertiesForTableViewStyle:(long long)arg1 cellConfigurationState:(id)arg2 traitCollection:(id)arg3 floating:(_Bool)arg4;	// IMP=0x00000000015bbf0d
- (long long)defaultHeaderFooterPinningBehaviorForTableStyle:(long long)arg1;	// IMP=0x00000000015bbef7
- (_Bool)useChromelessSectionHeadersAndFootersForTableStyle:(long long)arg1;	// IMP=0x00000000015bbeda
- (id)defaultFooterTextColorForTableViewStyle:(long long)arg1 focused:(_Bool)arg2;	// IMP=0x00000000015bbe7a
- (id)defaultHeaderTextColorForTableViewStyle:(long long)arg1 focused:(_Bool)arg2;	// IMP=0x00000000015bbe1a
- (id)defaultFooterFontForTableViewStyle:(long long)arg1;	// IMP=0x00000000015bbd99
- (id)defaultHeaderFontForTableViewStyle:(long long)arg1;	// IMP=0x00000000015bbd18
- (id)defaultPlainHeaderFooterFont;	// IMP=0x00000000015bbc90
- (double)defaultDetailTextLabelFontSizeForCellStyle:(long long)arg1;	// IMP=0x00000000015bbc5e
- (id)defaultDetailTextFontForCellStyle:(long long)arg1;	// IMP=0x00000000015bbb8f
- (id)defaultDetailTextColorForCellStyle:(long long)arg1 traitCollection:(id)arg2 state:(id)arg3;	// IMP=0x00000000015bbae8
- (double)defaultTextLabelFontSizeForCellStyle:(long long)arg1;	// IMP=0x00000000015bbabb
- (id)defaultTextLabelFontForCellStyle:(long long)arg1;	// IMP=0x00000000015bba21
- (struct NSDirectionalEdgeInsets)defaultInsetGroupedHeaderLayoutMarginsForExtraProminentStyle:(_Bool)arg1;	// IMP=0x00000000015bb9d3
- (id)defaultInsetGroupedHeaderFontForExtraProminentStyle:(_Bool)arg1 secondaryText:(_Bool)arg2;	// IMP=0x00000000015bb988
- (id)defaultSidebarDetailTextLabelFontForCellStyle:(long long)arg1;	// IMP=0x00000000015bb941
- (id)defaultSidebarHeaderFont;	// IMP=0x00000000015bb8fc
- (struct UIEdgeInsets)defaultSidebarLayoutMarginsForElementsInsideSection;	// IMP=0x00000000015bb8e2
- (id)defaultSidebarImageTintColorForTraitCollection:(id)arg1 state:(id)arg2 isHeader:(_Bool)arg3 style:(long long)arg4;	// IMP=0x00000000015bb72a
- (id)defaultSidebarTextColorForTraitCollection:(id)arg1 state:(id)arg2 isHeader:(_Bool)arg3 isSecondaryText:(_Bool)arg4 style:(long long)arg5;	// IMP=0x00000000015bb4fd
- (CDStruct_59d1dad4)contentPropertiesForSidebarElementWithTraitCollection:(id)arg1 state:(id)arg2 isHeader:(_Bool)arg3 cellStyle:(long long)arg4 sidebarStyle:(long long)arg5;	// IMP=0x00000000015bab53
- (id)defaultTextColorForCellStyle:(long long)arg1 traitCollection:(id)arg2 tintColor:(id)arg3 state:(id)arg4;	// IMP=0x00000000015baa77
- (double)defaultLabelMinimumScaleFactorForSidebar:(_Bool)arg1 traitCollection:(id)arg2;	// IMP=0x00000000015baa25
- (_Bool)defaultLabelAllowsTighteningForTruncationForSidebar:(_Bool)arg1 traitCollection:(id)arg2;	// IMP=0x00000000015ba9de
- (long long)defaultLabelNumberOfLinesForSidebar:(_Bool)arg1 traitCollection:(id)arg2;	// IMP=0x00000000015ba994
- (double)defaultPlainHeaderLabelYPositionForTableView:(id)arg1 headerBounds:(struct CGRect)arg2 textRect:(struct CGRect)arg3 isHeader:(_Bool)arg4;	// IMP=0x00000000015ba978
- (double)defaultPlainFirstSectionHeaderHeightForTableView:(id)arg1;	// IMP=0x00000000015ba966
- (_Bool)shouldUppercaseHeaderFooterTextForTableStyle:(long long)arg1 isHeader:(_Bool)arg2;	// IMP=0x00000000015ba944
- (double)defaultTrailingCellMarginWidthForTableView:(id)arg1;	// IMP=0x00000000015ba930
- (double)defaultLeadingCellMarginWidthForTableView:(id)arg1;	// IMP=0x00000000015ba8eb
- (double)defaultMarginWidthForTableView:(id)arg1;	// IMP=0x00000000015ba8d4
- (_Bool)shouldUseDefaultTableLayoutMarginsAsContentInsets;	// IMP=0x00000000015ba8cc
- (struct UIEdgeInsets)defaultSectionContentInsetsForTableStyle:(long long)arg1;	// IMP=0x00000000015ba8b9
- (struct UIEdgeInsets)defaultLayoutMarginsInsideSectionForSize:(struct CGSize)arg1 tableStyle:(long long)arg2;	// IMP=0x00000000015ba895
- (struct UIEdgeInsets)defaultTableLayoutMarginsForScreen:(id)arg1 size:(struct CGSize)arg2 tableStyle:(long long)arg3;	// IMP=0x00000000015ba798
- (struct UIEdgeInsets)defaultLayoutMarginsForTableView:(id)arg1;	// IMP=0x00000000015ba759
- (double)_defaultMarginWidthForTableView:(id)arg1 canUseLayoutMargins:(_Bool)arg2;	// IMP=0x00000000015ba53a
- (double)defaultPaddingBetweenHeaderAndRows;	// IMP=0x00000000015ba531
- (double)defaultPaddingBetweenRows;	// IMP=0x00000000015ba528
- (double)defaultPaddingBetweenRowsForTableStyle:(long long)arg1;	// IMP=0x00000000015ba516
- (double)defaultPaddingAboveFirstSectionWithoutHeaderTableStyle:(long long)arg1;	// IMP=0x00000000015ba508
- (double)defaultSidebarPaddingAboveSectionHeadersWithFallbackTableStyle:(long long)arg1;	// IMP=0x00000000015ba4f6
- (double)defaultPaddingAboveSectionHeadersForTableStyle:(long long)arg1;	// IMP=0x00000000015ba4d2
- (double)defaultPaddingAboveFirstSectionHeaderForTableStyle:(long long)arg1;	// IMP=0x00000000015ba4c0
- (double)defaultIndentationWidthForSidebarStyle:(_Bool)arg1;	// IMP=0x00000000015ba4a4
- (double)interspaceBetweenInnerAccessoryIdentifier:(id)arg1 outerAccessoryIdentifier:(id)arg2 forCell:(id)arg3 trailingAccessoryGroup:(_Bool)arg4;	// IMP=0x00000000015ba1c4
- (double)defaultCellCornerRadiusForTableViewStyle:(long long)arg1 isSidebarStyle:(_Bool)arg2 isHeaderFooter:(_Bool)arg3 traitCollection:(id)arg4;	// IMP=0x00000000015ba165
- (double)defaultDisclosureLayoutWidthForView:(id)arg1;	// IMP=0x00000000015ba0fe
- (double)defaultImageViewSymbolImageLayoutHeightForTraitCollection:(id)arg1;	// IMP=0x00000000015ba09a
- (double)defaultImageViewSymbolImageAndAccessoryLayoutWidthForSidebar:(_Bool)arg1 traitCollection:(id)arg2;	// IMP=0x00000000015b9ffc
- (double)defaultInterAccessoryPaddingForCell:(id)arg1 trailingAccessoryGroup:(_Bool)arg2;	// IMP=0x00000000015b9fd6
- (double)defaultCellContentTrailingPadding;	// IMP=0x00000000015b9fc8
- (double)defaultCellContentLeadingPaddingForSidebar:(_Bool)arg1;	// IMP=0x00000000015b9fac
- (double)defaultContentAccessoryPadding;	// IMP=0x00000000015b9f81
- (double)defaultContentReorderPaddingForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x00000000015b9f56
- (double)defaultContentEditPaddingForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x00000000015b9f2b
- (_Bool)imageViewOffsetByLayoutMarginsForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x00000000015b9f23
- (struct UIEdgeInsets)defaultHeaderFooterLayoutMarginsForTableViewStyle:(long long)arg1 isHeader:(_Bool)arg2 isFirstSection:(_Bool)arg3;	// IMP=0x00000000015b9e90
- (struct UIEdgeInsets)defaultCellLayoutMarginsForTableStyle:(long long)arg1 cellStyle:(long long)arg2 textLabelFont:(id)arg3 rawLayoutMargins:(struct UIEdgeInsets)arg4;	// IMP=0x00000000015b9e03
- (struct UIEdgeInsets)defaultLayoutMarginsForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x00000000015b9c8b
- (double)minimumContentViewHeightForFont:(id)arg1 traitCollection:(id)arg2;	// IMP=0x00000000015b9ba3
- (double)defaultTextToSubtitlePaddingForCellStyle:(long long)arg1;	// IMP=0x00000000015b9b8c
- (double)defaultImageToTextPaddingForSidebar:(_Bool)arg1;	// IMP=0x00000000015b9b6a
- (double)defaultSectionFooterHeightForTableView:(id)arg1;	// IMP=0x00000000015b9ab0
- (double)defaultSectionFooterHeightForTableViewStyle:(long long)arg1 screen:(id)arg2;	// IMP=0x00000000015b9a8d
- (double)defaultSectionHeaderHeightForTableView:(id)arg1;	// IMP=0x00000000015b99d3
- (double)defaultSectionHeaderHeightForTableViewStyle:(long long)arg1 screen:(id)arg2;	// IMP=0x00000000015b9947
- (_Bool)defaultRowHeightDependsOnCellStyle;	// IMP=0x00000000015b993f
- (double)defaultRowHeightForTableView:(id)arg1;	// IMP=0x00000000015b992b
- (double)defaultRowHeightForTableView:(id)arg1 cellStyle:(long long)arg2;	// IMP=0x00000000015b991d
- (double)defaultRowHeightForTableView:(id)arg1 cellStyle:(long long)arg2 hasDetailText:(_Bool)arg3;	// IMP=0x00000000015b990b
- (id)defaultSeparatorVisualEffectForTableViewStyle:(long long)arg1;	// IMP=0x00000000015b9903
- (long long)defaultSeparatorStyleForTableViewStyle:(long long)arg1;	// IMP=0x00000000015b98f8
- (id)defaultMultiSelectBackgroundColorForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x00000000015b9885
- (struct _UITableConstantsBackgroundProperties)defaultSidebarHeaderBackgroundPropertiesWithState:(id)arg1 traitCollection:(id)arg2;	// IMP=0x00000000015b9796
- (struct _UITableConstantsBackgroundProperties)defaultSidebarCellBackgroundPropertiesForStyle:(long long)arg1 state:(id)arg2 traitCollection:(id)arg3;	// IMP=0x00000000015b91d0
- (struct _UITableConstantsBackgroundProperties)defaultCellBackgroundPropertiesForTableViewStyle:(long long)arg1 state:(id)arg2 traitCollection:(id)arg3;	// IMP=0x00000000015b8e21
- (id)defaultSidebarPlainMultiSelectSeparatorColor;	// IMP=0x00000000015b8df8
- (id)defaultSeparatorColorForTableViewStyle:(long long)arg1;	// IMP=0x00000000015b8d85
- (id)defaultBackgroundEffectsForTableViewStyle:(long long)arg1;	// IMP=0x00000000015b8d7d
- (id)defaultBackgroundColorForTableViewStyle:(long long)arg1;	// IMP=0x00000000015b8d43
- (_Bool)supportsUserInterfaceStyles;	// IMP=0x00000000015b8d3b
- (id)variantForActive:(_Bool)arg1;	// IMP=0x00000000015b8d32
- (id)sidebarVariant;	// IMP=0x00000000015b8d29

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
