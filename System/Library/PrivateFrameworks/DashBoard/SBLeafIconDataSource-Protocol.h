//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DashBoard/NSObject-Protocol.h>

@class CALayer, NSArray, NSString, SBHIconGridSizeClassSet, SBIcon, SBLeafIcon, UIImage, UITraitCollection;

@protocol SBLeafIconDataSource <NSObject>
- (NSString *)icon:(SBLeafIcon *)arg1 displayNameForLocation:(NSString *)arg2;
- (unsigned long long)priorityForIcon:(SBLeafIcon *)arg1;

@optional
@property(readonly, copy, nonatomic) NSString *configurationStorageIdentifier;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N

@property(readonly, copy, nonatomic) NSString *uniqueIdentifier;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N

- (long long)dataOwnershipRoleAsDragDropTargetForIcon:(SBLeafIcon *)arg1;
- (NSArray *)iTunesCategoriesOrderedByRelevancyForIcon:(SBLeafIcon *)arg1;
- (NSArray *)tagsForIcon:(SBLeafIcon *)arg1;
- (NSString *)folderFallbackTitleForIcon:(SBLeafIcon *)arg1;
- (NSArray *)folderTitleOptionsForIcon:(SBLeafIcon *)arg1;
- (SBHIconGridSizeClassSet *)supportedGridSizeClassesForIcon:(SBLeafIcon *)arg1;
- (_Bool)iconShouldIgnoreOtherDataSources:(SBLeafIcon *)arg1;
- (_Bool)iconSupportsRasterization:(SBLeafIcon *)arg1;
- (_Bool)iconSupportsConfiguration:(SBLeafIcon *)arg1;
- (_Bool)icon:(SBLeafIcon *)arg1 launchFromLocation:(NSString *)arg2 context:(id)arg3;
- (NSString *)icon:(SBLeafIcon *)arg1 displayNameForObscuredDisabledLaunchForLocation:(NSString *)arg2;
- (_Bool)iconDisallowsLaunchForObscuredReason:(SBLeafIcon *)arg1;
- (_Bool)iconAllowsLaunch:(SBLeafIcon *)arg1;
- (_Bool)iconCompleteUninstall:(SBLeafIcon *)arg1;
- (_Bool)iconSupportsUninstall:(SBLeafIcon *)arg1;
- (_Bool)isTimedOutForIcon:(SBIcon *)arg1;
- (long long)labelAccessoryTypeForIcon:(SBLeafIcon *)arg1;
- (long long)accessoryTypeForIcon:(SBLeafIcon *)arg1;
- (NSString *)formattedAccessoryStringForIcon:(SBLeafIcon *)arg1;
- (id)badgeNumberOrStringForIcon:(SBLeafIcon *)arg1;
- (_Bool)isProgressPausedForIcon:(SBLeafIcon *)arg1;
- (double)progressPercentForIcon:(SBLeafIcon *)arg1;
- (long long)progressStateForIcon:(SBLeafIcon *)arg1;
- (NSString *)icon:(SBLeafIcon *)arg1 statusDescriptionForLocation:(NSString *)arg2;
- (_Bool)iconCanTightenLabel:(SBLeafIcon *)arg1;
- (_Bool)iconCanTruncateLabel:(SBLeafIcon *)arg1;
- (_Bool)canGenerateIconsInBackgroundForIcon:(SBLeafIcon *)arg1;
- (UIImage *)icon:(SBLeafIcon *)arg1 unmaskedImageWithInfo:(struct SBIconImageInfo)arg2;
- (UIImage *)icon:(SBLeafIcon *)arg1 defaultImageWithInfo:(struct SBIconImageInfo)arg2;
- (void)icon:(SBLeafIcon *)arg1 prepareToMakeLayerWithInfo:(struct SBIconImageInfo)arg2 traitCollection:(UITraitCollection *)arg3 options:(unsigned long long)arg4;
- (_Bool)icon:(SBLeafIcon *)arg1 canMakeIconLayerQuicklyWithInfo:(struct SBIconImageInfo)arg2 traitCollection:(UITraitCollection *)arg3 options:(unsigned long long)arg4;
- (CALayer *)icon:(SBLeafIcon *)arg1 layerWithInfo:(struct SBIconImageInfo)arg2 traitCollection:(UITraitCollection *)arg3 options:(unsigned long long)arg4;
- (UIImage *)icon:(SBLeafIcon *)arg1 imageWithInfo:(struct SBIconImageInfo)arg2 traitCollection:(UITraitCollection *)arg3 options:(unsigned long long)arg4;
- (UIImage *)icon:(SBLeafIcon *)arg1 imageWithInfo:(struct SBIconImageInfo)arg2;
@end

