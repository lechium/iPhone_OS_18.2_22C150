//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLGyroCalibrationDatabaseLocationdAdapter
{
}

+ (_Bool)isSupported;	// IMP=0x002000000035fd6d
+ (id)getSilo;	// IMP=0x001000000035fbb8
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000035fb9f
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x001000000035fb42
- (int)syncgetNumTemperatures;	// IMP=0x002000000036007e
- (_Bool)syncgetWipeDatabase;	// IMP=0x0010000000360060
- (void)dumpDatabase:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000360027
- (_Bool)syncgetInsertWithBias:(const CDStruct_869f9c67 *)arg1 variance:(const CDStruct_869f9c67 *)arg2 temperature:(float)arg3 timestamp:(double)arg4;	// IMP=0x001000000035ffd8
- (double)syncgetLastMiniCalibration;	// IMP=0x001000000035ffa0
- (_Bool)syncgetSupportsMiniCalibration;	// IMP=0x001000000035ff82
- (int)syncgetNonFactoryRoundCount;	// IMP=0x001000000035ff64
- (void)getBiasFitWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000035fed1
- (_Bool)syncgetBiasFit:(CDStruct_6fc73bc8 *)arg1;	// IMP=0x001000000035fea3
- (void)startFactoryGYTT;	// IMP=0x001000000035fe85
- (int)syncgetMaxDynamicTemperature;	// IMP=0x001000000035fe67
- (_Bool)syncgetGyroStatsWithBias:(CDStruct_869f9c67 *)arg1 slope:(CDStruct_869f9c67 *)arg2 l2Error:(CDStruct_869f9c67 *)arg3 isDynamic:(_Bool)arg4 deltaBias:(CDStruct_869f9c67 *)arg5 deltaSlope:(CDStruct_869f9c67 *)arg6 deltaError:(CDStruct_869f9c67 *)arg7 isDeltaDynamic:(_Bool)arg8;	// IMP=0x001000000035fdaf
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x001000000035fd45
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000035fd18
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x001000000035fcf0
- (void *)adaptee;	// IMP=0x001000000035fcbd
- (void)endService;	// IMP=0x001000000035fca2
- (void)beginService;	// IMP=0x001000000035fc51
- (id)init;	// IMP=0x001000000035fc14

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
