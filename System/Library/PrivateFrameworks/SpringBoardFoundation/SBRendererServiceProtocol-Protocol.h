//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SBFCARendererImageRepresentation, UIColor;

@protocol SBRendererServiceProtocol
- (void)service_warmup:(void (^)(_Bool))arg1;
- (void)service_applyMaterialRecipe:(SBFCARendererImageRepresentation *)arg1 recipeName:(NSString *)arg2 containingBundleIdentifier:(NSString *)arg3 weighting:(double)arg4 downsampleFactor:(double)arg5 backdropScale:(double)arg6 withReply:(void (^)(IOSurface *))arg7;
- (void)service_applyMaterialRecipe:(SBFCARendererImageRepresentation *)arg1 recipeName:(NSString *)arg2 containingBundleIdentifier:(NSString *)arg3 weighting:(double)arg4 downsampleFactor:(double)arg5 withReply:(void (^)(IOSurface *))arg6;
- (void)service_applyWallpaperTreatment:(SBFCARendererImageRepresentation *)arg1 needsLumaTreatment:(_Bool)arg2 needsDimmingTreatment:(_Bool)arg3 downsampleFactor:(double)arg4 averageColor:(UIColor *)arg5 withReply:(void (^)(IOSurface *))arg6;
@end

