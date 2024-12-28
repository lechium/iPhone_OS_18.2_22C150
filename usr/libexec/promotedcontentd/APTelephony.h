//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APReachability, APUnfairLock, CTXPCServiceSubscriptionContext, CoreTelephonyClient, MISSING_TYPE, NSError, NSNumber, NSString;
@protocol OS_dispatch_queue;

@interface APTelephony : NSObject
{
    _Bool _networkInfoUpdatingInProgress;	// 8 = 0x8
    _Bool _deviceIsLocked;	// 9 = 0x9
    long long _networkType;	// 16 = 0x10
    NSNumber *_latestCellularSignalStrength;	// 24 = 0x18
    CoreTelephonyClient *_ctClient;	// 32 = 0x20
    CTXPCServiceSubscriptionContext *_ctSubscriptionContext;	// 40 = 0x28
    NSError *_networkError;	// 48 = 0x30
    NSError *_telephonyError;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_queue;	// 64 = 0x40
    APUnfairLock *_lock;	// 72 = 0x48
    CDUnknownBlockType _disableTelephonyMethod;	// 80 = 0x50
    APReachability *_reachability;	// 88 = 0x58
}

+ (id)connectionTypeToString:(long long)arg1;	// IMP=0x0020000000042504
+ (id)telephony;	// IMP=0x0010000000040f83
- (void).cxx_destruct;	// IMP=0x0020000000042b3d
@property(retain, nonatomic) APReachability *reachability; // @synthesize reachability=_reachability;
@property(copy, nonatomic) CDUnknownBlockType disableTelephonyMethod; // @synthesize disableTelephonyMethod=_disableTelephonyMethod;
@property(nonatomic) _Bool deviceIsLocked; // @synthesize deviceIsLocked=_deviceIsLocked;
@property(retain, nonatomic) APUnfairLock *lock; // @synthesize lock=_lock;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property _Bool networkInfoUpdatingInProgress; // @synthesize networkInfoUpdatingInProgress=_networkInfoUpdatingInProgress;
@property(retain) NSError *telephonyError; // @synthesize telephonyError=_telephonyError;
@property(retain) NSError *networkError; // @synthesize networkError=_networkError;
@property(retain) CTXPCServiceSubscriptionContext *ctSubscriptionContext; // @synthesize ctSubscriptionContext=_ctSubscriptionContext;
@property(retain) CoreTelephonyClient *ctClient; // @synthesize ctClient=_ctClient;
@property(retain) NSNumber *latestCellularSignalStrength; // @synthesize latestCellularSignalStrength=_latestCellularSignalStrength;
@property long long networkType; // @synthesize networkType=_networkType;
- (void)_resumeTelephonyAndReachability;	// IMP=0x001000000004293c
- (MISSING_TYPE *)_suspendTelephonyAndReachability;	// IMP=0x0010000000042851
- (void)_deviceLockStateChanged;	// IMP=0x0010000000042523
- (long long)dataIndicatorToConnectionType:(int)arg1;	// IMP=0x00100000000424e4
- (void)updateTelephonyProperties;	// IMP=0x0010000000041f10
- (void)updateCellularSignalStrength;	// IMP=0x0010000000041adf
- (void)preferredDataSimChanged:(id)arg1;	// IMP=0x0010000000041a58
- (void)signalStrengthChanged:(id)arg1 info:(id)arg2;	// IMP=0x00100000000416f5
- (void)reachabilityChanged:(long long)arg1;	// IMP=0x00100000000414c9
- (void)_startMonitoringTelephony;	// IMP=0x0010000000041311
@property(readonly) _Bool telephonyDataValid;
@property(readonly) NSNumber *signalStrength;
@property(readonly) _Bool networkDataValid;
- (id)init;	// IMP=0x0010000000040fd8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
