//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, VCRateControlBandwidthEstimator, VCRateControlServerBag;

__attribute__((visibility("hidden")))
@interface VCRateControlBandwidthEstimatorMap : NSObject
{
    int _state;	// 8 = 0x8
    unsigned int _maxBitrate;	// 12 = 0xc
    unsigned int _mode;	// 16 = 0x10
    unsigned int _radioAccessTechnology;	// 20 = 0x14
    double _estimatedBandwidth;	// 24 = 0x18
    double _estimatedBandwidthUncapped;	// 32 = 0x20
    NSMutableDictionary *_estimatorMap;	// 40 = 0x28
    unsigned int _currentActiveEstimatorID;	// 48 = 0x30
    VCRateControlBandwidthEstimator *_defaultEstimator;	// 56 = 0x38
    int _bandwidthEstimationState;	// 64 = 0x40
    _Bool _fastSuddenBandwidthDetectionEnabled;	// 68 = 0x44
    VCRateControlServerBag *_serverBag;	// 72 = 0x48
    void *_logBWEDump;	// 80 = 0x50
}

@property(retain, nonatomic) VCRateControlServerBag *serverBag; // @synthesize serverBag=_serverBag;
@property(nonatomic) unsigned int mode; // @synthesize mode=_mode;
@property(nonatomic) unsigned int radioAccessTechnology; // @synthesize radioAccessTechnology=_radioAccessTechnology;
@property(readonly, nonatomic) int bandwidthEstimationState;
- (void)setMaxBitrateForBandwidthEstimatorMap:(unsigned int)arg1;	// IMP=0x00000000003e61df
@property(nonatomic) double estimatedBandwidth;
@property(nonatomic) double estimatedBandwidthUncapped;
- (void)dealloc;	// IMP=0x00000000003e57fc
- (id)init;	// IMP=0x00000000003e5786

@end
