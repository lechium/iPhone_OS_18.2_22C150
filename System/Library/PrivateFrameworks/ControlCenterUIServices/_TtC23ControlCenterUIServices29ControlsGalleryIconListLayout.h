//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, SBHIconGridSizeClassSet, SBHIconGridSizeClassSizeMap;

__attribute__((visibility("hidden")))
@interface _TtC23ControlCenterUIServices29ControlsGalleryIconListLayout : NSObject
{
    MISSING_TYPE *realIconGridSizeClassSizes;	// 8 = 0x8
    MISSING_TYPE *$__lazy_storage_$_displayScale;	// 16 = 0x10
    MISSING_TYPE *$__lazy_storage_$_gridGeometryInfo;	// 32 = 0x20
    MISSING_TYPE *$__lazy_storage_$_defaultRootListLayout;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000000bcd0
- (id)init;	// IMP=0x000000000000bbe0
- (struct SBIconImageInfo)iconImageInfoForGridSizeClass:(id)arg1;	// IMP=0x000000000000b900
@property(nonatomic, readonly) SBHIconGridSizeClassSet *supportedIconGridSizeClasses;
@property(nonatomic, readonly) SBHIconGridSizeClassSizeMap *iconGridSizeClassSizes;
- (struct CGSize)iconSpacingForOrientation:(long long)arg1;	// IMP=0x000000000000b350
@property(nonatomic, readonly) struct SBIconImageInfo iconImageInfo;
- (struct UIEdgeInsets)layoutInsetsForOrientation:(long long)arg1;	// IMP=0x000000000000b270
- (unsigned long long)numberOfRowsForOrientation:(long long)arg1;	// IMP=0x000000000000b260
- (unsigned long long)numberOfColumnsForOrientation:(long long)arg1;	// IMP=0x000000000000b250

@end

