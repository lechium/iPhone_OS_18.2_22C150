//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTSettings.h>

@class MISSING_TYPE, NSArray, NSString, PTSizeSettings;

@interface SUIAShockwaveRadialMaskSettings : PTSettings
{
    MISSING_TYPE *name;	// 8 = 0x8
    MISSING_TYPE *locations;	// 24 = 0x18
    MISSING_TYPE *colors;	// 32 = 0x20
    MISSING_TYPE *gradientLayerSize;	// 40 = 0x28
    MISSING_TYPE *majorDiameter;	// 48 = 0x30
    MISSING_TYPE *ringWidth;	// 56 = 0x38
    MISSING_TYPE *blurRadius;	// 64 = 0x40
    MISSING_TYPE *sampleCount;	// 72 = 0x48
}

+ (id)settingsControllerModule;	// IMP=0x0060000000033c80
+ (_Bool)ignoresKey:(id)arg1;	// IMP=0x0060000000031460
- (void).cxx_destruct;	// IMP=0x0000000000033ca0
- (void)setDefaultValuesWithName:(id)arg1 majorDiameter:(double)arg2 ringWidth:(double)arg3 blurRadius:(double)arg4 sampleCount:(unsigned long long)arg5 locations:(id)arg6 colors:(id)arg7 gradientLayerSize:(struct CGSize)arg8;	// IMP=0x0000000000033960
- (void)setDefaultValues;	// IMP=0x0000000000033780
- (id)computeDerivativeValuesAndGenerateSource;	// IMP=0x0000000000033700
- (_Bool)validateComputedValuesCorrespondToSourceValues;	// IMP=0x0000000000032bf0
@property(nonatomic, readonly) double radiusOfMaximumOpacity;
@property(nonatomic, readonly) double maximumExtentOfZeroOpacity;
@property(nonatomic, readonly) double outerRadius;
@property(nonatomic, readonly) double innerRadius;
@property(nonatomic, readonly) _Bool donut;
@property(nonatomic) unsigned long long sampleCount; // @synthesize sampleCount;
@property(nonatomic) double blurRadius; // @synthesize blurRadius;
@property(nonatomic) double ringWidth; // @synthesize ringWidth;
@property(nonatomic) double majorDiameter; // @synthesize majorDiameter;
@property(nonatomic, retain) PTSizeSettings *gradientLayerSize; // @synthesize gradientLayerSize;
@property(nonatomic, copy) NSArray *colors;
@property(nonatomic, copy) NSArray *locations;
@property(nonatomic, copy) NSString *name;

@end

