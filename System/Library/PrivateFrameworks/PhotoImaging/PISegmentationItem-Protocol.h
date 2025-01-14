//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoImaging/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, NSURL, NUComposition, PFParallaxLayerStyle, PFPosterLayout, PFWallpaperCompoundDeviceConfiguration, PIParallaxColorAnalysis;
@protocol NUImageBuffer, PFParallaxAssetRegions;

@protocol PISegmentationItem <NSObject>
@property(readonly, nonatomic) _Bool supportsManualClockIntersectionTolerance;
@property(readonly, nonatomic) unsigned long long version;
@property(readonly, nonatomic) NSURL *segmentationDataURL;
@property(readonly, nonatomic) NSURL *fileURL;
@property(readonly, nonatomic) _Bool supportsBackgroundlessStyles;
@property(readonly, nonatomic) _Bool supportsSegmentedStyles;
@property(readonly, nonatomic) PFParallaxLayerStyle *originalStyle;
@property(readonly, copy, nonatomic) NSArray *defaultStyles;
@property(readonly, copy, nonatomic) NSArray *availableStyles;
@property(readonly, nonatomic) NSArray *settlingEffectGatingDiagnostics;
@property(readonly, copy, nonatomic) NSData *settlingEffectVideoData;
@property(readonly, nonatomic) _Bool settlingEffectHasInterestingMotion;
@property(readonly, nonatomic) _Bool settlingEffectFailedAnyGating;
@property(readonly, nonatomic) _Bool isSettlingEffectAvailable;
@property(readonly, nonatomic) unsigned long long settlingEffectStatus;
@property(readonly, nonatomic) struct CGRect settlingEffectNormalizedBounds;
@property(readonly, copy, nonatomic) NSDictionary *localLightData;
@property(readonly, nonatomic) PIParallaxColorAnalysis *colorAnalysis;
@property(readonly, copy, nonatomic) NSDictionary *scores;
@property(readonly, nonatomic) PFWallpaperCompoundDeviceConfiguration *layoutConfiguration;
@property(readonly, nonatomic) PFPosterLayout *headroomLayout;
@property(readonly, nonatomic) PFPosterLayout *settlingEffectLayout;
@property(readonly, nonatomic) PFPosterLayout *originalLayout;
@property(readonly, nonatomic) id <PFParallaxAssetRegions> regions;
@property(readonly, nonatomic) id <NUImageBuffer> segmentationBackground;
@property(readonly, nonatomic) id <NUImageBuffer> segmentationConfidenceMap;
@property(readonly, nonatomic) id <NUImageBuffer> segmentationMatte;
@property(readonly, nonatomic) unsigned long long classification;
@property(readonly, nonatomic) NUComposition *composition;
- (PFParallaxLayerStyle *)adjustedStyleForHeadroom:(PFParallaxLayerStyle *)arg1;
- (PFParallaxLayerStyle *)defaultStyleOfKind:(NSString *)arg1;
- (PFParallaxLayerStyle *)suggestedStyleForCategory:(NSString *)arg1;
- (PFParallaxLayerStyle *)availableStyleOfKind:(NSString *)arg1;
@end

