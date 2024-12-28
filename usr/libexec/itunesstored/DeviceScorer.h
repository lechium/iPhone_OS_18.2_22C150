//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DeviceScorerContext;

@interface DeviceScorer : NSObject
{
    DeviceScorerContext *_context;	// 8 = 0x8
}

+ (void)_setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x004000000003483f
+ (id)_valueForKey:(id)arg1;	// IMP=0x00100000000347f7
+ (_Bool)_shouldSampleWithPercentage:(double)arg1 sessionDuration:(double)arg2 identifier:(id)arg3;	// IMP=0x00100000000345b1
+ (_Bool)_resultForSamplingSession:(id)arg1 isActive:(_Bool *)arg2;	// IMP=0x0010000000034456
+ (double)_randomDouble;	// IMP=0x001000000003441c
+ (_Bool)_shouldEnableDeviceScoringV2;	// IMP=0x001000000003408e
+ (_Bool)_shouldEnableDeviceScoring;	// IMP=0x001000000003400c
+ (id)_loadURLBag;	// IMP=0x0010000000033aa3
+ (id)_hexEncodingForData:(id)arg1;	// IMP=0x00100000000339c4
+ (_Bool)deviceScoringSupportedV2;	// IMP=0x0010000000033660
+ (_Bool)deviceScoringSupported;	// IMP=0x0010000000033658
- (void).cxx_destruct;	// IMP=0x002000000003487f
@property(readonly) DeviceScorerContext *context; // @synthesize context=_context;
- (id)_serverEndpointIdentifierForServerEndpoint:(long long)arg1;	// IMP=0x0010000000033ff2
- (void)_initDeviceScorerWithContext:(id)arg1;	// IMP=0x0010000000033a9d
- (void)didConsumeDeviceScore:(_Bool)arg1;	// IMP=0x0010000000033816
- (void)deviceScoreWithNonce:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000033668
- (id)initWithServerEndpoint:(long long)arg1;	// IMP=0x00100000000335ac

@end
