//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLTelephonyServiceAdapter
{
}

+ (id)getSilo;	// IMP=0x002000000030a5d6
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000030a5bd
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x001000000030a560
+ (_Bool)isSupported;	// IMP=0x001000000030bbc7
- (void)sendNotificationToClients:(id)arg1 notificationData:(id)arg2;	// IMP=0x002000000030bbc1
- (_Bool)syncgetServingGsmCell:(struct Cell *)arg1;	// IMP=0x001000000030bb46
- (_Bool)syncgetServingCells:(void *)arg1 addNeighborCells:(_Bool)arg2;	// IMP=0x001000000030bb31
- (void)dumpLogWithReason:(id)arg1;	// IMP=0x001000000030b893
- (void)resetModemWithReason:(id)arg1;	// IMP=0x001000000030b478
- (int)syncgetSignalStrengthForSim:(int)arg1;	// IMP=0x001000000030b462
- (_Bool)syncgetSignalStrength:(int *)arg1;	// IMP=0x001000000030b208
- (id)syncgetCopyServingProviderFromCarrierBundleForSim:(int)arg1;	// IMP=0x001000000030b1f2
- (_Bool)syncgetCopyServingProviderFromCarrierBundle:(id *)arg1;	// IMP=0x001000000030af37
- (_Bool)syncgetCopyServingProvider:(id *)arg1;	// IMP=0x001000000030aeb2
- (id)syncgetCopyServingOperatorForSim:(int)arg1;	// IMP=0x001000000030ae9c
- (_Bool)syncgetCopyServingOperator:(id *)arg1;	// IMP=0x001000000030abe0
- (_Bool)syncgetRefreshCellMonitorForSim:(int)arg1;	// IMP=0x001000000030abca
- (_Bool)syncgetRefreshCellMonitor;	// IMP=0x001000000030abb4
- (_Bool)syncgetActiveCall:(_Bool *)arg1;	// IMP=0x001000000030ab78
- (int)syncgetCellTransmitStatus;	// IMP=0x001000000030ab5e
- (int)syncgetRegistrationStatusForSim:(int)arg1;	// IMP=0x001000000030ab48
- (int)syncgetRegistrationStatus;	// IMP=0x001000000030ab32
- (void)fetchSignalStrengthMeasurementForSim:(int)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000030ab1f
- (int)syncgetRadioAccessTechnologyForSim:(int)arg1;	// IMP=0x001000000030ab06
- (int)syncgetRadioAccessTechnology;	// IMP=0x001000000030aae6
- (_Bool)syncgetIsRegisteredOnCell;	// IMP=0x001000000030aac8
- (_Bool)syncgetDetectedCells:(void *)arg1;	// IMP=0x001000000030aab3
- (void)fetchActiveOrHeldWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000030a81e
- (void)fetchIsCellAvailableWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000030a7ea
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x001000000030a7c2
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000030a795
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x001000000030a76d
- (void *)adaptee;	// IMP=0x001000000030a73a
- (void)endService;	// IMP=0x001000000030a71f
- (void)beginService;	// IMP=0x001000000030a66f
- (id)init;	// IMP=0x001000000030a632

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
