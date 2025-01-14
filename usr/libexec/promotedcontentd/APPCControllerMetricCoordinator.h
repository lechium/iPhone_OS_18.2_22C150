//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APMetricClientConnection, APMetricsLegacyInterface, NSArray, NSString;

@interface APPCControllerMetricCoordinator : NSObject
{
    APMetricsLegacyInterface *_legacyMetrics;	// 8 = 0x8
    NSArray *_registrationTokens;	// 16 = 0x10
    APMetricClientConnection *_clientConnection;	// 24 = 0x18
    NSString *_host;	// 32 = 0x20
}

+ (void)stop;	// IMP=0x0040000000154c49
+ (void)startWithLegacyInterface:(id)arg1;	// IMP=0x0010000000154830
- (void).cxx_destruct;	// IMP=0x0020000000156aad
@property(retain) NSString *host; // @synthesize host=_host;
@property(retain) APMetricClientConnection *clientConnection; // @synthesize clientConnection=_clientConnection;
@property(retain) NSArray *registrationTokens; // @synthesize registrationTokens=_registrationTokens;
@property(retain) APMetricsLegacyInterface *legacyMetrics; // @synthesize legacyMetrics=_legacyMetrics;
- (id)_loadOverrideContextForMetric:(id)arg1;	// IMP=0x00100000001567be
- (_Bool)_processContentIdOverrideIfNecessaryForMetric:(id)arg1;	// IMP=0x00100000001563ef
- (void);	// IMP=0x00100000001562a2
- (void)processMetric:(id)arg1;	// IMP=0x0010000000156042
- (void)processSignalMetric:(id)arg1;	// IMP=0x001000000015603c
- (id)_provideEnvironmentForMetric:(id)arg1;	// IMP=0x0010000000155794
- (void)processInternalMetric:(id)arg1;	// IMP=0x0010000000155689
- (void)handleMetricForTesting:(id)arg1;	// IMP=0x001000000015517b
- (void)internalSignalReceived:(id)arg1;	// IMP=0x00100000001550a1
- (void)metricReceived:(id)arg1;	// IMP=0x0010000000154fc7
- (void)internalMetricReceived:(id)arg1;	// IMP=0x0010000000154eed
- (id)initWithTokens:(id)arg1 legacyInterface:(id)arg2;	// IMP=0x0010000000154e54

@end

