//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface APECMetricSampler : NSObject
{
    NSDictionary *_samplingSettings;	// 8 = 0x8
}

+ (_Bool)_shouldSample:(id)arg1;	// IMP=0x00400000000f6be8
- (void).cxx_destruct;	// IMP=0x00200000000f6cdd
@property(retain, nonatomic) NSDictionary *samplingSettings; // @synthesize samplingSettings=_samplingSettings;
- (_Bool)sampleEvent:(long long)arg1;	// IMP=0x00100000000f6b21
- (_Bool)isSampleRateExpired:(id)arg1 purpose:(long long)arg2;	// IMP=0x00100000000f6a26
- (double)sampleSessionStartTimeFromPurpose:(id)arg1 purpose:(long long)arg2;	// IMP=0x00100000000f6958
- (void)_updateRateAndTime:(id)arg1 rate:(id)arg2 purpose:(long long)arg3;	// IMP=0x00100000000f664f
- (_Bool)_hasSession:(id)arg1 purpose:(long long)arg2;	// IMP=0x00100000000f65b9
- (id)_loadAllSampleRates;	// IMP=0x00100000000f6423
- (id)_samplePeriodFromConfig:(long long)arg1;	// IMP=0x00100000000f638b
- (id)_sampleRateFromConfig:(long long)arg1;	// IMP=0x00100000000f62f3
- (void)_updateSampleSessionStorage:(id)arg1;	// IMP=0x00100000000f627f
- (id)_loadSampleSessionsfromStorage;	// IMP=0x00100000000f621f
- (id)init;	// IMP=0x00100000000f61bd

@end

