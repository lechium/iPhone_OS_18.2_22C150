//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLDaemonStatusAdapter
{
}

+ (id)getSilo;	// IMP=0x002000000038eebd
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000038eea4
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x001000000038ee47
- (_Bool)syncgetBatterySaverMode;	// IMP=0x002000000038f6d0
- (int)syncgetThermalLevel;	// IMP=0x001000000038f6a2
- (void)triggerMetricHeartbeatNotification;	// IMP=0x001000000038f4d4
- (_Bool)syncgetRegisterPowerKeepAlive:(_Bool)arg1 client:(unsigned long long)arg2 dbgMessage:(id)arg3;	// IMP=0x001000000038f4a4
- (void)notifyMigrationPerformed;	// IMP=0x001000000038f2e2
- (_Bool)syncgetIsSleeping;	// IMP=0x001000000038f2c9
- (_Bool)syncgetHasLingerClients;	// IMP=0x001000000038f292
- (int)syncgetReachability;	// IMP=0x001000000038f266
- (_Bool)syncgetAirplaneMode:(_Bool *)arg1;	// IMP=0x001000000038f234
- (void)fetchWirelessModemClientCountWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000038f1d6
- (void)fetchIsBatteryConnectedWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000038f148
- (void)fetchReachabilityWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000038f10d
- (void)fetchIsAirplaneModeEnabledWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000038f0d2
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x001000000038f0aa
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000038f07d
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x001000000038f055
- (void *)adaptee;	// IMP=0x001000000038f022
- (void)endService;	// IMP=0x001000000038f007
- (void)beginService;	// IMP=0x001000000038ef56
- (id)init;	// IMP=0x001000000038ef19

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
