//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SystemUIAnimationKit/NSObject-Protocol.h>

@protocol SUIAShockwaveChromaticAberrationConfiguration, SUIAShockwaveEdgeLightOverlayConfiguration, SUIAShockwaveFillLightConfiguration, SUIAShockwaveMeshConfiguration, SUIAShockwaveRootViewConfiguration;

@protocol SUIAShockwaveStyle <NSObject>
@property(nonatomic) _Bool usesIntelligentFillLight;
@property(readonly, nonatomic) _Bool usesEdgeLight;
@property(readonly, nonatomic) _Bool usesFillLight;
@property(readonly, nonatomic) _Bool usesMeshTransform;
@property(readonly, nonatomic) _Bool usesChromaticAberation;
@property(nonatomic) struct CGRect shockwaveBounds;
- (id <SUIAShockwaveEdgeLightOverlayConfiguration>)edgeLightOverlayConfigurationForState:(long long)arg1;
- (id <SUIAShockwaveFillLightConfiguration>)fillLightConfigurationForState:(long long)arg1;
- (id <SUIAShockwaveMeshConfiguration>)meshConfigurationForState:(long long)arg1;
- (id <SUIAShockwaveChromaticAberrationConfiguration>)chromaticAberrationConfigurationForState:(long long)arg1;
- (id <SUIAShockwaveRootViewConfiguration>)rootViewConfigurationForState:(long long)arg1;
- (double)recommendedPresentationDurationForState:(long long)arg1;
@end

