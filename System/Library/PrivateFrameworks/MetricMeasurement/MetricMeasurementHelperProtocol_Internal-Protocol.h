//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MetricMeasurement/MXMSMachUtilitiesProtocol_Internal-Protocol.h>
#import <MetricMeasurement/MXMSProxyPerformanceTrace_Internal-Protocol.h>
#import <MetricMeasurement/MXMSProxyProbeProtocol_Internal-Protocol.h>
#import <MetricMeasurement/MXMSProxyQuiesceBeforeIteration_Internal-Protocol.h>
#import <MetricMeasurement/MXMSProxyTerminateProcessesBeforeIteration_Internal-Protocol.h>
#import <MetricMeasurement/MXMSProxyUncacheBeforeIteration_Internal-Protocol.h>

@class NSString;

@protocol MetricMeasurementHelperProtocol_Internal <MXMSProxyProbeProtocol_Internal, MXMSMachUtilitiesProtocol_Internal, MXMSProxyPerformanceTrace_Internal, MXMSProxyQuiesceBeforeIteration_Internal, MXMSProxyUncacheBeforeIteration_Internal, MXMSProxyTerminateProcessesBeforeIteration_Internal>
- (void)_wakeWithPhrase:(NSString *)arg1 response:(void (^)(NSString *))arg2;
@end
