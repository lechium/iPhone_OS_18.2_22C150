//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDSiriCommandEvent : HMMLogEvent
{
    long long _durationMilliseconds;	// 8 = 0x8
    NSString *_actionType;	// 16 = 0x10
    NSString *_outcome;	// 24 = 0x18
    unsigned long long _numberOfEntities;	// 32 = 0x20
    unsigned long long _numberOfFailures;	// 40 = 0x28
    unsigned long long _numberOfIncompletions;	// 48 = 0x30
    unsigned long long _configurationVersion;	// 56 = 0x38
    unsigned long long _lastSyncedConfigurationVersion;	// 64 = 0x40
    unsigned long long _serverConfigurationVersion;	// 72 = 0x48
    NSString *_clientMetricIdentifier;	// 80 = 0x50
}

+ (id)commandEventWithDuration:(unsigned long long)arg1 actionType:(id)arg2 outcome:(id)arg3 numberOfEntities:(unsigned long long)arg4 numberOfFailures:(unsigned long long)arg5 numberOfIncompletions:(unsigned long long)arg6 serverConfigurationVersion:(unsigned long long)arg7 configurationVersion:(unsigned long long)arg8 lastSyncedConfigurationVersion:(unsigned long long)arg9;	// IMP=0x00100000008ab612
+ (unsigned long long)generateErrorCodeWithNumberOfFailures:(unsigned long long)arg1 numberOfIncompletions:(unsigned long long)arg2 commandOutcome:(id)arg3;	// IMP=0x00100000008ab58d
- (void).cxx_destruct;	// IMP=0x00000000008ab54b
@property(readonly, nonatomic) NSString *clientMetricIdentifier; // @synthesize clientMetricIdentifier=_clientMetricIdentifier;
@property(readonly, nonatomic) unsigned long long serverConfigurationVersion; // @synthesize serverConfigurationVersion=_serverConfigurationVersion;
@property(readonly, nonatomic) unsigned long long lastSyncedConfigurationVersion; // @synthesize lastSyncedConfigurationVersion=_lastSyncedConfigurationVersion;
@property(readonly, nonatomic) unsigned long long configurationVersion; // @synthesize configurationVersion=_configurationVersion;
@property(readonly, nonatomic) unsigned long long numberOfIncompletions; // @synthesize numberOfIncompletions=_numberOfIncompletions;
@property(readonly, nonatomic) unsigned long long numberOfFailures; // @synthesize numberOfFailures=_numberOfFailures;
@property(readonly, nonatomic) unsigned long long numberOfEntities; // @synthesize numberOfEntities=_numberOfEntities;
@property(readonly, nonatomic) NSString *outcome; // @synthesize outcome=_outcome;
@property(readonly, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
- (long long)durationMilliseconds;	// IMP=0x00000000008aafa7
- (double)duration;	// IMP=0x00000000008aaf8c
- (id)initWithDuration:(unsigned long long)arg1 actionType:(id)arg2 outcome:(id)arg3 numberOfEntities:(unsigned long long)arg4 numberOfFailures:(unsigned long long)arg5 numberOfIncompletions:(unsigned long long)arg6 serverConfigurationVersion:(unsigned long long)arg7 configurationVersion:(unsigned long long)arg8 lastSyncedConfigurationVersion:(unsigned long long)arg9;	// IMP=0x00000000008aac52

// Remaining properties
@property(readonly, copy, nonatomic) NSString *accessoryIdentifier;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *homeUUID;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSUUID",?,R,N

@property(readonly) Class superclass;

@end
