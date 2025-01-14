//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXSettings.h>

__attribute__((visibility("hidden")))
@interface PUSceneSettings : PXSettings
{
    _Bool _showConfidenceOverlay;	// 8 = 0x8
    unsigned long long _inspectorSortOrder;	// 16 = 0x10
}

+ (id)settingsControllerModule;	// IMP=0x006000000057f415
+ (id)sharedInstance;	// IMP=0x006000000057f3e5
@property(nonatomic) unsigned long long inspectorSortOrder; // @synthesize inspectorSortOrder=_inspectorSortOrder;
@property(nonatomic) _Bool showConfidenceOverlay; // @synthesize showConfidenceOverlay=_showConfidenceOverlay;
- (void)setDefaultValues;	// IMP=0x000000000057f346
- (id)parentSettings;	// IMP=0x000000000057f32d

@end

