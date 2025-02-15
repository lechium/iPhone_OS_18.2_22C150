//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterKit/NSObject-Protocol.h>

@class NSString, SBHAppLibraryVisualConfiguration, SBHFloatingDockVisualConfiguration, SBHFloatyFolderVisualConfiguration, SBHFolderIconVisualConfiguration, SBHIconAccessoryVisualConfiguration, SBHIconGridSizeClassSet, SBHIconGridSizeClassSizeMap, SBHIconLabelVisualConfiguration, SBHRootFolderVisualConfiguration, SBHSidebarVisualConfiguration, UIFont;

@protocol SBIconListLayout <NSObject>
@property(readonly, nonatomic) struct SBIconImageInfo iconImageInfo;
- (struct UIEdgeInsets)layoutInsetsForOrientation:(long long)arg1;
- (unsigned long long)numberOfRowsForOrientation:(long long)arg1;
- (unsigned long long)numberOfColumnsForOrientation:(long long)arg1;

@optional
@property(readonly, nonatomic) _Bool widgetsSupportDynamicText;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) struct UIEdgeInsets widgetContentMarginsWithBackgroundRemoved;
// Preceding property had unknown attributes: ?
// Original attribute string: T{UIEdgeInsets=dddd},?,R,N

@property(readonly, nonatomic) struct UIEdgeInsets widgetContentMargins;
// Preceding property had unknown attributes: ?
// Original attribute string: T{UIEdgeInsets=dddd},?,R,N

@property(readonly, nonatomic) double widgetScaleFactor;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,R,N

@property(readonly, copy, nonatomic) SBHIconGridSizeClassSet *supportedIconGridSizeClasses;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"SBHIconGridSizeClassSet",?,R,C,N

@property(readonly, copy, nonatomic) SBHIconGridSizeClassSizeMap *iconGridSizeClassSizes;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"SBHIconGridSizeClassSizeMap",?,R,C,N

@property(readonly, copy, nonatomic) SBHFloatingDockVisualConfiguration *floatingDockVisualConfiguration;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"SBHFloatingDockVisualConfiguration",?,R,C,N

@property(readonly, copy, nonatomic) SBHRootFolderVisualConfiguration *rootFolderVisualConfiguration;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"SBHRootFolderVisualConfiguration",?,R,C,N

@property(readonly, copy, nonatomic) SBHAppLibraryVisualConfiguration *appLibraryVisualConfiguration;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"SBHAppLibraryVisualConfiguration",?,R,C,N

@property(readonly, copy, nonatomic) SBHSidebarVisualConfiguration *sidebarVisualConfiguration;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"SBHSidebarVisualConfiguration",?,R,C,N

@property(readonly, copy, nonatomic) SBHFloatyFolderVisualConfiguration *floatyFolderVisualConfiguration;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"SBHFloatyFolderVisualConfiguration",?,R,C,N

@property(readonly, copy, nonatomic) SBHFolderIconVisualConfiguration *folderIconVisualConfiguration;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"SBHFolderIconVisualConfiguration",?,R,C,N

@property(readonly, copy, nonatomic) SBHIconAccessoryVisualConfiguration *iconAccessoryVisualConfiguration;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"SBHIconAccessoryVisualConfiguration",?,R,C,N

@property(readonly, nonatomic) _Bool showsLabels;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) NSString *rotatedLayoutClusterGridSizeClass;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,N

@property(readonly, nonatomic) long long iconSpacingAxisMatchingBehavior;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,R,N

- (SBHIconGridSizeClassSizeMap *)iconGridSizeClassSizesForOrientation:(long long)arg1;
- (double)editingAnimationStrengthForGridSizeClass:(NSString *)arg1;
- (UIFont *)accessoryFontForContentSizeCategory:(NSString *)arg1 options:(unsigned long long)arg2;
- (SBHIconLabelVisualConfiguration *)labelVisualConfigurationForContentSizeCategory:(NSString *)arg1 options:(unsigned long long)arg2;
- (UIFont *)labelFontForContentSizeCategory:(NSString *)arg1 options:(unsigned long long)arg2;
- (struct CGSize)iconSpacingForOrientation:(long long)arg1;
- (struct SBIconImageInfo)iconImageInfoForGridSizeClass:(NSString *)arg1 orientation:(long long)arg2;
- (struct SBIconImageInfo)iconImageInfoForGridSizeClass:(NSString *)arg1;
- (_Bool)enforceLayoutInsetsForAxis:(unsigned long long)arg1;
- (struct UIEdgeInsets)additionalWidgetLayoutInsetsForOrientation:(long long)arg1;
@end

