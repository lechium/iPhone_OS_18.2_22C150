//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

@interface SecdWatchdog : NSObject
{
    unsigned long long _rusageBaseline;	// 8 = 0x8
    double _lastCheckTime;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_timer;	// 24 = 0x18
    unsigned long long _runtimeSecondsBeforeWatchdog;	// 32 = 0x20
    long long _resetPeriod;	// 40 = 0x28
    long long _checkPeriod;	// 48 = 0x30
    long long _checkPeriodLeeway;	// 56 = 0x38
    long long _gracefulExitLeeway;	// 64 = 0x40
    unsigned long long _diskUsageBaseLine;	// 72 = 0x48
    unsigned long long _diskUsageLimit;	// 80 = 0x50
    _Bool _diskUsageHigh;	// 88 = 0x58
}

+ (_Bool)triggerOSFaults;	// IMP=0x0040000000003612
+ (_Bool)watchdogrusage:(struct rusage_info_v6 *)arg1;	// IMP=0x00100000000035e9
+ (id)watchdog;	// IMP=0x0010000000003586
- (void).cxx_destruct;	// IMP=0x0020000000003276
@property(readonly) _Bool diskUsageHigh; // @synthesize diskUsageHigh=_diskUsageHigh;
- (_Bool)setWatchdogParameters:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000002fec
- (id)watchdogParameters;	// IMP=0x0010000000002e4e
- (void)activateTimer;	// IMP=0x0010000000002c8c
- (void)runWatchdog;	// IMP=0x00100000000029b4
- (unsigned long long)secondsFromMachTime:(unsigned long long)arg1;	// IMP=0x0010000000002962
- (id)init;	// IMP=0x00100000000028e2

@end
