//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, NSString, UICellConfigurationState, UIColor, UIFont, UIImage, UIImageSymbolConfiguration, UIScreen, UITraitCollection, UIView, UIVisualEffect;
@protocol UITableConstants, UITableConstantsCellProviding, UITableConstantsTableProviding, _UICellConfigurationStateReadonly;

@protocol UITableConstants <NSObject>
+ (id)sharedConstants;
- (UIColor *)defaultAccessoryBackgroundColorForAccessorySystemType:(long long)arg1 header:(_Bool)arg2 sidebarStyle:(long long)arg3 cellConfigurationState:(UICellConfigurationState *)arg4 traitCollection:(UITraitCollection *)arg5;
- (UIColor *)defaultAccessoryTintColorForAccessorySystemType:(long long)arg1 header:(_Bool)arg2 sidebarStyle:(long long)arg3 cellConfigurationState:(UICellConfigurationState *)arg4 traitCollection:(UITraitCollection *)arg5 inheritedTintColor:(UIColor *)arg6;
- (UIColor *)defaultImageTintColorForState:(id <_UICellConfigurationStateReadonly>)arg1 traitCollection:(UITraitCollection *)arg2;
- (UIImageSymbolConfiguration *)defaultListCellAccessoryImageSymbolConfigurationForTraitCollection:(UITraitCollection *)arg1 accessoryType:(long long)arg2;
- (UIImageSymbolConfiguration *)defaultImageSymbolConfigurationForTraitCollection:(UITraitCollection *)arg1;
- (double)defaultMaskGradientHeightForTableView:(id <UITableConstantsTableProviding>)arg1;
- (double)defaultFocusedShadowRadiusForTableView:(id <UITableConstantsTableProviding>)arg1;
- (double)defaultFocusedHorizontalOutsetForTableView:(id <UITableConstantsTableProviding>)arg1;
- (struct UIEdgeInsets)reorderControlHoverEffectInsets;
- (double)reorderControlHoverEffectCornerRadius;
- (double)defaultAlphaForDraggingCell:(UIView<UITableConstantsCellProviding> *)arg1 inTableView:(id <UITableConstantsTableProviding>)arg2;
- (double)defaultVerticalAccessorySeparatorReplacementPaddingWidth;
- (_Bool)reorderingCellWantsShadows;
- (double)defaultAlphaForReorderingCell;
- (UIImage *)defaultReorderControlImageForTraitCollection:(UITraitCollection *)arg1 withAccessoryBaseColor:(UIColor *)arg2 isTracking:(_Bool)arg3;
- (struct CGSize)defaultReorderControlSizeForCell:(UIView<UITableConstantsCellProviding> *)arg1 withAccessoryBaseColor:(UIColor *)arg2;
- (_Bool)shouldAnimatePropertyInContentViewWithKey:(NSString *)arg1;
- (double)defaultEditAndUpdateAnimationDuration;
- (UIImage *)defaultDetailAccessoryImage;
- (UIImage *)defaultMultiSelectSelectedImageForCellStyle:(long long)arg1 traitCollection:(UITraitCollection *)arg2 checkmarkColor:(UIColor *)arg3 backgroundColor:(UIColor *)arg4;
- (UIImage *)defaultMultiSelectNotSelectedImageForCellStyle:(long long)arg1 traitCollection:(UITraitCollection *)arg2 accessoryBaseColor:(UIColor *)arg3;
- (UIImage *)defaultInsertImageWithTintColor:(UIColor *)arg1 backgroundColor:(UIColor *)arg2;
- (UIImage *)defaultInsertImageForCell:(UIView<UITableConstantsCellProviding> *)arg1;
- (UIImage *)defaultDeleteImageWithTintColor:(UIColor *)arg1 backgroundColor:(UIColor *)arg2;
- (UIImage *)defaultDeleteImageForCell:(UIView<UITableConstantsCellProviding> *)arg1;
- (struct CGRect)defaultDeleteMinusRectForCell:(UIView<UITableConstantsCellProviding> *)arg1 inTableView:(id <UITableConstantsTableProviding>)arg2;
- (double)defaultSpaceBetweenEditAndReorderControlsForCell:(UIView<UITableConstantsCellProviding> *)arg1 inTableView:(id <UITableConstantsTableProviding>)arg2;
- (double)defaultEditControlPaddingForCell:(UIView<UITableConstantsCellProviding> *)arg1 inTableView:(id <UITableConstantsTableProviding>)arg2;
- (struct CGSize)defaultEditControlSizeForCell:(UIView<UITableConstantsCellProviding> *)arg1 inTableView:(id <UITableConstantsTableProviding>)arg2;
- (UIImage *)defaultCheckmarkImageForCell:(UIView<UITableConstantsCellProviding> *)arg1;
- (UIImage *)defaultDisclosureImageForCell:(UIView<UITableConstantsCellProviding> *)arg1 withAccessoryBaseColor:(UIColor *)arg2;
- (long long)defaultHeaderFooterPinningBehaviorForTableStyle:(long long)arg1;
- (struct _UITableConstantsBackgroundProperties)defaultHeaderFooterBackgroundPropertiesForTableViewStyle:(long long)arg1 cellConfigurationState:(id <_UICellConfigurationStateReadonly>)arg2 traitCollection:(UITraitCollection *)arg3 floating:(_Bool)arg4;
- (_Bool)useChromelessSectionHeadersAndFootersForTableStyle:(long long)arg1;
- (UIColor *)defaultFooterTextColorForTableViewStyle:(long long)arg1 focused:(_Bool)arg2;
- (UIColor *)defaultHeaderTextColorForTableViewStyle:(long long)arg1 focused:(_Bool)arg2;
- (UIFont *)defaultFooterFontForTableViewStyle:(long long)arg1;
- (UIFont *)defaultHeaderFontForTableViewStyle:(long long)arg1;
- (double)defaultPlainHeaderLabelYPositionForTableView:(id <UITableConstantsTableProviding>)arg1 headerBounds:(struct CGRect)arg2 textRect:(struct CGRect)arg3 isHeader:(_Bool)arg4;
- (double)defaultPlainFirstSectionHeaderHeightForTableView:(id <UITableConstantsTableProviding>)arg1;
- (_Bool)shouldUppercaseHeaderFooterTextForTableStyle:(long long)arg1 isHeader:(_Bool)arg2;
- (double)defaultDetailTextLabelFontSizeForCellStyle:(long long)arg1;
- (UIFont *)defaultDetailTextFontForCellStyle:(long long)arg1;
- (UIColor *)defaultDetailTextColorForCellStyle:(long long)arg1 traitCollection:(UITraitCollection *)arg2 state:(id <_UICellConfigurationStateReadonly>)arg3;
- (double)defaultTextLabelFontSizeForCellStyle:(long long)arg1;
- (UIFont *)defaultTextLabelFontForCellStyle:(long long)arg1;
- (UIColor *)defaultTextColorForCellStyle:(long long)arg1 traitCollection:(UITraitCollection *)arg2 tintColor:(UIColor *)arg3 state:(id <_UICellConfigurationStateReadonly>)arg4;
- (double)defaultLabelMinimumScaleFactorForSidebar:(_Bool)arg1 traitCollection:(UITraitCollection *)arg2;
- (_Bool)defaultLabelAllowsTighteningForTruncationForSidebar:(_Bool)arg1 traitCollection:(UITraitCollection *)arg2;
- (long long)defaultLabelNumberOfLinesForSidebar:(_Bool)arg1 traitCollection:(UITraitCollection *)arg2;
- (UIColor *)defaultMultiSelectBackgroundColorForCell:(UIView<UITableConstantsCellProviding> *)arg1 inTableView:(id <UITableConstantsTableProviding>)arg2;
- (struct _UITableConstantsBackgroundProperties)defaultSidebarHeaderBackgroundPropertiesWithState:(id <_UICellConfigurationStateReadonly>)arg1 traitCollection:(UITraitCollection *)arg2;
- (struct _UITableConstantsBackgroundProperties)defaultSidebarCellBackgroundPropertiesForStyle:(long long)arg1 state:(id <_UICellConfigurationStateReadonly>)arg2 traitCollection:(UITraitCollection *)arg3;
- (struct _UITableConstantsBackgroundProperties)defaultCellBackgroundPropertiesForTableViewStyle:(long long)arg1 state:(id <_UICellConfigurationStateReadonly>)arg2 traitCollection:(UITraitCollection *)arg3;
- (double)defaultPaddingBetweenHeaderAndRows;
- (double)defaultPaddingBetweenRowsForTableStyle:(long long)arg1;
- (double)defaultPaddingBetweenRows;
- (double)defaultPaddingAboveFirstSectionWithoutHeaderTableStyle:(long long)arg1;
- (double)defaultSidebarPaddingAboveSectionHeadersWithFallbackTableStyle:(long long)arg1;
- (double)defaultPaddingAboveSectionHeadersForTableStyle:(long long)arg1;
- (double)defaultPaddingAboveFirstSectionHeaderForTableStyle:(long long)arg1;
- (double)interspaceBetweenInnerAccessoryIdentifier:(NSString *)arg1 outerAccessoryIdentifier:(NSString *)arg2 forCell:(UIView<UITableConstantsCellProviding> *)arg3 trailingAccessoryGroup:(_Bool)arg4;
- (double)defaultIndentationWidthForSidebarStyle:(_Bool)arg1;
- (double)defaultCellCornerRadiusForTableViewStyle:(long long)arg1 isSidebarStyle:(_Bool)arg2 isHeaderFooter:(_Bool)arg3 traitCollection:(UITraitCollection *)arg4;
- (double)defaultDisclosureLayoutWidthForView:(UIView *)arg1;
- (double)defaultImageViewSymbolImageLayoutHeightForTraitCollection:(UITraitCollection *)arg1;
- (double)defaultImageViewSymbolImageAndAccessoryLayoutWidthForSidebar:(_Bool)arg1 traitCollection:(UITraitCollection *)arg2;
- (double)defaultInterAccessoryPaddingForCell:(UIView<UITableConstantsCellProviding> *)arg1 trailingAccessoryGroup:(_Bool)arg2;
- (double)defaultCellContentTrailingPadding;
- (double)defaultCellContentLeadingPaddingForSidebar:(_Bool)arg1;
- (double)defaultContentAccessoryPadding;
- (double)defaultContentReorderPaddingForCell:(UIView<UITableConstantsCellProviding> *)arg1 inTableView:(id <UITableConstantsTableProviding>)arg2;
- (double)defaultContentEditPaddingForCell:(UIView<UITableConstantsCellProviding> *)arg1 inTableView:(id <UITableConstantsTableProviding>)arg2;
- (_Bool)imageViewOffsetByLayoutMarginsForCell:(UIView<UITableConstantsCellProviding> *)arg1 inTableView:(id <UITableConstantsTableProviding>)arg2;
- (struct UIEdgeInsets)defaultHeaderFooterLayoutMarginsForTableViewStyle:(long long)arg1 isHeader:(_Bool)arg2 isFirstSection:(_Bool)arg3;
- (struct UIEdgeInsets)defaultCellLayoutMarginsForTableStyle:(long long)arg1 cellStyle:(long long)arg2 textLabelFont:(UIFont *)arg3 rawLayoutMargins:(struct UIEdgeInsets)arg4;
- (struct UIEdgeInsets)defaultLayoutMarginsForCell:(UIView<UITableConstantsCellProviding> *)arg1 inTableView:(id <UITableConstantsTableProviding>)arg2;
- (double)defaultTrailingCellMarginWidthForTableView:(id <UITableConstantsTableProviding>)arg1;
- (double)defaultLeadingCellMarginWidthForTableView:(id <UITableConstantsTableProviding>)arg1;
- (double)defaultMarginWidthForTableView:(id <UITableConstantsTableProviding>)arg1;
- (_Bool)shouldUseDefaultTableLayoutMarginsAsContentInsets;
- (struct UIEdgeInsets)defaultSectionContentInsetsForTableStyle:(long long)arg1;
- (struct UIEdgeInsets)defaultLayoutMarginsInsideSectionForSize:(struct CGSize)arg1 tableStyle:(long long)arg2;
- (struct UIEdgeInsets)defaultTableLayoutMarginsForScreen:(UIScreen *)arg1 size:(struct CGSize)arg2 tableStyle:(long long)arg3;
- (struct UIEdgeInsets)defaultLayoutMarginsForTableView:(id <UITableConstantsTableProviding>)arg1;
- (double)minimumContentViewHeightForFont:(UIFont *)arg1 traitCollection:(UITraitCollection *)arg2;
- (double)defaultTextToSubtitlePaddingForCellStyle:(long long)arg1;
- (double)defaultImageToTextPaddingForSidebar:(_Bool)arg1;
- (double)defaultSectionFooterHeightForTableView:(id <UITableConstantsTableProviding>)arg1;
- (double)defaultSectionHeaderHeightForTableView:(id <UITableConstantsTableProviding>)arg1;
- (double)defaultSectionFooterHeightForTableViewStyle:(long long)arg1 screen:(UIScreen *)arg2;
- (double)defaultSectionHeaderHeightForTableViewStyle:(long long)arg1 screen:(UIScreen *)arg2;
- (_Bool)defaultRowHeightDependsOnCellStyle;
- (double)defaultRowHeightForTableView:(id <UITableConstantsTableProviding>)arg1 cellStyle:(long long)arg2 hasDetailText:(_Bool)arg3;
- (double)defaultRowHeightForTableView:(id <UITableConstantsTableProviding>)arg1 cellStyle:(long long)arg2;
- (double)defaultRowHeightForTableView:(id <UITableConstantsTableProviding>)arg1;
- (UIVisualEffect *)defaultSeparatorVisualEffectForTableViewStyle:(long long)arg1;
- (long long)defaultSeparatorStyleForTableViewStyle:(long long)arg1;
- (UIColor *)defaultSeparatorColorForTableViewStyle:(long long)arg1;
- (NSArray *)defaultBackgroundEffectsForTableViewStyle:(long long)arg1;
- (UIColor *)defaultBackgroundColorForTableViewStyle:(long long)arg1;
- (_Bool)supportsUserInterfaceStyles;
- (id <UITableConstants>)variantForActive:(_Bool)arg1;
- (id <UITableConstants>)sidebarVariant;

