//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIColor.h>

@class PUIColorHSBValues, PUIColorHSLValues;

@interface UIColor (PosterUIFoundation)
+ (double)pui_determineVarianceForHue:(double)arg1 forColors:(id)arg2;	// IMP=0x002000000003ee2d
+ (void)pui_determineVarianceAndLuminanceForColor:(id)arg1 amongstColors:(id)arg2 minLuminance:(id)arg3 maxLuminance:(id)arg4 outHue:(out double *)arg5 outSaturation:(out double *)arg6 outLuminance:(out double *)arg7;	// IMP=0x002000000003eca1
+ (void)pui_determineVarianceAndLuminanceForColor:(id)arg1 amongstColors:(id)arg2 minLuminance:(id)arg3 maxLuminance:(id)arg4 outVariance:(out double *)arg5 outLuminance:(out double *)arg6 outSaturation:(out double *)arg7;	// IMP=0x002000000003ec3d
+ (void)pui_determineVarianceAndLuminanceForColor:(id)arg1 amongstColors:(id)arg2 outVariance:(out double *)arg3 outLuminance:(out double *)arg4 outSaturation:(out double *)arg5;	// IMP=0x002000000003ec10
+ (id)pui_wallpaperColorForName:(id)arg1;	// IMP=0x002000000003eb8d
- (id)pui_invertColor;	// IMP=0x001000000003f2b1
@property(readonly, nonatomic) double pui_maxLuminance;
@property(readonly, nonatomic) double pui_minLuminance;
@property(readonly, nonatomic) PUIColorHSBValues *pui_hsbValues;
@property(readonly, nonatomic) PUIColorHSLValues *pui_hslValues;
@end
