//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLAvengerScannerClient;
@protocol OS_dispatch_queue;

@interface CLTrackingAvoidanceBOMScanManager : NSObject
{
    unsigned int _dailyStartingValue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    CLAvengerScannerClient *_controller;	// 24 = 0x18
    double _coolDownScan;	// 32 = 0x20
}

@property(readonly, nonatomic) unsigned int dailyStartingValue; // @synthesize dailyStartingValue=_dailyStartingValue;
@property(readonly, nonatomic) double coolDownScan; // @synthesize coolDownScan=_coolDownScan;
@property(nonatomic) CLAvengerScannerClient *controller; // @synthesize controller=_controller;
@property(readonly, retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)scheduleDailyResetBOMScan;	// IMP=0x00100000001efa2d
- (_Bool)checkDailyResetEligible:(id)arg1;	// IMP=0x00100000001ef8f9
- (void)resetBOMScanIfNeeded;	// IMP=0x00100000001ef7c4
- (void)submitBOMMetricsScansCompleted:(unsigned long long)arg1 andTimeSinceLastDisable:(double)arg2;	// IMP=0x00100000001ef595
- (void)submitBOMMetricsBoot;	// IMP=0x00100000001ef570
- (void)scanCompleted;	// IMP=0x00100000001ef414
- (void)dispatchEnableBomScanAfterBackoff;	// IMP=0x00100000001ef2f9
- (double)computeBOMScanBackoffOfDate:(id)arg1;	// IMP=0x00100000001ef295
- (void)enableBOMScan;	// IMP=0x00100000001ef0cc
- (void)handleUnRegisterController;	// IMP=0x00100000001ef004
- (void)handleRegisterWithController:(id)arg1;	// IMP=0x00100000001eef23
- (unsigned int)remainingBOMScans;	// IMP=0x00100000001eee11
- (void)setRemainingBOMScansTo:(unsigned int)arg1;	// IMP=0x00100000001eed2a
- (id)timestampOfLastBOMDailyLimitResetDate;	// IMP=0x00100000001eebe1
- (void)setTimestampLastBOMDailyLimitResetDate:(double)arg1;	// IMP=0x00100000001eead3
- (id)timestampOfLastBeepOnMoveScanDate;	// IMP=0x00100000001ee98a
- (void)setTimeStampLastBeepOnMoveScan:(double)arg1;	// IMP=0x00100000001ee87c
- (id)initAndStartWithQueue:(id)arg1 andController:(id)arg2;	// IMP=0x00100000001ee82a
- (id)initWithQueue:(id)arg1 andController:(id)arg2;	// IMP=0x00100000001ee5d0

@end