@optional
- (Class)defaultHeaderFooterBackgroundViewClassForTableViewStyle:(long long)arg1;
- (_Bool)shouldUseRoundedGroupsForTableViewStyle:(long long)arg1 backgroundInsets:(struct UIEdgeInsets)arg2;
- (unsigned long long)contentClipCornersForCell:(UIView<UITableConstantsCellProviding> *)arg1 inTableView:(id <UITableConstantsTableProviding>)arg2;
- (UIColor *)defaultFocusedAccessoryColorForCell:(UIView<UITableConstantsCellProviding> *)arg1 inTableView:(id <UITableConstantsTableProviding>)arg2;
- (UIImage *)defaultFocusedReorderControlImageForCell:(UIView<UITableConstantsCellProviding> *)arg1 inTableView:(id <UITableConstantsTableProviding>)arg2;
- (UIImage *)defaultFocusedMultiSelectNotSelectedImageForCell:(UIView<UITableConstantsCellProviding> *)arg1 inTableView:(id <UITableConstantsTableProviding>)arg2;
- (UIImage *)defaultFocusedMultiSelectSelectedImageForCell:(UIView<UITableConstantsCellProviding> *)arg1 inTableView:(id <UITableConstantsTableProviding>)arg2;
- (UIImage *)defaultFocusedInsertImageForCell:(UIView<UITableConstantsCellProviding> *)arg1 inTableView:(id <UITableConstantsTableProviding>)arg2;
- (UIImage *)defaultFocusedDeleteImageForCell:(UIView<UITableConstantsCellProviding> *)arg1 inTableView:(id <UITableConstantsTableProviding>)arg2;
- (UIImage *)defaultFocusedCheckmarkImageForCell:(UIView<UITableConstantsCellProviding> *)arg1 inTableView:(id <UITableConstantsTableProviding>)arg2;
- (UIImage *)defaultFocusedDisclosureImageForCell:(UIView<UITableConstantsCellProviding> *)arg1 inTableView:(id <UITableConstantsTableProviding>)arg2;
- (UIColor *)defaultFocusedDetailTextColorForCell:(UIView<UITableConstantsCellProviding> *)arg1 inTableView:(id <UITableConstantsTableProviding>)arg2;
- (UIColor *)defaultFocusedTextColorForCell:(UIView<UITableConstantsCellProviding> *)arg1 inTableView:(id <UITableConstantsTableProviding>)arg2;
- (UIColor *)defaultAccessoryColorForCell:(UIView<UITableConstantsCellProviding> *)arg1 inTableView:(id <UITableConstantsTableProviding>)arg2;
- (UIColor *)fallbackHeaderTextColorForTableViewStyle:(long long)arg1 userInterfaceStyle:(long long)arg2;
- (UIColor *)defaultDetailTextColorForUserInterfaceStyle:(long long)arg1;
- (UIColor *)defaultTextColorForUserInterfaceStyle:(long long)arg1;
- (struct NSDirectionalEdgeInsets)defaultInsetGroupedHeaderLayoutMarginsForExtraProminentStyle:(_Bool)arg1;
- (UIFont *)defaultInsetGroupedHeaderFontForExtraProminentStyle:(_Bool)arg1 secondaryText:(_Bool)arg2;
- (UIImage *)defaultPopUpMenuIndicatorImageForTraitCollection:(UITraitCollection *)arg1;
- (UIColor *)defaultSidebarImageTintColorForTraitCollection:(UITraitCollection *)arg1 state:(id <_UICellConfigurationStateReadonly>)arg2 isHeader:(_Bool)arg3 style:(long long)arg4;
- (UIColor *)defaultSidebarTextColorForTraitCollection:(UITraitCollection *)arg1 state:(id <_UICellConfigurationStateReadonly>)arg2 isHeader:(_Bool)arg3 isSecondaryText:(_Bool)arg4 style:(long long)arg5;
- (UIColor *)defaultSidebarBackgroundColor;
- (UIColor *)defaultSidebarPlainMultiSelectSeparatorColor;
- (UIImage *)defaultOutlineDisclosureImageForView:(UIView *)arg1;
- (UIFont *)defaultSidebarDetailTextLabelFontForCellStyle:(long long)arg1;
- (UIFont *)defaultSidebarHeaderFont;
- (struct UIEdgeInsets)defaultSidebarLayoutMarginsForElementsInsideSection;
- (CDStruct_59d1dad4)contentPropertiesForSidebarElementWithTraitCollection:(UITraitCollection *)arg1 state:(id <_UICellConfigurationStateReadonly>)arg2 isHeader:(_Bool)arg3 cellStyle:(long long)arg4 sidebarStyle:(long long)arg5;
- (struct UIEdgeInsets)headerFooterOffsetFromContentInsetForTableView:(id <UITableConstantsTableProviding>)arg1;
@end

