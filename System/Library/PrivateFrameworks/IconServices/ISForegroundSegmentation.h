//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface ISForegroundSegmentation : NSObject
{
    _Bool _strict;	// 8 = 0x8
    int _numberOfClusters;	// 12 = 0xc
    int _borderSamplingWidth;	// 16 = 0x10
    int _maxNumberOfClusteringSamples;	// 20 = 0x14
    int _numberOfClusteringSteps;	// 24 = 0x18
    float _clusterGroupingDistanceThreshold;	// 28 = 0x1c
    float _borderNoiseScale;	// 32 = 0x20
    int _booleanThreshold;	// 36 = 0x24
}

- (_Bool)computeMaskWithWidth:(int)arg1 height:(int)arg2 ucharSamplesAndMask:(MISSING_TYPE **)arg3;	// IMP=0x000000000002bbe9
- (id)initWithStrict:(_Bool)arg1;	// IMP=0x000000000002bb71

@end
