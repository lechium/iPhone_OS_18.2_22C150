//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class NSString;

@interface CLSensorMonitor : CLIntersiloService
{
}

+ (_Bool)isSupported;	// IMP=0x00200000004e7c9e
+ (id)getSilo;	// IMP=0x00100000004e7c42
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000004e7c29
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000004e7bcc
- (void)sensorWriter:(id)arg1 didReceiveUpdateToConfigurationRequests:(id)arg2;	// IMP=0x00200000004e7d59
- (void)sensorWriterDidStopMonitoring:(id)arg1;	// IMP=0x00100000004e7d53
- (void)sensorWriterWillStartMonitoring:(id)arg1;	// IMP=0x00100000004e7d4d
- (Class)classForSensorIdentifier:(id)arg1;	// IMP=0x00100000004e7d45
- (void)simulateMotionSensorDataForType:(unsigned long long)arg1 payload:(id)arg2;	// IMP=0x00100000004e7d3f
- (void)onAppUninstallationCheckActivity:(id)arg1;	// IMP=0x00100000004e7d39
- (void)endService;	// IMP=0x00100000004e7d0e
- (void)beginService;	// IMP=0x00100000004e7ce3
- (id)init;	// IMP=0x00100000004e7ca6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

