//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ATXHomeScreenEvent, ATXHomeScreenWidgetIdentifiable, NSArray;

@protocol ATXHomeScreenEventLoggerDelegate
- (_Bool)hasWidgetBeenTapped:(ATXHomeScreenWidgetIdentifiable *)arg1;
- (_Bool)hasWidgetBeenSeen:(ATXHomeScreenWidgetIdentifiable *)arg1;
- (void)logWidgetAddedFeaturesInCoreAnalytics:(ATXHomeScreenEvent *)arg1 rankOfWidgetInGallery:(unsigned long long)arg2 galleryItems:(NSArray *)arg3;
@end

