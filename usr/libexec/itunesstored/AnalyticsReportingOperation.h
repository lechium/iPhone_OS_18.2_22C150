//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSNumber, NSString, SSMetricsEventController;

@interface AnalyticsReportingOperation : ISOperation
{
    SSMetricsEventController *_controller;	// 96 = 0x60
    NSString *_directory;	// 104 = 0x68
    CDUnknownBlockType _finishBlock;	// 112 = 0x70
    long long _insertTimestamp;	// 120 = 0x78
    NSString *_path;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00200000001e6c42
- (id)_signatureWithData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001e69a3
- (_Bool)_shouldClearEventsDespiteError:(id)arg1;	// IMP=0x00100000001e68cc
- (_Bool)_shouldBackoffAfterError:(id)arg1;	// IMP=0x00100000001e682e
- (_Bool)_runSSMetrics;	// IMP=0x00100000001e5e0d
- (void)_runAMSMetrics;	// IMP=0x00100000001e58f3
- (_Bool)_runForReportingURL:(id)arg1 suppressUserInfo:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00100000001e45fc
- (id)_path;	// IMP=0x00100000001e44e4
- (void)_destroyOutputFile:(id)arg1;	// IMP=0x00100000001e447b
- (id)operation:(id)arg1 needNewBodyStream:(id)arg2;	// IMP=0x00100000001e43c2
- (id)uniqueKey;	// IMP=0x00100000001e43b5
- (void)run;	// IMP=0x00100000001e3eee
@property(copy) CDUnknownBlockType finishBlock;
- (id)init;	// IMP=0x00100000001e3dfa
- (id)initWithController:(id)arg1;	// IMP=0x00100000001e3c33

// Remaining properties
// Error: Property attributes should begin with the type ('T') attribute, property name: debugDescription
// Property attributes: (null)

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSNumber",?,R,N

@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSNumber",?,R,N

@property(readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSNumber",?,R,N

@property(readonly) Class superclass;

@end

